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

struct at_ip_para_t { // DWARF DIE: 12cc
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

typedef union anon_union.conflict1883_for_u anon_union.conflict1883_for_u, *Panon_union.conflict1883_for_u;

typedef int at_di_t;

typedef char at_text_t;

typedef uchar at_hex_t;

typedef uint at_hi_t;

typedef struct anon_struct.conflict1566 anon_struct.conflict1566, *Panon_struct.conflict1566;

typedef struct anon_struct.conflict1590 anon_struct.conflict1590, *Panon_struct.conflict1590;

typedef struct anon_struct.conflict15a9 anon_struct.conflict15a9, *Panon_struct.conflict15a9;

typedef struct at_tcpserver_para_t at_tcpserver_para_t, *Pat_tcpserver_para_t;

typedef struct anon_struct.conflict15c2 anon_struct.conflict15c2, *Panon_struct.conflict15c2;

typedef struct anon_struct.conflict15e9 anon_struct.conflict15e9, *Panon_struct.conflict15e9;

typedef struct anon_struct.conflict1648 anon_struct.conflict1648, *Panon_struct.conflict1648;

typedef struct anon_struct.conflict166f anon_struct.conflict166f, *Panon_struct.conflict166f;

typedef struct anon_struct.conflict1688 anon_struct.conflict1688, *Panon_struct.conflict1688;

typedef struct anon_struct.conflict16bf anon_struct.conflict16bf, *Panon_struct.conflict16bf;

typedef struct anon_struct.conflict172e anon_struct.conflict172e, *Panon_struct.conflict172e;

typedef struct anon_struct.conflict1747 anon_struct.conflict1747, *Panon_struct.conflict1747;

typedef struct anon_struct.conflict1770 anon_struct.conflict1770, *Panon_struct.conflict1770;

typedef struct anon_struct.conflict17b9 anon_struct.conflict17b9, *Panon_struct.conflict17b9;

typedef struct at_network_para_t at_network_para_t, *Pat_network_para_t;

typedef struct at_sendData_para_t at_sendData_para_t, *Pat_sendData_para_t;

typedef struct at_close_para_t at_close_para_t, *Pat_close_para_t;

typedef struct at_client_ssl_path_para_t at_client_ssl_path_para_t, *Pat_client_ssl_path_para_t;

typedef struct at_client_ssl_sni_t at_client_ssl_sni_t, *Pat_client_ssl_sni_t;

typedef struct at_client_ssl_alpn_t at_client_ssl_alpn_t, *Pat_client_ssl_alpn_t;

typedef struct at_ble_sync_mode_t at_ble_sync_mode_t, *Pat_ble_sync_mode_t;

typedef struct anon_struct.conflict17d2 anon_struct.conflict17d2, *Panon_struct.conflict17d2;

typedef struct anon_struct.conflict1806 anon_struct.conflict1806, *Panon_struct.conflict1806;

typedef struct anon_struct.conflict182c anon_struct.conflict182c, *Panon_struct.conflict182c;

typedef struct anon_struct.conflict1852 anon_struct.conflict1852, *Panon_struct.conflict1852;

typedef struct anon_struct.conflict186a anon_struct.conflict186a, *Panon_struct.conflict186a;

typedef int s32;

typedef uchar u8;

typedef __uint32_t uint32_t;

typedef __uint8_t uint8_t;

struct at_client_ssl_sni_t { // DWARF DIE: 138c
    at_di_t linkId;
    at_text_t sni[256];
};

struct at_client_ssl_path_para_t { // DWARF DIE: 1329
    at_di_t linkId;
    at_di_t auth_mode;
    at_text_t * ca;
    at_text_t * key;
    at_text_t * cert;
};

struct anon_struct.conflict15a9 { // DWARF DIE: 15a9
    s32 method;
};

struct anon_struct.conflict182c { // DWARF DIE: 182c
    int ID;
    int data;
};

struct anon_struct.conflict172e { // DWARF DIE: 172e
    char hostname[33];
};

struct at_ble_sync_mode_t { // DWARF DIE: 1470
    int mode;
};

struct at_sendData_para_t { // DWARF DIE: 1506
    at_di_t linkId;
    at_di_t bufferlen;
    at_text_t * buffer;
    at_text_t hostname[256];
    at_di_t port;
};

struct at_network_para_t { // DWARF DIE: 1496
    at_di_t linkId;
    at_text_t type[4];
    at_text_t hostname[256];
    at_di_t port;
    at_di_t localport;
    at_di_t keepAlive;
};

struct anon_struct.conflict186a { // DWARF DIE: 186a
    int apnum;
};

struct anon_struct.conflict1770 { // DWARF DIE: 1770
    char hostname[128];
    uint8_t type;
    uint8_t content_type;
    undefined field_0x82;
    undefined field_0x83;
    uint8_t * data;
};

struct anon_struct.conflict17b9 { // DWARF DIE: 17b9
    at_ip_t setdnsip;
};

struct anon_struct.conflict1852 { // DWARF DIE: 1852
    int ID;
};

struct anon_struct.conflict1806 { // DWARF DIE: 1806
    int ID;
    int mode;
};

struct anon_struct.conflict16bf { // DWARF DIE: 16bf
    char ssid[64];
    char psk[64];
    int chl;
    int ecn;
    int max_conn;
    int hidden;
};

struct anon_struct.conflict17d2 { // DWARF DIE: 17d2
    int ID;
    int mode;
    int pull;
};

struct at_close_para_t { // DWARF DIE: 13fb
    at_di_t linkId;
};

struct anon_struct.conflict15e9 { // DWARF DIE: 15e9
    int uartId;
    int uartBaud;
    int dataBit;
    int parity;
    int stopBit;
    int hwfc;
};

struct anon_struct.conflict1688 { // DWARF DIE: 1688
    char ssid[33];
    char pwd[33];
};

struct anon_struct.conflict166f { // DWARF DIE: 166f
    int mode;
};

struct anon_struct.conflict1590 { // DWARF DIE: 1590
    s32 value;
};

struct anon_struct.conflict1747 { // DWARF DIE: 1747
    char hostname[128];
};

struct at_client_ssl_alpn_t { // DWARF DIE: 13c1
    at_di_t linkId;
    at_text_t * * alpn;
};

struct anon_struct.conflict1566 { // DWARF DIE: 1566
    char hostname[256];
};

struct anon_struct.conflict15c2 { // DWARF DIE: 15c2
    s32 len;
    u8 * buf;
};

struct anon_struct.conflict1648 { // DWARF DIE: 1648
    uint32_t sleep_time;
    int weakup_pin;
};

struct at_tcpserver_para_t { // DWARF DIE: 1421
    at_di_t port;
    at_di_t enable;
    at_di_t tls;
    at_di_t ca;
};

union anon_union.conflict1883_for_u { // DWARF DIE: 1883
    struct anon_struct.conflict1566 ping;
    struct anon_struct.conflict1590 wifi;
    struct anon_struct.conflict15a9 scan;
    struct at_tcpserver_para_t tcp_server;
    struct anon_struct.conflict15c2 mode;
    struct anon_struct.conflict15e9 uart;
    struct anon_struct.conflict1648 sleep;
    struct anon_struct.conflict166f wifiMode;
    struct anon_struct.conflict1688 joinParam;
    struct at_ip_para_t at_ip_para;
    struct anon_struct.conflict16bf apcfgParam;
    struct anon_struct.conflict172e iphostname;
    struct anon_struct.conflict1747 dns_parse;
    struct anon_struct.conflict1770 http_req;
    struct anon_struct.conflict17b9 set_dns;
    struct at_network_para_t net_param;
    struct at_sendData_para_t send_param;
    struct at_close_para_t close_id;
    struct at_client_ssl_path_para_t client_ssl_path_cfg;
    struct at_client_ssl_sni_t client_ssl_sni_cfg;
    struct at_client_ssl_alpn_t client_ssl_alpn_cfg;
    struct at_ble_sync_mode_t ble_sync_mode;
    struct anon_struct.conflict17d2 setgpio_para;
    struct anon_struct.conflict1806 setiodir_para;
    struct anon_struct.conflict182c writeiodata_para;
    struct anon_struct.conflict1852 readiodata_para;
    struct anon_struct.conflict186a deleteap_para;
};

struct at_callback_para_t { // DWARF DIE: 19ee
    struct at_config_t * cfg;
    struct at_status_t * sts;
    union anon_union.conflict1883_for_u u;
};

struct at_status_t { // DWARF DIE: d96
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

struct at_config_t { // DWARF DIE: 9a9
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

struct at_callback_rsp_t { // DWARF DIE: 1a3b
    u8 status;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    s32 type;
    void * vptr;
    s32 vsize;
};

typedef union anon_union.conflict1883 anon_union.conflict1883, *Panon_union.conflict1883;

union anon_union.conflict1883 { // DWARF DIE: 1883
    struct anon_struct.conflict1566 ping;
    struct anon_struct.conflict1590 wifi;
    struct anon_struct.conflict15a9 scan;
    struct at_tcpserver_para_t tcp_server;
    struct anon_struct.conflict15c2 mode;
    struct anon_struct.conflict15e9 uart;
    struct anon_struct.conflict1648 sleep;
    struct anon_struct.conflict166f wifiMode;
    struct anon_struct.conflict1688 joinParam;
    struct at_ip_para_t at_ip_para;
    struct anon_struct.conflict16bf apcfgParam;
    struct anon_struct.conflict172e iphostname;
    struct anon_struct.conflict1747 dns_parse;
    struct anon_struct.conflict1770 http_req;
    struct anon_struct.conflict17b9 set_dns;
    struct at_network_para_t net_param;
    struct at_sendData_para_t send_param;
    struct at_close_para_t close_id;
    struct at_client_ssl_path_para_t client_ssl_path_cfg;
    struct at_client_ssl_sni_t client_ssl_sni_cfg;
    struct at_client_ssl_alpn_t client_ssl_alpn_cfg;
    struct at_ble_sync_mode_t ble_sync_mode;
    struct anon_struct.conflict17d2 setgpio_para;
    struct anon_struct.conflict1806 setiodir_para;
    struct anon_struct.conflict182c writeiodata_para;
    struct anon_struct.conflict1852 readiodata_para;
    struct anon_struct.conflict186a deleteap_para;
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

struct at_callback_t { // DWARF DIE: 1a8b
    AT_ERROR_CODE (* handle_cb)(enum AT_CALLBACK_CMD, struct at_callback_para_t *, struct at_callback_rsp_t *);
    s32 (* dump_cb)(u8 *, s32);
};

typedef uint u32;

typedef union at_value_t at_value_t, *Pat_value_t;

union at_value_t { // DWARF DIE: fd0
    at_text_t text[256];
    at_hex_t hex[256];
    at_di_t di;
    at_hi_t hi;
    at_ip_t ip;
};

typedef enum anon_enum_16.conflictf77 {
    AET_LINE=2048,
    AET_PARA=1024
} anon_enum_16.conflictf77;

typedef struct at_para_descriptor_t at_para_descriptor_t, *Pat_para_descriptor_t;

typedef enum AT_PARA_TYPE {
    APT_DI=3,
    APT_HEX=2,
    APT_HI=4,
    APT_IP=5,
    APT_TDATA=1,
    APT_TEXT=0
} AT_PARA_TYPE;

struct at_para_descriptor_t { // DWARF DIE: f94
    enum AT_PARA_TYPE pt;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    void * pvar;
    u32 option;
};

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




// WARNING: Variable defined which should be unmapped: strbuf
// DWARF DIE: 22dd

u32 get_text_para(char **ppara,void *pvar,u32 opt)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char local_110 [4];
  char strbuf [256];
  
