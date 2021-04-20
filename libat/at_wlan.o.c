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

typedef union anon_union.conflict18ad_for_u anon_union.conflict18ad_for_u, *Panon_union.conflict18ad_for_u;

typedef int at_di_t;

typedef char at_text_t;

typedef uchar at_hex_t;

typedef uint at_hi_t;

typedef struct anon_struct.conflict1590 anon_struct.conflict1590, *Panon_struct.conflict1590;

typedef struct anon_struct.conflict15ba anon_struct.conflict15ba, *Panon_struct.conflict15ba;

typedef struct at_tcpserver_para_t at_tcpserver_para_t, *Pat_tcpserver_para_t;

typedef struct anon_struct.conflict15ec anon_struct.conflict15ec, *Panon_struct.conflict15ec;

typedef struct anon_struct.conflict1613 anon_struct.conflict1613, *Panon_struct.conflict1613;

typedef struct anon_struct.conflict1672 anon_struct.conflict1672, *Panon_struct.conflict1672;

typedef struct anon_struct.conflict16b2 anon_struct.conflict16b2, *Panon_struct.conflict16b2;

typedef struct anon_struct.conflict16e9 anon_struct.conflict16e9, *Panon_struct.conflict16e9;

typedef struct anon_struct.conflict1758 anon_struct.conflict1758, *Panon_struct.conflict1758;

typedef struct anon_struct.conflict1771 anon_struct.conflict1771, *Panon_struct.conflict1771;

typedef struct anon_struct.conflict179a anon_struct.conflict179a, *Panon_struct.conflict179a;

typedef struct anon_struct.conflict17e3 anon_struct.conflict17e3, *Panon_struct.conflict17e3;

typedef struct at_network_para_t at_network_para_t, *Pat_network_para_t;

typedef struct at_sendData_para_t at_sendData_para_t, *Pat_sendData_para_t;

typedef struct at_close_para_t at_close_para_t, *Pat_close_para_t;

typedef struct at_client_ssl_path_para_t at_client_ssl_path_para_t, *Pat_client_ssl_path_para_t;

typedef struct at_client_ssl_sni_t at_client_ssl_sni_t, *Pat_client_ssl_sni_t;

typedef struct at_client_ssl_alpn_t at_client_ssl_alpn_t, *Pat_client_ssl_alpn_t;

typedef struct at_ble_sync_mode_t at_ble_sync_mode_t, *Pat_ble_sync_mode_t;

typedef struct anon_struct.conflict17fc anon_struct.conflict17fc, *Panon_struct.conflict17fc;

typedef struct anon_struct.conflict1830 anon_struct.conflict1830, *Panon_struct.conflict1830;

typedef int s32;

typedef uchar u8;

typedef __uint32_t uint32_t;

typedef __uint8_t uint8_t;

struct anon_struct.conflict16b2 {
    char ssid[33];
    char pwd[33];
};

struct at_client_ssl_sni_t {
    at_di_t linkId;
    at_text_t sni[256];
};

struct at_client_ssl_path_para_t {
    at_di_t linkId;
    at_di_t auth_mode;
    at_text_t * ca;
    at_text_t * key;
    at_text_t * cert;
};

