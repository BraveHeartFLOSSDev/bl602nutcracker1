typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef uchar __uint8_t;

typedef ulong __uint32_t;

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictb4_for___value anon_union.conflictb4_for___value, *Panon_union.conflictb4_for___value;

typedef uint wint_t;

union anon_union.conflictb4_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflictb4_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef union anon_union.conflictb4 anon_union.conflictb4, *Panon_union.conflictb4;

union anon_union.conflictb4 {
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct at_ip_para_t at_ip_para_t, *Pat_ip_para_t;

typedef uchar at_ip_t[4];

struct at_ip_para_t {
    at_ip_t ip;
    at_ip_t getway;
    at_ip_t netmask;
    at_ip_t dns1;
    at_ip_t dns2;
};

typedef struct anon_struct.conflict175b anon_struct.conflict175b, *Panon_struct.conflict175b;

struct anon_struct.conflict175b {
    int uartId;
    int uartBaud;
    int dataBit;
    int parity;
    int stopBit;
    int hwfc;
};

typedef enum AT_CALLBACK_CMD {
    ACC_CIPMUX=51,
    ACC_CIPCLOSE=45,
    ACC_CWDHCP_CUR=35,
    ACC_CIPDNS_CUR=54,
    ACC_CIPSTART=43,
    ACC_SYSGPIODIR=60,
    ACC_WIFI=15,
    ACC_CWMODE_GET=29,
    ACC_CWJAP_INFO=31,
    ACC_SYSIOSETCFG=58,
    ACC_CIPSENDBUF=44,
    ACC_PEER=7,
    ACC_DEEP_SLEEP=26,
    ACC_LOAD=4,
    ACC_SYSGPIOWRITE=61,
    ACC_CWMODE_CUR=28,
    ACC_CWLAP=33,
    ACC_DELETEAP=63,
    ACC_TCPSERVER=49,
    ACC_GPIOW=19,
    ACC_APCFG=39,
    ACC_ACT=0,
    ACC_PING=8,
    ACC_CIPSTAMAC_CUR=36,
    ACC_TCPSERVERMAXCONN=50,
    ACC_CIPSSLCCONF_P=46,
    ACC_OTA=64,
    ACC_BLESYNC=65,
    ACC_SLEEP=25,
    ACC_HTTP_REQ=53,
    ACC_SAVE=3,
    ACC_GPIOR=18,
    ACC_SCAN=20,
    ACC_SOCKD=14,
    ACC_CIPSSLCALPN=48,
    ACC_SOCKC=13,
    ACC_CIPSTA_IP=66,
    ACC_WAKEUPGPIO=27,
    ACC_SOCKON=9,
    ACC_AP_STA_GET=40,
    ACC_SOCKQ=11,
    ACC_GPIOC=17,
    ACC_CIPMODE=52,
    ACC_CWJAP_CUR=30,
    ACC_SOCKR=12,
    ACC_SOCKW=10,
    ACC_CIPRECVDATA=55,
    ACC_CIPSTA_CUR=37,
    ACC_STATUS=5,
    ACC_CIPRECVMODE=56,
    ACC_MODE=2,
    ACC_REASSOCIATE=16,
    ACC_CWLAPOPT=32,
    ACC_UART_GET=24,
    ACC_CIPDOMAIN=42,
    ACC_GMR=21,
    ACC_RESTORE=22,
    ACC_UART_SET=23,
    ACC_CWQAP=34,
    ACC_CIPSSLCSNI=47,
    ACC_CIPSTATUS=41,
    ACC_CIPSEND=57,
    ACC_CIPSTA_IP_GET=67,
    ACC_RST=1,
    ACC_FACTORY=6,
    ACC_SYSIOGETCFG=59,
    ACC_SYSGPIOREAD=62,
    ACC_CWHOSTNAME=38
} AT_CALLBACK_CMD;

typedef struct at_callback_para_t at_callback_para_t, *Pat_callback_para_t;

typedef struct at_config_t at_config_t, *Pat_config_t;

typedef struct at_status_t at_status_t, *Pat_status_t;

typedef union anon_union.conflict19f5_for_u anon_union.conflict19f5_for_u, *Panon_union.conflict19f5_for_u;

typedef int at_di_t;

typedef char at_text_t;

typedef uchar at_hex_t;

typedef uint at_hi_t;

typedef struct anon_struct.conflict16d8 anon_struct.conflict16d8, *Panon_struct.conflict16d8;

typedef struct anon_struct.conflict1702 anon_struct.conflict1702, *Panon_struct.conflict1702;

typedef struct at_tcpserver_para_t at_tcpserver_para_t, *Pat_tcpserver_para_t;

typedef struct anon_struct.conflict1734 anon_struct.conflict1734, *Panon_struct.conflict1734;

typedef struct anon_struct.conflict17ba anon_struct.conflict17ba, *Panon_struct.conflict17ba;

typedef struct anon_struct.conflict17fa anon_struct.conflict17fa, *Panon_struct.conflict17fa;

typedef struct anon_struct.conflict1831 anon_struct.conflict1831, *Panon_struct.conflict1831;

typedef struct anon_struct.conflict18a0 anon_struct.conflict18a0, *Panon_struct.conflict18a0;

typedef struct anon_struct.conflict18b9 anon_struct.conflict18b9, *Panon_struct.conflict18b9;

typedef struct anon_struct.conflict18e2 anon_struct.conflict18e2, *Panon_struct.conflict18e2;

typedef struct anon_struct.conflict192b anon_struct.conflict192b, *Panon_struct.conflict192b;

typedef struct at_network_para_t at_network_para_t, *Pat_network_para_t;

typedef struct at_sendData_para_t at_sendData_para_t, *Pat_sendData_para_t;

typedef struct at_close_para_t at_close_para_t, *Pat_close_para_t;

typedef struct at_client_ssl_path_para_t at_client_ssl_path_para_t, *Pat_client_ssl_path_para_t;

typedef struct at_client_ssl_sni_t at_client_ssl_sni_t, *Pat_client_ssl_sni_t;

typedef struct at_client_ssl_alpn_t at_client_ssl_alpn_t, *Pat_client_ssl_alpn_t;

typedef struct at_ble_sync_mode_t at_ble_sync_mode_t, *Pat_ble_sync_mode_t;

typedef struct anon_struct.conflict1944 anon_struct.conflict1944, *Panon_struct.conflict1944;

typedef struct anon_struct.conflict1978 anon_struct.conflict1978, *Panon_struct.conflict1978;

typedef int s32;

typedef uchar u8;

typedef __uint32_t uint32_t;

typedef __uint8_t uint8_t;

struct anon_struct.conflict18e2 {
    char hostname[128];
    uint8_t type;
    uint8_t content_type;
    undefined field_0x82;
    undefined field_0x83;
    uint8_t * data;
};

struct anon_struct.conflict18a0 {
    char hostname[33];
};

struct anon_struct.conflict1978 {
    int ID;
    int mode;
};

struct anon_struct.conflict1702 {
    s32 value;
};

struct anon_struct.conflict1944 {
    int ID;
    int mode;
    int pull;
};

struct at_network_para_t {
    at_di_t linkId;
    at_text_t type[4];
    at_text_t hostname[256];
    at_di_t port;
    at_di_t localport;
    at_di_t keepAlive;
};

struct at_tcpserver_para_t {
    at_di_t port;
    at_di_t enable;
    at_di_t tls;
    at_di_t ca;
};

struct anon_struct.conflict16d8 {
    char hostname[256];
};

struct anon_struct.conflict1734 {
    s32 len;
    u8 * buf;
};

struct at_client_ssl_alpn_t {
    at_di_t linkId;
    at_text_t * * alpn;
};

struct at_client_ssl_sni_t {
    at_di_t linkId;
    at_text_t sni[256];
};

struct anon_struct.conflict1831 {
    char ssid[64];
    char psk[64];
    int chl;
    int ecn;
    int max_conn;
    int hidden;
};

struct at_sendData_para_t {
    at_di_t linkId;
    at_di_t bufferlen;
    at_text_t * buffer;
    at_text_t hostname[256];
    at_di_t port;
};

struct at_client_ssl_path_para_t {
    at_di_t linkId;
    at_di_t auth_mode;
    at_text_t * ca;
    at_text_t * key;
    at_text_t * cert;
};

struct anon_struct.conflict192b {
    at_ip_t setdnsip;
};

struct at_ble_sync_mode_t {
    int mode;
};

struct anon_struct.conflict17fa {
    char ssid[33];
    char pwd[33];
};

struct at_close_para_t {
    at_di_t linkId;
};

struct anon_struct.conflict17ba {
    uint32_t sleep_time;
    int weakup_pin;
};

struct anon_struct.conflict18b9 {
    char hostname[128];
};

union anon_union.conflict19f5_for_u {
    struct anon_struct.conflict16d8 ping;
    struct anon_struct.conflict1702 wifi;
    struct anon_struct.conflict1702 scan;
    struct at_tcpserver_para_t tcp_server;
    struct anon_struct.conflict1734 mode;
    struct anon_struct.conflict175b uart;
    struct anon_struct.conflict17ba sleep;
    struct anon_struct.conflict1702 wifiMode;
    struct anon_struct.conflict17fa joinParam;
    struct at_ip_para_t at_ip_para;
    struct anon_struct.conflict1831 apcfgParam;
    struct anon_struct.conflict18a0 iphostname;
    struct anon_struct.conflict18b9 dns_parse;
    struct anon_struct.conflict18e2 http_req;
    struct anon_struct.conflict192b set_dns;
    struct at_network_para_t net_param;
    struct at_sendData_para_t send_param;
    struct at_close_para_t close_id;
    struct at_client_ssl_path_para_t client_ssl_path_cfg;
    struct at_client_ssl_sni_t client_ssl_sni_cfg;
    struct at_client_ssl_alpn_t client_ssl_alpn_cfg;
    struct at_ble_sync_mode_t ble_sync_mode;
    struct anon_struct.conflict1944 setgpio_para;
    struct anon_struct.conflict1978 setiodir_para;
    struct anon_struct.conflict1978 writeiodata_para;
    struct anon_struct.conflict1702 readiodata_para;
    struct anon_struct.conflict1702 deleteap_para;
};

struct at_callback_para_t {
    struct at_config_t * cfg;
    struct at_status_t * sts;
    union anon_union.conflict19f5_for_u u;
};

struct at_config_t {
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

struct at_status_t {
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

typedef struct at_callback_rsp_t at_callback_rsp_t, *Pat_callback_rsp_t;

struct at_callback_rsp_t {
    u8 status;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    s32 type;
    void * vptr;
    s32 vsize;
};

typedef union anon_union.conflict19f5 anon_union.conflict19f5, *Panon_union.conflict19f5;

union anon_union.conflict19f5 {
    struct anon_struct.conflict16d8 ping;
    struct anon_struct.conflict1702 wifi;
    struct anon_struct.conflict1702 scan;
    struct at_tcpserver_para_t tcp_server;
    struct anon_struct.conflict1734 mode;
    struct anon_struct.conflict175b uart;
    struct anon_struct.conflict17ba sleep;
    struct anon_struct.conflict1702 wifiMode;
    struct anon_struct.conflict17fa joinParam;
    struct at_ip_para_t at_ip_para;
    struct anon_struct.conflict1831 apcfgParam;
    struct anon_struct.conflict18a0 iphostname;
    struct anon_struct.conflict18b9 dns_parse;
    struct anon_struct.conflict18e2 http_req;
    struct anon_struct.conflict192b set_dns;
    struct at_network_para_t net_param;
    struct at_sendData_para_t send_param;
    struct at_close_para_t close_id;
    struct at_client_ssl_path_para_t client_ssl_path_cfg;
    struct at_client_ssl_sni_t client_ssl_sni_cfg;
    struct at_client_ssl_alpn_t client_ssl_alpn_cfg;
    struct at_ble_sync_mode_t ble_sync_mode;
    struct anon_struct.conflict1944 setgpio_para;
    struct anon_struct.conflict1978 setiodir_para;
    struct anon_struct.conflict1978 writeiodata_para;
    struct anon_struct.conflict1702 readiodata_para;
    struct anon_struct.conflict1702 deleteap_para;
};

typedef enum AT_ERROR_CODE {
    AEC_OUT_OF_RANGE=9,
    AEC_NULL_POINTER=8,
    AEC_SEND_TIMEOUT=24,
    AEC_SCAN_FAIL=10,
    AEC_IMPROPER_OPERATION=21,
    AEC_NO_RESPONSE=27,
    AEC_NO_PARA=5,
    AEC_BLANK_LINE=1,
    AEC_CONNECT_FAIL=14,
    AEC_UNSUPPORTED=6,
    AEC_PARA_ERROR=4,
    AEC_SWITCH_MODE=13,
    AEC_UPGRADE_FAILED=25,
    AEC_BIND_FAIL=15,
    AEC_READ_ONLY=11,
    AEC_UNDEFINED=26,
    AEC_OK=0,
    AEC_SOCKET_FAIL=16,
    AEC_NETWORK_ERROR=19,
    AEC_SEND_READY=23,
    AEC_SOCKET_EXISTING=22,
    AEC_CMD_FAIL=2,
    AEC_NOT_FOUND=7,
    AEC_DISCONNECT=18,
    AEC_NOT_ENOUGH_MEMORY=20,
    AEC_LIMITED=17,
    AEC_SEND_FAIL=12,
    AEC_CMD_ERROR=3
} AT_ERROR_CODE;

typedef struct at_callback_t at_callback_t, *Pat_callback_t;

struct at_callback_t {
    AT_ERROR_CODE (* handle_cb)(enum AT_CALLBACK_CMD, struct at_callback_para_t *, struct at_callback_rsp_t *);
    s32 (* dump_cb)(u8 *, s32);
};

typedef enum AT_PARA_OPTION {
    APO_RW=1,
    APO_RO=0
} AT_PARA_OPTION;

typedef union at_value_t at_value_t, *Pat_value_t;

union at_value_t {
    at_text_t text[256];
    at_hex_t hex[256];
    at_di_t di;
    at_hi_t hi;
    at_ip_t ip;
};

typedef struct at_var_descriptor_t at_var_descriptor_t, *Pat_var_descriptor_t;

typedef enum AT_PARA_TYPE {
    APT_TEXT=0,
    APT_TDATA=1,
    APT_HI=4,
    APT_HEX=2,
    APT_DI=3,
    APT_IP=5
} AT_PARA_TYPE;

struct at_var_descriptor_t {
    char * key;
    enum AT_PARA_TYPE pt;
    enum AT_PARA_OPTION po;
    undefined field_0x6;
    undefined field_0x7;
    void * pvar;
    s32 vsize;
    s32 (* verify)(union at_value_t *);
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict anon_union.conflict, *Panon_union.conflict;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict702 anon_struct.conflict702, *Panon_struct.conflict702;

typedef struct anon_struct.conflict847 anon_struct.conflict847, *Panon_struct.conflict847;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct __tm {
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

struct _rand48 {
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict702 {
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

struct anon_struct.conflict847 {
    uchar * _nextf[30];
    uint _nmalloc[30];
};

struct _Bigint {
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue {
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf {
    uchar * _base;
    int _size;
};

struct __sFILE {
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

struct _on_exit_args {
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit {
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

union anon_union.conflict {
    struct anon_struct.conflict702 _reent;
    struct anon_struct.conflict847 _unused;
};

struct _reent {
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
    union anon_union.conflict _new;
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

struct __locale_t {
};

typedef union anon_union.conflict88e anon_union.conflict88e, *Panon_union.conflict88e;

union anon_union.conflict88e {
    struct anon_struct.conflict702 _reent;
    struct anon_struct.conflict847 _unused;
};

typedef struct at_peer_t at_peer_t, *Pat_peer_t;

struct at_peer_t {
    at_di_t link_id;
    at_di_t state;
    at_hex_t addr[6];
    undefined field_0xe;
    undefined field_0xf;
    at_di_t last_rx;
    at_di_t last_tx;
    at_di_t rx_drops;
    at_di_t tx_drops;
    at_di_t rx_pkts;
    at_di_t tx_pkts;
    at_di_t tx_errs;
    at_di_t rate_mask;
    at_di_t cur_rate_idx;
    at_di_t cur_rate_ok;
    at_di_t cur_rate_fail;
    at_di_t tx_consec_fail;
    at_hi_t rx_seqnum;
    at_hi_t rx_seqnum_mc;
    at_di_t rx_rssi;
    at_di_t rx_rateidx;
    at_di_t setprot;
    at_di_t listen_interval;
    at_hi_t capinfo;
};

typedef union anon_union.conflict88e_for__new anon_union.conflict88e_for__new, *Panon_union.conflict88e_for__new;

union anon_union.conflict88e_for__new {
    struct anon_struct.conflict702 _reent;
    struct anon_struct.conflict702 _unused;
};

typedef struct Elf32_Shdr Elf32_Shdr, *PElf32_Shdr;

typedef enum Elf_SectionHeaderType_RISCV {
    SHT_SYMTAB=2,
    SHT_GNU_versym=1879048191,
    SHT_GNU_verdef=1879048189,
    SHT_GNU_LIBLIST=1879048183,
    SHT_FINI_ARRAY=15,
    SHT_GROUP=17,
    SHT_CHECKSUM=1879048184,
    SHT_SHLIB=10,
    SHT_ANDROID_RELA=1610612738,
    SHT_NOBITS=8,
    SHT_GNU_HASH=1879048182,
    SHT_REL=9,
    SHT_SYMTAB_SHNDX=18,
    SHT_HASH=5,
    SHT_PROGBITS=1,
    SHT_ANDROID_REL=1610612737,
    SHT_NULL=0,
    SHT_GNU_verneed=1879048190,
    SHT_INIT_ARRAY=14,
    SHT_NOTE=7,
    SHT_PREINIT_ARRAY=16,
    SHT_STRTAB=3,
    SHT_RELA=4,
    SHT_SUNW_COMDAT=1879048187,
    SHT_GNU_ATTRIBUTES=1879048181,
    SHT_DYNSYM=11,
    SHT_SUNW_syminfo=1879048188,
    SHT_DYNAMIC=6,
    SHT_SUNW_move=1879048186
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




AT_ERROR_CODE at_status(char *sts_var)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  AT_ERROR_CODE AVar4;
  int iVar5;
  undefined4 uVar6;
  undefined auStack1340 [4];
  at_callback_para_t para;
  char strbuf [1024];
  
  para.cfg = (at_config_t *)0x0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(5,auStack1340,0);
  }
  puVar1 = (undefined4 *)0x0;
  if (sts_var == (char *)0x0) {
    do {
      puVar2 = puVar1 + 5;
      FUN_00010066(&para.u.field_0x110,*(undefined *)(puVar1 + 1),puVar1[2],puVar1[3]);
      FUN_00010072(0);
      FUN_00010084(0,*puVar1,&para.u.field_0x110);
      FUN_00010090(0);
      puVar1 = puVar2;
    } while (puVar2 != (undefined4 *)0x8c);
_L0:
    AVar4 = AEC_OK;
  }
  else {
    iVar3 = 0;
    do {
      uVar6 = *puVar1;
      iVar5 = FUN_000100cc(sts_var,uVar6);
      if (iVar5 == 0) {
        iVar3 = iVar3 * 0x14;
        FUN_000100ec(&para.u.field_0x110,*(undefined *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8),
                     *(undefined4 *)(iVar3 + 0xc));
        FUN_000100f8(0);
        FUN_0001010c(0,uVar6,&para.u.field_0x110);
        FUN_00010118(0);
        goto _L0;
      }
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 5;
    } while (iVar3 != 7);
    AVar4 = AEC_NOT_FOUND;
  }
  return AVar4;
}



undefined4 FUN_00010066(undefined *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int unaff_s0;
  int unaff_s2;
  
  while( true ) {
    FUN_00010066(param_1,param_2,param_3,param_4);
    FUN_00010072();
    FUN_00010084(*(undefined4 *)(unaff_s0 + -0x14),&stack0x00000120);
    FUN_00010090();
    if (unaff_s0 == unaff_s2) break;
    param_4 = *(undefined4 *)(unaff_s0 + 0xc);
    param_3 = *(undefined4 *)(unaff_s0 + 8);
    param_2 = (uint)*(byte *)(unaff_s0 + 4);
    param_1 = &stack0x00000120;
    unaff_s0 = unaff_s0 + 0x14;
  }
  return 0;
}



undefined4 FUN_00010072(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int unaff_s0;
  int unaff_s2;
  
  while( true ) {
    FUN_00010072();
    FUN_00010084(*(undefined4 *)(unaff_s0 + -0x14),&stack0x00000120);
    FUN_00010090();
    if (unaff_s0 == unaff_s2) break;
    puVar2 = (undefined4 *)(unaff_s0 + 0xc);
    puVar3 = (undefined4 *)(unaff_s0 + 8);
    puVar1 = (undefined *)(unaff_s0 + 4);
    unaff_s0 = unaff_s0 + 0x14;
    FUN_00010066(&stack0x00000120,*puVar1,*puVar3,*puVar2);
  }
  return 0;
}



undefined4 FUN_00010084(undefined4 param_1,undefined *param_2)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s2;
  
  while( true ) {
    FUN_00010084(param_1,param_2);
    FUN_00010090();
    if (unaff_s0 == unaff_s2) break;
    FUN_00010066(&stack0x00000120,*(undefined *)(unaff_s0 + 1),unaff_s0[2],unaff_s0[3]);
    FUN_00010072();
    param_1 = *unaff_s0;
    param_2 = &stack0x00000120;
    unaff_s0 = unaff_s0 + 5;
  }
  return 0;
}



undefined4 FUN_00010090(void)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s2;
  
  while (FUN_00010090(), unaff_s0 != unaff_s2) {
    FUN_00010066(&stack0x00000120,*(undefined *)(unaff_s0 + 1),unaff_s0[2],unaff_s0[3]);
    FUN_00010072();
    FUN_00010084(*unaff_s0,&stack0x00000120);
    unaff_s0 = unaff_s0 + 5;
  }
  return 0;
}



undefined4 FUN_000100cc(undefined4 param_1)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  undefined4 unaff_s4;
  int unaff_s5;
  
  while( true ) {
    iVar1 = FUN_000100cc(param_1);
    if (iVar1 == 0) {
      iVar1 = unaff_s1 * 0x14 + unaff_s2;
      FUN_000100ec(&stack0x00000120,*(undefined *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),
                   *(undefined4 *)(iVar1 + 0xc));
      FUN_000100f8(0);
      FUN_0001010c(0,unaff_s4,&stack0x00000120);
      FUN_00010118(0);
      return 0;
    }
    unaff_s1 = unaff_s1 + 1;
    unaff_s0 = unaff_s0 + 5;
    if (unaff_s1 == unaff_s5) break;
    param_1 = *unaff_s0;
    unaff_s4 = param_1;
  }
  return 7;
}



undefined4 FUN_000100ec(void)

{
  FUN_000100ec();
  FUN_000100f8();
  FUN_0001010c(0,&stack0x00000120);
  FUN_00010118();
  return 0;
}



undefined4 FUN_000100f8(void)

{
  FUN_000100f8();
  FUN_0001010c(0,&stack0x00000120);
  FUN_00010118();
  return 0;
}



undefined4 FUN_0001010c(void)

{
  FUN_0001010c();
  FUN_00010118();
  return 0;
}



undefined4 FUN_00010118(void)

{
  FUN_00010118();
  return 0;
}



AT_ERROR_CODE at_setsts(char *key,at_value_t *value)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((key != (char *)0x0) && (value != (at_value_t *)0x0)) {
    puVar3 = (undefined4 *)0x0;
    iVar1 = 0;
    do {
      iVar2 = _L0(key,*puVar3);
      if (iVar2 == 0) {
        iVar1 = iVar1 * 0x14;
        FUN_0001017a(*(undefined *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),
                     *(undefined4 *)(iVar1 + 0xc));
        return AEC_OK;
      }
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + 5;
    } while (iVar1 != 7);
    return AEC_NOT_FOUND;
  }
  return AEC_NULL_POINTER;
}



undefined4 _L0(undefined4 param_1)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 *unaff_s3;
  int unaff_s4;
  
  while( true ) {
    iVar1 = _L0(param_1);
    if (iVar1 == 0) {
      iVar1 = unaff_s1 * 0x14 + unaff_s0;
      FUN_0001017a(*(undefined *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc)
                  );
      return 0;
    }
    unaff_s1 = unaff_s1 + 1;
    unaff_s3 = unaff_s3 + 5;
    if (unaff_s1 == unaff_s4) break;
    param_1 = *unaff_s3;
  }
  return 7;
}



undefined4 FUN_0001017a(void)

{
  FUN_0001017a();
  return 0;
}



AT_ERROR_CODE at_peer(s32 pn,at_peer_t *peer,char *var)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  AT_ERROR_CODE AVar4;
  int iVar5;
  undefined4 uVar6;
  undefined auStack1056 [4];
  char strbuf [1024];
  
  if (peer == (at_peer_t *)0x0) {
    return AEC_NULL_POINTER;
  }
  puVar1 = (undefined4 *)0x0;
  if (var == (char *)0x0) {
    do {
      puVar2 = puVar1 + 5;
      FUN_000101f4(auStack1056,*(undefined *)(puVar1 + 1),puVar1[2],puVar1[3]);
      FUN_00010200(0);
      FUN_00010212(0,*puVar1,auStack1056);
      FUN_0001021e(0);
      puVar1 = puVar2;
    } while (puVar2 != (undefined4 *)0x1b8);
_L0:
    AVar4 = AEC_OK;
  }
  else {
    iVar3 = 0;
    do {
      uVar6 = *puVar1;
      iVar5 = FUN_0001025a(var,uVar6);
      if (iVar5 == 0) {
        iVar3 = iVar3 * 0x14;
        FUN_0001027a(auStack1056,*(undefined *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8),
                     *(undefined4 *)(iVar3 + 0xc));
        FUN_00010286(0);
        FUN_0001029a(0,uVar6,auStack1056);
        FUN_000102a6(0);
        goto _L0;
      }
      iVar3 = iVar3 + 1;
      puVar1 = puVar1 + 5;
    } while (iVar3 != 0x16);
    AVar4 = AEC_NOT_FOUND;
  }
  return AVar4;
}



undefined4 FUN_000101f4(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_s0;
  int unaff_s2;
  
  while( true ) {
    FUN_000101f4(param_1,param_2,param_3);
    FUN_00010200();
    FUN_00010212(*(undefined4 *)(unaff_s0 + -0x14));
    FUN_0001021e();
    if (unaff_s0 == unaff_s2) break;
    param_3 = *(undefined4 *)(unaff_s0 + 0xc);
    param_2 = *(undefined4 *)(unaff_s0 + 8);
    param_1 = (uint)*(byte *)(unaff_s0 + 4);
    unaff_s0 = unaff_s0 + 0x14;
  }
  return 0;
}



undefined4 FUN_00010200(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int unaff_s0;
  int unaff_s2;
  
  while( true ) {
    FUN_00010200();
    FUN_00010212(*(undefined4 *)(unaff_s0 + -0x14));
    FUN_0001021e();
    if (unaff_s0 == unaff_s2) break;
    puVar2 = (undefined4 *)(unaff_s0 + 0xc);
    puVar3 = (undefined4 *)(unaff_s0 + 8);
    puVar1 = (undefined *)(unaff_s0 + 4);
    unaff_s0 = unaff_s0 + 0x14;
    FUN_000101f4(*puVar1,*puVar3,*puVar2);
  }
  return 0;
}



undefined4 FUN_00010212(undefined4 param_1)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s2;
  
  while( true ) {
    FUN_00010212(param_1);
    FUN_0001021e();
    if (unaff_s0 == unaff_s2) break;
    FUN_000101f4(*(undefined *)(unaff_s0 + 1),unaff_s0[2],unaff_s0[3]);
    FUN_00010200();
    param_1 = *unaff_s0;
    unaff_s0 = unaff_s0 + 5;
  }
  return 0;
}



undefined4 FUN_0001021e(void)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s2;
  
  while (FUN_0001021e(), unaff_s0 != unaff_s2) {
    FUN_000101f4(*(undefined *)(unaff_s0 + 1),unaff_s0[2],unaff_s0[3]);
    FUN_00010200();
    FUN_00010212(*unaff_s0);
    unaff_s0 = unaff_s0 + 5;
  }
  return 0;
}



undefined4 FUN_0001025a(undefined4 param_1)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  undefined4 unaff_s4;
  int unaff_s5;
  
  while( true ) {
    iVar1 = FUN_0001025a(param_1);
    if (iVar1 == 0) {
      iVar1 = unaff_s1 * 0x14 + unaff_s2;
      FUN_0001027a(*(undefined *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc)
                  );
      FUN_00010286(0);
      FUN_0001029a(0,unaff_s4);
      FUN_000102a6(0);
      return 0;
    }
    unaff_s1 = unaff_s1 + 1;
    unaff_s0 = unaff_s0 + 5;
    if (unaff_s1 == unaff_s5) break;
    param_1 = *unaff_s0;
    unaff_s4 = param_1;
  }
  return 7;
}



undefined4 FUN_0001027a(void)

{
  FUN_0001027a();
  FUN_00010286();
  FUN_0001029a(0);
  FUN_000102a6();
  return 0;
}



undefined4 FUN_00010286(void)

{
  FUN_00010286();
  FUN_0001029a(0);
  FUN_000102a6();
  return 0;
}



undefined4 FUN_0001029a(void)

{
  FUN_0001029a();
  FUN_000102a6();
  return 0;
}



undefined4 FUN_000102a6(void)

{
  FUN_000102a6();
  return 0;
}