  local_110[0] = '\0';
  iVar5 = 0;
  pcVar4 = *ppara;
  do {
    if ((int)(opt & 0x1ff) <= iVar5) {
      uVar2 = 0;
      pcVar3 = pcVar4;
_L0:
      iVar6 = 1;
_L0:
      *ppara = pcVar3;
      return iVar6 << 1 | uVar2;
    }
    cVar1 = *pcVar4;
    pcVar3 = pcVar4 + 1;
    if (cVar1 == ',') {
      uVar7 = 0x400;
      uVar2 = 0;
_L0:
      if ((uVar7 & opt) == 0) goto _L0;
      iVar6 = 1;
      if (iVar5 < (int)(opt & 0x1ff)) {
        local_110[iVar5] = '\0';
        _L0();
        iVar6 = 0;
      }
      goto _L0;
    }
    if (cVar1 == '\r') {
      if (pcVar4[1] == '\n') {
        pcVar3 = pcVar4 + 2;
      }
_L0:
      uVar7 = 0x800;
      uVar2 = 1;
      goto _L0;
    }
    if (cVar1 == '\n') goto _L0;
    pcVar4 = pcVar3;
    if (cVar1 != '\"') {
      local_110[iVar5] = cVar1;
      iVar5 += 1;
    }
  } while( true );
}



undefined4 _L0(void)

{
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 *unaff_s2;
  
  _L0();
  *unaff_s2 = unaff_s1;
  return unaff_s0;
}



// WARNING: Variable defined which should be unmapped: strbuf
// DWARF DIE: 2212

u32 get_tdata_para(char **ppara,void *pvar,u32 opt)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  char local_110 [4];
  char strbuf [256];
  
