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

typedef struct em_buf_tx_desc em_buf_tx_desc, *Pem_buf_tx_desc;

typedef ushort uint16_t;

struct em_buf_tx_desc { // DWARF DIE: 1715
    uint16_t txptr;
    uint16_t txheader;
    uint16_t txdataptr;
    uint16_t txdle;
};

typedef struct em_desc_node em_desc_node, *Pem_desc_node;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

typedef uchar uint8_t;

struct co_list_hdr { // DWARF DIE: 1495
    struct co_list_hdr * next;
};

struct em_desc_node { // DWARF DIE: 16b9
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buffer_idx;
    uint16_t buffer_ptr;
    uint8_t llid;
    uint8_t length;
};

typedef struct em_buf_node em_buf_node, *Pem_buf_node;

struct em_buf_node { // DWARF DIE: adf
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buf_ptr;
};

typedef struct em_buf_env_tag em_buf_env_tag, *Pem_buf_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: 14b6
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct em_buf_env_tag { // DWARF DIE: 1757
    struct co_list tx_desc_free;
    struct co_list tx_buff_free;
    struct em_desc_node tx_desc_node[26];
    struct em_buf_node tx_buff_node[2];
    struct em_buf_tx_desc * tx_desc;
    uint8_t rx_current;
    undefined field_0x15d;
    undefined field_0x15e;
    undefined field_0x15f;
};

typedef int _ssize_t;

typedef union anon_union.conflictbeb anon_union.conflictbeb, *Panon_union.conflictbeb;

typedef uint wint_t;

