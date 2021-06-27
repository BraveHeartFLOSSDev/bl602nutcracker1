typedef unsigned char   undefined;

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
typedef uchar __uint8_t;

typedef ulong __uint32_t;

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictb4_for___value anon_union.conflictb4_for___value, *Panon_union.conflictb4_for___value;

typedef uint wint_t;

union anon_union.conflictb4_for___value { // DWARF DIE: b4
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: e6
    int __count;
    union anon_union.conflictb4_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef union anon_union.conflictb4 anon_union.conflictb4, *Panon_union.conflictb4;

union anon_union.conflictb4 { // DWARF DIE: b4
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct at_ip_para_t at_ip_para_t, *Pat_ip_para_t;

typedef uchar at_ip_t[4];

struct at_ip_para_t { // DWARF DIE: 1258
    at_ip_t ip;
    at_ip_t getway;
    at_ip_t netmask;
    at_ip_t dns1;
    at_ip_t dns2;
};

typedef enum AT_CALLBACK_CMD {
    ACC_ACT=0,
    ACC_APCFG=39,
    ACC_AP_STA_GET=40,
    ACC_BLESYNC=65,
    ACC_CIPCLOSE=45,
    ACC_CIPDNS_CUR=54,
    ACC_CIPDOMAIN=42,
    ACC_CIPMODE=52,
    ACC_CIPMUX=51,
    ACC_CIPRECVDATA=55,
    ACC_CIPRECVMODE=56,
    ACC_CIPSEND=57,
    ACC_CIPSENDBUF=44,
    ACC_CIPSSLCALPN=48,
    ACC_CIPSSLCCONF_P=46,
    ACC_CIPSSLCSNI=47,
    ACC_CIPSTAMAC_CUR=36,
    ACC_CIPSTART=43,
    ACC_CIPSTATUS=41,
    ACC_CIPSTA_CUR=37,
    ACC_CIPSTA_IP=66,
    ACC_CIPSTA_IP_GET=67,
    ACC_CWDHCP_CUR=35,
    ACC_CWHOSTNAME=38,
    ACC_CWJAP_CUR=30,
    ACC_CWJAP_INFO=31,
    ACC_CWLAP=33,
    ACC_CWLAPOPT=32,
    ACC_CWMODE_CUR=28,
    ACC_CWMODE_GET=29,
    ACC_CWQAP=34,
    ACC_DEEP_SLEEP=26,
    ACC_DELETEAP=63,
    ACC_FACTORY=6,
    ACC_GMR=21,
    ACC_GPIOC=17,
    ACC_GPIOR=18,
    ACC_GPIOW=19,
    ACC_HTTP_REQ=53,
    ACC_LOAD=4,
    ACC_MODE=2,
    ACC_OTA=64,
    ACC_PEER=7,
    ACC_PING=8,
    ACC_REASSOCIATE=16,
    ACC_RESTORE=22,
    ACC_RST=1,
    ACC_SAVE=3,
    ACC_SCAN=20,
    ACC_SLEEP=25,
    ACC_SOCKC=13,
    ACC_SOCKD=14,
    ACC_SOCKON=9,
    ACC_SOCKQ=11,
    ACC_SOCKR=12,
    ACC_SOCKW=10,
    ACC_STATUS=5,
    ACC_SYSGPIODIR=60,
    ACC_SYSGPIOREAD=62,
    ACC_SYSGPIOWRITE=61,
    ACC_SYSIOGETCFG=59,
    ACC_SYSIOSETCFG=58,
    ACC_TCPSERVER=49,
    ACC_TCPSERVERMAXCONN=50,
    ACC_UART_GET=24,
    ACC_UART_SET=23,
    ACC_WAKEUPGPIO=27,
    ACC_WIFI=15
} AT_CALLBACK_CMD;

typedef struct at_callback_para_t at_callback_para_t, *Pat_callback_para_t;

typedef struct at_config_t at_config_t, *Pat_config_t;

typedef struct at_status_t at_status_t, *Pat_status_t;

typedef union anon_union.conflict180f_for_u anon_union.conflict180f_for_u, *Panon_union.conflict180f_for_u;

typedef int at_di_t;

typedef char at_text_t;

typedef uchar at_hex_t;

typedef uint at_hi_t;

typedef struct anon_struct.conflict14f2 anon_struct.conflict14f2, *Panon_struct.conflict14f2;

typedef struct anon_struct.conflict151c anon_struct.conflict151c, *Panon_struct.conflict151c;

typedef struct anon_struct.conflict1535 anon_struct.conflict1535, *Panon_struct.conflict1535;

typedef struct at_tcpserver_para_t at_tcpserver_para_t, *Pat_tcpserver_para_t;

typedef struct anon_struct.conflict154e anon_struct.conflict154e, *Panon_struct.conflict154e;

typedef struct anon_struct.conflict1575 anon_struct.conflict1575, *Panon_struct.conflict1575;

typedef struct anon_struct.conflict15d4 anon_struct.conflict15d4, *Panon_struct.conflict15d4;

typedef struct anon_struct.conflict15fb anon_struct.conflict15fb, *Panon_struct.conflict15fb;

typedef struct anon_struct.conflict1614 anon_struct.conflict1614, *Panon_struct.conflict1614;

typedef struct anon_struct.conflict164b anon_struct.conflict164b, *Panon_struct.conflict164b;

typedef struct anon_struct.conflict16ba anon_struct.conflict16ba, *Panon_struct.conflict16ba;

typedef struct anon_struct.conflict16d3 anon_struct.conflict16d3, *Panon_struct.conflict16d3;

typedef struct anon_struct.conflict16fc anon_struct.conflict16fc, *Panon_struct.conflict16fc;

typedef struct anon_struct.conflict1745 anon_struct.conflict1745, *Panon_struct.conflict1745;

typedef struct at_network_para_t at_network_para_t, *Pat_network_para_t;

typedef struct at_sendData_para_t at_sendData_para_t, *Pat_sendData_para_t;

typedef struct at_close_para_t at_close_para_t, *Pat_close_para_t;

typedef struct at_client_ssl_path_para_t at_client_ssl_path_para_t, *Pat_client_ssl_path_para_t;

typedef struct at_client_ssl_sni_t at_client_ssl_sni_t, *Pat_client_ssl_sni_t;

typedef struct at_client_ssl_alpn_t at_client_ssl_alpn_t, *Pat_client_ssl_alpn_t;

typedef struct at_ble_sync_mode_t at_ble_sync_mode_t, *Pat_ble_sync_mode_t;

typedef struct anon_struct.conflict175e anon_struct.conflict175e, *Panon_struct.conflict175e;

typedef struct anon_struct.conflict1792 anon_struct.conflict1792, *Panon_struct.conflict1792;

typedef struct anon_struct.conflict17b8 anon_struct.conflict17b8, *Panon_struct.conflict17b8;

typedef struct anon_struct.conflict17de anon_struct.conflict17de, *Panon_struct.conflict17de;

typedef struct anon_struct.conflict17f6 anon_struct.conflict17f6, *Panon_struct.conflict17f6;

typedef int s32;

typedef uchar u8;

typedef __uint32_t uint32_t;

typedef __uint8_t uint8_t;

struct anon_struct.conflict15d4 { // DWARF DIE: 15d4
    uint32_t sleep_time;
    int weakup_pin;
};

struct anon_struct.conflict16d3 { // DWARF DIE: 16d3
    char hostname[128];
};

struct anon_struct.conflict151c { // DWARF DIE: 151c
    s32 value;
};

struct anon_struct.conflict175e { // DWARF DIE: 175e
    int ID;
    int mode;
    int pull;
};

struct anon_struct.conflict17f6 { // DWARF DIE: 17f6
    int apnum;
};

struct anon_struct.conflict14f2 { // DWARF DIE: 14f2
    char hostname[256];
};

struct anon_struct.conflict16fc { // DWARF DIE: 16fc
    char hostname[128];
    uint8_t type;
    uint8_t content_type;
    undefined field_0x82;
    undefined field_0x83;
    uint8_t * data;
};

struct at_close_para_t { // DWARF DIE: 1387
    at_di_t linkId;
};

struct anon_struct.conflict1792 { // DWARF DIE: 1792
    int ID;
    int mode;
};

struct at_network_para_t { // DWARF DIE: 1422
    at_di_t linkId;
    at_text_t type[4];
    at_text_t hostname[256];
    at_di_t port;
    at_di_t localport;
    at_di_t keepAlive;
};

struct at_sendData_para_t { // DWARF DIE: 1492
    at_di_t linkId;
    at_di_t bufferlen;
    at_text_t * buffer;
    at_text_t hostname[256];
    at_di_t port;
};

struct anon_struct.conflict17de { // DWARF DIE: 17de
    int ID;
};

struct at_client_ssl_sni_t { // DWARF DIE: 1318
    at_di_t linkId;
    at_text_t sni[256];
};

struct anon_struct.conflict1575 { // DWARF DIE: 1575
    int uartId;
    int uartBaud;
    int dataBit;
    int parity;
    int stopBit;
    int hwfc;
};

struct at_client_ssl_alpn_t { // DWARF DIE: 134d
    at_di_t linkId;
    at_text_t * * alpn;
};

struct at_ble_sync_mode_t { // DWARF DIE: 13fc
    int mode;
};

struct anon_struct.conflict164b { // DWARF DIE: 164b
    char ssid[64];
    char psk[64];
    int chl;
    int ecn;
    int max_conn;
    int hidden;
};

struct anon_struct.conflict1614 { // DWARF DIE: 1614
    char ssid[33];
    char pwd[33];
};

struct anon_struct.conflict17b8 { // DWARF DIE: 17b8
    int ID;
    int data;
};

struct anon_struct.conflict15fb { // DWARF DIE: 15fb
    int mode;
};

struct at_client_ssl_path_para_t { // DWARF DIE: 12b5
    at_di_t linkId;
    at_di_t auth_mode;
    at_text_t * ca;
    at_text_t * key;
    at_text_t * cert;
};

struct at_tcpserver_para_t { // DWARF DIE: 13ad
    at_di_t port;
    at_di_t enable;
    at_di_t tls;
    at_di_t ca;
};

struct anon_struct.conflict1745 { // DWARF DIE: 1745
    at_ip_t setdnsip;
};

struct anon_struct.conflict16ba { // DWARF DIE: 16ba
    char hostname[33];
};

struct anon_struct.conflict154e { // DWARF DIE: 154e
    s32 len;
    u8 * buf;
};

struct anon_struct.conflict1535 { // DWARF DIE: 1535
    s32 method;
};

union anon_union.conflict180f_for_u { // DWARF DIE: 180f
    struct anon_struct.conflict14f2 ping;
    struct anon_struct.conflict151c wifi;
    struct anon_struct.conflict1535 scan;
    struct at_tcpserver_para_t tcp_server;
    struct anon_struct.conflict154e mode;
    struct anon_struct.conflict1575 uart;
    struct anon_struct.conflict15d4 sleep;
    struct anon_struct.conflict15fb wifiMode;
    struct anon_struct.conflict1614 joinParam;
    struct at_ip_para_t at_ip_para;
    struct anon_struct.conflict164b apcfgParam;
    struct anon_struct.conflict16ba iphostname;
    struct anon_struct.conflict16d3 dns_parse;
    struct anon_struct.conflict16fc http_req;
    struct anon_struct.conflict1745 set_dns;
    struct at_network_para_t net_param;
    struct at_sendData_para_t send_param;
    struct at_close_para_t close_id;
    struct at_client_ssl_path_para_t client_ssl_path_cfg;
    struct at_client_ssl_sni_t client_ssl_sni_cfg;
    struct at_client_ssl_alpn_t client_ssl_alpn_cfg;
    struct at_ble_sync_mode_t ble_sync_mode;
    struct anon_struct.conflict175e setgpio_para;
    struct anon_struct.conflict1792 setiodir_para;
    struct anon_struct.conflict17b8 writeiodata_para;
    struct anon_struct.conflict17de readiodata_para;
    struct anon_struct.conflict17f6 deleteap_para;
};

struct at_callback_para_t { // DWARF DIE: 197a
    struct at_config_t * cfg;
    struct at_status_t * sts;
    union anon_union.conflict180f_for_u u;
};

struct at_status_t { // DWARF DIE: d8a
    at_text_t version[32];
    at_di_t reset_reason;
    at_di_t conf_flag;
    at_di_t system_uptime;
    at_di_t system_sleeptime;
    at_di_t gpio_enable;
    at_di_t captiveportal;
    at_di_t wifi_state;
    at_hex_t wifi_bssid[6];
    undefined field_0x42;
    undefined field_0x43;
    at_di_t wifi_aid;
    at_di_t wifi_channelnum;
    at_hi_t wifi_sup_rate_mask;
    at_hi_t wifi_bas_rate_mask;
    at_hi_t wifi_chan_activity2;
    at_di_t wifi_max_tx_power;
    at_di_t wifi_reg_country;
    at_di_t wifi_dtim_period;
    at_di_t wifi_sleeping;
    at_di_t wifi_num_assoc;
    at_ip_t ip_ipaddr;
    at_ip_t ip_netmask;
    at_ip_t ip_gw;
    at_ip_t ip_dns;
    at_di_t ip_sock_open;
    at_di_t ip_sockd_port;
    at_di_t free_heap;
    at_di_t min_heap;
    at_di_t current_time;
};

struct at_config_t { // DWARF DIE: 99d
    at_di_t CIPMUX;
    at_di_t apDhcp;
    at_di_t staDhcp;
    at_di_t link_type[5];
    at_text_t nv_manuf[32];
    at_text_t nv_model[32];
    at_text_t nv_serial[32];
    at_hex_t nv_wifi_macaddr[6];
    undefined field_0x86;
    undefined field_0x87;
    at_di_t blink_led;
    at_hi_t wind_off_low;
    at_hi_t wind_off_medium;
    at_hi_t wind_off_high;
    at_text_t user_desc[64];
    at_text_t escape_seq[8];
    at_di_t localecho1;
    at_di_t console1_speed;
    at_di_t console1_hwfc;
    at_di_t console1_enabled;
    at_di_t sleep_enabled;
    at_di_t standby_enabled;
    at_di_t standby_time;
    at_di_t wifi_tx_msdu_lifetime;
    at_di_t wifi_rx_msdu_lifetime;
    at_hi_t wifi_operational_mode;
    at_di_t wifi_beacon_wakeup;
    at_di_t wifi_beacon_interval;
    at_di_t wifi_listen_interval;
    at_di_t wifi_rts_threshold;
    at_hex_t wifi_ssid[33];
    undefined field_0x139;
    undefined field_0x13a;
    undefined field_0x13b;
    at_di_t wifi_ssid_len;
    at_di_t wifi_channelnum;
    at_hi_t wifi_opr_rate_mask;
    at_hi_t wifi_bas_rate_mask;
    at_di_t wifi_mode;
    at_di_t wifi_auth_type;
    at_di_t wifi_powersave;
    at_di_t wifi_tx_power;
    at_di_t wifi_rssi_thresh;
    at_di_t wifi_rssi_hyst;
    at_di_t wifi_ap_idle_timeout;
    at_di_t wifi_beacon_loss_thresh;
    at_di_t wifi_priv_mode;
    at_hex_t wifi_wep_keys[4][16];
    at_hex_t wifi_wep_key_lens[4];
    at_di_t wifi_wep_default_key;
    at_hex_t wifi_wpa_psk_raw[32];
    at_text_t wifi_wpa_psk_text[65];
    undefined field_0x219;
    undefined field_0x21a;
    undefined field_0x21b;
    at_di_t ip_use_dhcp;
    at_di_t ip_use_httpd;
    at_di_t ip_mtu;
    at_text_t ip_hostname[32];
    at_text_t ip_apdomainname[32];
    at_ip_t ip_ipaddr;
    at_ip_t ip_netmask;
    at_ip_t ip_gw;
    at_ip_t ip_dns;
    at_di_t ip_http_get_recv_timeout;
    at_di_t ip_dhcp_timeout;
    at_di_t ip_sockd_timeout;
};

typedef struct at_callback_rsp_t at_callback_rsp_t, *Pat_callback_rsp_t;

struct at_callback_rsp_t { // DWARF DIE: 19c7
    u8 status;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    s32 type;
    void * vptr;
    s32 vsize;
};

typedef union anon_union.conflict180f anon_union.conflict180f, *Panon_union.conflict180f;

union anon_union.conflict180f { // DWARF DIE: 180f
    struct anon_struct.conflict14f2 ping;
    struct anon_struct.conflict151c wifi;
    struct anon_struct.conflict1535 scan;
    struct at_tcpserver_para_t tcp_server;
    struct anon_struct.conflict154e mode;
    struct anon_struct.conflict1575 uart;
    struct anon_struct.conflict15d4 sleep;
    struct anon_struct.conflict15fb wifiMode;
    struct anon_struct.conflict1614 joinParam;
    struct at_ip_para_t at_ip_para;
    struct anon_struct.conflict164b apcfgParam;
    struct anon_struct.conflict16ba iphostname;
    struct anon_struct.conflict16d3 dns_parse;
    struct anon_struct.conflict16fc http_req;
    struct anon_struct.conflict1745 set_dns;
    struct at_network_para_t net_param;
    struct at_sendData_para_t send_param;
    struct at_close_para_t close_id;
    struct at_client_ssl_path_para_t client_ssl_path_cfg;
    struct at_client_ssl_sni_t client_ssl_sni_cfg;
    struct at_client_ssl_alpn_t client_ssl_alpn_cfg;
    struct at_ble_sync_mode_t ble_sync_mode;
    struct anon_struct.conflict175e setgpio_para;
    struct anon_struct.conflict1792 setiodir_para;
    struct anon_struct.conflict17b8 writeiodata_para;
    struct anon_struct.conflict17de readiodata_para;
    struct anon_struct.conflict17f6 deleteap_para;
};

typedef enum AT_ERROR_CODE {
    AEC_BIND_FAIL=15,
    AEC_BLANK_LINE=1,
    AEC_CMD_ERROR=3,
    AEC_CMD_FAIL=2,
    AEC_CONNECT_FAIL=14,
    AEC_DISCONNECT=18,
    AEC_IMPROPER_OPERATION=21,
    AEC_LIMITED=17,
    AEC_NETWORK_ERROR=19,
    AEC_NOT_ENOUGH_MEMORY=20,
    AEC_NOT_FOUND=7,
    AEC_NO_PARA=5,
    AEC_NO_RESPONSE=27,
    AEC_NULL_POINTER=8,
    AEC_OK=0,
    AEC_OUT_OF_RANGE=9,
    AEC_PARA_ERROR=4,
    AEC_READ_ONLY=11,
    AEC_SCAN_FAIL=10,
    AEC_SEND_FAIL=12,
    AEC_SEND_READY=23,
    AEC_SEND_TIMEOUT=24,
    AEC_SOCKET_EXISTING=22,
    AEC_SOCKET_FAIL=16,
    AEC_SWITCH_MODE=13,
    AEC_UNDEFINED=26,
    AEC_UNSUPPORTED=6,
    AEC_UPGRADE_FAILED=25
} AT_ERROR_CODE;

typedef struct at_callback_t at_callback_t, *Pat_callback_t;

struct at_callback_t { // DWARF DIE: 1a17
    AT_ERROR_CODE (* handle_cb)(enum AT_CALLBACK_CMD, struct at_callback_para_t *, struct at_callback_rsp_t *);
    s32 (* dump_cb)(u8 *, s32);
};

typedef struct at_queue_t at_queue_t, *Pat_queue_t;

struct at_queue_t { // DWARF DIE: f3f
    u8 * qbuf;
    s32 qsize;
    s32 qcnt;
    s32 ridx;
    s32 widx;
};

typedef enum AT_QUEUE_ERROR_CODE {
    AQEC_EMPTY=2,
    AQEC_FAIL=1,
    AQEC_FULL=3,
    AQEC_OK=0
} AT_QUEUE_ERROR_CODE;

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict88e_for__new anon_union.conflict88e_for__new, *Panon_union.conflict88e_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict702 anon_struct.conflict702, *Panon_struct.conflict702;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _rand48 { // DWARF DIE: 6b9
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue { // DWARF DIE: 674
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf { // DWARF DIE: 2e4
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 312
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

struct _on_exit_args { // DWARF DIE: 22f
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 284
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct __tm { // DWARF DIE: 1ac
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

struct anon_struct.conflict702 { // DWARF DIE: 702
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

union anon_union.conflict88e_for__new { // DWARF DIE: 88e
    struct anon_struct.conflict702 _reent;
    struct anon_struct.conflict702 _unused;
};

struct _reent { // DWARF DIE: 47e
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
    union anon_union.conflict88e_for__new _new;
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

struct __locale_t { // DWARF DIE: 8c3
};

struct _Bigint { // DWARF DIE: 13c
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

typedef union anon_union.conflict88e anon_union.conflict88e, *Panon_union.conflict88e;

union anon_union.conflict88e { // DWARF DIE: 88e
    struct anon_struct.conflict702 _reent;
    struct anon_struct.conflict702 _unused;
    undefined1 field2[240]; // Automatically generated padding to match DWARF declared size
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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1bf1

s32 at_queue_init(void *buf,s32 size,at_queue_callback_t *cb)

{
  if ((buf != (void *)0x0) && (cb != (at_queue_callback_t *)0x0)) {
    _L0();
    pvRam00000000 = buf;
    _DAT_00000004 = size;
    return 0;
  }
  return -1;
}



undefined4 _L0(void)

{
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s2;
  undefined4 *unaff_s3;
  
  _L0();
  uRam00000000 = unaff_s0;
  *unaff_s3 = unaff_s1;
  unaff_s3[1] = unaff_s2;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1b57

AT_QUEUE_ERROR_CODE at_queue_get(u8 *element)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined local_30 [4];
  u8 winbuf [32];
  
  if (_DAT_00000008 < 1) {
    if ((pcRam00000000 == (code *)0x0) || (iVar1 = (*pcRam00000000)(local_30,0x20), iVar1 < 1)) {
      return AQEC_EMPTY;
    }
    iVar2 = 0;
    if (_DAT_00000004 - _DAT_00000008 < iVar1) {
      FUN_000100a8();
    }
    else {
      do {
        pcVar3 = pcRam00000000 + _DAT_00000010;
        _DAT_00000010 = _DAT_00000010 + 1;
        *pcVar3 = (code)local_30[iVar2];
        if (_DAT_00000004 <= _DAT_00000010) {
          _DAT_00000010 = 0;
        }
        iVar2 += 1;
        _DAT_00000008 += 1;
      } while (iVar1 != iVar2);
    }
  }
  pcVar3 = pcRam00000000 + _DAT_0000000c;
  _DAT_0000000c = _DAT_0000000c + 1;
  *element = (u8)*pcVar3;
  if (_DAT_00000004 <= _DAT_0000000c) {
    _DAT_0000000c = 0;
  }
  _DAT_00000008 = _DAT_00000008 + -1;
  return AQEC_OK;
}



undefined4 FUN_000100a8(void)

{
  int *unaff_s0;
  undefined *unaff_s1;
  int iVar1;
  
  FUN_000100a8();
  iVar1 = unaff_s0[3];
  unaff_s0[3] = iVar1 + 1;
  *unaff_s1 = *(undefined *)(*unaff_s0 + iVar1);
  iVar1 = unaff_s0[3];
  if (unaff_s0[1] <= iVar1) {
    iVar1 = 0;
  }
  unaff_s0[3] = iVar1;
  unaff_s0[2] = unaff_s0[2] + -1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1aa7

AT_QUEUE_ERROR_CODE at_queue_peek(u8 *element)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined local_30 [4];
  u8 winbuf [32];
  
  if (_DAT_00000008 < 1) {
    if ((pcRam00000000 == (code *)0x0) || (iVar1 = (*pcRam00000000)(local_30,0x20), iVar1 < 1)) {
      return AQEC_EMPTY;
    }
    iVar3 = 0;
    if (_DAT_00000004 - _DAT_00000008 < iVar1) {
      FUN_0001015e();
    }
    else {
      do {
        pcVar2 = pcRam00000000 + _DAT_00000010;
        _DAT_00000010 = _DAT_00000010 + 1;
        *pcVar2 = (code)local_30[iVar3];
        if (_DAT_00000004 <= _DAT_00000010) {
          _DAT_00000010 = 0;
        }
        iVar3 += 1;
        _DAT_00000008 += 1;
      } while (iVar1 != iVar3);
    }
  }
  *element = (u8)pcRam00000000[_DAT_0000000c];
  return AQEC_OK;
}



undefined4 FUN_0001015e(void)

{
  int *unaff_s0;
  undefined *unaff_s1;
  
  FUN_0001015e();
  *unaff_s1 = *(undefined *)(*unaff_s0 + unaff_s0[3]);
  return 0;
}