  local_110[0] = '\0';
  uVar6 = 0;
  pcVar5 = *ppara;
  do {
    if ((opt & 0x1ff) == uVar6) {
      uVar2 = 0;
      pcVar4 = pcVar5;
_L0:
      iVar7 = 1;
      uVar3 = uVar2;
_L0:
      *ppara = pcVar4;
      return iVar7 << 1 | uVar3;
    }
    cVar1 = *pcVar5;
    pcVar4 = pcVar5 + 1;
    if (cVar1 == '\r') {
      if (pcVar5[1] == '\n') {
        pcVar4 = pcVar5 + 2;
      }
_L0:
      uVar2 = 1;
      uVar3 = 1;
      if ((opt & 0x800) == 0) goto _L0;
      iVar7 = 1;
      if ((uVar6 != 0) && ((int)uVar6 < (int)(opt & 0x1ff))) {
        local_110[uVar6] = '\0';
        _L0();
        iVar7 = 0;
      }
      goto _L0;
    }
    if (cVar1 == '\n') goto _L0;
    local_110[uVar6] = cVar1;
    uVar6 += 1;
    pcVar5 = pcVar4;
  } while( true );
}



undefined4 _L0(void)

{
  undefined4 unaff_s0;
  undefined4 unaff_s1;
  undefined4 *unaff_s2;
  
  _L0();
  *unaff_s2 = unaff_s1;
  return unaff_s0;
}



// DWARF DIE: 1f54

u32 get_di_para(char **ppara,void *pvar,u32 opt)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char local_120 [4];
  char strbuf [256];
  
  pcVar2 = *ppara;
  local_120[0] = '\0';
  iVar4 = 0;
  do {
    cVar1 = *pcVar2;
    if (cVar1 == ',') {
      pcVar2 = pcVar2 + 1;
      uVar5 = 0x400;
      uVar6 = 0;
_L0:
      iVar3 = 0;
      if ((((uVar5 & opt) == 0) || (iVar4 == 0)) || (iVar4 == 0xb)) goto _L0;
      local_120[iVar4] = '\0';
      uVar5 = _L0();
      *(uint *)pvar = uVar5;
      goto _L0;
    }
    if (cVar1 == '\r') {
      if (pcVar2[1] == '\n') {
        pcVar2 = pcVar2 + 2;
      }
      else {
        pcVar2 = pcVar2 + 1;
      }
_L0:
      uVar5 = 0x800;
      uVar6 = 1;
      goto _L0;
    }
    if ((cVar1 == '\n') || (cVar1 == ':')) {
      pcVar2 = pcVar2 + 1;
      goto _L0;
    }
    if (9 < (byte)(cVar1 - 0x30U)) break;
    local_120[iVar4] = cVar1;
    iVar4 += 1;
    pcVar2 = pcVar2 + 1;
  } while (iVar4 != 0xb);
  uVar6 = 0;
_L0:
  iVar3 = 1;
_L0:
  *ppara = pcVar2;
  return iVar3 << 1 | uVar6;
}



uint _L0(void)

{
  undefined4 unaff_s0;
  int unaff_s1;
  uint uVar1;
  uint unaff_s2;
  undefined4 *unaff_s3;
  uint *in_stack_0000000c;
  
  uVar1 = _L0();
  *in_stack_0000000c = uVar1;
  *unaff_s3 = unaff_s0;
  return unaff_s1 << 1 | unaff_s2;
}



// DWARF DIE: 1c53

u32 get_ip_para(char **ppara,void *pvar,u32 opt)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  char acStack324 [4];
  char decbuf [4];
  char strbuf [256];
  
  pcVar7 = *ppara;
  decbuf[0] = '\0';
  iVar3 = 0;
  _L0();
  iVar6 = 0;
  do {
    cVar1 = *pcVar7;
    if (cVar1 == ',') {
      pcVar2 = pcVar7 + 1;
      uVar4 = 0x400;
      uVar5 = 0;
_L0:
      iVar8 = 0;
      if (((((uVar4 & opt) == 0) || (2 < iVar3 - 1U)) || (uVar4 = _LVL81(), 0xff < uVar4)) ||
         (decbuf[iVar6] = (char)uVar4, iVar6 != 3)) goto _L0;
      _LVL84();
      FUN_0001031a();
      goto _L0;
    }
    if (cVar1 == '\r') {
      if (pcVar7[1] == '\n') {
        pcVar2 = pcVar7 + 2;
      }
      else {
        pcVar2 = pcVar7 + 1;
      }
_L0:
      uVar4 = 0x800;
      uVar5 = 1;
      goto _L0;
    }
    if (cVar1 == '\n') {
      pcVar2 = pcVar7 + 1;
      goto _L0;
    }
    if (cVar1 != '\"') {
      if (cVar1 == '.') {
        uVar5 = iVar3 - 1;
        iVar3 = 1;
        if ((uVar5 < 3) && (uVar5 = _LVL96(acStack324), uVar5 < 0x100)) {
          decbuf[iVar6] = (char)uVar5;
          iVar6 += 1;
          iVar3 = 0;
        }
        _L0(acStack324,0,4);
        pcVar2 = pcVar7 + 1;
        if (iVar3 != 0) break;
      }
      else {
        pcVar2 = pcVar7;
        if ((9 < (byte)(cVar1 - 0x30U)) || (2 < iVar3)) break;
        acStack324[iVar3] = cVar1;
        iVar3 += 1;
      }
    }
    pcVar2 = pcVar7 + 1;
    pcVar7 = pcVar2;
  } while (iVar6 != 4);
  uVar5 = 0;
_L0:
  iVar8 = 1;
_L0:
  *ppara = pcVar2;
  return iVar8 << 1 | uVar5;
}



uint _L0(void)

