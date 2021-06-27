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
typedef union anon_union.conflictf2 anon_union.conflictf2, *Panon_union.conflictf2;

typedef uint wint_t;

union anon_union.conflictf2 { // DWARF DIE: f2
    wint_t __wch;
    uchar __wchb[4];
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictf2_for___value anon_union.conflictf2_for___value, *Panon_union.conflictf2_for___value;

union anon_union.conflictf2_for___value { // DWARF DIE: f2
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 124
    int __count;
    union anon_union.conflictf2_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct at_ip_para_t at_ip_para_t, *Pat_ip_para_t;

typedef uchar at_ip_t[4];

struct at_ip_para_t { // DWARF DIE: 1284
    at_ip_t ip;
    at_ip_t getway;
    at_ip_t netmask;
    at_ip_t dns1;
    at_ip_t dns2;
};

typedef struct at_network_para_t at_network_para_t, *Pat_network_para_t;

typedef int at_di_t;

typedef char at_text_t;

struct at_network_para_t { // DWARF DIE: 144e
    at_di_t linkId;
    at_text_t type[4];
    at_text_t hostname[256];
    at_di_t port;
    at_di_t localport;
    at_di_t keepAlive;
};

typedef struct anon_struct.conflict1548 anon_struct.conflict1548, *Panon_struct.conflict1548;

typedef int s32;

struct anon_struct.conflict1548 { // DWARF DIE: 1548
    s32 value;
};

typedef struct at_para_t at_para_t, *Pat_para_t;

struct at_para_t { // DWARF DIE: 1a9c
    char * ptr;
};

typedef struct anon_struct.conflict1627 anon_struct.conflict1627, *Panon_struct.conflict1627;

struct anon_struct.conflict1627 { // DWARF DIE: 1627
    int mode;
};

typedef struct cmd_send_cache cmd_send_cache, *Pcmd_send_cache;

typedef uint u32;

typedef uchar u8;

typedef ushort u16;

struct cmd_send_cache { // DWARF DIE: 1ad9
    u32 status;
    u32 cnt;
    u32 linkID;
    u32 length;
    u8 hostname[256];
    u16 port;
    u8 buf[1028];
    undefined field_0x516;
    undefined field_0x517;
};

typedef struct cmd_send_cache cmd_send_cache_t;

typedef struct anon_struct.conflict157a anon_struct.conflict157a, *Panon_struct.conflict157a;

struct anon_struct.conflict157a { // DWARF DIE: 157a
    s32 len;
    u8 * buf;
};

typedef struct at_callback_para_t at_callback_para_t, *Pat_callback_para_t;

typedef struct at_config_t at_config_t, *Pat_config_t;

typedef struct at_status_t at_status_t, *Pat_status_t;

typedef union anon_union.conflict1835_for_u anon_union.conflict1835_for_u, *Panon_union.conflict1835_for_u;

typedef uchar at_hex_t;

typedef uint at_hi_t;

typedef struct anon_struct.conflict151e anon_struct.conflict151e, *Panon_struct.conflict151e;

typedef struct anon_struct.conflict1561 anon_struct.conflict1561, *Panon_struct.conflict1561;

typedef struct at_tcpserver_para_t at_tcpserver_para_t, *Pat_tcpserver_para_t;

typedef struct anon_struct.conflict15a1 anon_struct.conflict15a1, *Panon_struct.conflict15a1;

typedef struct anon_struct.conflict1600 anon_struct.conflict1600, *Panon_struct.conflict1600;

typedef struct anon_struct.conflict1640 anon_struct.conflict1640, *Panon_struct.conflict1640;

typedef struct anon_struct.conflict1677 anon_struct.conflict1677, *Panon_struct.conflict1677;

typedef struct anon_struct.conflict16e6 anon_struct.conflict16e6, *Panon_struct.conflict16e6;

typedef struct anon_struct.conflict16ff anon_struct.conflict16ff, *Panon_struct.conflict16ff;

typedef struct anon_struct.conflict1728 anon_struct.conflict1728, *Panon_struct.conflict1728;

typedef struct anon_struct.conflict176b anon_struct.conflict176b, *Panon_struct.conflict176b;

typedef struct at_sendData_para_t at_sendData_para_t, *Pat_sendData_para_t;

typedef struct at_close_para_t at_close_para_t, *Pat_close_para_t;

typedef struct at_client_ssl_path_para_t at_client_ssl_path_para_t, *Pat_client_ssl_path_para_t;

typedef struct at_client_ssl_sni_t at_client_ssl_sni_t, *Pat_client_ssl_sni_t;

typedef struct at_client_ssl_alpn_t at_client_ssl_alpn_t, *Pat_client_ssl_alpn_t;

typedef struct at_ble_sync_mode_t at_ble_sync_mode_t, *Pat_ble_sync_mode_t;

typedef struct anon_struct.conflict1784 anon_struct.conflict1784, *Panon_struct.conflict1784;

typedef struct anon_struct.conflict17b8 anon_struct.conflict17b8, *Panon_struct.conflict17b8;

typedef struct anon_struct.conflict17de anon_struct.conflict17de, *Panon_struct.conflict17de;

typedef struct anon_struct.conflict1804 anon_struct.conflict1804, *Panon_struct.conflict1804;

typedef struct anon_struct.conflict181c anon_struct.conflict181c, *Panon_struct.conflict181c;

typedef ulong uint32_t;

typedef uchar uint8_t;

struct at_client_ssl_sni_t { // DWARF DIE: 1344
    at_di_t linkId;
    at_text_t sni[256];
};

struct at_client_ssl_path_para_t { // DWARF DIE: 12e1
    at_di_t linkId;
    at_di_t auth_mode;
    at_text_t * ca;
    at_text_t * key;
    at_text_t * cert;
};

struct at_client_ssl_alpn_t { // DWARF DIE: 1379
    at_di_t linkId;
    at_text_t * * alpn;
};

struct anon_struct.conflict17de { // DWARF DIE: 17de
    int ID;
    int data;
};

struct anon_struct.conflict16ff { // DWARF DIE: 16ff
    char hostname[128];
};

struct anon_struct.conflict1784 { // DWARF DIE: 1784
    int ID;
    int mode;
    int pull;
};

struct anon_struct.conflict1640 { // DWARF DIE: 1640
    char ssid[33];
    char pwd[33];
};

struct anon_struct.conflict16e6 { // DWARF DIE: 16e6
    char hostname[33];
};

struct anon_struct.conflict176b { // DWARF DIE: 176b
    at_ip_t setdnsip;
};

struct anon_struct.conflict17b8 { // DWARF DIE: 17b8
    int ID;
    int mode;
};

struct anon_struct.conflict181c { // DWARF DIE: 181c
    int apnum;
};

struct anon_struct.conflict1728 { // DWARF DIE: 1728
    char hostname[128];
    uint8_t type;
    uint8_t content_type;
    undefined field_0x82;
    undefined field_0x83;
    uint8_t * data;
};

struct at_close_para_t { // DWARF DIE: 13b3
    at_di_t linkId;
};

struct at_ble_sync_mode_t { // DWARF DIE: 1428
    int mode;
};

struct at_sendData_para_t { // DWARF DIE: 14be
    at_di_t linkId;
    at_di_t bufferlen;
    at_text_t * buffer;
    at_text_t hostname[256];
    at_di_t port;
};

struct anon_struct.conflict15a1 { // DWARF DIE: 15a1
    int uartId;
    int uartBaud;
    int dataBit;
    int parity;
    int stopBit;
    int hwfc;
};

struct anon_struct.conflict151e { // DWARF DIE: 151e
    char hostname[256];
};

struct anon_struct.conflict1804 { // DWARF DIE: 1804
    int ID;
};

struct anon_struct.conflict1561 { // DWARF DIE: 1561
    s32 method;
};

struct anon_struct.conflict1600 { // DWARF DIE: 1600
    uint32_t sleep_time;
    int weakup_pin;
};

struct anon_struct.conflict1677 { // DWARF DIE: 1677
    char ssid[64];
    char psk[64];
    int chl;
    int ecn;
    int max_conn;
    int hidden;
};

struct at_tcpserver_para_t { // DWARF DIE: 13d9
    at_di_t port;
    at_di_t enable;
    at_di_t tls;
    at_di_t ca;
};

union anon_union.conflict1835_for_u { // DWARF DIE: 1835
    struct anon_struct.conflict151e ping;
    struct anon_struct.conflict1548 wifi;
    struct anon_struct.conflict1561 scan;
    struct at_tcpserver_para_t tcp_server;
    struct anon_struct.conflict157a mode;
    struct anon_struct.conflict15a1 uart;
    struct anon_struct.conflict1600 sleep;
    struct anon_struct.conflict1627 wifiMode;
    struct anon_struct.conflict1640 joinParam;
    struct at_ip_para_t at_ip_para;
    struct anon_struct.conflict1677 apcfgParam;
    struct anon_struct.conflict16e6 iphostname;
    struct anon_struct.conflict16ff dns_parse;
    struct anon_struct.conflict1728 http_req;
    struct anon_struct.conflict176b set_dns;
    struct at_network_para_t net_param;
    struct at_sendData_para_t send_param;
    struct at_close_para_t close_id;
    struct at_client_ssl_path_para_t client_ssl_path_cfg;
    struct at_client_ssl_sni_t client_ssl_sni_cfg;
    struct at_client_ssl_alpn_t client_ssl_alpn_cfg;
    struct at_ble_sync_mode_t ble_sync_mode;
    struct anon_struct.conflict1784 setgpio_para;
    struct anon_struct.conflict17b8 setiodir_para;
    struct anon_struct.conflict17de writeiodata_para;
    struct anon_struct.conflict1804 readiodata_para;
    struct anon_struct.conflict181c deleteap_para;
};

struct at_callback_para_t { // DWARF DIE: 19a0
    struct at_config_t * cfg;
    struct at_status_t * sts;
    union anon_union.conflict1835_for_u u;
};

struct at_status_t { // DWARF DIE: db4
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

struct at_config_t { // DWARF DIE: 9c7
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

typedef struct at_callback_t at_callback_t, *Pat_callback_t;

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

typedef struct at_callback_rsp_t at_callback_rsp_t, *Pat_callback_rsp_t;

struct at_callback_t { // DWARF DIE: 1a3d
    AT_ERROR_CODE (* handle_cb)(enum AT_CALLBACK_CMD, struct at_callback_para_t *, struct at_callback_rsp_t *);
    s32 (* dump_cb)(u8 *, s32);
};

struct at_callback_rsp_t { // DWARF DIE: 19ed
    u8 status;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    s32 type;
    void * vptr;
    s32 vsize;
};

typedef union anon_union.conflict1835 anon_union.conflict1835, *Panon_union.conflict1835;

union anon_union.conflict1835 { // DWARF DIE: 1835
    struct anon_struct.conflict151e ping;
    struct anon_struct.conflict1548 wifi;
    struct anon_struct.conflict1561 scan;
    struct at_tcpserver_para_t tcp_server;
    struct anon_struct.conflict157a mode;
    struct anon_struct.conflict15a1 uart;
    struct anon_struct.conflict1600 sleep;
    struct anon_struct.conflict1627 wifiMode;
    struct anon_struct.conflict1640 joinParam;
    struct at_ip_para_t at_ip_para;
    struct anon_struct.conflict1677 apcfgParam;
    struct anon_struct.conflict16e6 iphostname;
    struct anon_struct.conflict16ff dns_parse;
    struct anon_struct.conflict1728 http_req;
    struct anon_struct.conflict176b set_dns;
    struct at_network_para_t net_param;
    struct at_sendData_para_t send_param;
    struct at_close_para_t close_id;
    struct at_client_ssl_path_para_t client_ssl_path_cfg;
    struct at_client_ssl_sni_t client_ssl_sni_cfg;
    struct at_client_ssl_alpn_t client_ssl_alpn_cfg;
    struct at_ble_sync_mode_t ble_sync_mode;
    struct anon_struct.conflict1784 setgpio_para;
    struct anon_struct.conflict17b8 setiodir_para;
    struct anon_struct.conflict17de writeiodata_para;
    struct anon_struct.conflict1804 readiodata_para;
    struct anon_struct.conflict181c deleteap_para;
};

typedef long int32_t;

typedef struct at_para_descriptor_t at_para_descriptor_t, *Pat_para_descriptor_t;

typedef enum AT_PARA_TYPE {
    APT_DI=3,
    APT_HEX=2,
    APT_HI=4,
    APT_IP=5,
    APT_TDATA=1,
    APT_TEXT=0
} AT_PARA_TYPE;

struct at_para_descriptor_t { // DWARF DIE: fb2
    enum AT_PARA_TYPE pt;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    void * pvar;
    u32 option;
};

typedef enum anon_enum_16.conflictf95 {
    AET_LINE=2048,
    AET_PARA=1024
} anon_enum_16.conflictf95;

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8b8_for__new anon_union.conflict8b8_for__new, *Panon_union.conflict8b8_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict72c anon_struct.conflict72c, *Panon_struct.conflict72c;

typedef struct anon_struct.conflict871 anon_struct.conflict871, *Panon_struct.conflict871;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _rand48 { // DWARF DIE: 6e3
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue { // DWARF DIE: 69e
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __tm { // DWARF DIE: 1e8
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

struct anon_struct.conflict72c { // DWARF DIE: 72c
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

struct anon_struct.conflict871 { // DWARF DIE: 871
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict8b8_for__new { // DWARF DIE: 8b8
    struct anon_struct.conflict72c _reent;
    struct anon_struct.conflict871 _unused;
};

struct __sbuf { // DWARF DIE: 320
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 34e
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

struct _on_exit_args { // DWARF DIE: 26b
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 2c0
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _reent { // DWARF DIE: 4ba
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
    union anon_union.conflict8b8_for__new _new;
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

struct __locale_t { // DWARF DIE: 8ed
};

struct _Bigint { // DWARF DIE: 178
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

typedef union anon_union.conflict8b8 anon_union.conflict8b8, *Panon_union.conflict8b8;

union anon_union.conflict8b8 { // DWARF DIE: 8b8
    struct anon_struct.conflict72c _reent;
    struct anon_struct.conflict871 _unused;
};

typedef int32_t BaseType_t;

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




// DWARF DIE: 2496

AT_ERROR_CODE create_tcp_udp_handler(at_para_t *at_para)

{
  char cVar1;
  AT_ERROR_CODE extraout_a0;
  AT_ERROR_CODE AVar2;
  int iVar3;
  s32 paracnt;
  at_para_descriptor_t cmd_para_type [2];
  at_para_descriptor_t cmd_para_TCP_list [3];
  at_para_descriptor_t cmd_para_UDP_list [3];
  at_callback_para_t param;
  
  _L0();
  FUN_00010030();
  cVar1 = *at_para->ptr;
  if (cVar1 == '?') {
    _L0();
    AVar2 = extraout_a0;
  }
  else {
    if (cVar1 == '=') {
      at_para->ptr = at_para->ptr + 1;
      iVar3 = FUN_000100dc();
      if ((((iVar3 == 0) && (true)) &&
          ((iVar3 = _LVL16(), iVar3 == 0 ||
           ((iVar3 = FUN_00010198(), iVar3 == 0 || (iVar3 = FUN_000101ac(), iVar3 == 0)))))) &&
         (iVar3 = FUN_0001010a(), iVar3 == 0)) {
        FUN_0001011e();
        FUN_00010130();
        FUN_00010142();
        FUN_00010156();
        FUN_0001016a();
        FUN_0001017e();
        AVar2 = 0x2b;
        _L0();
        return AVar2;
      }
    }
    AVar2 = AEC_PARA_ERROR;
  }
  return AVar2;
}



undefined4 _L0(void)

{
  char cVar1;
  char **unaff_s0;
  undefined4 extraout_a0;
  undefined4 uVar2;
  int iVar3;
  undefined uStack00000004;
  undefined *puStack00000008;
  undefined4 uStack0000000c;
  undefined uStack00000010;
  undefined *puStack00000014;
  undefined4 uStack00000018;
  undefined uStack0000001c;
  undefined *puStack00000020;
  undefined4 uStack00000024;
  undefined uStack00000028;
  undefined *puStack0000002c;
  undefined4 uStack00000030;
  undefined uStack00000034;
  undefined *puStack00000038;
  undefined4 uStack0000003c;
  undefined uStack00000040;
  undefined *puStack00000044;
  undefined4 uStack00000048;
  undefined uStack0000004c;
  undefined *puStack00000050;
  undefined4 uStack00000054;
  undefined uStack00000058;
  undefined *puStack0000005c;
  undefined4 uStack00000060;
  int iStack0000006c;
  
  _L0();
  FUN_00010030();
  iStack0000006c = -1;
  puStack00000008 = &stack0x0000006c;
  puStack00000020 = &stack0x00000074;
  puStack0000002c = &stack0x00000174;
  uStack0000000c = 0xc04;
  uStack00000018 = 0xc04;
  uStack00000030 = 0xc04;
  puStack00000038 = &stack0x0000017c;
  uStack0000003c = 0xc04;
  uStack00000054 = 0xc04;
  uStack00000060 = 0xc04;
  uStack00000004 = 3;
  uStack00000024 = 0xd00;
  uStack00000028 = 3;
  uStack00000034 = 3;
  uStack00000048 = 0xd00;
  uStack0000004c = 3;
  puStack00000050 = &stack0x00000174;
  uStack00000058 = 3;
  puStack00000014 = &stack0x00000070;
  puStack0000005c = &stack0x00000178;
  puStack00000044 = &stack0x00000074;
  uStack00000010 = 0;
  uStack0000001c = 0;
  uStack00000040 = 0;
  cVar1 = **unaff_s0;
  if (cVar1 == '?') {
    _L0();
    uVar2 = extraout_a0;
  }
  else {
    if (cVar1 == '=') {
      *unaff_s0 = *unaff_s0 + 1;
      iVar3 = FUN_000100dc();
      if ((((iVar3 == 0) && (iStack0000006c < 5)) &&
          ((iVar3 = _LVL16(), iVar3 == 0 ||
           ((iVar3 = FUN_00010198(), iVar3 == 0 || (iVar3 = FUN_000101ac(), iVar3 == 0)))))) &&
         (iVar3 = FUN_0001010a(), iVar3 == 0)) {
        FUN_0001011e();
        FUN_00010130();
        FUN_00010142();
        FUN_00010156();
        FUN_0001016a();
        FUN_0001017e();
        uVar2 = 0x2b;
        _L0();
        return uVar2;
      }
    }
    uVar2 = 4;
  }
  return uVar2;
}



undefined4 FUN_00010030(void)

{
  char cVar1;
  char **unaff_s0;
  undefined4 extraout_a0;
  undefined4 uVar2;
  int iVar3;
  undefined uStack00000004;
  undefined *puStack00000008;
  undefined4 uStack0000000c;
  undefined uStack00000010;
  undefined *puStack00000014;
  undefined4 uStack00000018;
  undefined uStack0000001c;
  undefined *puStack00000020;
  undefined4 uStack00000024;
  undefined uStack00000028;
  undefined *puStack0000002c;
  undefined4 uStack00000030;
  undefined uStack00000034;
  undefined *puStack00000038;
  undefined4 uStack0000003c;
  undefined uStack00000040;
  undefined *puStack00000044;
  undefined4 uStack00000048;
  undefined uStack0000004c;
  undefined *puStack00000050;
  undefined4 uStack00000054;
  undefined uStack00000058;
  undefined *puStack0000005c;
  undefined4 uStack00000060;
  int iStack0000006c;
  
  FUN_00010030();
  iStack0000006c = -1;
  puStack00000008 = &stack0x0000006c;
  puStack00000020 = &stack0x00000074;
  puStack0000002c = &stack0x00000174;
  uStack0000000c = 0xc04;
  uStack00000018 = 0xc04;
  uStack00000030 = 0xc04;
  puStack00000038 = &stack0x0000017c;
  uStack0000003c = 0xc04;
  uStack00000054 = 0xc04;
  uStack00000060 = 0xc04;
  uStack00000004 = 3;
  uStack00000024 = 0xd00;
  uStack00000028 = 3;
  uStack00000034 = 3;
  uStack00000048 = 0xd00;
  uStack0000004c = 3;
  puStack00000050 = &stack0x00000174;
  uStack00000058 = 3;
  puStack00000014 = &stack0x00000070;
  puStack0000005c = &stack0x00000178;
  puStack00000044 = &stack0x00000074;
  uStack00000010 = 0;
  uStack0000001c = 0;
  uStack00000040 = 0;
  cVar1 = **unaff_s0;
  if (cVar1 == '?') {
    _L0();
    uVar2 = extraout_a0;
  }
  else {
    if (cVar1 == '=') {
      *unaff_s0 = *unaff_s0 + 1;
      iVar3 = FUN_000100dc();
      if ((((iVar3 == 0) && (iStack0000006c < 5)) &&
          ((iVar3 = _LVL16(), iVar3 == 0 ||
           ((iVar3 = FUN_00010198(), iVar3 == 0 || (iVar3 = FUN_000101ac(), iVar3 == 0)))))) &&
         (iVar3 = FUN_0001010a(), iVar3 == 0)) {
        FUN_0001011e();
        FUN_00010130();
        FUN_00010142();
        FUN_00010156();
        FUN_0001016a();
        FUN_0001017e();
        uVar2 = 0x2b;
        _L0();
        return uVar2;
      }
    }
    uVar2 = 4;
  }
  return uVar2;
}



void _L0(void)

{
  _L0();
  return;
}



undefined4 FUN_000100dc(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_stack_0000006c;
  
  iVar1 = FUN_000100dc();
  if ((((iVar1 == 0) && (in_stack_0000006c < 5)) &&
      ((iVar1 = _LVL16(), iVar1 == 0 ||
       ((iVar1 = FUN_00010198(), iVar1 == 0 || (iVar1 = FUN_000101ac(), iVar1 == 0)))))) &&
     (iVar1 = FUN_0001010a(), iVar1 == 0)) {
    FUN_0001011e();
    FUN_00010130();
    FUN_00010142();
    FUN_00010156();
    FUN_0001016a();
    FUN_0001017e();
    uVar2 = 0x2b;
    _L0();
    return uVar2;
  }
  return 4;
}



undefined4 _LVL16(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _LVL16();
  if ((((iVar1 == 0) || (iVar1 = FUN_00010198(), iVar1 == 0)) ||
      (iVar1 = FUN_000101ac(), iVar1 == 0)) && (iVar1 = FUN_0001010a(), iVar1 == 0)) {
    FUN_0001011e();
    FUN_00010130();
    FUN_00010142();
    FUN_00010156();
    FUN_0001016a();
    FUN_0001017e();
    uVar2 = 0x2b;
    _L0();
    return uVar2;
  }
  return 4;
}



undefined4 FUN_0001010a(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001010a();
  if (iVar1 == 0) {
    FUN_0001011e();
    FUN_00010130();
    FUN_00010142();
    FUN_00010156();
    FUN_0001016a();
    FUN_0001017e();
    uVar2 = 0x2b;
    _L0();
    return uVar2;
  }
  return 4;
}



void FUN_0001011e(void)

{
  FUN_0001011e();
  FUN_00010130();
  FUN_00010142();
  FUN_00010156();
  FUN_0001016a();
  FUN_0001017e();
  _L0();
  return;
}



void FUN_00010130(void)

{
  FUN_00010130();
  FUN_00010142();
  FUN_00010156();
  FUN_0001016a();
  FUN_0001017e();
  _L0();
  return;
}



void FUN_00010142(void)

{
  FUN_00010142();
  FUN_00010156();
  FUN_0001016a();
  FUN_0001017e();
  _L0();
  return;
}



void FUN_00010156(void)

{
  FUN_00010156();
  FUN_0001016a();
  FUN_0001017e();
  _L0();
  return;
}



void FUN_0001016a(void)

{
  FUN_0001016a();
  FUN_0001017e();
  _L0();
  return;
}



void FUN_0001017e(void)

{
  FUN_0001017e();
  _L0();
  return;
}



undefined4 FUN_00010198(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_00010198();
  if (((iVar2 == 0) || (iVar2 = FUN_000101ac(), iVar2 == 0)) && (iVar2 = FUN_0001010a(), iVar2 == 0)
     ) {
    FUN_0001011e();
    FUN_00010130();
    FUN_00010142();
    FUN_00010156();
    FUN_0001016a();
    FUN_0001017e();
    uVar1 = 0x2b;
    _L0();
    return uVar1;
  }
  return 4;
}



undefined4 FUN_000101ac(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_000101ac();
  if ((iVar2 == 0) && (iVar2 = FUN_0001010a(), iVar2 == 0)) {
    FUN_0001011e();
    FUN_00010130();
    FUN_00010142();
    FUN_00010156();
    FUN_0001016a();
    FUN_0001017e();
    uVar1 = 0x2b;
    _L0();
    return uVar1;
  }
  return 4;
}



// DWARF DIE: 235b

AT_ERROR_CODE close_network_handler(at_para_t *at_para)

{
  AT_ERROR_CODE extraout_a0;
  int iVar1;
  int iStack316;
  s32 paracnt;
  at_para_descriptor_t cmd_para_list [1];
  at_callback_para_t param;
  
  _L0();
  FUN_000101ea();
  if (*at_para->ptr == '=') {
    at_para->ptr = at_para->ptr + 1;
    iVar1 = FUN_00010230();
    if ((iVar1 == 0) && (0 < iStack316)) {
      FUN_0001024a();
      FUN_00010258();
      return extraout_a0;
    }
  }
  return AEC_PARA_ERROR;
}



undefined4 _L0(void)

{
  char **unaff_s0;
  int iVar1;
  undefined4 extraout_a0;
  int in_stack_00000004;
  undefined uStack00000008;
  undefined *puStack0000000c;
  undefined4 uStack00000010;
  undefined4 uStack0000001c;
  
  _L0();
  FUN_000101ea();
  uStack0000001c = 0xffffffff;
  uStack00000008 = 3;
  puStack0000000c = &stack0x0000001c;
  uStack00000010 = 0xc04;
  if (**unaff_s0 == '=') {
    *unaff_s0 = *unaff_s0 + 1;
    iVar1 = FUN_00010230();
    if ((iVar1 == 0) && (0 < in_stack_00000004)) {
      FUN_0001024a();
      FUN_00010258();
      return extraout_a0;
    }
  }
  return 4;
}



undefined4 FUN_000101ea(void)

{
  char **unaff_s0;
  int iVar1;
  undefined4 extraout_a0;
  int in_stack_00000004;
  undefined uStack00000008;
  undefined *puStack0000000c;
  undefined4 uStack00000010;
  undefined4 uStack0000001c;
  
  FUN_000101ea();
  uStack0000001c = 0xffffffff;
  uStack00000008 = 3;
  puStack0000000c = &stack0x0000001c;
  uStack00000010 = 0xc04;
  if (**unaff_s0 == '=') {
    *unaff_s0 = *unaff_s0 + 1;
    iVar1 = FUN_00010230();
    if ((iVar1 == 0) && (0 < in_stack_00000004)) {
      FUN_0001024a();
      FUN_00010258();
      return extraout_a0;
    }
  }
  return 4;
}



undefined4 FUN_00010230(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_a0;
  int in_stack_00000004;
  
  iVar2 = FUN_00010230();
  if ((iVar2 == 0) && (0 < in_stack_00000004)) {
    FUN_0001024a();
    FUN_00010258();
    uVar1 = extraout_a0;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}



void FUN_0001024a(void)

{
  FUN_0001024a();
  FUN_00010258();
  return;
}



void FUN_00010258(void)

{
  FUN_00010258();
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 21d1

AT_ERROR_CODE send_data_handler(at_para_t *at_para)

{
  AT_ERROR_CODE extraout_a0;
  int iVar1;
  int iStack352;
  s32 paracnt;
  at_para_descriptor_t cmd_para_list_single [4];
  at_callback_para_t param;
  
  _L0(_DAT_00000110);
  FUN_00010292(_DAT_00000110);
  _L0(_DAT_00000110);
  if (*at_para->ptr == '=') {
    at_para->ptr = at_para->ptr + 1;
    iVar1 = FUN_00010316(_DAT_00000110);
    if ((iVar1 == 0) && (1 < iStack352)) {
      if (iRam00000000 != 0) {
        _L0();
        _L0();
        return extraout_a0;
      }
      if ((true) && (param.u._0_4_ < 0x405)) {
        iRam00000000 = 1;
        _DAT_00000008 = 0xffffffff;
        _DAT_0000000c = param.u._0_4_;
        _DAT_00000110 = param.u._264_2_;
        _L0();
        return AEC_SEND_READY;
      }
      FUN_00010350();
    }
  }
  return AEC_PARA_ERROR;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(ushort uRam00000110)

{
  char **unaff_s0;
  int iVar1;
  undefined4 extraout_a0;
  int in_stack_00000000;
  undefined uStack00000004;
  undefined *puStack00000008;
  undefined4 uStack0000000c;
  undefined uStack00000010;
  undefined4 *puStack00000014;
  undefined4 uStack00000018;
  undefined uStack0000001c;
  undefined *puStack00000020;
  undefined4 uStack00000024;
  undefined uStack00000028;
  undefined2 *puStack0000002c;
  undefined4 uStack00000030;
  int iStack0000003c;
  int in_stack_00000040;
  undefined4 uStack00000044;
  ushort in_stack_00000148;
  uint uStack00000148;
  
  _L0(uRam00000110);
  FUN_00010292(uRam00000110);
  iStack0000003c = -1;
  puStack00000008 = &stack0x0000003c;
  uStack00000024 = 0xd00;
  puStack0000002c = (undefined2 *)&stack0x00000148;
  puStack00000014 = (undefined4 *)&stack0x00000040;
  puStack00000020 = &stack0x00000048;
  uStack00000004 = 3;
  uStack0000000c = 0xc04;
  uStack00000010 = 3;
  uStack00000018 = 0xc04;
  uStack00000028 = 3;
  uStack00000030 = 0xc04;
  uStack0000001c = 0;
  _L0(uRam00000110);
  if (**unaff_s0 == '=') {
    *unaff_s0 = *unaff_s0 + 1;
    iVar1 = FUN_00010316(uRam00000110);
    if ((iVar1 == 0) && (1 < in_stack_00000000)) {
      if (iRam00000000 != 0) {
        iStack0000003c = _DAT_00000008;
        in_stack_00000040 = _DAT_0000000c;
        uStack00000044 = 0x112;
        _L0();
        uStack00000148 = (uint)uRam00000110;
        _L0();
        return extraout_a0;
      }
      if ((iStack0000003c < 5) && (in_stack_00000040 < 0x405)) {
        iRam00000000 = 1;
        _DAT_00000008 = iStack0000003c;
        _DAT_0000000c = in_stack_00000040;
        uRam00000110 = in_stack_00000148;
        _L0();
        return 0x17;
      }
      FUN_00010350();
    }
  }
  return 4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010292(ushort uRam00000110)

{
  char **unaff_s0;
  int iVar1;
  undefined4 extraout_a0;
  int in_stack_00000000;
  undefined uStack00000004;
  undefined *puStack00000008;
  undefined4 uStack0000000c;
  undefined uStack00000010;
  undefined4 *puStack00000014;
  undefined4 uStack00000018;
  undefined uStack0000001c;
  undefined *puStack00000020;
  undefined4 uStack00000024;
  undefined uStack00000028;
  undefined2 *puStack0000002c;
  undefined4 uStack00000030;
  int iStack0000003c;
  int in_stack_00000040;
  undefined4 uStack00000044;
  ushort in_stack_00000148;
  uint uStack00000148;
  
  FUN_00010292(uRam00000110);
  iStack0000003c = -1;
  puStack00000008 = &stack0x0000003c;
  uStack00000024 = 0xd00;
  puStack0000002c = (undefined2 *)&stack0x00000148;
  puStack00000014 = (undefined4 *)&stack0x00000040;
  puStack00000020 = &stack0x00000048;
  uStack00000004 = 3;
  uStack0000000c = 0xc04;
  uStack00000010 = 3;
  uStack00000018 = 0xc04;
  uStack00000028 = 3;
  uStack00000030 = 0xc04;
  uStack0000001c = 0;
  _L0(uRam00000110);
  if (**unaff_s0 == '=') {
    *unaff_s0 = *unaff_s0 + 1;
    iVar1 = FUN_00010316(uRam00000110);
    if ((iVar1 == 0) && (1 < in_stack_00000000)) {
      if (iRam00000000 != 0) {
        iStack0000003c = _DAT_00000008;
        in_stack_00000040 = _DAT_0000000c;
        uStack00000044 = 0x112;
        _L0();
        uStack00000148 = (uint)uRam00000110;
        _L0();
        return extraout_a0;
      }
      if ((iStack0000003c < 5) && (in_stack_00000040 < 0x405)) {
        iRam00000000 = 1;
        _DAT_00000008 = iStack0000003c;
        _DAT_0000000c = in_stack_00000040;
        uRam00000110 = in_stack_00000148;
        _L0();
        return 0x17;
      }
      FUN_00010350();
    }
  }
  return 4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(ushort uRam00000110)

{
  char **unaff_s0;
  int iVar1;
  undefined4 extraout_a0;
  int in_stack_00000000;
  int in_stack_0000003c;
  int in_stack_00000040;
  undefined4 uStack00000044;
  ushort in_stack_00000148;
  
  _L0(uRam00000110);
  if (**unaff_s0 == '=') {
    *unaff_s0 = *unaff_s0 + 1;
    iVar1 = FUN_00010316(uRam00000110);
    if ((iVar1 == 0) && (1 < in_stack_00000000)) {
      if (iRam00000000 != 0) {
        uStack00000044 = 0x112;
        _L0();
        _L0();
        return extraout_a0;
      }
      if ((in_stack_0000003c < 5) && (in_stack_00000040 < 0x405)) {
        iRam00000000 = 1;
        _DAT_00000008 = in_stack_0000003c;
        _DAT_0000000c = in_stack_00000040;
        uRam00000110 = in_stack_00000148;
        _L0();
        return 0x17;
      }
      FUN_00010350();
    }
  }
  return 4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010316(ushort uRam00000110)

{
  int iVar1;
  undefined4 extraout_a0;
  int in_stack_00000000;
  int in_stack_0000003c;
  int in_stack_00000040;
  undefined4 uStack00000044;
  ushort in_stack_00000148;
  
  iVar1 = FUN_00010316(uRam00000110);
  if ((iVar1 == 0) && (1 < in_stack_00000000)) {
    if (iRam00000000 != 0) {
      uStack00000044 = 0x112;
      _L0();
      _L0();
      return extraout_a0;
    }
    if ((in_stack_0000003c < 5) && (in_stack_00000040 < 0x405)) {
      iRam00000000 = 1;
      _DAT_00000008 = in_stack_0000003c;
      _DAT_0000000c = in_stack_00000040;
      uRam00000110 = in_stack_00000148;
      _L0();
      return 0x17;
    }
    FUN_00010350();
  }
  return 4;
}



undefined4 FUN_00010350(void)

{
  FUN_00010350();
  return 4;
}



undefined4 _L0(void)

{
  _L0();
  return 0x17;
}



void _L0(void)

{
  int unaff_s0;
  uint uStack00000148;
  
  _L0();
  uStack00000148 = (uint)*(ushort *)(unaff_s0 + 0x110);
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// DWARF DIE: 20eb

AT_ERROR_CODE ap_server_handler(at_para_t *at_para)

{
  int iVar1;
  undefined4 uVar2;
  AT_ERROR_CODE AVar3;
  int iStack352;
  s32 paracnt;
  at_para_descriptor_t cmd_para_list [4];
  at_callback_para_t param;
  
  if (*at_para->ptr == '=') {
    at_para->ptr = at_para->ptr + 1;
    iVar1 = FUN_00010414();
    AVar3 = AEC_PARA_ERROR;
    if ((iVar1 == 0) && (0 < iStack352)) {
      if ((iStack352 != 2) && ((iStack352 != 3 && (iStack352 == 1)))) {
        param.sts = (at_status_t *)0x14d;
      }
      FUN_00010450();
      AVar3 = AEC_OUT_OF_RANGE;
      if (param.sts < create_tcp_udp_handler) {
        uVar2 = FUN_00010468();
        AVar3 = (AT_ERROR_CODE)uVar2;
      }
    }
  }
  else {
    AVar3 = AEC_NO_PARA;
  }
  return AVar3;
}



undefined4 FUN_00010414(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  int in_stack_00000000;
  uint in_stack_0000003c;
  
  iVar1 = FUN_00010414();
  uVar2 = 4;
  if ((iVar1 == 0) && (0 < in_stack_00000000)) {
    if ((in_stack_00000000 != 2) && ((in_stack_00000000 != unaff_s0 && (in_stack_00000000 == 1)))) {
      in_stack_0000003c = 0x14d;
    }
    FUN_00010450();
    uVar2 = 9;
    if (in_stack_0000003c < 0x10000) {
      uVar2 = FUN_00010468();
    }
  }
  return uVar2;
}



undefined4 FUN_00010450(void)

{
  undefined4 uVar1;
  uint in_stack_0000003c;
  
  FUN_00010450();
  uVar1 = 9;
  if (in_stack_0000003c < 0x10000) {
    uVar1 = FUN_00010468();
  }
  return uVar1;
}



undefined4 FUN_00010468(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00010468();
  return uVar1;
}



// WARNING: Variable defined which should be unmapped: param
// WARNING: Could not reconcile some variable overlaps
// DWARF DIE: 1f23

AT_ERROR_CODE client_ssl_config_path(at_para_t *at_para)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iStack364;
  s32 paracnt;
  at_para_descriptor_t cmd_para_list [5];
  at_callback_para_t param;
  
  _L0();
  iVar1 = FUN_000104ac();
  iVar2 = FUN_000104ba();
  iVar3 = FUN_000104c8();
  if (iVar1 != 0) {
    if ((iVar2 != 0) && (iVar3 != 0)) {
      if (*at_para->ptr != '=') {
        return AEC_NO_PARA;
      }
      at_para->ptr = at_para->ptr + 1;
      iVar4 = FUN_00010576();
      if ((iVar4 == 0) && (1 < iStack364)) {
        if (param.u._0_4_ == 1) {
          if (4 < iStack364) {
            _LVL105();
            goto _L0;
          }
        }
        else {
          if (param.u._0_4_ < 2) {
            if (param.u._0_4_ == 0) {
              _LVL108();
              FUN_00010654();
              FUN_0001065e();
              goto _L0;
            }
          }
          else {
            if (param.u._0_4_ == 2) {
              if (iStack364 != 2) {
                _LVL101();
                FUN_00010626();
                goto _L0;
              }
            }
            else {
              if ((param.u._0_4_ == 3) && (4 < iStack364)) {
_L0:
                FUN_000105fc();
                uVar5 = FUN_0001060a();
                return (AT_ERROR_CODE)uVar5;
              }
            }
          }
        }
        if (iVar1 != 0) {
          _L0();
        }
        if (iVar3 != 0) {
          _L0();
        }
        if (iVar2 != 0) {
          _L0();
        }
      }
      return AEC_PARA_ERROR;
    }
    _L0();
  }
  if (iVar3 != 0) {
    _L0();
  }
  if (iVar2 != 0) {
    _L0();
  }
  return AEC_NOT_ENOUGH_MEMORY;
}



undefined4 _L0(void)

{
  int iVar1;
  undefined4 uVar2;
  char **unaff_s2;
  int in_stack_00000004;
  undefined uStack00000008;
  undefined *puStack0000000c;
  undefined4 uStack00000010;
  undefined uStack00000014;
  undefined4 *puStack00000018;
  undefined4 uStack0000001c;
  undefined uStack00000020;
  int iStack00000024;
  undefined4 uStack00000028;
  undefined uStack0000002c;
  int iStack00000030;
  undefined4 uStack00000034;
  undefined uStack00000038;
  int iStack0000003c;
  undefined4 uStack00000040;
  int in_stack_00000050;
  int iStack00000054;
  int iStack00000058;
  int iStack0000005c;
  
  _L0();
  iStack00000054 = FUN_000104ac();
  iStack00000058 = FUN_000104ba();
  iStack00000030 = FUN_000104c8();
  iStack0000005c = iStack00000030;
  if (iStack00000054 == 0) {
_L0:
    if (iStack0000005c != 0) {
      _L0();
    }
    if (iStack00000058 != 0) {
      _L0();
    }
    return 0x14;
  }
  if ((iStack00000058 == 0) || (iStack00000030 == 0)) {
    _L0();
    goto _L0;
  }
  puStack0000000c = &stack0x0000004c;
  uStack00000010 = 0x404;
  puStack00000018 = (undefined4 *)&stack0x00000050;
  uStack0000001c = 0xc04;
  uStack00000040 = 0x840;
  uStack00000008 = 3;
  uStack00000014 = 3;
  uStack00000020 = 0;
  iStack00000024 = iStack00000054;
  uStack00000028 = 0xc40;
  uStack0000002c = 0;
  uStack00000034 = 0xc40;
  uStack00000038 = 0;
  iStack0000003c = iStack00000058;
  if (**unaff_s2 != '=') {
    return 5;
  }
  *unaff_s2 = *unaff_s2 + 1;
  iVar1 = FUN_00010576();
  if (iVar1 != 0) {
    return 4;
  }
  if (in_stack_00000004 < 2) {
    return 4;
  }
  if (in_stack_00000050 == 1) {
    if (in_stack_00000004 < 5) goto _L0;
    _LVL105();
  }
  else {
    if (1 < in_stack_00000050) {
      if (in_stack_00000050 == 2) {
        if (in_stack_00000004 != 2) {
          _LVL101();
          FUN_00010626();
          iStack0000005c = 0;
          iStack00000058 = 0;
          goto _L0;
        }
_L0:
        if (iStack00000054 != 0) {
          _L0();
        }
        if (iStack0000005c != 0) {
          _L0();
        }
        if (iStack00000058 != 0) {
          _L0();
        }
        return 4;
      }
      if ((in_stack_00000050 != 3) || (in_stack_00000004 < 5)) goto _L0;
      goto _L0;
    }
    if (in_stack_00000050 != 0) goto _L0;
    _LVL108();
    FUN_00010654();
    FUN_0001065e();
    iStack0000005c = 0;
    iStack00000058 = 0;
  }
  iStack00000054 = 0;
_L0:
  FUN_000105fc();
  uVar2 = FUN_0001060a();
  return uVar2;
}



undefined4 FUN_000104ac(void)

{
  int iVar1;
  undefined4 uVar2;
  char **unaff_s2;
  int in_stack_00000004;
  undefined uStack00000008;
  undefined *puStack0000000c;
  undefined4 uStack00000010;
  undefined uStack00000014;
  undefined4 *puStack00000018;
  undefined4 uStack0000001c;
  undefined uStack00000020;
  int iStack00000024;
  undefined4 uStack00000028;
  undefined uStack0000002c;
  int iStack00000030;
  undefined4 uStack00000034;
  undefined uStack00000038;
  int iStack0000003c;
  undefined4 uStack00000040;
  int in_stack_00000050;
  int iStack00000054;
  int iStack00000058;
  int iStack0000005c;
  
  iStack00000054 = FUN_000104ac();
  iStack00000058 = FUN_000104ba();
  iStack00000030 = FUN_000104c8();
  iStack0000005c = iStack00000030;
  if (iStack00000054 == 0) {
_L0:
    if (iStack0000005c != 0) {
      _L0();
    }
    if (iStack00000058 != 0) {
      _L0();
    }
    return 0x14;
  }
  if ((iStack00000058 == 0) || (iStack00000030 == 0)) {
    _L0();
    goto _L0;
  }
  puStack0000000c = &stack0x0000004c;
  uStack00000010 = 0x404;
  puStack00000018 = (undefined4 *)&stack0x00000050;
  uStack0000001c = 0xc04;
  uStack00000040 = 0x840;
  uStack00000008 = 3;
  uStack00000014 = 3;
  uStack00000020 = 0;
  iStack00000024 = iStack00000054;
  uStack00000028 = 0xc40;
  uStack0000002c = 0;
  uStack00000034 = 0xc40;
  uStack00000038 = 0;
  iStack0000003c = iStack00000058;
  if (**unaff_s2 != '=') {
    return 5;
  }
  *unaff_s2 = *unaff_s2 + 1;
  iVar1 = FUN_00010576();
  if (iVar1 != 0) {
    return 4;
  }
  if (in_stack_00000004 < 2) {
    return 4;
  }
  if (in_stack_00000050 == 1) {
    if (in_stack_00000004 < 5) goto _L0;
    _LVL105();
  }
  else {
    if (1 < in_stack_00000050) {
      if (in_stack_00000050 == 2) {
        if (in_stack_00000004 != 2) {
          _LVL101();
          FUN_00010626();
          iStack0000005c = 0;
          iStack00000058 = 0;
          goto _L0;
        }
_L0:
        if (iStack00000054 != 0) {
          _L0();
        }
        if (iStack0000005c != 0) {
          _L0();
        }
        if (iStack00000058 != 0) {
          _L0();
        }
        return 4;
      }
      if ((in_stack_00000050 != 3) || (in_stack_00000004 < 5)) goto _L0;
      goto _L0;
    }
    if (in_stack_00000050 != 0) goto _L0;
    _LVL108();
    FUN_00010654();
    FUN_0001065e();
    iStack0000005c = 0;
    iStack00000058 = 0;
  }
  iStack00000054 = 0;
_L0:
  FUN_000105fc();
  uVar2 = FUN_0001060a();
  return uVar2;
}



undefined4 FUN_000104ba(void)

{
  int iVar1;
  undefined4 uVar2;
  char **unaff_s2;
  int in_stack_00000004;
  undefined uStack00000008;
  undefined *puStack0000000c;
  undefined4 uStack00000010;
  undefined uStack00000014;
  undefined4 *puStack00000018;
  undefined4 uStack0000001c;
  undefined uStack00000020;
  int iStack00000024;
  undefined4 uStack00000028;
  undefined uStack0000002c;
  int iStack00000030;
  undefined4 uStack00000034;
  undefined uStack00000038;
  int iStack0000003c;
  undefined4 uStack00000040;
  int in_stack_00000050;
  int in_stack_00000054;
  int iStack00000058;
  int iStack0000005c;
  
  iStack00000058 = FUN_000104ba();
  iStack00000030 = FUN_000104c8();
  iStack0000005c = iStack00000030;
  if (in_stack_00000054 == 0) {
_L0:
    if (iStack0000005c != 0) {
      _L0();
    }
    if (iStack00000058 != 0) {
      _L0();
    }
    return 0x14;
  }
  if ((iStack00000058 == 0) || (iStack00000030 == 0)) {
    _L0();
    goto _L0;
  }
  puStack0000000c = &stack0x0000004c;
  uStack00000010 = 0x404;
  puStack00000018 = (undefined4 *)&stack0x00000050;
  uStack0000001c = 0xc04;
  uStack00000040 = 0x840;
  uStack00000008 = 3;
  uStack00000014 = 3;
  uStack00000020 = 0;
  iStack00000024 = in_stack_00000054;
  uStack00000028 = 0xc40;
  uStack0000002c = 0;
  uStack00000034 = 0xc40;
  uStack00000038 = 0;
  iStack0000003c = iStack00000058;
  if (**unaff_s2 != '=') {
    return 5;
  }
  *unaff_s2 = *unaff_s2 + 1;
  iVar1 = FUN_00010576();
  if (iVar1 != 0) {
    return 4;
  }
  if (in_stack_00000004 < 2) {
    return 4;
  }
  if (in_stack_00000050 == 1) {
    if (in_stack_00000004 < 5) goto _L0;
    _LVL105();
  }
  else {
    if (1 < in_stack_00000050) {
      if (in_stack_00000050 == 2) {
        if (in_stack_00000004 != 2) {
          _LVL101();
          FUN_00010626();
          iStack0000005c = 0;
          iStack00000058 = 0;
          goto _L0;
        }
_L0:
        if (in_stack_00000054 != 0) {
          _L0();
        }
        if (iStack0000005c != 0) {
          _L0();
        }
        if (iStack00000058 != 0) {
          _L0();
        }
        return 4;
      }
      if ((in_stack_00000050 != 3) || (in_stack_00000004 < 5)) goto _L0;
      goto _L0;
    }
    if (in_stack_00000050 != 0) goto _L0;
    _LVL108();
    FUN_00010654();
    FUN_0001065e();
    iStack0000005c = 0;
    iStack00000058 = 0;
  }
  in_stack_00000054 = 0;
_L0:
  FUN_000105fc();
  uVar2 = FUN_0001060a();
  return uVar2;
}



undefined4 FUN_000104c8(void)

{
  int iVar1;
  undefined4 uVar2;
  char **unaff_s2;
  int in_stack_00000004;
  undefined uStack00000008;
  undefined *puStack0000000c;
  undefined4 uStack00000010;
  undefined uStack00000014;
  undefined4 *puStack00000018;
  undefined4 uStack0000001c;
  undefined uStack00000020;
  int iStack00000024;
  undefined4 uStack00000028;
  undefined uStack0000002c;
  int iStack00000030;
  undefined4 uStack00000034;
  undefined uStack00000038;
  int iStack0000003c;
  undefined4 uStack00000040;
  int in_stack_00000050;
  int in_stack_00000054;
  int in_stack_00000058;
  int iStack0000005c;
  
  iStack00000030 = FUN_000104c8();
  iStack0000005c = iStack00000030;
  if (in_stack_00000054 == 0) {
_L0:
    if (iStack0000005c != 0) {
      _L0();
    }
    if (in_stack_00000058 != 0) {
      _L0();
    }
    return 0x14;
  }
  if ((in_stack_00000058 == 0) || (iStack00000030 == 0)) {
    _L0();
    goto _L0;
  }
  puStack0000000c = &stack0x0000004c;
  uStack00000010 = 0x404;
  puStack00000018 = (undefined4 *)&stack0x00000050;
  uStack0000001c = 0xc04;
  uStack00000040 = 0x840;
  uStack00000008 = 3;
  uStack00000014 = 3;
  uStack00000020 = 0;
  iStack00000024 = in_stack_00000054;
  uStack00000028 = 0xc40;
  uStack0000002c = 0;
  uStack00000034 = 0xc40;
  uStack00000038 = 0;
  iStack0000003c = in_stack_00000058;
  if (**unaff_s2 != '=') {
    return 5;
  }
  *unaff_s2 = *unaff_s2 + 1;
  iVar1 = FUN_00010576();
  if (iVar1 != 0) {
    return 4;
  }
  if (in_stack_00000004 < 2) {
    return 4;
  }
  if (in_stack_00000050 == 1) {
    if (in_stack_00000004 < 5) goto _L0;
    _LVL105();
  }
  else {
    if (1 < in_stack_00000050) {
      if (in_stack_00000050 == 2) {
        if (in_stack_00000004 != 2) {
          _LVL101();
          FUN_00010626();
          iStack0000005c = 0;
          in_stack_00000058 = 0;
          goto _L0;
        }
_L0:
        if (in_stack_00000054 != 0) {
          _L0();
        }
        if (iStack0000005c != 0) {
          _L0();
        }
        if (in_stack_00000058 != 0) {
          _L0();
        }
        return 4;
      }
      if ((in_stack_00000050 != 3) || (in_stack_00000004 < 5)) goto _L0;
      goto _L0;
    }
    if (in_stack_00000050 != 0) goto _L0;
    _LVL108();
    FUN_00010654();
    FUN_0001065e();
    iStack0000005c = 0;
    in_stack_00000058 = 0;
  }
  in_stack_00000054 = 0;
_L0:
  FUN_000105fc();
  uVar2 = FUN_0001060a();
  return uVar2;
}



undefined4 _L0(void)

{
  int in_stack_00000058;
  int in_stack_0000005c;
  
  _L0();
  if (in_stack_0000005c != 0) {
    _L0();
  }
  if (in_stack_00000058 != 0) {
    _L0();
  }
  return 0x14;
}



undefined4 _L0(void)

{
  int in_stack_00000058;
  
  _L0();
  if (in_stack_00000058 != 0) {
    _L0();
  }
  return 0x14;
}



void _L0(void)

{
  _L0();
  return;
}



undefined4 FUN_00010576(void)

{
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int in_stack_00000004;
  int in_stack_00000050;
  int in_stack_00000054;
  int in_stack_00000058;
  int in_stack_0000005c;
  
  iVar1 = FUN_00010576();
  if ((iVar1 == 0) && (1 < in_stack_00000004)) {
    if (in_stack_00000050 == 1) {
      if (4 < in_stack_00000004) {
        _LVL105();
        goto _L0;
      }
    }
    else {
      if (in_stack_00000050 < 2) {
        if (in_stack_00000050 == 0) {
          _LVL108();
          FUN_00010654();
          FUN_0001065e();
          goto _L0;
        }
      }
      else {
        if (in_stack_00000050 == 2) {
          if (in_stack_00000004 != 2) {
            _LVL101();
            FUN_00010626();
            goto _L0;
          }
        }
        else {
          if ((in_stack_00000050 == unaff_s1) && (4 < in_stack_00000004)) {
_L0:
            FUN_000105fc();
            uVar2 = FUN_0001060a();
            return uVar2;
          }
        }
      }
    }
    if (in_stack_00000054 != 0) {
      _L0();
    }
    if (in_stack_0000005c != 0) {
      _L0();
    }
    if (in_stack_00000058 != 0) {
      _L0();
    }
  }
  return 4;
}



undefined4 _L0(void)

{
  int in_stack_00000058;
  int in_stack_0000005c;
  
  _L0();
  if (in_stack_0000005c != 0) {
    _L0();
  }
  if (in_stack_00000058 != 0) {
    _L0();
  }
  return 4;
}



undefined4 _L0(void)

{
  int in_stack_00000058;
  
  _L0();
  if (in_stack_00000058 != 0) {
    _L0();
  }
  return 4;
}



undefined4 _L0(void)

{
  _L0();
  return 4;
}



undefined4 FUN_000105fc(void)

{
  undefined4 uVar1;
  
  FUN_000105fc();
  uVar1 = FUN_0001060a();
  return uVar1;
}



undefined4 FUN_0001060a(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001060a();
  return uVar1;
}



undefined4 _LVL101(void)

{
  undefined4 uVar1;
  undefined4 uStack00000058;
  undefined4 uStack0000005c;
  
  _LVL101();
  FUN_00010626();
  uStack0000005c = 0;
  uStack00000058 = 0;
  FUN_000105fc();
  uVar1 = FUN_0001060a();
  return uVar1;
}



undefined4 FUN_00010626(void)

{
  undefined4 uVar1;
  undefined4 uStack00000058;
  undefined4 uStack0000005c;
  
  FUN_00010626();
  uStack0000005c = 0;
  uStack00000058 = 0;
  FUN_000105fc();
  uVar1 = FUN_0001060a();
  return uVar1;
}



undefined4 _LVL105(void)

{
  undefined4 uVar1;
  undefined4 uStack00000054;
  
  _LVL105();
  uStack00000054 = 0;
  FUN_000105fc();
  uVar1 = FUN_0001060a();
  return uVar1;
}



undefined4 _LVL108(void)

{
  undefined4 uVar1;
  undefined4 uStack00000054;
  undefined4 uStack00000058;
  undefined4 uStack0000005c;
  
  _LVL108();
  FUN_00010654();
  FUN_0001065e();
  uStack0000005c = 0;
  uStack00000058 = 0;
  uStack00000054 = 0;
  FUN_000105fc();
  uVar1 = FUN_0001060a();
  return uVar1;
}



undefined4 FUN_00010654(void)

{
  undefined4 uVar1;
  undefined4 uStack00000054;
  undefined4 uStack00000058;
  undefined4 uStack0000005c;
  
  FUN_00010654();
  FUN_0001065e();
  uStack0000005c = 0;
  uStack00000058 = 0;
  uStack00000054 = 0;
  FUN_000105fc();
  uVar1 = FUN_0001060a();
  return uVar1;
}



undefined4 FUN_0001065e(void)

{
  undefined4 uVar1;
  undefined4 uStack00000054;
  undefined4 uStack00000058;
  undefined4 uStack0000005c;
  
  FUN_0001065e();
  uStack0000005c = 0;
  uStack00000058 = 0;
  uStack00000054 = 0;
  FUN_000105fc();
  uVar1 = FUN_0001060a();
  return uVar1;
}



// DWARF DIE: 1df3

AT_ERROR_CODE client_ssl_set_sni(at_para_t *at_para)

{
  int iVar1;
  undefined4 uVar2;
  AT_ERROR_CODE AVar3;
  int iStack328;
  s32 paracnt;
  at_para_descriptor_t cmd_para_list [2];
  at_callback_para_t param;
  
  _L0();
  if (*at_para->ptr == '=') {
    at_para->ptr = at_para->ptr + 1;
    iVar1 = FUN_000106c6();
    AVar3 = AEC_PARA_ERROR;
    if ((iVar1 == 0) && (1 < iStack328)) {
      FUN_000106e0();
      FUN_000106f6();
      uVar2 = FUN_00010704();
      AVar3 = (AT_ERROR_CODE)uVar2;
    }
  }
  else {
    AVar3 = AEC_NO_PARA;
  }
  return AVar3;
}



undefined4 _L0(void)

{
  char **unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack0000000c;
  int in_stack_00000018;
  undefined uStack0000001c;
  undefined4 *puStack00000020;
  undefined4 uStack00000024;
  undefined uStack00000028;
  undefined *puStack0000002c;
  undefined4 uStack00000030;
  undefined4 in_stack_0000003c;
  
  _L0();
  uStack0000001c = 3;
  puStack00000020 = (undefined4 *)&stack0x0000003c;
  uStack00000024 = 0x404;
  uStack00000030 = 0xd00;
  puStack0000002c = &stack0x00000040;
  uStack00000028 = 0;
  if (**unaff_s1 == '=') {
    *unaff_s1 = *unaff_s1 + 1;
    iVar1 = FUN_000106c6();
    uVar2 = 4;
    if ((iVar1 == 0) && (1 < in_stack_00000018)) {
      uStack0000000c = in_stack_0000003c;
      FUN_000106e0();
      FUN_000106f6();
      uVar2 = FUN_00010704();
    }
  }
  else {
    uVar2 = 5;
  }
  return uVar2;
}



undefined4 FUN_000106c6(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_stack_00000018;
  
  iVar1 = FUN_000106c6();
  uVar2 = 4;
  if ((iVar1 == 0) && (1 < in_stack_00000018)) {
    FUN_000106e0();
    FUN_000106f6();
    uVar2 = FUN_00010704();
  }
  return uVar2;
}



undefined4 FUN_000106e0(void)

{
  undefined4 uVar1;
  
  FUN_000106e0();
  FUN_000106f6();
  uVar1 = FUN_00010704();
  return uVar1;
}



undefined4 FUN_000106f6(void)

{
  undefined4 uVar1;
  
  FUN_000106f6();
  uVar1 = FUN_00010704();
  return uVar1;
}



undefined4 FUN_00010704(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00010704();
  return uVar1;
}



// DWARF DIE: 1b83

AT_ERROR_CODE client_ssl_set_alpn(at_para_t *at_para)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  AT_ERROR_CODE AVar7;
  char *pcVar8;
  int iVar9;
  int iStack332;
  s32 paracnt;
  at_para_descriptor_t cmd_para_list [1];
  at_callback_para_t param;
  
  _L0();
  if (*at_para->ptr == '=') {
    at_para->ptr = at_para->ptr + 1;
    iVar3 = FUN_00010778();
    AVar7 = AEC_PARA_ERROR;
    if ((iVar3 == 0) && (0 < iStack332)) {
      pcVar8 = at_para->ptr;
      if ((*pcVar8 == '\r') || (iVar3 = 0, *pcVar8 == '\n')) {
        _L0();
      }
      else {
        for (; (cVar1 = *pcVar8, cVar1 != '\r' && (cVar1 != '\n')); pcVar8 = pcVar8 + 1) {
          if (cVar1 == ',') {
            iVar3 += 1;
          }
        }
        *pcVar8 = '\0';
        _L0();
        puVar4 = (undefined4 *)FUN_000107c2();
        if (puVar4 == (undefined4 *)0x0) {
          return AEC_NOT_ENOUGH_MEMORY;
        }
        puVar4[iVar3 + 1] = 0;
        FUN_0001082c();
        FUN_0001083c();
        *puVar4 = puVar4 + iVar3 + 2;
        iVar9 = 1;
        puVar6 = puVar4 + iVar3 + 2;
        while( true ) {
          puVar2 = puVar6;
          puVar6 = (undefined4 *)((int)puVar2 + 1);
          if (*(char *)puVar2 == '\0') break;
          if (*(char *)puVar2 == ',') {
            *(undefined *)puVar2 = 0;
            puVar4[iVar9] = puVar6;
            iVar9 = iVar9 + 1;
          }
        }
        for (iVar3 = 0; pcVar8 = (char *)puVar4[iVar3], pcVar8 != (char *)0x0; iVar3 += 1) {
          FUN_0001088e(iVar3,pcVar8);
          if (*pcVar8 == '\0') {
            FUN_000108a4();
            FUN_000108ae();
            return AEC_PARA_ERROR;
          }
        }
        FUN_000108c8();
        FUN_000108de();
      }
      uVar5 = FUN_00010802();
      AVar7 = (AT_ERROR_CODE)uVar5;
    }
  }
  else {
    AVar7 = AEC_NO_PARA;
  }
  return AVar7;
}



undefined4 _L0(void)

{
  char cVar1;
  undefined4 *puVar2;
  char **unaff_s1;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  int in_stack_00000014;
  undefined uStack00000018;
  undefined *puStack0000001c;
  undefined4 uStack00000020;
  undefined4 *puStack00000030;
  
  _L0();
  uStack00000018 = 3;
  puStack0000001c = &stack0x0000002c;
  uStack00000020 = 0xc04;
  if (**unaff_s1 == '=') {
    *unaff_s1 = *unaff_s1 + 1;
    iVar3 = FUN_00010778();
    uVar5 = 4;
    if ((iVar3 == 0) && (0 < in_stack_00000014)) {
      pcVar6 = *unaff_s1;
      if ((*pcVar6 == '\r') || (iVar3 = 0, *pcVar6 == '\n')) {
        puStack00000030 = (undefined4 *)0x0;
        _L0();
      }
      else {
        for (; (cVar1 = *pcVar6, cVar1 != '\r' && (cVar1 != '\n')); pcVar6 = pcVar6 + 1) {
          if (cVar1 == ',') {
            iVar3 += 1;
          }
        }
        *pcVar6 = '\0';
        _L0();
        puStack00000030 = (undefined4 *)FUN_000107c2();
        if (puStack00000030 == (undefined4 *)0x0) {
          return 0x14;
        }
        puStack00000030[iVar3 + 1] = 0;
        puVar4 = puStack00000030 + iVar3 + 2;
        FUN_0001082c();
        FUN_0001083c();
        *puStack00000030 = puVar4;
        iVar3 = 1;
        while( true ) {
          puVar2 = puVar4;
          puVar4 = (undefined4 *)((int)puVar2 + 1);
          if (*(char *)puVar2 == '\0') break;
          if (*(char *)puVar2 == ',') {
            *(undefined *)puVar2 = 0;
            puStack00000030[iVar3] = puVar4;
            iVar3 = iVar3 + 1;
          }
        }
        for (iVar3 = 0; pcVar6 = (char *)puStack00000030[iVar3], pcVar6 != (char *)0x0; iVar3 += 1)
        {
          FUN_0001088e(iVar3,pcVar6);
          if (*pcVar6 == '\0') {
            FUN_000108a4();
            FUN_000108ae();
            return 4;
          }
        }
        FUN_000108c8();
        FUN_000108de();
      }
      uVar5 = FUN_00010802();
    }
  }
  else {
    uVar5 = 5;
  }
  return uVar5;
}



undefined4 FUN_00010778(void)

{
  char cVar1;
  undefined4 *puVar2;
  char **unaff_s1;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *pcVar6;
  int in_stack_00000014;
  undefined4 *puStack00000030;
  
  iVar3 = FUN_00010778();
  uVar5 = 4;
  if ((iVar3 == 0) && (0 < in_stack_00000014)) {
    pcVar6 = *unaff_s1;
    if ((*pcVar6 == '\r') || (iVar3 = 0, *pcVar6 == '\n')) {
      puStack00000030 = (undefined4 *)0x0;
      _L0();
    }
    else {
      for (; (cVar1 = *pcVar6, cVar1 != '\r' && (cVar1 != '\n')); pcVar6 = pcVar6 + 1) {
        if (cVar1 == ',') {
          iVar3 += 1;
        }
      }
      *pcVar6 = '\0';
      _L0();
      puStack00000030 = (undefined4 *)FUN_000107c2();
      if (puStack00000030 == (undefined4 *)0x0) {
        return 0x14;
      }
      puStack00000030[iVar3 + 1] = 0;
      puVar4 = puStack00000030 + iVar3 + 2;
      FUN_0001082c();
      FUN_0001083c();
      *puStack00000030 = puVar4;
      iVar3 = 1;
      while( true ) {
        puVar2 = puVar4;
        puVar4 = (undefined4 *)((int)puVar2 + 1);
        if (*(char *)puVar2 == '\0') break;
        if (*(char *)puVar2 == ',') {
          *(undefined *)puVar2 = 0;
          puStack00000030[iVar3] = puVar4;
          iVar3 = iVar3 + 1;
        }
      }
      for (iVar3 = 0; pcVar6 = (char *)puStack00000030[iVar3], pcVar6 != (char *)0x0; iVar3 += 1) {
        FUN_0001088e(iVar3,pcVar6);
        if (*pcVar6 == '\0') {
          FUN_000108a4();
          FUN_000108ae();
          return 4;
        }
      }
      FUN_000108c8();
      FUN_000108de();
    }
    uVar5 = FUN_00010802();
  }
  return uVar5;
}



undefined4 _L0(void)

{
  char *pcVar1;
  int unaff_s0;
  char *pcVar2;
  int iVar3;
  undefined4 *unaff_s1;
  undefined4 uVar4;
  undefined4 uStack00000008;
  char **ppcStack00000030;
  
  _L0();
  ppcStack00000030 = (char **)FUN_000107c2();
  uVar4 = 0x14;
  if (ppcStack00000030 != (char **)0x0) {
    *(undefined4 *)((int)ppcStack00000030 + unaff_s0 + -4) = 0;
    uStack00000008 = *unaff_s1;
    pcVar2 = (char *)(unaff_s0 + (int)ppcStack00000030);
    FUN_0001082c();
    FUN_0001083c();
    *ppcStack00000030 = pcVar2;
    iVar3 = 1;
    while( true ) {
      pcVar1 = pcVar2;
      pcVar2 = pcVar1 + 1;
      if (*pcVar1 == '\0') break;
      if (*pcVar1 == ',') {
        *pcVar1 = '\0';
        ppcStack00000030[iVar3] = pcVar2;
        iVar3 = iVar3 + 1;
      }
    }
    for (iVar3 = 0; pcVar2 = ppcStack00000030[iVar3], pcVar2 != (char *)0x0; iVar3 += 1) {
      FUN_0001088e(iVar3,pcVar2);
      if (*pcVar2 == '\0') {
        FUN_000108a4();
        FUN_000108ae();
        return 4;
      }
    }
    uStack00000008 = *unaff_s1;
    FUN_000108c8();
    FUN_000108de();
    uVar4 = FUN_00010802();
  }
  return uVar4;
}



undefined4 FUN_000107c2(void)

{
  char *pcVar1;
  int unaff_s0;
  char *pcVar2;
  int iVar3;
  undefined4 *unaff_s1;
  undefined4 uVar4;
  undefined4 uStack00000008;
  char **ppcStack00000030;
  
  ppcStack00000030 = (char **)FUN_000107c2();
  uVar4 = 0x14;
  if (ppcStack00000030 != (char **)0x0) {
    *(undefined4 *)((int)ppcStack00000030 + unaff_s0 + -4) = 0;
    uStack00000008 = *unaff_s1;
    pcVar2 = (char *)(unaff_s0 + (int)ppcStack00000030);
    FUN_0001082c();
    FUN_0001083c();
    *ppcStack00000030 = pcVar2;
    iVar3 = 1;
    while( true ) {
      pcVar1 = pcVar2;
      pcVar2 = pcVar1 + 1;
      if (*pcVar1 == '\0') break;
      if (*pcVar1 == ',') {
        *pcVar1 = '\0';
        ppcStack00000030[iVar3] = pcVar2;
        iVar3 = iVar3 + 1;
      }
    }
    for (iVar3 = 0; pcVar2 = ppcStack00000030[iVar3], pcVar2 != (char *)0x0; iVar3 += 1) {
      FUN_0001088e(iVar3,pcVar2);
      if (*pcVar2 == '\0') {
        FUN_000108a4();
        FUN_000108ae();
        return 4;
      }
    }
    uStack00000008 = *unaff_s1;
    FUN_000108c8();
    FUN_000108de();
    uVar4 = FUN_00010802();
  }
  return uVar4;
}



undefined4 _L0(void)

{
  undefined4 uVar1;
  
  _L0();
  uVar1 = FUN_00010802();
  return uVar1;
}



undefined4 FUN_00010802(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00010802();
  return uVar1;
}



undefined4 FUN_0001082c(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 *unaff_s1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uStack00000008;
  int *in_stack_00000030;
  
  FUN_0001082c();
  FUN_0001083c();
  *in_stack_00000030 = unaff_s0;
  iVar1 = 1;
  for (iVar3 = unaff_s0 + 1; *(char *)(iVar3 + -1) != '\0'; iVar3 += 1) {
    iVar4 = iVar1;
    if (*(char *)(iVar3 + -1) == ',') {
      *(undefined *)(iVar3 + -1) = 0;
      iVar4 = iVar1 + 1;
      in_stack_00000030[iVar1] = iVar3;
    }
    iVar1 = iVar4;
  }
  iVar1 = 0;
  while( true ) {
    pcVar5 = (char *)in_stack_00000030[iVar1];
    if (pcVar5 == (char *)0x0) {
      uStack00000008 = *unaff_s1;
      FUN_000108c8();
      FUN_000108de();
      uVar2 = FUN_00010802();
      return uVar2;
    }
    FUN_0001088e(iVar1,pcVar5);
    if (*pcVar5 == '\0') break;
    iVar1 += 1;
  }
  FUN_000108a4();
  FUN_000108ae();
  return 4;
}



undefined4 FUN_0001083c(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 *unaff_s1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uStack00000008;
  int *in_stack_00000030;
  
  FUN_0001083c();
  *in_stack_00000030 = unaff_s0;
  iVar1 = 1;
  for (iVar3 = unaff_s0 + 1; *(char *)(iVar3 + -1) != '\0'; iVar3 += 1) {
    iVar4 = iVar1;
    if (*(char *)(iVar3 + -1) == ',') {
      *(undefined *)(iVar3 + -1) = 0;
      iVar4 = iVar1 + 1;
      in_stack_00000030[iVar1] = iVar3;
    }
    iVar1 = iVar4;
  }
  iVar1 = 0;
  while( true ) {
    pcVar5 = (char *)in_stack_00000030[iVar1];
    if (pcVar5 == (char *)0x0) {
      uStack00000008 = *unaff_s1;
      FUN_000108c8();
      FUN_000108de();
      uVar2 = FUN_00010802();
      return uVar2;
    }
    FUN_0001088e(iVar1,pcVar5);
    if (*pcVar5 == '\0') break;
    iVar1 += 1;
  }
  FUN_000108a4();
  FUN_000108ae();
  return 4;
}



undefined4 FUN_0001088e(int param_1,char *param_2)

{
  int unaff_s0;
  undefined4 *unaff_s1;
  undefined4 uVar1;
  char *unaff_s2;
  undefined4 uStack00000008;
  int in_stack_00000030;
  
  do {
    FUN_0001088e(param_1,param_2);
    if (*unaff_s2 == '\0') {
      FUN_000108a4();
      FUN_000108ae();
      return 4;
    }
    unaff_s0 += 1;
    param_2 = *(char **)(unaff_s0 * 4 + in_stack_00000030);
    param_1 = unaff_s0;
    unaff_s2 = param_2;
  } while (param_2 != (char *)0x0);
  uStack00000008 = *unaff_s1;
  FUN_000108c8();
  FUN_000108de();
  uVar1 = FUN_00010802();
  return uVar1;
}



undefined4 FUN_000108a4(void)

{
  FUN_000108a4();
  FUN_000108ae();
  return 4;
}



undefined4 FUN_000108ae(void)

{
  FUN_000108ae();
  return 4;
}



undefined4 FUN_000108c8(void)

{
  undefined4 uVar1;
  
  FUN_000108c8();
  FUN_000108de();
  uVar1 = FUN_00010802();
  return uVar1;
}



undefined4 FUN_000108de(void)

{
  undefined4 uVar1;
  
  FUN_000108de();
  uVar1 = FUN_00010802();
  return uVar1;
}