struct anon_struct.conflict16e9 {
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

struct anon_struct.conflict15ba {
    s32 value;
};

struct at_network_para_t {
    at_di_t linkId;
    at_text_t type[4];
    at_text_t hostname[256];
    at_di_t port;
    at_di_t localport;
    at_di_t keepAlive;
};

struct anon_struct.conflict17e3 {
    at_ip_t setdnsip;
};

struct anon_struct.conflict1590 {
    char hostname[256];
};

struct anon_struct.conflict1830 {
    int ID;
    int mode;
};

struct anon_struct.conflict1771 {
    char hostname[128];
};

struct anon_struct.conflict179a {
    char hostname[128];
    uint8_t type;
    uint8_t content_type;
    undefined field_0x82;
    undefined field_0x83;
    uint8_t * data;
};

struct at_close_para_t {
    at_di_t linkId;
};

struct at_ble_sync_mode_t {
    int mode;
};

struct at_tcpserver_para_t {
    at_di_t port;
    at_di_t enable;
    at_di_t tls;
    at_di_t ca;
};

struct anon_struct.conflict1613 {
    int uartId;
    int uartBaud;
    int dataBit;
    int parity;
    int stopBit;
    int hwfc;
};

struct anon_struct.conflict1672 {
    uint32_t sleep_time;
    int weakup_pin;
};

struct at_client_ssl_alpn_t {
    at_di_t linkId;
    at_text_t * * alpn;
};

struct anon_struct.conflict17fc {
    int ID;
    int mode;
    int pull;
};

struct anon_struct.conflict15ec {
    s32 len;
    u8 * buf;
};

struct anon_struct.conflict1758 {
    char hostname[33];
};

union anon_union.conflict18ad_for_u {
    struct anon_struct.conflict1590 ping;
    struct anon_struct.conflict15ba wifi;
    struct anon_struct.conflict15ba scan;
    struct at_tcpserver_para_t tcp_server;
    struct anon_struct.conflict15ec mode;
    struct anon_struct.conflict1613 uart;
    struct anon_struct.conflict1672 sleep;
    struct anon_struct.conflict15ba wifiMode;
    struct anon_struct.conflict16b2 joinParam;
    struct at_ip_para_t at_ip_para;
    struct anon_struct.conflict16e9 apcfgParam;
    struct anon_struct.conflict1758 iphostname;
    struct anon_struct.conflict1771 dns_parse;
    struct anon_struct.conflict179a http_req;
    struct anon_struct.conflict17e3 set_dns;
    struct at_network_para_t net_param;
    struct at_sendData_para_t send_param;
    struct at_close_para_t close_id;
    struct at_client_ssl_path_para_t client_ssl_path_cfg;
    struct at_client_ssl_sni_t client_ssl_sni_cfg;
    struct at_client_ssl_alpn_t client_ssl_alpn_cfg;
    struct at_ble_sync_mode_t ble_sync_mode;
    struct anon_struct.conflict17fc setgpio_para;
    struct anon_struct.conflict1830 setiodir_para;
    struct anon_struct.conflict1830 writeiodata_para;
    struct anon_struct.conflict15ba readiodata_para;
    struct anon_struct.conflict15ba deleteap_para;
};

struct at_callback_para_t {
    struct at_config_t * cfg;
    struct at_status_t * sts;
    union anon_union.conflict18ad_for_u u;
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

typedef struct at_callback_t at_callback_t, *Pat_callback_t;

struct at_callback_t {
    AT_ERROR_CODE (* handle_cb)(enum AT_CALLBACK_CMD, struct at_callback_para_t *, struct at_callback_rsp_t *);
    s32 (* dump_cb)(u8 *, s32);
};

typedef union anon_union.conflict18ad anon_union.conflict18ad, *Panon_union.conflict18ad;

union anon_union.conflict18ad {
    struct anon_struct.conflict1590 ping;
    struct anon_struct.conflict15ba wifi;
    struct anon_struct.conflict15ba scan;
    struct at_tcpserver_para_t tcp_server;
    struct anon_struct.conflict15ec mode;
    struct anon_struct.conflict1613 uart;
    struct anon_struct.conflict1672 sleep;
    struct anon_struct.conflict15ba wifiMode;
    struct anon_struct.conflict16b2 joinParam;
    struct at_ip_para_t at_ip_para;
    struct anon_struct.conflict16e9 apcfgParam;
    struct anon_struct.conflict1758 iphostname;
    struct anon_struct.conflict1771 dns_parse;
    struct anon_struct.conflict179a http_req;
    struct anon_struct.conflict17e3 set_dns;
    struct at_network_para_t net_param;
    struct at_sendData_para_t send_param;
    struct at_close_para_t close_id;
    struct at_client_ssl_path_para_t client_ssl_path_cfg;
    struct at_client_ssl_sni_t client_ssl_sni_cfg;
    struct at_client_ssl_alpn_t client_ssl_alpn_cfg;
    struct at_ble_sync_mode_t ble_sync_mode;
    struct anon_struct.conflict17fc setgpio_para;
    struct anon_struct.conflict1830 setiodir_para;
    struct anon_struct.conflict1830 writeiodata_para;
    struct anon_struct.conflict15ba readiodata_para;
    struct anon_struct.conflict15ba deleteap_para;
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

typedef struct Elf32_Rela Elf32_Rela, *PElf32_Rela;

struct Elf32_Rela {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
    dword r_addend; // a constant addend used to compute the relocatable field value
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




AT_ERROR_CODE at_peers(s32 pn,char *pv)

{
  int iVar1;
  int iVar2;
  
  if (pn == 0) {
    if (pv != (char *)0x0) {
LAB_00010066:
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    iVar1 = 0;
    do {
      iVar2 = FUN_00010022(pn,iVar1,0);
      if (iVar2 != 0) break;
      pn = pn + 1;
      iVar1 = iVar1 + 0x5c;
    } while (pn != 5);
  }
  else {
    iVar2 = 4;
    if ((uint)pn < 5) goto LAB_00010066;
  }
  return (AT_ERROR_CODE)iVar2;
}



void FUN_00010022(int param_1,int param_2,undefined4 param_3)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  
  while( true ) {
    iVar1 = FUN_00010022(param_1,param_2,param_3);
    if (iVar1 != 0) {
      return;
    }
    unaff_s0 = unaff_s0 + 1;
    unaff_s1 = unaff_s1 + 0x5c;
    if (unaff_s0 == unaff_s2) break;
    param_3 = 0;
    param_1 = unaff_s0;
    param_2 = unaff_s1;
  }
  return;
}



AT_ERROR_CODE at_ping(char *hostname)

{
  undefined auStack300 [4];
  at_callback_para_t para;
  
  _L0(&para.sts,hostname);
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(8,auStack300,0);
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  _L0();
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(8,&stack0x00000004,0);
  }
  return 0;
}



AT_ERROR_CODE at_wifi(s32 value)

{
  undefined4 uStack300;
  at_callback_para_t para;
  
  uStack300 = 0;
  if (pcRam00000000 != (code *)0x0) {
    para.sts = (at_status_t *)value;
    (*pcRam00000000)(0xf,&uStack300,0);
  }
  return AEC_OK;
}



AT_ERROR_CODE at_reassociate(void)

{
  undefined4 uStack300;
  at_callback_para_t para;
  
  uStack300 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x10,&uStack300,0);
  }
  return AEC_OK;
}



AT_ERROR_CODE at_scan(char *mode,char *repeat)

{
  int iVar1;
  undefined4 uStack300;
  at_callback_para_t para;
  
  if (mode == (char *)0x0) {
    if (repeat == (char *)0x0) {
      para.sts = (at_status_t *)0x0;
_L0:
      uStack300 = 0;
      if (pcRam00000000 == (code *)0x0) {
        return AEC_OK;
      }
      (*pcRam00000000)(0x14,&uStack300,0);
      return AEC_OK;
    }
  }
  else {
    if (repeat != (char *)0x0) {
      iVar1 = _L0(0);
      if (iVar1 == 0) {
        iVar1 = FUN_00010160(repeat,0);
        para.sts = (at_status_t *)0x1;
        if (iVar1 == 0) goto _L0;
      }
      iVar1 = FUN_00010176(mode,0);
      if ((iVar1 == 0) && (iVar1 = FUN_0001018a(repeat,0), iVar1 == 0)) {
        para.sts = (at_status_t *)0x2;
        goto _L0;
      }
    }
  }
  return AEC_PARA_ERROR;
}



undefined4 _L0(void)

{
  int iVar1;
  undefined4 uStack00000004;
  undefined4 uStack0000000c;
  
  iVar1 = _L0();
  if (iVar1 == 0) {
    iVar1 = FUN_00010160(0);
    uStack0000000c = 1;
    if (iVar1 == 0) goto _L0;
  }
  iVar1 = FUN_00010176(0);
  if ((iVar1 != 0) || (iVar1 = FUN_0001018a(0), iVar1 != 0)) {
    return 4;
  }
  uStack0000000c = 2;
_L0:
  uStack00000004 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x14,&stack0x00000004,0);
  }
  return 0;
}