{
  char cVar1;
  char *pcVar2;
  int unaff_s1;
  uint uVar3;
  char **unaff_s2;
  uint uVar4;
  int iVar5;
  char *unaff_s6;
  int iVar6;
  uint in_stack_0000000c;
  
  _L0();
  iVar5 = 0;
  do {
    cVar1 = *unaff_s6;
    if (cVar1 == ',') {
      pcVar2 = unaff_s6 + 1;
      uVar3 = 0x400;
      uVar4 = 0;
_L0:
      iVar6 = 0;
      if (((((uVar3 & in_stack_0000000c) == 0) || (2 < unaff_s1 - 1U)) ||
          (uVar3 = _LVL81(), 0xff < uVar3)) || ((&stack0x00000020)[iVar5] = (char)uVar3, iVar5 != 3)
         ) goto _L0;
      _LVL84();
      FUN_0001031a();
      goto _L0;
    }
    if (cVar1 == '\r') {
      if (unaff_s6[1] == '\n') {
        pcVar2 = unaff_s6 + 2;
      }
      else {
        pcVar2 = unaff_s6 + 1;
      }
_L0:
      uVar3 = 0x800;
      uVar4 = 1;
      goto _L0;
    }
    if (cVar1 == '\n') {
      pcVar2 = unaff_s6 + 1;
      goto _L0;
    }
    if (cVar1 != '\"') {
      if (cVar1 == '.') {
        uVar4 = unaff_s1 - 1;
        unaff_s1 = 1;
        if ((uVar4 < 3) && (uVar4 = _LVL96(&stack0x0000001c), uVar4 < 0x100)) {
          (&stack0x00000020)[iVar5] = (char)uVar4;
          iVar5 += 1;
          unaff_s1 = 0;
        }
        _L0(&stack0x0000001c,0,4);
        pcVar2 = unaff_s6 + 1;
        if (unaff_s1 != 0) break;
      }
      else {
        pcVar2 = unaff_s6;
        if ((9 < (byte)(cVar1 - 0x30U)) || (2 < unaff_s1)) break;
        (&stack0x0000001c)[unaff_s1] = cVar1;
        unaff_s1 += 1;
      }
    }
    pcVar2 = unaff_s6 + 1;
    unaff_s6 = pcVar2;
  } while (iVar5 != 4);
  uVar4 = 0;
_L0:
  iVar6 = 1;
_L0:
  *unaff_s2 = pcVar2;
  return iVar6 << 1 | uVar4;
}



uint _LVL81(void)

{
  undefined4 unaff_s0;
  uint uVar1;
  undefined4 *unaff_s2;
  uint unaff_s4;
  int unaff_s5;
  int unaff_s6;
  
  uVar1 = _LVL81();
  if ((uVar1 < 0x100) && ((&stack0x00000020)[unaff_s5] = (char)uVar1, unaff_s5 == 3)) {
    _LVL84();
    FUN_0001031a();
  }
  else {
    unaff_s6 = 1;
  }
  *unaff_s2 = unaff_s0;
  return unaff_s6 << 1 | unaff_s4;
}



uint _LVL84(void)

{
  undefined4 unaff_s0;
  undefined4 *unaff_s2;
  uint unaff_s4;
  int unaff_s6;
  
  _LVL84();
  FUN_0001031a();
  *unaff_s2 = unaff_s0;
  return unaff_s6 << 1 | unaff_s4;
}



uint FUN_0001031a(void)

{
  undefined4 unaff_s0;
  undefined4 *unaff_s2;
  uint unaff_s4;
  int unaff_s6;
  
  FUN_0001031a();
  *unaff_s2 = unaff_s0;
  return unaff_s6 << 1 | unaff_s4;
}



uint _LVL96(undefined *param_1)

{
  byte *pbVar1;
  int unaff_s1;
  uint uVar2;
  uint uVar3;
  byte **unaff_s2;
  uint unaff_s4;
  int unaff_s5;
  byte *pbVar4;
  byte *unaff_s6;
  int iVar5;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  uint in_stack_0000000c;
  
  do {
    uVar2 = _LVL96(param_1);
    if (uVar2 < 0x100) {
      (&stack0x00000020)[unaff_s5] = (char)uVar2;
      unaff_s5 += 1;
      unaff_s1 = 0;
    }
    do {
      pbVar1 = unaff_s6 + 1;
      _L0(&stack0x0000001c,0,4);
      pbVar4 = unaff_s6;
      if (unaff_s1 != 0) {
_L0:
        uVar2 = 0;
_L0:
        iVar5 = 1;
_L0:
        *unaff_s2 = pbVar1;
        return iVar5 << 1 | uVar2;
      }
_L0:
      unaff_s6 = pbVar4 + 1;
      if (unaff_s5 == 4) goto _L0;
      uVar2 = (uint)*unaff_s6;
      if (uVar2 == 0x2c) {
        pbVar1 = pbVar4 + 2;
        uVar3 = 0x400;
        uVar2 = 0;
_L0:
        iVar5 = 0;
        if (((((uVar3 & in_stack_0000000c) == 0) || (2 < unaff_s1 - 1U)) ||
            (uVar3 = _LVL81(), 0xff < uVar3)) ||
           ((&stack0x00000020)[unaff_s5] = (char)uVar3, unaff_s5 != 3)) goto _L0;
        _LVL84();
        FUN_0001031a();
        goto _L0;
      }
      if (uVar2 == unaff_s7) {
        if (pbVar4[2] == 10) {
          pbVar1 = pbVar4 + 3;
        }
        else {
          pbVar1 = pbVar4 + 2;
        }
_L0:
        uVar3 = 0x800;
        uVar2 = 1;
        goto _L0;
      }
      if (uVar2 == unaff_s8) {
        pbVar1 = pbVar4 + 2;
        goto _L0;
      }
      if (uVar2 == unaff_s9) {
        pbVar1 = pbVar4 + 2;
        pbVar4 = unaff_s6;
        goto _L0;
      }
      if (uVar2 != unaff_s10) {
        pbVar1 = unaff_s6;
        if ((unaff_s11 < (uVar2 - 0x30 & 0xff)) || ((int)unaff_s4 < unaff_s1)) goto _L0;
        pbVar1 = pbVar4 + 2;
        (&stack0x0000001c)[unaff_s1] = *unaff_s6;
        unaff_s1 += 1;
        pbVar4 = unaff_s6;
        goto _L0;
      }
      uVar2 = unaff_s1 - 1;
      unaff_s1 = 1;
    } while (unaff_s4 < uVar2);
    param_1 = &stack0x0000001c;
  } while( true );
}



uint _L0(undefined *param_1,undefined4 param_2,undefined4 param_3)