union anon_union.conflictbeb { // DWARF DIE: beb
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictbeb_for___value anon_union.conflictbeb_for___value, *Panon_union.conflictbeb_for___value;

union anon_union.conflictbeb_for___value { // DWARF DIE: beb
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: c1d
    int __count;
    union anon_union.conflictbeb_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct evt_mask evt_mask, *Pevt_mask;

struct evt_mask { // DWARF DIE: 2d3
    uint8_t mask[8];
};

typedef struct bd_addr bd_addr, *Pbd_addr;

struct bd_addr { // DWARF DIE: 300
    uint8_t addr[6];
};

typedef ulong uint32_t;

typedef char int8_t;

typedef union anon_union.conflict13b0 anon_union.conflict13b0, *Panon_union.conflict13b0;

typedef struct anon_struct.conflict1224 anon_struct.conflict1224, *Panon_struct.conflict1224;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct __tm { // DWARF DIE: ce1
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

struct _rand48 { // DWARF DIE: 11db
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict1224 { // DWARF DIE: 1224
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

union anon_union.conflict13b0 { // DWARF DIE: 13b0
    struct anon_struct.conflict1224 _reent;
    struct anon_struct.conflict1224 _unused;
    undefined1 field2[240]; // Automatically generated padding to match DWARF declared size
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict13b0_for__new anon_union.conflict13b0_for__new, *Panon_union.conflict13b0_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

struct _on_exit_args { // DWARF DIE: d64
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: db9
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _Bigint { // DWARF DIE: c71
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 1196
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

union anon_union.conflict13b0_for__new { // DWARF DIE: 13b0
    struct anon_struct.conflict1224 _reent;
    struct anon_struct.conflict1224 _unused;
};

struct __sbuf { // DWARF DIE: e12
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: e40
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

struct _reent { // DWARF DIE: fac
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
    union anon_union.conflict13b0_for__new _new;
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

struct __locale_t { // DWARF DIE: 13e5
};

typedef uint16_t ke_task_id_t;

typedef uint16_t ke_msg_id_t;

typedef struct ke_msg ke_msg, *Pke_msg;

struct ke_msg { // DWARF DIE: 14f6
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
};

typedef enum co_error {
    CO_ERROR_ACL_CON_EXISTS=11,
    CO_ERROR_AUTH_FAILURE=5,
    CO_ERROR_CCA_REJ_USE_CLOCK_DRAG=64,
    CO_ERROR_CHANNEL_CLASS_NOT_SUP=46,
    CO_ERROR_COMMAND_DISALLOWED=12,
    CO_ERROR_CONN_ACCEPT_TIMEOUT_EXCEED=16,
    CO_ERROR_CONN_FAILED_TO_BE_EST=62,
    CO_ERROR_CONN_REJ_LIMITED_RESOURCES=13,
    CO_ERROR_CONN_REJ_SECURITY_REASONS=14,
    CO_ERROR_CONN_REJ_UNACCEPTABLE_BDADDR=15,
    CO_ERROR_CONTROLLER_BUSY=58,
    CO_ERROR_CON_LIMIT_EXCEED=9,
    CO_ERROR_CON_TERM_BY_LOCAL_HOST=22,
    CO_ERROR_CON_TIMEOUT=8,
    CO_ERROR_DIFF_TRANSACTION_COLLISION=42,
    CO_ERROR_DIRECT_ADV_TO=60,
    CO_ERROR_EIR_TOO_LARGE=54,
    CO_ERROR_ENC_MODE_NOT_ACCEPT=37,
    CO_ERROR_HARDWARE_FAILURE=3,
    CO_ERROR_HOST_BUSY_PAIRING=56,
    CO_ERROR_HW_MEM_ALLOC_FAIL=1,
    CO_ERROR_HW_UART_OUT_OF_SYNC=0,
    CO_ERROR_INSTANT_PASSED=40,
    CO_ERROR_INSUFFICIENT_SECURITY=47,
    CO_ERROR_INVALID_HCI_PARAM=18,
    CO_ERROR_INVALID_LMP_PARAM=30,
    CO_ERROR_LIMIT_REACHED=67,
    CO_ERROR_LINK_KEY_CANT_CHANGE=38,
    CO_ERROR_LMP_COLLISION=35,
    CO_ERROR_LMP_PDU_NOT_ALLOWED=36,
    CO_ERROR_LMP_RSP_TIMEOUT=34,
    CO_ERROR_MEMORY_CAPA_EXCEED=7,
    CO_ERROR_NO_ERROR=0,
    CO_ERROR_OP_CANCELL_BY_HOST=68,
    CO_ERROR_PAGE_TIMEOUT=4,
    CO_ERROR_PAIRING_NOT_ALLOWED=24,
    CO_ERROR_PAIRING_WITH_UNIT_KEY_NOT_SUP=41,
    CO_ERROR_PARAM_OUT_OF_MAND_RANGE=48,
    CO_ERROR_PIN_MISSING=6,
    CO_ERROR_QOS_NOT_SUPPORTED=39,
    CO_ERROR_QOS_REJECTED=45,
    CO_ERROR_QOS_UNACCEPTABLE_PARAM=44,
    CO_ERROR_REMOTE_DEV_POWER_OFF=21,
    CO_ERROR_REMOTE_DEV_TERM_LOW_RESOURCES=20,
    CO_ERROR_REMOTE_USER_TERM_CON=19,
    CO_ERROR_REPEATED_ATTEMPTS=23,
    CO_ERROR_RESERVED_SLOT_VIOLATION=52,
    CO_ERROR_ROLE_CHANGE_NOT_ALLOWED=33,
    CO_ERROR_ROLE_SWITCH_FAIL=53,
    CO_ERROR_ROLE_SWITCH_PEND=50,
    CO_ERROR_SCO_AIR_MODE_REJECTED=29,
    CO_ERROR_SCO_INTERVAL_REJECTED=28,
    CO_ERROR_SCO_OFFSET_REJECTED=27,
    CO_ERROR_SP_NOT_SUPPORTED_HOST=55,
    CO_ERROR_SYNC_CON_LIMIT_DEV_EXCEED=10,
    CO_ERROR_TERMINATED_MIC_FAILURE=61,
    CO_ERROR_UNACCEPTABLE_CONN_INT=59,
    CO_ERROR_UNDEFINED=-1,
    CO_ERROR_UNKNOWN_CONNECTION_ID=2,
    CO_ERROR_UNKNOWN_HCI_COMMAND=1,
    CO_ERROR_UNKNOWN_LMP_PDU=25,
    CO_ERROR_UNKNOW_ADV_ID=66,
    CO_ERROR_UNSPECIFIED_ERROR=31,
    CO_ERROR_UNSUPPORTED=17,
    CO_ERROR_UNSUPPORTED_LMP_PARAM_VALUE=32,
    CO_ERROR_UNSUPPORTED_REMOTE_FEATURE=26
} co_error;

typedef struct hci_acl_data_rx hci_acl_data_rx, *Phci_acl_data_rx;

struct hci_acl_data_rx { // DWARF DIE: a98
    uint16_t conhdl;
    uint8_t pb_bc_flag;
    undefined field_0x3;
    uint16_t length;
    uint8_t rx_hdl;
    undefined field_0x7;
};

typedef enum hci_opcode {
    HCI_ACCEPT_CON_REQ_CMD_OPCODE=1033,
    HCI_ACCEPT_SYNC_CON_REQ_CMD_OPCODE=1065,
    HCI_AUTH_REQ_CMD_OPCODE=1041,
    HCI_CHG_CON_LK_CMD_OPCODE=1045,
    HCI_CHG_CON_PKT_TYPE_CMD_OPCODE=1039,
    HCI_CREATE_CON_CANCEL_CMD_OPCODE=1032,
    HCI_CREATE_CON_CMD_OPCODE=1029,
    HCI_CREATE_NEW_UNIT_KEY_CMD_OPCODE=3083,
    HCI_DBG_BLE_TST_LLCP_PT_EN_CMD_OPCODE=-958,
    HCI_DBG_BLE_TST_SEND_LLCP_CMD_OPCODE=-957,
    HCI_DBG_BT_SEND_LMP_CMD_OPCODE=-1010,
    HCI_DBG_DEL_PAR_CMD_OPCODE=-1021,
    HCI_DBG_ER_FLASH_CMD_OPCODE=-1018,
    HCI_DBG_HW_REG_RD_CMD_OPCODE=-976,
    HCI_DBG_HW_REG_WR_CMD_OPCODE=-975,
    HCI_DBG_ID_FLASH_CMD_OPCODE=-1019,
    HCI_DBG_LLCP_DISCARD_CMD_OPCODE=-970,
    HCI_DBG_MWS_COEXTST_SCEN_CMD_OPCODE=-954,
    HCI_DBG_MWS_COEX_CMD_OPCODE=-955,
    HCI_DBG_PLF_RESET_CMD_OPCODE=-1007,
    HCI_DBG_RD_FLASH_CMD_OPCODE=-1016,
    HCI_DBG_RD_KE_STATS_CMD_OPCODE=-1008,
    HCI_DBG_RD_MEM_CMD_OPCODE=-1023,
    HCI_DBG_RD_MEM_INFO_CMD_OPCODE=-1006,
    HCI_DBG_RD_PAR_CMD_OPCODE=-1015,
    HCI_DBG_RESET_RX_CNT_CMD_OPCODE=-969,
    HCI_DBG_RESET_TX_CNT_CMD_OPCODE=-968,
    HCI_DBG_RF_CNTL_TX_CMD_OPCODE=-961,
    HCI_DBG_RF_RD_DATA_RX_CMD_OPCODE=-962,
    HCI_DBG_RF_REG_RD_CMD_OPCODE=-967,
    HCI_DBG_RF_REG_WR_CMD_OPCODE=-966,
    HCI_DBG_RF_SWITCH_CLK_CMD_OPCODE=-964,
    HCI_DBG_RF_SYNC_P_CNTL_CMD_OPCODE=-960,
    HCI_DBG_RF_WR_DATA_TX_CMD_OPCODE=-963,
    HCI_DBG_SET_BD_ADDR_CMD_OPCODE=-974,
    HCI_DBG_SET_CRC_CMD_OPCODE=-971,
    HCI_DBG_SET_LOCAL_CLOCK_CMD_OPCODE=-1009,
    HCI_DBG_SET_TX_PW_CMD_OPCODE=-965,
    HCI_DBG_SET_TYPE_PUB_CMD_OPCODE=-973,
    HCI_DBG_SET_TYPE_RAND_CMD_OPCODE=-972,
    HCI_DBG_WLAN_COEXTST_SCEN_CMD_OPCODE=-1011,
    HCI_DBG_WLAN_COEX_CMD_OPCODE=-1013,
    HCI_DBG_WR_DLE_DFT_VALUE_CMD_OPCODE=-959,
    HCI_DBG_WR_FLASH_CMD_OPCODE=-1017,
    HCI_DBG_WR_MEM_CMD_OPCODE=-1022,
    HCI_DBG_WR_PAR_CMD_OPCODE=-1014,
    HCI_DEL_RES_LT_ADDR_CMD_OPCODE=3189,
    HCI_DEL_STORED_LK_CMD_OPCODE=3090,
    HCI_DISCONNECT_CMD_OPCODE=1030,
    HCI_ENH_ACCEPT_SYNC_CON_CMD_OPCODE=1086,
    HCI_ENH_FLUSH_CMD_OPCODE=3167,
    HCI_ENH_SETUP_SYNC_CON_CMD_OPCODE=1085,
    HCI_EN_DUT_MODE_CMD_OPCODE=6147,
    HCI_EXIT_PARK_STATE_CMD_OPCODE=2054,
    HCI_EXIT_PER_INQ_MODE_CMD_OPCODE=1028,
    HCI_EXIT_SNIFF_MODE_CMD_OPCODE=2052,
    HCI_FLOW_SPEC_CMD_OPCODE=2064,
    HCI_FLUSH_CMD_OPCODE=3080,
    HCI_GET_MWS_TRANSPORT_LAYER_CONFIG_CMD_OPCODE=5132,
    HCI_HOLD_MODE_CMD_OPCODE=2049,
    HCI_HOST_BUF_SIZE_CMD_OPCODE=3123,
    HCI_HOST_NB_CMP_PKTS_CMD_OPCODE=3125,
    HCI_INQ_CANCEL_CMD_OPCODE=1026,
    HCI_INQ_CMD_OPCODE=1025,
    HCI_IO_CAP_REQ_NEG_REPLY_CMD_OPCODE=1076,
    HCI_IO_CAP_REQ_REPLY_CMD_OPCODE=1067,
    HCI_LE_ADD_DEV_TO_RSLV_LIST_CMD_OPCODE=8231,
    HCI_LE_ADD_DEV_TO_WLST_CMD_OPCODE=8209,
    HCI_LE_CLEAR_RSLV_LIST_CMD_OPCODE=8233,
    HCI_LE_CLEAR_WLST_CMD_OPCODE=8208,
    HCI_LE_CON_UPDATE_CMD_OPCODE=8211,
    HCI_LE_CREATE_CON_CANCEL_CMD_OPCODE=8206,
    HCI_LE_CREATE_CON_CMD_OPCODE=8205,
    HCI_LE_ENC_CMD_OPCODE=8215,
    HCI_LE_GEN_DHKEY_CMD_OPCODE=8230,
    HCI_LE_LTK_REQ_NEG_REPLY_CMD_OPCODE=8219,
    HCI_LE_LTK_REQ_REPLY_CMD_OPCODE=8218,
    HCI_LE_RAND_CMD_OPCODE=8216,
    HCI_LE_RD_ADV_CHNL_TX_PW_CMD_OPCODE=8199,
    HCI_LE_RD_BUFF_SIZE_CMD_OPCODE=8194,
    HCI_LE_RD_CHNL_MAP_CMD_OPCODE=8213,
    HCI_LE_RD_LOCAL_SUPP_FEATS_CMD_OPCODE=8195,
    HCI_LE_RD_LOC_P256_PUB_KEY_CMD_OPCODE=8229,
    HCI_LE_RD_LOC_RSLV_ADDR_CMD_OPCODE=8236,
    HCI_LE_RD_MAX_DATA_LEN_CMD_OPCODE=8239,
    HCI_LE_RD_PEER_RSLV_ADDR_CMD_OPCODE=8235,
    HCI_LE_RD_REM_USED_FEATS_CMD_OPCODE=8214,
    HCI_LE_RD_RFPATH_CPS_CMD_OPCODE=8268,
    HCI_LE_RD_RSLV_LIST_SIZE_CMD_OPCODE=8234,
    HCI_LE_RD_SUGGTED_DFT_DATA_LEN_CMD_OPCODE=8227,
    HCI_LE_RD_SUPP_STATES_CMD_OPCODE=8220,
    HCI_LE_RD_TRANS_PWR_CMD_OPCODE=8267,
    HCI_LE_RD_WLST_SIZE_CMD_OPCODE=8207,
    HCI_LE_REM_CON_PARAM_REQ_NEG_REPLY_CMD_OPCODE=8225,
    HCI_LE_REM_CON_PARAM_REQ_REPLY_CMD_OPCODE=8224,
    HCI_LE_RMV_DEV_FROM_RSLV_LIST_CMD_OPCODE=8232,
    HCI_LE_RMV_DEV_FROM_WLST_CMD_OPCODE=8210,
    HCI_LE_RX_TEST_CMD_OPCODE=8221,
    HCI_LE_SET_ADDR_RESOL_EN_CMD_OPCODE=8237,
    HCI_LE_SET_ADV_DATA_CMD_OPCODE=8200,
    HCI_LE_SET_ADV_EN_CMD_OPCODE=8202,
    HCI_LE_SET_ADV_PARAM_CMD_OPCODE=8198,
    HCI_LE_SET_DATA_LEN_CMD_OPCODE=8226,
    HCI_LE_SET_EVT_MASK_CMD_OPCODE=8193,
    HCI_LE_SET_HOST_CH_CLASS_CMD_OPCODE=8212,
    HCI_LE_SET_RAND_ADDR_CMD_OPCODE=8197,
    HCI_LE_SET_RSLV_PRIV_ADDR_TO_CMD_OPCODE=8238,
    HCI_LE_SET_SCAN_EN_CMD_OPCODE=8204,
    HCI_LE_SET_SCAN_PARAM_CMD_OPCODE=8203,
    HCI_LE_SET_SCAN_RSP_DATA_CMD_OPCODE=8201,
    HCI_LE_START_ENC_CMD_OPCODE=8217,
    HCI_LE_TEST_END_CMD_OPCODE=8223,
    HCI_LE_TX_TEST_CMD_OPCODE=8222,
    HCI_LE_WR_RFPATH_CPS_CMD_OPCODE=8269,
    HCI_LE_WR_SUGGTED_DFT_DATA_LEN_CMD_OPCODE=8228,
    HCI_LK_REQ_NEG_REPLY_CMD_OPCODE=1036,
    HCI_LK_REQ_REPLY_CMD_OPCODE=1035,
    HCI_MASTER_LK_CMD_OPCODE=1047,
    HCI_NO_OPERATION_CMD_OPCODE=0,
    HCI_PARK_STATE_CMD_OPCODE=2053,
    HCI_PER_INQ_MODE_CMD_OPCODE=1027,
    HCI_PIN_CODE_REQ_NEG_REPLY_CMD_OPCODE=1038,
    HCI_PIN_CODE_REQ_REPLY_CMD_OPCODE=1037,
    HCI_QOS_SETUP_CMD_OPCODE=2055,
    HCI_RD_AFH_CH_ASSESS_MODE_CMD_OPCODE=3144,
    HCI_RD_AFH_CH_MAP_CMD_OPCODE=5126,
    HCI_RD_AUTH_EN_CMD_OPCODE=3103,
    HCI_RD_AUTH_PAYL_TO_CMD_OPCODE=3195,
    HCI_RD_AUTO_FLUSH_TO_CMD_OPCODE=3111,
    HCI_RD_BD_ADDR_CMD_OPCODE=4105,
    HCI_RD_BUFF_SIZE_CMD_OPCODE=4101,
    HCI_RD_CLASS_OF_DEV_CMD_OPCODE=3107,
    HCI_RD_CLK_CMD_OPCODE=5127,
    HCI_RD_CLK_OFF_CMD_OPCODE=1055,
    HCI_RD_CON_ACCEPT_TO_CMD_OPCODE=3093,
    HCI_RD_CURR_IAC_LAP_CMD_OPCODE=3129,
    HCI_RD_DFT_ERR_DATA_REP_CMD_OPCODE=3162,
    HCI_RD_DFT_LINK_POL_STG_CMD_OPCODE=2062,
    HCI_RD_ENC_KEY_SIZE_CMD_OPCODE=5128,
    HCI_RD_ENH_TX_PWR_LVL_CMD_OPCODE=3176,
    HCI_RD_EXT_INQ_LEN_CMD_OPCODE=3200,
    HCI_RD_EXT_INQ_RSP_CMD_OPCODE=3153,
    HCI_RD_EXT_PAGE_TO_CMD_OPCODE=3198,
    HCI_RD_FAIL_CONTACT_CNT_CMD_OPCODE=5121,
    HCI_RD_FLOW_CNTL_MODE_CMD_OPCODE=3174,
    HCI_RD_HOLD_MODE_ACTIVITY_CMD_OPCODE=3115,
    HCI_RD_INQ_MODE_CMD_OPCODE=3140,
    HCI_RD_INQ_RSP_TX_PWR_LVL_CMD_OPCODE=3160,
    HCI_RD_INQ_SCAN_ACT_CMD_OPCODE=3101,
    HCI_RD_INQ_SCAN_TYPE_CMD_OPCODE=3138,
    HCI_RD_LE_HOST_SUPP_CMD_OPCODE=3180,
    HCI_RD_LINK_POL_STG_CMD_OPCODE=2060,
    HCI_RD_LINK_QUAL_CMD_OPCODE=5123,
    HCI_RD_LINK_SUPV_TO_CMD_OPCODE=3126,
    HCI_RD_LMP_HDL_CMD_OPCODE=1056,
    HCI_RD_LOCAL_EXT_FEATS_CMD_OPCODE=4100,
    HCI_RD_LOCAL_NAME_CMD_OPCODE=3092,
    HCI_RD_LOCAL_SUPP_CMDS_CMD_OPCODE=4098,
    HCI_RD_LOCAL_SUPP_CODECS_CMD_OPCODE=4107,
    HCI_RD_LOCAL_SUPP_FEATS_CMD_OPCODE=4099,
    HCI_RD_LOCAL_VER_INFO_CMD_OPCODE=4097,
    HCI_RD_LOC_OOB_DATA_CMD_OPCODE=3159,
    HCI_RD_LOC_OOB_EXT_DATA_CMD_OPCODE=3197,
    HCI_RD_LOOPBACK_MODE_CMD_OPCODE=6145,
    HCI_RD_NB_BDCST_RETX_CMD_OPCODE=3113,
    HCI_RD_NB_SUPP_IAC_CMD_OPCODE=3128,
    HCI_RD_PAGE_SCAN_ACT_CMD_OPCODE=3099,
    HCI_RD_PAGE_SCAN_TYPE_CMD_OPCODE=3142,
    HCI_RD_PAGE_TO_CMD_OPCODE=3095,
    HCI_RD_PIN_TYPE_CMD_OPCODE=3081,
    HCI_RD_REM_EXT_FEATS_CMD_OPCODE=1052,
    HCI_RD_REM_SUPP_FEATS_CMD_OPCODE=1051,
    HCI_RD_REM_VER_INFO_CMD_OPCODE=1053,
    HCI_RD_RSSI_CMD_OPCODE=5125,
    HCI_RD_SCAN_EN_CMD_OPCODE=3097,
    HCI_RD_SEC_CON_HOST_SUPP_CMD_OPCODE=3193,
    HCI_RD_SP_MODE_CMD_OPCODE=3157,
    HCI_RD_STORED_LK_CMD_OPCODE=3085,
    HCI_RD_SYNC_FLOW_CTRL_EN_CMD_OPCODE=3118,
    HCI_RD_SYNC_TRAIN_PARAM_CMD_OPCODE=3191,
    HCI_RD_TX_PWR_LVL_CMD_OPCODE=3117,
    HCI_RD_VOICE_STG_CMD_OPCODE=3109,
    HCI_REC_SYNC_TRAIN_CMD_OPCODE=1092,
    HCI_REFRESH_ENC_KEY_CMD_OPCODE=3155,
    HCI_REJECT_CON_REQ_CMD_OPCODE=1034,
    HCI_REJECT_SYNC_CON_REQ_CMD_OPCODE=1066,
    HCI_REM_NAME_REQ_CANCEL_CMD_OPCODE=1050,
    HCI_REM_NAME_REQ_CMD_OPCODE=1049,
    HCI_REM_OOB_DATA_REQ_NEG_REPLY_CMD_OPCODE=1075,
    HCI_REM_OOB_DATA_REQ_REPLY_CMD_OPCODE=1072,
    HCI_REM_OOB_EXT_DATA_REQ_REPLY_CMD_OPCODE=1093,
    HCI_RESET_CMD_OPCODE=3075,
    HCI_ROLE_DISCOVERY_CMD_OPCODE=2057,
    HCI_RST_FAIL_CONTACT_CNT_CMD_OPCODE=5122,
    HCI_SEND_KEYPRESS_NOTIF_CMD_OPCODE=3168,
    HCI_SETUP_SYNC_CON_CMD_OPCODE=1064,
    HCI_SET_AFH_HOST_CH_CLASS_CMD_OPCODE=3135,
    HCI_SET_CON_ENC_CMD_OPCODE=1043,
    HCI_SET_CON_SLV_BCST_CMD_OPCODE=1089,
    HCI_SET_CON_SLV_BCST_DATA_CMD_OPCODE=3190,
    HCI_SET_CON_SLV_BCST_REC_CMD_OPCODE=1090,
    HCI_SET_CTRL_TO_HOST_FLOW_CTRL_CMD_OPCODE=3121,
    HCI_SET_EVT_FILTER_CMD_OPCODE=3077,
    HCI_SET_EVT_MASK_CMD_OPCODE=3073,
    HCI_SET_EVT_MASK_PAGE_2_CMD_OPCODE=3171,
    HCI_SET_EXTERNAL_FRAME_CONFIG_CMD_OPCODE=3183,
    HCI_SET_MWS_CHANNEL_PARAMS_CMD_OPCODE=3182,
    HCI_SET_MWS_PATTERN_CONFIG_CMD_OPCODE=3187,
    HCI_SET_MWS_SCAN_FREQ_TABLE_CMD_OPCODE=3186,
    HCI_SET_MWS_SIGNALING_CMD_OPCODE=3184,
    HCI_SET_MWS_TRANSPORT_LAYER_CMD_OPCODE=3185,
    HCI_SET_RES_LT_ADDR_CMD_OPCODE=3188,
    HCI_SET_TX_PWR_CMD_OPCODE=-927,
    HCI_SNIFF_MODE_CMD_OPCODE=2051,
    HCI_SNIFF_SUB_CMD_OPCODE=2065,
    HCI_START_SYNC_TRAIN_CMD_OPCODE=1091,
    HCI_SWITCH_ROLE_CMD_OPCODE=2059,
    HCI_TESTER_SET_LE_PARAMS_CMD_OPCODE=-960,
    HCI_TRUNC_PAGE_CAN_CMD_OPCODE=1088,
    HCI_TRUNC_PAGE_CMD_OPCODE=1087,
    HCI_USER_CFM_REQ_NEG_REPLY_CMD_OPCODE=1069,
    HCI_USER_CFM_REQ_REPLY_CMD_OPCODE=1068,
    HCI_USER_PASSKEY_REQ_NEG_REPLY_CMD_OPCODE=1071,
    HCI_USER_PASSKEY_REQ_REPLY_CMD_OPCODE=1070,
    HCI_VS_AUDIO_ALLOCATE_CMD_OPCODE=-944,
    HCI_VS_AUDIO_CONFIGURE_CMD_OPCODE=-943,
    HCI_VS_AUDIO_GET_BUFFER_RANGE_CMD_OPCODE=-939,
    HCI_VS_AUDIO_RESET_CMD_OPCODE=-941,
    HCI_VS_AUDIO_SET_MODE_CMD_OPCODE=-942,
    HCI_VS_AUDIO_SET_POINTER_CMD_OPCODE=-940,
    HCI_WR_AFH_CH_ASSESS_MODE_CMD_OPCODE=3145,
    HCI_WR_AUTH_EN_CMD_OPCODE=3104,
    HCI_WR_AUTH_PAYL_TO_CMD_OPCODE=3196,
    HCI_WR_AUTO_FLUSH_TO_CMD_OPCODE=3112,
    HCI_WR_CLASS_OF_DEV_CMD_OPCODE=3108,
    HCI_WR_CON_ACCEPT_TO_CMD_OPCODE=3094,
    HCI_WR_CURR_IAC_LAP_CMD_OPCODE=3130,
    HCI_WR_DFT_ERR_DATA_REP_CMD_OPCODE=3163,
    HCI_WR_DFT_LINK_POL_STG_CMD_OPCODE=2063,
    HCI_WR_EXT_INQ_LEN_CMD_OPCODE=3201,
    HCI_WR_EXT_INQ_RSP_CMD_OPCODE=3154,
    HCI_WR_EXT_PAGE_TO_CMD_OPCODE=3199,
    HCI_WR_FLOW_CNTL_MODE_CMD_OPCODE=3175,
    HCI_WR_HOLD_MODE_ACTIVITY_CMD_OPCODE=3116,
    HCI_WR_INQ_MODE_CMD_OPCODE=3141,
    HCI_WR_INQ_SCAN_ACT_CMD_OPCODE=3102,
    HCI_WR_INQ_SCAN_TYPE_CMD_OPCODE=3139,
    HCI_WR_INQ_TX_PWR_LVL_CMD_OPCODE=3161,
    HCI_WR_LE_HOST_SUPP_CMD_OPCODE=3181,
    HCI_WR_LINK_POL_STG_CMD_OPCODE=2061,
    HCI_WR_LINK_SUPV_TO_CMD_OPCODE=3127,
    HCI_WR_LOCAL_NAME_CMD_OPCODE=3091,
    HCI_WR_LOOPBACK_MODE_CMD_OPCODE=6146,
    HCI_WR_NB_BDCST_RETX_CMD_OPCODE=3114,
    HCI_WR_PAGE_SCAN_ACT_CMD_OPCODE=3100,
    HCI_WR_PAGE_SCAN_TYPE_CMD_OPCODE=3143,
    HCI_WR_PAGE_TO_CMD_OPCODE=3096,
    HCI_WR_PIN_TYPE_CMD_OPCODE=3082,
    HCI_WR_SCAN_EN_CMD_OPCODE=3098,
    HCI_WR_SEC_CON_HOST_SUPP_CMD_OPCODE=3194,
    HCI_WR_SEC_CON_TEST_MODE_CMD_OPCODE=6154,
    HCI_WR_SP_DBG_MODE_CMD_OPCODE=6148,
    HCI_WR_SP_MODE_CMD_OPCODE=3158,
    HCI_WR_STORED_LK_CMD_OPCODE=3089,
    HCI_WR_SYNC_FLOW_CTRL_EN_CMD_OPCODE=3119,
    HCI_WR_SYNC_TRAIN_PARAM_CMD_OPCODE=3192,
    HCI_WR_VOICE_STG_CMD_OPCODE=3110
} hci_opcode;

typedef struct hci_evt_desc_tag hci_evt_desc_tag, *Phci_evt_desc_tag;

struct hci_evt_desc_tag { // DWARF DIE: 15e1
    uint8_t code;
    uint8_t dest_field;
    uint8_t special_pack;
    undefined field_0x3;
    void * par_fmt;
};

typedef struct hci_env_tag hci_env_tag, *Phci_env_tag;

struct hci_env_tag { // DWARF DIE: 1664
    struct evt_mask evt_msk;
    struct evt_mask evt_msk_page_2;
};

typedef struct hci_cmd_desc_tag hci_cmd_desc_tag, *Phci_cmd_desc_tag;

struct hci_cmd_desc_tag { // DWARF DIE: 1587
    uint16_t opcode;
    uint8_t dest_field;
    uint8_t par_size_max;
    void * par_fmt;
    void * ret_par_fmt;
};

typedef enum HCI_PACK_STATUS {
    HCI_PACK_ERROR=4,
    HCI_PACK_IN_BUF_OVFLW=1,
    HCI_PACK_OK=0,
    HCI_PACK_OUT_BUF_OVFLW=2,
    HCI_PACK_WRONG_FORMAT=3
} HCI_PACK_STATUS;

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




// DWARF DIE: 1f5c

uint16_t hci_util_read_array_size(char **fmt_cursor)

{
  uint16_t uVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)*fmt_cursor;
  *fmt_cursor = (char *)(pbVar2 + 1);
  uVar1 = *pbVar2 - 0x30;
  while( true ) {
    pbVar2 = (byte *)*fmt_cursor;
    if (9 < (byte)(*pbVar2 - 0x30)) break;
    *fmt_cursor = (char *)(pbVar2 + 1);
    uVar1 = uVar1 * 10 + (*pbVar2 - 0x30);
  }
  return uVar1;
}



// DWARF DIE: 1dd1

HCI_PACK_STATUS hci_util_pack(uint8_t *inout,uint16_t *inout_len,char *format)

{
  char cVar1;
  undefined2 uVar2;
  uint8_t *puVar3;
  undefined4 *puVar4;
  uint8_t *puVar5;
  undefined4 *puVar6;
  char *pcVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  HCI_PACK_STATUS HVar12;
  undefined4 *puVar13;
  char *pcStack68;
  char *cursor;
  
  puVar13 = (undefined4 *)(inout + *inout_len);
  HVar12 = HCI_PACK_OK;
  puVar5 = inout;
  puVar6 = (undefined4 *)inout;
  pcStack68 = format;
_L0:
  do {
    do {
      while( true ) {
        while( true ) {
          while( true ) {
            puVar4 = puVar6;
            puVar3 = puVar5;
            if (*pcStack68 == '\0') {
              if (HVar12 == HCI_PACK_OK) {
                *inout_len = (short)puVar3 - (short)inout;
              }
              return HVar12;
            }
            if (HVar12 != HCI_PACK_OK) {
              return HVar12;
            }
            uVar8 = 0;
            if ((byte)(*pcStack68 - 0x30U) < 10) {
              uVar8 = FUN_000100c6(&pcStack68);
            }
            pcVar7 = pcStack68 + 1;
            cVar1 = *pcStack68;
            puVar5 = puVar3;
            pcStack68 = pcVar7;
            if (cVar1 != 'H') break;
            puVar9 = (undefined2 *)((uint)((int)puVar4 + 1) & 0xfffffffe);
            puVar6 = (undefined4 *)(puVar9 + 1);
            if (inout != (uint8_t *)0x0) {
              if (puVar13 < puVar6) goto _L0;
              uVar2 = *puVar9;
              *puVar3 = (uint8_t)uVar2;
              puVar3[1] = (uint8_t)((ushort)uVar2 >> 8);
            }
            puVar5 = puVar3 + 2;
          }
          if (cVar1 != 'L') break;
          puVar10 = (undefined4 *)((uint)((int)puVar4 + 3) & 0xfffffffc);
          puVar6 = puVar10 + 1;
          if (inout != (uint8_t *)0x0) {
            if (puVar13 < puVar6) goto _L0;
            uVar11 = *puVar10;
            *puVar3 = (uint8_t)uVar11;
            puVar3[1] = (uint8_t)((uint)uVar11 >> 8);
            puVar3[2] = (uint8_t)((uint)uVar11 >> 0x10);
            puVar3[3] = (uint8_t)((uint)uVar11 >> 0x18);
          }
          puVar5 = puVar3 + 4;
        }
        if (cVar1 == 'B') break;
        HVar12 = HCI_PACK_WRONG_FORMAT;
        puVar6 = puVar4;
      }
      puVar6 = (undefined4 *)((int)puVar4 + 1);
      if (inout != (uint8_t *)0x0) {
        if (puVar13 < puVar6) goto _L0;
        *puVar3 = *(uint8_t *)puVar4;
      }
      puVar5 = puVar3 + 1;
    } while (uVar8 < 2);
    if (inout != (uint8_t *)0x0) {
      puVar4 = puVar6;
      if (puVar13 < (undefined4 *)((int)puVar4 + uVar8)) {
_L0:
        HVar12 = HCI_PACK_IN_BUF_OVFLW;
        puVar6 = puVar4;
        goto _L0;
      }
      (*pcRam00000000)(uVar8 - 1,pcRam00000000);
    }
    puVar5 = puVar3 + uVar8;
    puVar6 = (undefined4 *)((int)puVar4 + uVar8);
  } while( true );
}



int FUN_000100c6(undefined4 *param_1)

{
  undefined2 uVar1;
  undefined *unaff_s0;
  undefined *puVar2;
  undefined4 *unaff_s1;
  undefined4 *puVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  short *unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  code **unaff_s11;
  byte *in_stack_0000001c;
  
  do {
    uVar4 = FUN_000100c6(param_1);
    puVar2 = unaff_s0;
    puVar3 = unaff_s1;
    do {
      pbVar5 = in_stack_0000001c + 1;
      uVar6 = (uint)*in_stack_0000001c;
      unaff_s0 = puVar2;
      in_stack_0000001c = pbVar5;
      if (uVar6 == unaff_s7) {
        puVar7 = (undefined2 *)((uint)((int)puVar3 + 1) & 0xfffffffe);
        unaff_s1 = (undefined4 *)(puVar7 + 1);
        if (unaff_s3 != 0) {
          if (unaff_s4 < unaff_s1) {
_L0:
            unaff_s2 = 1;
            unaff_s1 = puVar3;
            goto _L0;
          }
          uVar1 = *puVar7;
          *puVar2 = (char)uVar1;
          puVar2[1] = (char)((ushort)uVar1 >> 8);
        }
        unaff_s0 = puVar2 + 2;
      }
      else {
        if (uVar6 == unaff_s9) {
          puVar8 = (undefined4 *)((uint)((int)puVar3 + 3) & 0xfffffffc);
          unaff_s1 = puVar8 + 1;
          if (unaff_s3 != 0) {
            if (unaff_s4 < unaff_s1) goto _L0;
            uVar9 = *puVar8;
            *puVar2 = (char)uVar9;
            puVar2[1] = (char)((uint)uVar9 >> 8);
            puVar2[2] = (char)((uint)uVar9 >> 0x10);
            puVar2[3] = (char)((uint)uVar9 >> 0x18);
          }
          unaff_s0 = puVar2 + 4;
        }
        else {
          if (uVar6 == unaff_s10) {
            unaff_s1 = (undefined4 *)((int)puVar3 + 1);
            if (unaff_s3 != 0) {
              if (unaff_s4 < unaff_s1) goto _L0;
              *puVar2 = *(undefined *)puVar3;
            }
            unaff_s0 = puVar2 + 1;
            if (unaff_s8 < uVar4) {
              if (unaff_s3 != 0) {
                puVar3 = unaff_s1;
                if (unaff_s4 < (undefined4 *)((int)puVar3 + uVar4)) goto _L0;
                (**unaff_s11)(uVar4 - 1,*unaff_s11);
              }
              unaff_s0 = puVar2 + uVar4;
              unaff_s1 = (undefined4 *)((int)puVar3 + uVar4);
            }
          }
          else {
            unaff_s2 = 3;
            unaff_s1 = puVar3;
          }
        }
      }
_L0:
      if (*in_stack_0000001c == 0) {
        if (unaff_s2 == 0) {
          *unaff_s5 = (short)unaff_s0 - (short)unaff_s3;
        }
        return unaff_s2;
      }
      if (unaff_s2 != 0) {
        return unaff_s2;
      }
      uVar4 = 0;
      puVar2 = unaff_s0;
      puVar3 = unaff_s1;
    } while (unaff_s6 < (byte)(*in_stack_0000001c - 0x30));
    param_1 = (undefined4 *)&stack0x0000001c;
  } while( true );
}



// DWARF DIE: 1be4

HCI_PACK_STATUS
hci_util_unpack(uint8_t *out,uint8_t *in,uint16_t *out_len,uint16_t in_len,char *format)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined2 in_register_00002036;
  char *pcVar6;
  undefined4 *puVar7;
  undefined2 *puVar8;
  HCI_PACK_STATUS HVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  char *pcStack68;
  char *cursor;
  
  puVar12 = (undefined4 *)(in + CONCAT22(in_register_00002036,in_len));
  puVar10 = (undefined4 *)(out + *out_len);
  bVar2 = in != (uint8_t *)0x0;
  bVar3 = out != (uint8_t *)0x0;
  HVar9 = HCI_PACK_OK;
  puVar5 = (undefined4 *)out;
  pcStack68 = format;
_L0:
  do {
    puVar7 = puVar5;
    puVar4 = (undefined4 *)in;
    if ((*pcStack68 == '\0') || (HVar9 != HCI_PACK_OK)) {
      if (puVar12 < puVar4) {
        HVar9 = HCI_PACK_IN_BUF_OVFLW;
      }
      *out_len = (short)puVar7 - (short)out;
      return HVar9;
    }
    uVar11 = 0;
    if ((byte)(*pcStack68 - 0x30U) < 10) {
      uVar11 = FUN_00010228(&pcStack68);
    }
    pcVar6 = pcStack68 + 1;
    cVar1 = *pcStack68;
    puVar5 = puVar7;
    pcStack68 = pcVar6;
    if (cVar1 != 'H') {
      if (cVar1 == 'L') {
        puVar7 = (undefined4 *)((uint)((int)puVar7 + 3) & 0xfffffffc);
        if (bVar3 && bVar2) {
          if (puVar12 < puVar4 + 1) {
_L0:
            HVar9 = HCI_PACK_IN_BUF_OVFLW;
            in = (uint8_t *)puVar4;
            goto _L0;
          }
          if (puVar10 < puVar7 + 1) goto _L0;
          *puVar7 = *puVar4;
        }
        in = (uint8_t *)(puVar4 + 1);
        puVar5 = puVar7 + 1;
        goto _L0;
      }
      if (cVar1 == 'B') {
        in = (uint8_t *)((int)puVar4 + 1);
        if (bVar3 && bVar2) {
          if (puVar12 < in) goto _L0;
          if (puVar10 < (undefined4 *)((int)puVar7 + 1)) goto _L0;
          *(undefined *)puVar7 = *(undefined *)puVar4;
        }
        puVar5 = (undefined4 *)((int)puVar7 + 1);
        if (1 < uVar11) {
          if (bVar3 && bVar2) {
            puVar4 = (undefined4 *)in;
            if (puVar12 < (undefined4 *)((int)puVar4 + uVar11)) goto _L0;
            if (puVar10 < (undefined4 *)((int)puVar7 + uVar11)) goto _L0;
            (*pcRam00000000)(uVar11 - 1,pcRam00000000);
          }
          in = (uint8_t *)(undefined4 *)((int)puVar4 + uVar11);
          puVar5 = (undefined4 *)((int)puVar7 + uVar11);
        }
      }
      else {
        HVar9 = HCI_PACK_WRONG_FORMAT;
        in = (uint8_t *)puVar4;
      }
      goto _L0;
    }
    puVar8 = (undefined2 *)((uint)((int)puVar7 + 1) & 0xfffffffe);
    if (bVar3 && bVar2) {
      if (puVar12 < (undefined4 *)((int)puVar4 + 2)) goto _L0;
      if (puVar10 < puVar8 + 1) {
_L0:
        HVar9 = HCI_PACK_OUT_BUF_OVFLW;
        in = (uint8_t *)puVar4;
        goto _L0;
      }
      *puVar8 = *(undefined2 *)puVar4;
    }
    in = (uint8_t *)(undefined4 *)((int)puVar4 + 2);
    puVar5 = (undefined4 *)(puVar8 + 1);
  } while( true );
}



int FUN_00010228(undefined4 *param_1)

{
  undefined4 *unaff_s0;
  undefined4 *puVar1;
  undefined4 *unaff_s1;
  uint uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  int unaff_s2;
  short *unaff_s3;
  short unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  code **unaff_s8;
  undefined4 *unaff_s9;
  undefined4 *unaff_s11;
  byte *in_stack_0000000c;
  
  do {
    uVar2 = FUN_00010228(param_1);
    puVar1 = unaff_s0;
    puVar4 = unaff_s1;
    do {
      pbVar3 = in_stack_0000000c + 1;
      uVar5 = (uint)*in_stack_0000000c;
      unaff_s1 = puVar4;
      in_stack_0000000c = pbVar3;
      if (uVar5 == 0x48) {
        puVar6 = (undefined2 *)((uint)((int)puVar4 + 1) & 0xfffffffe);
        unaff_s0 = (undefined4 *)((int)puVar1 + 2);
        if (unaff_s5 == 0) {
_L0:
          unaff_s1 = (undefined4 *)(puVar6 + 1);
        }
        else {
          if (unaff_s11 < unaff_s0) {
_L0:
            unaff_s2 = 1;
            unaff_s0 = puVar1;
          }
          else {
            if (puVar6 + 1 <= unaff_s9) {
              *puVar6 = *(undefined2 *)puVar1;
              goto _L0;
            }
_L0:
            unaff_s2 = 2;
            unaff_s0 = puVar1;
          }
        }
      }
      else {
        if (uVar5 == unaff_s7) {
          puVar4 = (undefined4 *)((uint)((int)puVar4 + 3) & 0xfffffffc);
          unaff_s0 = puVar1 + 1;
          if (unaff_s5 != 0) {
            if (unaff_s11 < unaff_s0) goto _L0;
            if (unaff_s9 < puVar4 + 1) goto _L0;
            *puVar4 = *puVar1;
          }
          unaff_s1 = puVar4 + 1;
        }
        else {
          if (uVar5 == 0x42) {
            unaff_s0 = (undefined4 *)((int)puVar1 + 1);
            if (unaff_s5 != 0) {
              if (unaff_s11 < unaff_s0) goto _L0;
              if (unaff_s9 < (undefined4 *)((int)puVar4 + 1)) goto _L0;
              *(undefined *)puVar4 = *(undefined *)puVar1;
            }
            unaff_s1 = (undefined4 *)((int)puVar4 + 1);
            if (unaff_s6 < uVar2) {
              if (unaff_s5 != 0) {
                puVar1 = unaff_s0;
                if (unaff_s11 < (undefined4 *)((int)puVar1 + uVar2)) goto _L0;
                if (unaff_s9 < (undefined4 *)((int)puVar4 + uVar2)) goto _L0;
                (**unaff_s8)(uVar2 - 1,*unaff_s8);
              }
              unaff_s0 = (undefined4 *)((int)puVar1 + uVar2);
              unaff_s1 = (undefined4 *)((int)puVar4 + uVar2);
            }
          }
          else {
            unaff_s2 = 3;
            unaff_s0 = puVar1;
          }
        }
      }
      if ((*in_stack_0000000c == 0) || (unaff_s2 != 0)) {
        if (unaff_s11 < unaff_s0) {
          unaff_s2 = 1;
        }
        *unaff_s3 = (short)unaff_s1 - unaff_s4;
        return unaff_s2;
      }
      uVar2 = 0;
      puVar1 = unaff_s0;
      puVar4 = unaff_s1;
    } while (9 < (byte)(*in_stack_0000000c - 0x30));
    param_1 = (undefined4 *)&stack0x0000000c;
  } while( true );
}



// WARNING: Variable defined which should be unmapped: ret_par_len
// DWARF DIE: 1aca

uint8_t * hci_build_cc_evt(ke_msg *msg,int8_t nb_h2c_cmd_pkts)

{
  ke_task_id_t kVar1;
  int extraout_a0;
  uint16_t auStack18 [2];
  uint16_t ret_par_len;
  
  kVar1 = msg->src_id;
  auStack18[0] = msg->param_len;
  _L0();
  if ((extraout_a0 == 0) || (auStack18[0] == 0)) {
    if (kVar1 != 0) {
      *(undefined *)msg->param = 1;
    }
  }
  else {
    if (*(code **)(extraout_a0 + 8) != (code *)0x0) {
      if (*(char *)(extraout_a0 + 2) < '\0') {
        (**(code **)(extraout_a0 + 8))(msg->param,auStack18);
      }
      else {
        FUN_00010366();
      }
    }
  }
  msg->param_len = auStack18[0];
  return (uint8_t *)((int)&msg->dest_id + 1);
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  short in_stack_0000000e;
  
  _L0();
  if ((extraout_a0 == 0) || (in_stack_0000000e == 0)) {
    if (unaff_s1 != 0) {
      *(undefined *)(unaff_s0 + 0xc) = 1;
    }
  }
  else {
    if (*(code **)(extraout_a0 + 8) != (code *)0x0) {
      if (*(char *)(extraout_a0 + 2) < '\0') {
        (**(code **)(extraout_a0 + 8))(unaff_s0 + 0xc,&stack0x0000000e);
      }
      else {
        FUN_00010366();
      }
    }
  }
  *(short *)(unaff_s0 + 10) = in_stack_0000000e;
  return;
}



void FUN_00010366(void)

{
  int unaff_s0;
  undefined2 in_stack_0000000e;
  
  FUN_00010366();
  *(undefined2 *)(unaff_s0 + 10) = in_stack_0000000e;
  return;
}



// DWARF DIE: 19d2

uint8_t * hci_build_evt(ke_msg *msg)

{
  int extraout_a0;
  uint16_t auStack18 [2];
  uint16_t par_len;
  
  auStack18[0] = msg->param_len;
  _L0();
  if (extraout_a0 != 0) {
    if (*(code **)(extraout_a0 + 4) != (code *)0x0) {
      if (*(char *)(extraout_a0 + 2) == '\0') {
        FUN_000103d2();
      }
      else {
        (**(code **)(extraout_a0 + 4))(msg->param,auStack18,auStack18[0]);
      }
    }
    msg->param_len = auStack18[0];
  }
  return (uint8_t *)&msg->param_len;
}



void _L0(void)

{
  int unaff_s0;
  int extraout_a0;
  undefined2 in_stack_0000000e;
  
  _L0();
  if (extraout_a0 != 0) {
    if (*(code **)(extraout_a0 + 4) != (code *)0x0) {
      if (*(char *)(extraout_a0 + 2) == '\0') {
        FUN_000103d2();
      }
      else {
        (**(code **)(extraout_a0 + 4))(unaff_s0 + 0xc,&stack0x0000000e,in_stack_0000000e);
      }
    }
    *(undefined2 *)(unaff_s0 + 10) = in_stack_0000000e;
  }
  return;
}



void FUN_000103d2(void)

{
  int unaff_s0;
  undefined2 in_stack_0000000e;
  
  FUN_000103d2();
  *(undefined2 *)(unaff_s0 + 10) = in_stack_0000000e;
  return;
}



// DWARF DIE: 18d4

uint8_t * hci_build_le_evt(ke_msg *msg)

{
  int extraout_a0;
  uint extraout_a0_00;
  uint uVar1;
  uint16_t auStack18 [2];
  uint16_t par_len;
  
  auStack18[0] = msg->param_len;
  _L0();
  if ((extraout_a0 != 0) && (*(code **)(extraout_a0 + 4) != (code *)0x0)) {
    if (*(char *)(extraout_a0 + 2) == '\0') {
      FUN_00010436();
      uVar1 = extraout_a0_00;
    }
    else {
      uVar1 = (**(code **)(extraout_a0 + 4))(msg->param,auStack18,auStack18[0]);
      uVar1 &= 0xff;
    }
    if (uVar1 == 0) {
      msg->param_len = auStack18[0];
    }
  }
  return (uint8_t *)&msg->param_len;
}



void _L0(void)

{
  int unaff_s0;
  int extraout_a0;
  uint extraout_a0_00;
  uint uVar1;
  undefined2 in_stack_0000000e;
  
  _L0();
  if ((extraout_a0 != 0) && (*(code **)(extraout_a0 + 4) != (code *)0x0)) {
    if (*(char *)(extraout_a0 + 2) == '\0') {
      FUN_00010436();
      uVar1 = extraout_a0_00;
    }
    else {
      uVar1 = (**(code **)(extraout_a0 + 4))(unaff_s0 + 0xc,&stack0x0000000e,in_stack_0000000e);
      uVar1 &= 0xff;
    }
    if (uVar1 == 0) {
      *(undefined2 *)(unaff_s0 + 10) = in_stack_0000000e;
    }
  }
  return;
}



void FUN_00010436(void)

{
  int unaff_s0;
  int extraout_a0;
  undefined2 in_stack_0000000e;
  
  FUN_00010436();
  if (extraout_a0 == 0) {
    *(undefined2 *)(unaff_s0 + 10) = in_stack_0000000e;
  }
  return;
}



// DWARF DIE: 17e9

uint8_t * hci_build_acl_rx_data(ke_msg *msg)

{
  byte bVar1;
  undefined2 uVar2;
  int extraout_a0;
  uint uVar3;
  
  _LVL125();
  bVar1 = *(byte *)((int)msg->param + 2);
  uVar3 = *(ushort *)msg->param & 0xfff;
  *(uint8_t *)(extraout_a0 + -4) = (uint8_t)uVar3;
  *(char *)(extraout_a0 + -3) = (char)((((uint)bVar1 << 0xc | uVar3) << 0x10) >> 0x18);
  uVar2 = *(undefined2 *)&msg[1].hdr.next;
  *(char *)(extraout_a0 + -2) = (char)uVar2;
  *(char *)(extraout_a0 + -1) = (char)((ushort)uVar2 >> 8);
  return (uint8_t *)(extraout_a0 + -4);
}



void _LVL125(void)

{
  byte bVar1;
  undefined2 uVar2;
  int unaff_s0;
  int extraout_a0;
  uint uVar3;
  
  _LVL125();
  bVar1 = *(byte *)(unaff_s0 + 0xe);
  uVar3 = *(ushort *)(unaff_s0 + 0xc) & 0xfff;
  *(char *)(extraout_a0 + -4) = (char)uVar3;
  *(char *)(extraout_a0 + -3) = (char)((((uint)bVar1 << 0xc | uVar3) << 0x10) >> 0x18);
  uVar2 = *(undefined2 *)(unaff_s0 + 0x10);
  *(char *)(extraout_a0 + -2) = (char)uVar2;
  *(char *)(extraout_a0 + -1) = (char)((ushort)uVar2 >> 8);
  return;
}


