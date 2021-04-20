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

typedef union anon_union.conflict18c1_for_u anon_union.conflict18c1_for_u, *Panon_union.conflict18c1_for_u;

typedef int at_di_t;

typedef char at_text_t;

typedef uchar at_hex_t;

typedef uint at_hi_t;

typedef struct anon_struct.conflict15a4 anon_struct.conflict15a4, *Panon_struct.conflict15a4;

typedef struct anon_struct.conflict15ce anon_struct.conflict15ce, *Panon_struct.conflict15ce;

typedef struct at_tcpserver_para_t at_tcpserver_para_t, *Pat_tcpserver_para_t;

typedef struct anon_struct.conflict1600 anon_struct.conflict1600, *Panon_struct.conflict1600;

typedef struct anon_struct.conflict1627 anon_struct.conflict1627, *Panon_struct.conflict1627;

typedef struct anon_struct.conflict1686 anon_struct.conflict1686, *Panon_struct.conflict1686;

typedef struct anon_struct.conflict16c6 anon_struct.conflict16c6, *Panon_struct.conflict16c6;

typedef struct anon_struct.conflict16fd anon_struct.conflict16fd, *Panon_struct.conflict16fd;

typedef struct anon_struct.conflict176c anon_struct.conflict176c, *Panon_struct.conflict176c;

typedef struct anon_struct.conflict1785 anon_struct.conflict1785, *Panon_struct.conflict1785;

typedef struct anon_struct.conflict17ae anon_struct.conflict17ae, *Panon_struct.conflict17ae;

typedef struct anon_struct.conflict17f7 anon_struct.conflict17f7, *Panon_struct.conflict17f7;

typedef struct at_network_para_t at_network_para_t, *Pat_network_para_t;

typedef struct at_sendData_para_t at_sendData_para_t, *Pat_sendData_para_t;

typedef struct at_close_para_t at_close_para_t, *Pat_close_para_t;

typedef struct at_client_ssl_path_para_t at_client_ssl_path_para_t, *Pat_client_ssl_path_para_t;

typedef struct at_client_ssl_sni_t at_client_ssl_sni_t, *Pat_client_ssl_sni_t;

typedef struct at_client_ssl_alpn_t at_client_ssl_alpn_t, *Pat_client_ssl_alpn_t;

typedef struct at_ble_sync_mode_t at_ble_sync_mode_t, *Pat_ble_sync_mode_t;

typedef struct anon_struct.conflict1810 anon_struct.conflict1810, *Panon_struct.conflict1810;

typedef struct anon_struct.conflict1844 anon_struct.conflict1844, *Panon_struct.conflict1844;

typedef int s32;

typedef uchar u8;

typedef __uint32_t uint32_t;

typedef __uint8_t uint8_t;

struct anon_struct.conflict17f7 {
    at_ip_t setdnsip;
};

struct anon_struct.conflict1627 {
    int uartId;
    int uartBaud;
    int dataBit;
    int parity;
    int stopBit;
    int hwfc;
};

struct anon_struct.conflict16c6 {
    char ssid[33];
    char pwd[33];
};

struct at_client_ssl_sni_t {
    at_di_t linkId;
    at_text_t sni[256];
};

struct anon_struct.conflict1785 {
    char hostname[128];
};

struct anon_struct.conflict1686 {
    uint32_t sleep_time;
    int weakup_pin;
};

struct anon_struct.conflict17ae {
    char hostname[128];
    uint8_t type;
    uint8_t content_type;
    undefined field_0x82;
    undefined field_0x83;
    uint8_t * data;
};

struct anon_struct.conflict15a4 {
    char hostname[256];
};

struct anon_struct.conflict1810 {
    int ID;
    int mode;
    int pull;
};

struct at_close_para_t {
    at_di_t linkId;
};

struct anon_struct.conflict1844 {
    int ID;
    int mode;
};

struct at_ble_sync_mode_t {
    int mode;
};