{
  byte *unaff_s0;
  int unaff_s1;
  uint uVar1;
  byte **unaff_s2;
  uint unaff_s4;
  uint uVar2;
  int unaff_s5;
  byte *pbVar3;
  byte *unaff_s6;
  int iVar4;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  uint in_stack_0000000c;
  
  do {
    _L0(param_1,param_2,param_3);
    pbVar3 = unaff_s6;
    if (unaff_s1 != 0) {
_L0:
      uVar2 = 0;
_L0:
      iVar4 = 1;
_L0:
      *unaff_s2 = unaff_s0;
      return iVar4 << 1 | uVar2;
    }
_L0:
    unaff_s6 = pbVar3 + 1;
    if (unaff_s5 == 4) goto _L0;
    uVar2 = (uint)*unaff_s6;
    if (uVar2 == 0x2c) {
      unaff_s0 = pbVar3 + 2;
      uVar1 = 0x400;
      uVar2 = 0;
_L0:
      iVar4 = 0;
      if (((((uVar1 & in_stack_0000000c) == 0) || (2 < unaff_s1 - 1U)) ||
          (uVar1 = _LVL81(), 0xff < uVar1)) ||
         ((&stack0x00000020)[unaff_s5] = (char)uVar1, unaff_s5 != 3)) goto _L0;
      _LVL84();
      FUN_0001031a();
      goto _L0;
    }
    if (uVar2 == unaff_s7) {
      if (pbVar3[2] == 10) {
        unaff_s0 = pbVar3 + 3;
      }
      else {
        unaff_s0 = pbVar3 + 2;
      }
_L0:
      uVar1 = 0x800;
      uVar2 = 1;
      goto _L0;
    }
    if (uVar2 == unaff_s8) {
      unaff_s0 = pbVar3 + 2;
      goto _L0;
    }
    if (uVar2 == unaff_s9) {
      unaff_s0 = pbVar3 + 2;
      pbVar3 = unaff_s6;
      goto _L0;
    }
    if (uVar2 != unaff_s10) {
      unaff_s0 = unaff_s6;
      if ((unaff_s11 < (uVar2 - 0x30 & 0xff)) || ((int)unaff_s4 < unaff_s1)) goto _L0;
      unaff_s0 = pbVar3 + 2;
      (&stack0x0000001c)[unaff_s1] = *unaff_s6;
      unaff_s1 += 1;
      pbVar3 = unaff_s6;
      goto _L0;
    }
    uVar2 = unaff_s1 - 1;
    unaff_s1 = 1;
    if ((uVar2 <= unaff_s4) && (uVar2 = _LVL96(&stack0x0000001c), uVar2 < 0x100)) {
      (&stack0x00000020)[unaff_s5] = (char)uVar2;
      unaff_s5 += 1;
      unaff_s1 = 0;
    }
    param_3 = 4;
    param_2 = 0;
    param_1 = &stack0x0000001c;
    unaff_s0 = pbVar3 + 2;
  } while( true );
}



// DWARF DIE: 25a7

int hex_to_num(char ch)

{
  undefined3 in_register_00002029;
  int iVar1;
  uint uVar2;
  
  iVar1 = CONCAT31(in_register_00002029,ch);
  if ((iVar1 - 0x30U & 0xff) < 10) {
    return iVar1 - 0x30U;
  }
  if ((iVar1 - 0x41U & 0xff) < 6) {
    return iVar1 - 0x37;
  }
  uVar2 = 0xffffffff;
  if ((iVar1 - 0x61U & 0xff) < 6) {
    uVar2 = iVar1 - 0x57;
  }
  return uVar2;
}



// DWARF DIE: 2062

u32 get_hex_para(char **ppara,void *pvar,u32 opt)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte abStack324 [4];
  char hexbuf [2];
  char strbuf [256];
  
  pbVar2 = (byte *)*ppara;
  hexbuf[0] = '\0';
  iVar5 = 0;
  iVar8 = 0;
  while (iVar8 < (int)(opt & 0x1ff)) {
    bVar1 = *pbVar2;
    if (bVar1 == 0x2c) {
      pbVar2 = pbVar2 + 1;
_L0:
      uVar6 = 0x400;
      uVar7 = 0;
_L0:
      iVar3 = 0;
      if (((uVar6 & opt) == 0) || (iVar5 != 2)) goto _L96;
      pbVar2 = pbVar2 + 1;
      uVar6 = _L0();
      uVar4 = _L0();
      hexbuf[iVar8] = (char)(uVar6 << 4) + (char)uVar4;
      _L0();
      FUN_00010534();
      goto _L0;
    }
    if (bVar1 == 0xd) {
      if (pbVar2[1] == 10) {
        pbVar2 = pbVar2 + 2;
      }
      else {
        pbVar2 = pbVar2 + 1;
      }
_L0:
      uVar6 = 0x800;
      uVar7 = 1;
      goto _L0;
    }
    if (bVar1 == 10) {
      pbVar2 = pbVar2 + 1;
      goto _L0;
    }
    if (bVar1 == 0x3a) goto _L0;
    if (bVar1 == 0x22) {
      pbVar2 = pbVar2 + 1;
    }
    else {
      if (iVar5 < 2) {
        if ((9 < (byte)(bVar1 - 0x30)) && (5 < (byte)((bVar1 & 0xdf) + 0xbf))) break;
        pbVar2 = pbVar2 + 1;
        abStack324[iVar5] = bVar1;
        iVar5 += 1;
      }
      else {
        if (iVar5 != 2) break;
        uVar6 = FUN_000105d6((uint)abStack324[0]);
        uVar7 = FUN_000105e4((uint)abStack324[1]);
        hexbuf[iVar8] = (char)uVar7 + (char)(uVar6 << 4);
        iVar8 += 1;
        iVar5 = 0;
      }
    }
  }
  uVar7 = 0;
_L96:
  iVar3 = 1;
_L0:
  *ppara = (char *)pbVar2;
  return iVar3 << 1 | uVar7;
}



uint _L0(void)

{
  undefined4 unaff_s0;
  int unaff_s1;
  uint uVar1;
  uint uVar2;
  uint unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  
  uVar1 = _L0();
  uVar2 = _L0();
  (&stack0x00000020)[unaff_s3] = (char)(uVar1 << 4) + (char)uVar2;
  _L0();
  FUN_00010534();
  *unaff_s4 = unaff_s0;
  return unaff_s1 << 1 | unaff_s2;
}



uint _L0(void)

{
  undefined4 unaff_s0;
  int unaff_s1;
  uint uVar1;
  uint unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  char unaff_s7;
  
  uVar1 = _L0();
  (&stack0x00000020)[unaff_s3] = unaff_s7 + (char)uVar1;
  _L0();
  FUN_00010534();
  *unaff_s4 = unaff_s0;
  return unaff_s1 << 1 | unaff_s2;
}



uint _L0(void)

{
  undefined4 unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  undefined4 *unaff_s4;
  
  _L0();
  FUN_00010534();
  *unaff_s4 = unaff_s0;
  return unaff_s1 << 1 | unaff_s2;
}



uint FUN_00010534(void)

{
  undefined4 unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  undefined4 *unaff_s4;
  
  FUN_00010534();
  *unaff_s4 = unaff_s0;
  return unaff_s1 << 1 | unaff_s2;
}



uint FUN_000105d6(uint param_1)