undefined4 FUN_00010160(void)

{
  int iVar1;
  undefined4 uStack00000004;
  undefined4 uStack0000000c;
  
  iVar1 = FUN_00010160();
  uStack0000000c = 1;
  if (iVar1 != 0) {
    iVar1 = FUN_00010176(0);
    if ((iVar1 != 0) || (iVar1 = FUN_0001018a(0), iVar1 != 0)) {
      return 4;
    }
    uStack0000000c = 2;
  }
  uStack00000004 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x14,&stack0x00000004,0);
  }
  return 0;
}



undefined4 FUN_00010176(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack00000004;
  undefined4 uStack0000000c;
  
  iVar2 = FUN_00010176();
  if ((iVar2 == 0) && (iVar2 = FUN_0001018a(0), iVar2 == 0)) {
    uStack0000000c = 2;
    uStack00000004 = 0;
    uVar1 = 0;
    if (pcRam00000000 != (code *)0x0) {
      (*pcRam00000000)(0x14,&stack0x00000004,0);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 FUN_0001018a(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack00000004;
  undefined4 uStack0000000c;
  
  iVar2 = FUN_0001018a();
  if (iVar2 == 0) {
    uStack0000000c = 2;
    uStack00000004 = 0;
    uVar1 = 0;
    if (pcRam00000000 != (code *)0x0) {
      (*pcRam00000000)(0x14,&stack0x00000004,0);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}