struct at_sendData_para_t {
    at_di_t linkId;
    at_di_t bufferlen;
    at_text_t * buffer;
    at_text_t hostname[256];
    at_di_t port;
};

struct at_tcpserver_para_t {
    at_di_t port;
    at_di_t enable;
    at_di_t tls;
    at_di_t ca;
};

struct anon_struct.conflict176c {
    char hostname[33];
};

struct anon_struct.conflict15ce {
    s32 value;
};

struct at_client_ssl_alpn_t {
    at_di_t linkId;
    at_text_t * * alpn;
};

struct anon_struct.conflict1600 {
    s32 len;
    u8 * buf;
};

struct anon_struct.conflict16fd {
    char ssid[64];
    char psk[64];
    int chl;
    int ecn;
    int max_conn;
    int hidden;
};

struct at_client_ssl_path_para_t {
    at_di_t linkId;
    at_di_t auth_mode;
    at_text_t * ca;
    at_text_t * key;
    at_text_t * cert;
};

struct at_network_para_t {
    at_di_t linkId;
    at_text_t type[4];
    at_text_t hostname[256];
    at_di_t port;
    at_di_t localport;
    at_di_t keepAlive;
};

union anon_union.conflict18c1_for_u {
    struct anon_struct.conflict15a4 ping;
    struct anon_struct.conflict15ce wifi;
    struct anon_struct.conflict15ce scan;
    struct at_tcpserver_para_t tcp_server;
    struct anon_struct.conflict1600 mode;
    struct anon_struct.conflict1627 uart;
    struct anon_struct.conflict1686 sleep;
    struct anon_struct.conflict15ce wifiMode;
    struct anon_struct.conflict16c6 joinParam;
    struct at_ip_para_t at_ip_para;
    struct anon_struct.conflict16fd apcfgParam;
    struct anon_struct.conflict176c iphostname;
    struct anon_struct.conflict1785 dns_parse;
    struct anon_struct.conflict17ae http_req;
    struct anon_struct.conflict17f7 set_dns;
    struct at_network_para_t net_param;
    struct at_sendData_para_t send_param;
    struct at_close_para_t close_id;
    struct at_client_ssl_path_para_t client_ssl_path_cfg;
    struct at_client_ssl_sni_t client_ssl_sni_cfg;
    struct at_client_ssl_alpn_t client_ssl_alpn_cfg;
    struct at_ble_sync_mode_t ble_sync_mode;
    struct anon_struct.conflict1810 setgpio_para;
    struct anon_struct.conflict1844 setiodir_para;
    struct anon_struct.conflict1844 writeiodata_para;
    struct anon_struct.conflict15ce readiodata_para;
    struct anon_struct.conflict15ce deleteap_para;
};