{
  byte bVar1;
  byte *unaff_s0;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint unaff_s2;
  int unaff_s3;
  byte **unaff_s4;
  int unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  int unaff_s11;
  uint in_stack_0000000c;
  byte in_stack_0000001c;
  byte in_stack_0000001d;
  
code_r0x000105d6:
  uVar4 = FUN_000105d6(param_1);
  uVar5 = FUN_000105e4((uint)in_stack_0000001d);
  (&stack0x00000020)[unaff_s3] = (char)uVar5 + (char)(uVar4 << 4);
  unaff_s3 += 1;
  iVar6 = 0;
_L0:
  do {
    if (unaff_s6 <= unaff_s3) goto _L0;
    bVar1 = *unaff_s0;
    uVar4 = (uint)bVar1;
    if (uVar4 == unaff_s2) {
      unaff_s0 = unaff_s0 + 1;
_L0:
      uVar4 = 0x400;
      uVar5 = 0;
_L0:
      iVar2 = 0;
      if (((uVar4 & in_stack_0000000c) == 0) || (iVar6 != 2)) goto _L96;
      unaff_s0 = unaff_s0 + 1;
      uVar4 = _L0();
      uVar3 = _L0();
      (&stack0x00000020)[unaff_s3] = (char)(uVar4 << 4) + (char)uVar3;
      _L0();
      FUN_00010534();
      goto _L0;
    }
    if (uVar4 == unaff_s7) {
      if (unaff_s0[1] == 10) {
        unaff_s0 = unaff_s0 + 2;
      }
      else {
        unaff_s0 = unaff_s0 + 1;
      }
_L0:
      uVar4 = 0x800;
      uVar5 = 1;
      goto _L0;
    }
    if (uVar4 == unaff_s8) {
      unaff_s0 = unaff_s0 + 1;
      goto _L0;
    }
    if (uVar4 == unaff_s9) goto _L0;
    if (uVar4 == unaff_s10) {
      unaff_s0 = unaff_s0 + 1;
      goto _L0;
    }
    if (unaff_s11 < iVar6) break;
    if ((9 < (uVar4 - 0x30 & 0xff)) && (5 < ((uVar4 & 0xffffffdf) - 0x41 & 0xff))) goto _L0;
    unaff_s0 = unaff_s0 + 1;
    (&stack0x0000001c)[iVar6] = bVar1;
    iVar6 += 1;
  } while( true );
  if (iVar6 != 2) {
_L0:
    uVar5 = 0;
_L96:
    iVar2 = 1;
_L0:
    *unaff_s4 = unaff_s0;
    return iVar2 << 1 | uVar5;
  }
  param_1 = (uint)in_stack_0000001c;
  goto code_r0x000105d6;
}



uint FUN_000105e4(uint param_1)

{
  byte bVar1;
  byte *unaff_s0;
  int iVar2;
  uint unaff_s1;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint unaff_s2;
  int unaff_s3;
  byte **unaff_s4;
  int unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  int unaff_s11;
  uint in_stack_0000000c;
  byte in_stack_0000001c;
  byte in_stack_0000001d;
  
code_r0x000105e4:
  uVar4 = FUN_000105e4(param_1);
  (&stack0x00000020)[unaff_s3] = (char)uVar4 + (char)(unaff_s1 << 4);
  unaff_s3 += 1;
  iVar5 = 0;
_L0:
  do {
    if (unaff_s6 <= unaff_s3) goto _L0;
    bVar1 = *unaff_s0;
    uVar4 = (uint)bVar1;
    if (uVar4 == unaff_s2) {
      unaff_s0 = unaff_s0 + 1;
_L0:
      uVar4 = 0x400;
      uVar6 = 0;
_L0:
      iVar2 = 0;
      if (((uVar4 & in_stack_0000000c) == 0) || (iVar5 != 2)) goto _L96;
      unaff_s0 = unaff_s0 + 1;
      uVar4 = _L0();
      uVar3 = _L0();
      (&stack0x00000020)[unaff_s3] = (char)(uVar4 << 4) + (char)uVar3;
      _L0();
      FUN_00010534();
      goto _L0;
    }
    if (uVar4 == unaff_s7) {
      if (unaff_s0[1] == 10) {
        unaff_s0 = unaff_s0 + 2;
      }
      else {
        unaff_s0 = unaff_s0 + 1;
      }
_L0:
      uVar4 = 0x800;
      uVar6 = 1;
      goto _L0;
    }
    if (uVar4 == unaff_s8) {
      unaff_s0 = unaff_s0 + 1;
      goto _L0;
    }
    if (uVar4 == unaff_s9) goto _L0;
    if (uVar4 == unaff_s10) {
      unaff_s0 = unaff_s0 + 1;
      goto _L0;
    }
    if (unaff_s11 < iVar5) break;
    if ((9 < (uVar4 - 0x30 & 0xff)) && (5 < ((uVar4 & 0xffffffdf) - 0x41 & 0xff))) goto _L0;
    unaff_s0 = unaff_s0 + 1;
    (&stack0x0000001c)[iVar5] = bVar1;
    iVar5 += 1;
  } while( true );
  if (iVar5 != 2) {
_L0:
    uVar6 = 0;
_L96:
    iVar2 = 1;
_L0:
    *unaff_s4 = unaff_s0;
    return iVar2 << 1 | uVar6;
  }
  unaff_s1 = FUN_000105d6((uint)in_stack_0000001c);
  param_1 = (uint)in_stack_0000001d;
  goto code_r0x000105e4;
}



// DWARF DIE: 1e52

u32 get_hi_para(char **ppara,void *pvar,u32 opt)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte local_120 [4];
  char strbuf [256];
  
  local_120[0] = 0;
  iVar5 = 0;
  pbVar4 = (byte *)*ppara;
  do {
    pbVar2 = pbVar4;
    bVar1 = *pbVar2;
    if (bVar1 == 0x2c) {
      pbVar2 = pbVar2 + 1;
      uVar6 = 0x400;
      uVar7 = 0;
_L0:
      iVar3 = 0;
      if ((((uVar6 & opt) == 0) || (iVar5 == 0)) || (10 < iVar5)) goto _L0;
      local_120[iVar5] = 0;
      _L0();
      goto _L0;
    }
    if (bVar1 == 0xd) {
      if (pbVar2[1] == 10) {
        pbVar2 = pbVar2 + 2;
      }
      else {
        pbVar2 = pbVar2 + 1;
      }
_L0:
      uVar6 = 0x800;
      uVar7 = 1;
      goto _L0;
    }
    if (bVar1 == 10) {
      pbVar2 = pbVar2 + 1;
      goto _L0;
    }
    if (bVar1 != 0x22) {
      if ((9 < (byte)(bVar1 - 0x30)) && (5 < (byte)((bVar1 & 0xdf) + 0xbf))) break;
      local_120[iVar5] = bVar1;
      iVar5 += 1;
    }
    pbVar4 = pbVar2 + 1;
    pbVar2 = pbVar2 + 1;
  } while (iVar5 != 0xb);
  uVar7 = 0;
_L0:
  iVar3 = 1;
_L0:
  *ppara = (char *)pbVar2;
  return iVar3 << 1 | uVar7;
}



uint _L0(void)

{
  undefined4 unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  undefined4 *unaff_s3;
  
  _L0();
  *unaff_s3 = unaff_s0;
  return unaff_s1 << 1 | unaff_s2;
}



// DWARF DIE: 2489

s32 at_get_value(char *strbuf,s32 pt,void *pvar,s32 vsize)

{
  s32 sVar1;
  int iVar2;
  int iVar3;
  
  sVar1 = 2;
  if (pvar != (void *)0x0) {
    if (pt == 3) {
      _L0();
    }
    else {
      if (pt == 4) {
        sVar1 = _L0();
        return sVar1;
      }
      if (pt == 2) {
        if (0 < vsize) {
          FUN_0001077e();
        }
        for (iVar2 = 1; iVar2 < vsize; iVar2 += 1) {
          iVar3 = FUN_00010792();
          FUN_000107a8((int)(strbuf + iVar3),(uint)*(byte *)((int)pvar + iVar2));
        }
      }
      else {
        if (pt != 5) {
          if (pt == 0) {
            FUN_0001080a();
            return 0;
          }
          return 1;
        }
        if (0 < vsize) {
          FUN_000107ca();
        }
        for (iVar2 = 1; iVar2 < vsize; iVar2 += 1) {
          iVar3 = FUN_000107de();
          FUN_000107f4((int)(strbuf + iVar3),(uint)*(byte *)((int)pvar + iVar2));
        }
      }
    }
    sVar1 = 0;
  }
  return sVar1;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



undefined4 FUN_0001077e(void)

{
  int iVar1;
  int unaff_s1;
  int iVar2;
  int unaff_s2;
  int unaff_s3;
  
  FUN_0001077e();
  for (iVar1 = 1; iVar1 < unaff_s2; iVar1 += 1) {
    iVar2 = FUN_00010792();
    FUN_000107a8(iVar2 + unaff_s3,(uint)*(byte *)(unaff_s1 + iVar1));
  }
  return 0;
}



undefined4 FUN_00010792(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  
  do {
    iVar1 = FUN_00010792();
    FUN_000107a8(iVar1 + unaff_s3,(uint)*(byte *)(unaff_s1 + unaff_s0));
    unaff_s0 += 1;
  } while (unaff_s0 < unaff_s2);
  return 0;
}



undefined4 FUN_000107a8(int param_1,uint param_2)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  
  while( true ) {
    FUN_000107a8(param_1,param_2);
    unaff_s0 += 1;
    if (unaff_s2 <= unaff_s0) break;
    iVar1 = FUN_00010792();
    param_2 = (uint)*(byte *)(unaff_s1 + unaff_s0);
    param_1 = iVar1 + unaff_s3;
  }
  return 0;
}



undefined4 FUN_000107ca(void)

{
  int iVar1;
  int unaff_s1;
  int iVar2;
  int unaff_s2;
  int unaff_s3;
  
  FUN_000107ca();
  for (iVar1 = 1; iVar1 < unaff_s2; iVar1 += 1) {
    iVar2 = FUN_000107de();
    FUN_000107f4(iVar2 + unaff_s3,(uint)*(byte *)(unaff_s1 + iVar1));
  }
  return 0;
}



undefined4 FUN_000107de(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  
  do {
    iVar1 = FUN_000107de();
    FUN_000107f4(iVar1 + unaff_s3,(uint)*(byte *)(unaff_s1 + unaff_s0));
    unaff_s0 += 1;
  } while (unaff_s0 < unaff_s2);
  return 0;
}



undefined4 FUN_000107f4(int param_1,uint param_2)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  
  while( true ) {
    FUN_000107f4(param_1,param_2);
    unaff_s0 += 1;
    if (unaff_s2 <= unaff_s0) break;
    iVar1 = FUN_000107de();
    param_2 = (uint)*(byte *)(unaff_s1 + unaff_s0);
    param_1 = iVar1 + unaff_s3;
  }
  return 0;
}



void FUN_0001080a(void)

{
  FUN_0001080a();
  return;
}



// DWARF DIE: 241d

s32 at_set_value(s32 pt,void *pvar,s32 vsize,at_value_t *value)

{
  s32 sVar1;
  
  if ((uint)pt < 6) {
                    // WARNING: Could not emulate address calculation at 0x00010834
                    // WARNING: Treating indirect jump as call
    sVar1 = (**(code **)(pt << 2))(pvar,value,*(code **)(pt << 2));
    return sVar1;
  }
  return -1;
}



void _L0(void)

{
  _L0();
  return;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 25de

int at_atoi(char *str)

{
  int iVar1;
  
  iVar1 = at_atoi(str);
  return iVar1;
}



// DWARF DIE: 260c

AT_ERROR_CODE at_get_newline(char *para,s32 size)

{
  if ((*para != '\n') && (*para != '\r')) {
    return AEC_CMD_ERROR;
  }
  return AEC_OK;
}



// DWARF DIE: 1b24

AT_ERROR_CODE at_get_parameters(char **ppara,at_para_descriptor_t *list,s32 lsize,s32 *pcnt)

{
  AT_ERROR_CODE extraout_a0;
  AT_ERROR_CODE AVar1;
  code *UNRECOVERED_JUMPTABLE;
  char *pcStack52;
  char *para;
  
  pcStack52 = *ppara;
  if ((list == (at_para_descriptor_t *)0x0) || (lsize == 0)) {
    _LVL233();
    AVar1 = extraout_a0;
  }
  else {
    if (lsize < 1) {
      AVar1 = AEC_OK;
      *ppara = pcStack52;
      *pcnt = 0;
    }
    else {
      if (list->pt < 6) {
        UNRECOVERED_JUMPTABLE = *(code **)((uint)list->pt * 4);
                    // WARNING: Could not emulate address calculation at 0x00010910
                    // WARNING: Treating indirect jump as call
        AVar1 = (*UNRECOVERED_JUMPTABLE)(&pcStack52,list->pvar,list->option,UNRECOVERED_JUMPTABLE);
        return AVar1;
      }
      AVar1 = AEC_PARA_ERROR;
    }
  }
  return AVar1;
}



void _LVL233(void)

{
  _LVL233();
  return;
}



int _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  int *unaff_s6;
  uint unaff_s7;
  undefined4 in_stack_0000000c;
  
  uVar2 = _L0();
  uVar3 = uVar2 >> 1 & 1;
  if (uVar3 == 0) {
    unaff_s1 += 1;
  }
  if (((uVar2 & 1) == 0) && (uVar3 == 0)) {
    if (unaff_s2 + 1 < unaff_s5) {
      if (unaff_s7 < *(byte *)(unaff_s0 + 0xc)) {
        return 4;
      }
      UNRECOVERED_JUMPTABLE = *(code **)((uint)*(byte *)(unaff_s0 + 0xc) * 4 + unaff_s3);
                    // WARNING: Could not recover jumptable at 0x00010918. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar1 = (*UNRECOVERED_JUMPTABLE)
                        (&stack0x0000000c,*(undefined4 *)(unaff_s0 + 0x10),
                         *(undefined4 *)(unaff_s0 + 0x14),UNRECOVERED_JUMPTABLE);
      return iVar1;
    }
    uVar3 = 0;
  }
  *unaff_s4 = in_stack_0000000c;
  *unaff_s6 = unaff_s1;
  return uVar3 << 2;
}