struct at_callback_para_t {
    struct at_config_t * cfg;
    struct at_status_t * sts;
    union anon_union.conflict18c1_for_u u;
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

typedef union anon_union.conflict18c1 anon_union.conflict18c1, *Panon_union.conflict18c1;

union anon_union.conflict18c1 {
    struct anon_struct.conflict15a4 ping;
    struct anon_struct.conflict15ce wifi;
    struct anon_struct.conflict15ce scan;
    struct at_tcpserver_para_t tcp_server;
    struct anon_struct.conflict1600 mode;
    struct anon_struct.conflict1627 uart;
    struct anon_struct.conflict1686 sleep;
    struct anon_struct.conflict15ce wifiMode;
    struct anon_struct.conflict16c6 joinParam;
    struct at_ip_para_t at_ip_para;
    struct anon_struct.conflict16fd apcfgParam;
    struct anon_struct.conflict176c iphostname;
    struct anon_struct.conflict1785 dns_parse;
    struct anon_struct.conflict17ae http_req;
    struct anon_struct.conflict17f7 set_dns;
    struct at_network_para_t net_param;
    struct at_sendData_para_t send_param;
    struct at_close_para_t close_id;
    struct at_client_ssl_path_para_t client_ssl_path_cfg;
    struct at_client_ssl_sni_t client_ssl_sni_cfg;
    struct at_client_ssl_alpn_t client_ssl_alpn_cfg;
    struct at_ble_sync_mode_t ble_sync_mode;
    struct anon_struct.conflict1810 setgpio_para;
    struct anon_struct.conflict1844 setiodir_para;
    struct anon_struct.conflict1844 writeiodata_para;
    struct anon_struct.conflict15ce readiodata_para;
    struct anon_struct.conflict15ce deleteap_para;
};

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

struct _rand48 {
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue {
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

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

union anon_union.conflict {
    struct anon_struct.conflict702 _reent;
    struct anon_struct.conflict847 _unused;
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

struct _Bigint {
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

typedef union anon_union.conflict88e anon_union.conflict88e, *Panon_union.conflict88e;

union anon_union.conflict88e {
    struct anon_struct.conflict702 _reent;
    struct anon_struct.conflict847 _unused;
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




s32 localecho1_verify(at_value_t *value)

{
  return *(uint *)value < 2 ^ 1;
}



s32 console1_speed_verify(at_value_t *value)

{
  int *piVar1;
  int iStack36;
  at_di_t speed_tbl [5];
  
  _L0(&iStack36,0,0x14);
  piVar1 = &iStack36;
  do {
    if (*(int *)value == *piVar1) {
      return 0;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 != speed_tbl + 4);
  return 1;
}



undefined4 _L0(void)

{
  int *unaff_s0;
  int *piVar1;
  
  _L0();
  piVar1 = (int *)&stack0x0000000c;
  do {
    if (*unaff_s0 == *piVar1) {
      return 0;
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 != (int *)&stack0x00000020);
  return 1;
}



s32 wifi_ssid_len_verify(at_value_t *value)

{
  return *(uint *)value < 0x21 ^ 1;
}



s32 wifi_mode_verify(at_value_t *value)

{
  return *(uint *)value < 4 ^ 1;
}



s32 ip_use_dhcp_verify(at_value_t *value)

{
  return *(uint *)value < 3 ^ 1;
}



bool console1_hwfc_verify(uint *param_1)

{
  return 1 < *param_1;
}



AT_ERROR_CODE at_getcfg(char *key)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined auStack1056 [4];
  char strbuf [1024];
  
  if (key == (char *)0x0) {
    return AEC_NULL_POINTER;
  }
  puVar3 = (undefined4 *)0x0;
  iVar1 = 0;
  do {
    uVar4 = *puVar3;
    iVar2 = FUN_000100b4(key,uVar4);
    if (iVar2 == 0) {
      iVar1 = iVar1 * 0x14;
      _L0(auStack1056,*(undefined *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),
          *(undefined4 *)(iVar1 + 0xc));
      FUN_000100e0(0);
      FUN_000100f4(0,uVar4,auStack1056);
      FUN_00010100(0);
      return AEC_OK;
    }
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 5;
  } while (iVar1 != 0x16);
  return AEC_NOT_FOUND;
}



undefined4 FUN_000100b4(undefined4 param_1)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 *unaff_s3;
  undefined4 unaff_s4;
  int unaff_s5;
  
  while( true ) {
    iVar1 = FUN_000100b4(param_1);
    if (iVar1 == 0) {
      iVar1 = unaff_s1 * 0x14 + unaff_s0;
      _L0(*(undefined *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
      FUN_000100e0(0);
      FUN_000100f4(0,unaff_s4);
      FUN_00010100(0);
      return 0;
    }
    unaff_s1 = unaff_s1 + 1;
    unaff_s3 = unaff_s3 + 5;
    if (unaff_s1 == unaff_s5) break;
    param_1 = *unaff_s3;
    unaff_s4 = param_1;
  }
  return 7;
}



undefined4 _L0(void)

{
  _L0();
  FUN_000100e0();
  FUN_000100f4(0);
  FUN_00010100();
  return 0;
}



undefined4 FUN_000100e0(void)

{
  FUN_000100e0();
  FUN_000100f4(0);
  FUN_00010100();
  return 0;
}



undefined4 FUN_000100f4(void)

{
  FUN_000100f4();
  FUN_00010100();
  return 0;
}



undefined4 FUN_00010100(void)

{
  FUN_00010100();
  return 0;
}



AT_ERROR_CODE at_typecfg(char *key)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (key == (char *)0x0) {
    return AEC_NULL_POINTER;
  }
  puVar3 = (undefined4 *)0x0;
  iVar1 = 0;
  do {
    iVar2 = FUN_00010164(key,*puVar3);
    if (iVar2 == 0) {
      return *(AT_ERROR_CODE *)(iVar1 * 0x14 + 4);
    }
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 5;
  } while (iVar1 != 0x16);
  return AEC_NOT_FOUND;
}



undefined FUN_00010164(undefined4 param_1)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 *unaff_s3;
  int unaff_s4;
  
  while( true ) {
    iVar1 = FUN_00010164(param_1);
    if (iVar1 == 0) {
      return *(undefined *)(unaff_s0 * 0x14 + unaff_s1 + 4);
    }
    unaff_s0 = unaff_s0 + 1;
    unaff_s3 = unaff_s3 + 5;
    if (unaff_s0 == unaff_s4) break;
    param_1 = *unaff_s3;
  }
  return 7;
}



AT_ERROR_CODE at_setcfg(char *key,at_value_t *value)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  
  if ((key == (char *)0x0) || (value == (at_value_t *)0x0)) {
    return AEC_NOT_FOUND;
  }
  puVar4 = (undefined4 *)0x0;
  iVar1 = 0;
  while (iVar2 = FUN_000101c8(key,*puVar4), iVar2 != 0) {
    iVar1 = iVar1 + 1;
    puVar4 = puVar4 + 5;
    if (iVar1 == 0x16) {
      return AEC_NOT_FOUND;
    }
  }
  if (*(char *)(iVar1 * 0x14 + 5) != '\x01') {
    return AEC_READ_ONLY;
  }
  pcVar3 = *(code **)(iVar1 * 0x14 + 0x10);
  if ((pcVar3 != (code *)0x0) && (iVar2 = (*pcVar3)(value), iVar2 != 0)) {
    return AEC_OUT_OF_RANGE;
  }
  iVar1 = iVar1 * 0x14;
  FUN_000101fc(*(undefined *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),
               value);
  return AEC_OK;
}



undefined4 FUN_000101c8(undefined4 param_1)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 *unaff_s4;
  int unaff_s5;
  
  while (iVar1 = FUN_000101c8(param_1), iVar1 != 0) {
    unaff_s0 = unaff_s0 + 1;
    unaff_s4 = unaff_s4 + 5;
    if (unaff_s0 == unaff_s5) {
      return 7;
    }
    param_1 = *unaff_s4;
  }
  uVar2 = 0xb;
  iVar1 = unaff_s0 * 0x14 + unaff_s1;
  if (*(char *)(iVar1 + 5) == '\x01') {
    pcVar3 = *(code **)(iVar1 + 0x10);
    if ((pcVar3 != (code *)0x0) && (iVar1 = (*pcVar3)(), iVar1 != 0)) {
      return 9;
    }
    iVar1 = unaff_s0 * 0x14 + unaff_s1;
    FUN_000101fc(*(undefined *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_000101fc(void)

{
  FUN_000101fc();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

AT_ERROR_CODE at_ssidtxt(char *ssid)

{
  undefined4 uVar1;
  
  if (ssid != (char *)0x0) {
    uVar1 = _L0();
    FUN_0001025c(0x118,0,0x21);
    FUN_0001026c(0x118,ssid,uVar1);
    _DAT_0000013c = uVar1;
    return AEC_OK;
  }
  return AEC_NOT_FOUND;
}



undefined4 _L0(undefined4 uRam0000013c)

{
  undefined4 uVar1;
  int unaff_s2;
  
  uVar1 = _L0();
  FUN_0001025c(unaff_s2 + 0x118,0,0x21);
  FUN_0001026c(unaff_s2 + 0x118,uVar1);
  uRam0000013c = uVar1;
  return 0;
}



undefined4 FUN_0001025c(undefined4 uRam0000013c)

{
  undefined4 unaff_s1;
  int unaff_s2;
  
  FUN_0001025c();
  FUN_0001026c(unaff_s2 + 0x118);
  uRam0000013c = unaff_s1;
  return 0;
}



undefined4 FUN_0001026c(undefined4 uRam0000013c)

{
  undefined4 unaff_s1;
  
  FUN_0001026c();
  uRam0000013c = unaff_s1;
  return 0;
}



AT_ERROR_CODE at_config(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined auStack1056 [4];
  char strbuf [1024];
  
  puVar1 = (undefined4 *)0x0;
  do {
    puVar2 = puVar1 + 5;
    FUN_000102c6(auStack1056,*(undefined *)(puVar1 + 1),puVar1[2],puVar1[3]);
    FUN_000102d2(0);
    FUN_000102e4(0,*puVar1,auStack1056);
    FUN_000102f0(0);
    puVar1 = puVar2;
  } while (puVar2 != (undefined4 *)0x1b8);
  return AEC_OK;
}



undefined4 FUN_000102c6(uint param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_s0;
  int unaff_s2;
  
  while( true ) {
    FUN_000102c6(param_1,param_2,param_3);
    FUN_000102d2();
    FUN_000102e4(*(undefined4 *)(unaff_s0 + -0x14));
    FUN_000102f0();
    if (unaff_s0 == unaff_s2) break;
    param_3 = *(undefined4 *)(unaff_s0 + 0xc);
    param_2 = *(undefined4 *)(unaff_s0 + 8);
    param_1 = (uint)*(byte *)(unaff_s0 + 4);
    unaff_s0 = unaff_s0 + 0x14;
  }
  return 0;
}



undefined4 FUN_000102d2(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int unaff_s0;
  int unaff_s2;
  
  while( true ) {
    FUN_000102d2();
    FUN_000102e4(*(undefined4 *)(unaff_s0 + -0x14));
    FUN_000102f0();
    if (unaff_s0 == unaff_s2) break;
    puVar2 = (undefined4 *)(unaff_s0 + 0xc);
    puVar3 = (undefined4 *)(unaff_s0 + 8);
    puVar1 = (undefined *)(unaff_s0 + 4);
    unaff_s0 = unaff_s0 + 0x14;
    FUN_000102c6(*puVar1,*puVar3,*puVar2);
  }
  return 0;
}



undefined4 FUN_000102e4(undefined4 param_1)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s2;
  
  while( true ) {
    FUN_000102e4(param_1);
    FUN_000102f0();
    if (unaff_s0 == unaff_s2) break;
    FUN_000102c6(*(undefined *)(unaff_s0 + 1),unaff_s0[2],unaff_s0[3]);
    FUN_000102d2();
    param_1 = *unaff_s0;
    unaff_s0 = unaff_s0 + 5;
  }
  return 0;
}



undefined4 FUN_000102f0(void)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s2;
  
  while (FUN_000102f0(), unaff_s0 != unaff_s2) {
    FUN_000102c6(*(undefined *)(unaff_s0 + 1),unaff_s0[2],unaff_s0[3]);
    FUN_000102d2();
    FUN_000102e4(*unaff_s0);
    unaff_s0 = unaff_s0 + 5;
  }
  return 0;
}



AT_ERROR_CODE at_factory(void)

{
  undefined4 uStack300;
  at_callback_para_t para;
  
  uStack300 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(6,&uStack300,0);
  }
  return AEC_OK;
}



AT_ERROR_CODE at_save(void)

{
  undefined4 uStack300;
  at_callback_para_t para;
  
  uStack300 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(3,&uStack300,0);
  }
  return AEC_OK;
}