int _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  int *unaff_s6;
  uint unaff_s7;
  undefined4 in_stack_0000000c;
  
  uVar3 = _L0();
  uVar2 = uVar3 >> 1 & 1;
  if (uVar2 == 0) {
    unaff_s1 += 1;
  }
  if (((uVar3 & 1) == 0) && (uVar2 == 0)) {
    if (unaff_s2 + 1 < unaff_s5) {
      if (unaff_s7 < *(byte *)(unaff_s0 + 0xc)) {
        return 4;
      }
      UNRECOVERED_JUMPTABLE = *(code **)((uint)*(byte *)(unaff_s0 + 0xc) * 4 + unaff_s3);
                    // WARNING: Could not recover jumptable at 0x00010918. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar1 = (*UNRECOVERED_JUMPTABLE)
                        (&stack0x0000000c,*(undefined4 *)(unaff_s0 + 0x10),
                         *(undefined4 *)(unaff_s0 + 0x14),UNRECOVERED_JUMPTABLE);
      return iVar1;
    }
    uVar2 = 0;
  }
  *unaff_s4 = in_stack_0000000c;
  *unaff_s6 = unaff_s1;
  return uVar2 << 2;
}



int _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  int *unaff_s6;
  uint unaff_s7;
  undefined4 in_stack_0000000c;
  
  uVar3 = _L0();
  uVar2 = uVar3 >> 1 & 1;
  if (uVar2 == 0) {
    unaff_s1 += 1;
  }
  if (((uVar3 & 1) == 0) && (uVar2 == 0)) {
    if (unaff_s2 + 1 < unaff_s5) {
      if (unaff_s7 < *(byte *)(unaff_s0 + 0xc)) {
        return 4;
      }
      UNRECOVERED_JUMPTABLE = *(code **)((uint)*(byte *)(unaff_s0 + 0xc) * 4 + unaff_s3);
                    // WARNING: Could not recover jumptable at 0x00010918. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar1 = (*UNRECOVERED_JUMPTABLE)
                        (&stack0x0000000c,*(undefined4 *)(unaff_s0 + 0x10),
                         *(undefined4 *)(unaff_s0 + 0x14),UNRECOVERED_JUMPTABLE);
      return iVar1;
    }
    uVar2 = 0;
  }
  *unaff_s4 = in_stack_0000000c;
  *unaff_s6 = unaff_s1;
  return uVar2 << 2;
}



int _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  int *unaff_s6;
  uint unaff_s7;
  undefined4 in_stack_0000000c;
  
  uVar3 = _L0();
  uVar2 = uVar3 >> 1 & 1;
  if (uVar2 == 0) {
    unaff_s1 += 1;
  }
  if (((uVar3 & 1) == 0) && (uVar2 == 0)) {
    if (unaff_s2 + 1 < unaff_s5) {
      if (unaff_s7 < *(byte *)(unaff_s0 + 0xc)) {
        return 4;
      }
      UNRECOVERED_JUMPTABLE = *(code **)((uint)*(byte *)(unaff_s0 + 0xc) * 4 + unaff_s3);
                    // WARNING: Could not recover jumptable at 0x00010918. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar1 = (*UNRECOVERED_JUMPTABLE)
                        (&stack0x0000000c,*(undefined4 *)(unaff_s0 + 0x10),
                         *(undefined4 *)(unaff_s0 + 0x14),UNRECOVERED_JUMPTABLE);
      return iVar1;
    }
    uVar2 = 0;
  }
  *unaff_s4 = in_stack_0000000c;
  *unaff_s6 = unaff_s1;
  return uVar2 << 2;
}



int _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  int *unaff_s6;
  uint unaff_s7;
  undefined4 in_stack_0000000c;
  
  uVar3 = _L0();
  uVar2 = uVar3 >> 1 & 1;
  if (uVar2 == 0) {
    unaff_s1 += 1;
  }
  if (((uVar3 & 1) == 0) && (uVar2 == 0)) {
    if (unaff_s2 + 1 < unaff_s5) {
      if (unaff_s7 < *(byte *)(unaff_s0 + 0xc)) {
        return 4;
      }
      UNRECOVERED_JUMPTABLE = *(code **)((uint)*(byte *)(unaff_s0 + 0xc) * 4 + unaff_s3);
                    // WARNING: Could not recover jumptable at 0x00010918. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar1 = (*UNRECOVERED_JUMPTABLE)
                        (&stack0x0000000c,*(undefined4 *)(unaff_s0 + 0x10),
                         *(undefined4 *)(unaff_s0 + 0x14),UNRECOVERED_JUMPTABLE);
      return iVar1;
    }
    uVar2 = 0;
  }
  *unaff_s4 = in_stack_0000000c;
  *unaff_s6 = unaff_s1;
  return uVar2 << 2;
}



int _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  int *unaff_s6;
  uint unaff_s7;
  undefined4 in_stack_0000000c;
  
  uVar3 = _L0();
  uVar2 = uVar3 >> 1 & 1;
  if (uVar2 == 0) {
    unaff_s1 += 1;
  }
  if (((uVar3 & 1) == 0) && (uVar2 == 0)) {
    if (unaff_s2 + 1 < unaff_s5) {
      if (unaff_s7 < *(byte *)(unaff_s0 + 0xc)) {
        return 4;
      }
      UNRECOVERED_JUMPTABLE = *(code **)((uint)*(byte *)(unaff_s0 + 0xc) * 4 + unaff_s3);
                    // WARNING: Could not recover jumptable at 0x00010918. Too many branches
                    // WARNING: Treating indirect jump as call
      iVar1 = (*UNRECOVERED_JUMPTABLE)
                        (&stack0x0000000c,*(undefined4 *)(unaff_s0 + 0x10),
                         *(undefined4 *)(unaff_s0 + 0x14),UNRECOVERED_JUMPTABLE);
      return iVar1;
    }
    uVar2 = 0;
  }
  *unaff_s4 = in_stack_0000000c;
  *unaff_s6 = unaff_s1;
  return uVar2 << 2;
}


