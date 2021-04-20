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

typedef struct anon_struct.conflict145c anon_struct.conflict145c, *Panon_struct.conflict145c;

struct anon_struct.conflict145c {
    char hostname[256];
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

typedef struct anon_struct.conflict157e anon_struct.conflict157e, *Panon_struct.conflict157e;

struct anon_struct.conflict157e {
    char ssid[33];
    char pwd[33];
};

typedef struct at_callback_para_t at_callback_para_t, *Pat_callback_para_t;

typedef struct at_config_t at_config_t, *Pat_config_t;

typedef struct at_status_t at_status_t, *Pat_status_t;

typedef union anon_union.conflict1779_for_u anon_union.conflict1779_for_u, *Panon_union.conflict1779_for_u;

typedef int at_di_t;

typedef char at_text_t;

typedef uchar at_hex_t;

typedef uint at_hi_t;

typedef struct anon_struct.conflict1486 anon_struct.conflict1486, *Panon_struct.conflict1486;

typedef struct at_tcpserver_para_t at_tcpserver_para_t, *Pat_tcpserver_para_t;

typedef struct anon_struct.conflict14b8 anon_struct.conflict14b8, *Panon_struct.conflict14b8;

typedef struct anon_struct.conflict14df anon_struct.conflict14df, *Panon_struct.conflict14df;

typedef struct anon_struct.conflict153e anon_struct.conflict153e, *Panon_struct.conflict153e;

typedef struct anon_struct.conflict15b5 anon_struct.conflict15b5, *Panon_struct.conflict15b5;

typedef struct anon_struct.conflict1624 anon_struct.conflict1624, *Panon_struct.conflict1624;

typedef struct anon_struct.conflict163d anon_struct.conflict163d, *Panon_struct.conflict163d;

typedef struct anon_struct.conflict1666 anon_struct.conflict1666, *Panon_struct.conflict1666;

typedef struct anon_struct.conflict16af anon_struct.conflict16af, *Panon_struct.conflict16af;

typedef struct at_network_para_t at_network_para_t, *Pat_network_para_t;

typedef struct at_sendData_para_t at_sendData_para_t, *Pat_sendData_para_t;

typedef struct at_close_para_t at_close_para_t, *Pat_close_para_t;

typedef struct at_client_ssl_path_para_t at_client_ssl_path_para_t, *Pat_client_ssl_path_para_t;

typedef struct at_client_ssl_sni_t at_client_ssl_sni_t, *Pat_client_ssl_sni_t;

typedef struct at_client_ssl_alpn_t at_client_ssl_alpn_t, *Pat_client_ssl_alpn_t;

typedef struct at_ble_sync_mode_t at_ble_sync_mode_t, *Pat_ble_sync_mode_t;

typedef struct anon_struct.conflict16c8 anon_struct.conflict16c8, *Panon_struct.conflict16c8;

typedef struct anon_struct.conflict16fc anon_struct.conflict16fc, *Panon_struct.conflict16fc;

typedef int s32;

typedef uchar u8;

typedef __uint32_t uint32_t;

typedef __uint8_t uint8_t;

struct anon_struct.conflict15b5 {
    char ssid[64];
    char psk[64];
    int chl;
    int ecn;
    int max_conn;
    int hidden;
};

struct anon_struct.conflict153e {
    uint32_t sleep_time;
    int weakup_pin;
};

struct anon_struct.conflict163d {
    char hostname[128];
};

struct at_network_para_t {
    at_di_t linkId;
    at_text_t type[4];
    at_text_t hostname[256];
    at_di_t port;
    at_di_t localport;
    at_di_t keepAlive;
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

struct at_client_ssl_alpn_t {
    at_di_t linkId;
    at_text_t * * alpn;
};

struct anon_struct.conflict16c8 {
    int ID;
    int mode;
    int pull;
};

struct anon_struct.conflict1624 {
    char hostname[33];
};

struct anon_struct.conflict1666 {
    char hostname[128];
    uint8_t type;
    uint8_t content_type;
    undefined field_0x82;
    undefined field_0x83;
    uint8_t * data;
};

struct anon_struct.conflict16fc {
    int ID;
    int mode;
};

struct anon_struct.conflict1486 {
    s32 value;
};

struct at_tcpserver_para_t {
    at_di_t port;
    at_di_t enable;
    at_di_t tls;
    at_di_t ca;
};

struct at_close_para_t {
    at_di_t linkId;
};

struct anon_struct.conflict14b8 {
    s32 len;
    u8 * buf;
};

struct anon_struct.conflict14df {
    int uartId;
    int uartBaud;
    int dataBit;
    int parity;
    int stopBit;
    int hwfc;
};

struct anon_struct.conflict16af {
    at_ip_t setdnsip;
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

union anon_union.conflict1779_for_u {
    struct anon_struct.conflict145c ping;
    struct anon_struct.conflict1486 wifi;
    struct anon_struct.conflict1486 scan;
    struct at_tcpserver_para_t tcp_server;
    struct anon_struct.conflict14b8 mode;
    struct anon_struct.conflict14df uart;
    struct anon_struct.conflict153e sleep;
    struct anon_struct.conflict1486 wifiMode;
    struct anon_struct.conflict157e joinParam;
    struct at_ip_para_t at_ip_para;
    struct anon_struct.conflict15b5 apcfgParam;
    struct anon_struct.conflict1624 iphostname;
    struct anon_struct.conflict163d dns_parse;
    struct anon_struct.conflict1666 http_req;
    struct anon_struct.conflict16af set_dns;
    struct at_network_para_t net_param;
    struct at_sendData_para_t send_param;
    struct at_close_para_t close_id;
    struct at_client_ssl_path_para_t client_ssl_path_cfg;
    struct at_client_ssl_sni_t client_ssl_sni_cfg;
    struct at_client_ssl_alpn_t client_ssl_alpn_cfg;
    struct at_ble_sync_mode_t ble_sync_mode;
    struct anon_struct.conflict16c8 setgpio_para;
    struct anon_struct.conflict16fc setiodir_para;
    struct anon_struct.conflict16fc writeiodata_para;
    struct anon_struct.conflict1486 readiodata_para;
    struct anon_struct.conflict1486 deleteap_para;
};

struct at_callback_para_t {
    struct at_config_t * cfg;
    struct at_status_t * sts;
    union anon_union.conflict1779_for_u u;
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

typedef union anon_union.conflict1779 anon_union.conflict1779, *Panon_union.conflict1779;

union anon_union.conflict1779 {
    struct anon_struct.conflict145c ping;
    struct anon_struct.conflict1486 wifi;
    struct anon_struct.conflict1486 scan;
    struct at_tcpserver_para_t tcp_server;
    struct anon_struct.conflict14b8 mode;
    struct anon_struct.conflict14df uart;
    struct anon_struct.conflict153e sleep;
    struct anon_struct.conflict1486 wifiMode;
    struct anon_struct.conflict157e joinParam;
    struct at_ip_para_t at_ip_para;
    struct anon_struct.conflict15b5 apcfgParam;
    struct anon_struct.conflict1624 iphostname;
    struct anon_struct.conflict163d dns_parse;
    struct anon_struct.conflict1666 http_req;
    struct anon_struct.conflict16af set_dns;
    struct at_network_para_t net_param;
    struct at_sendData_para_t send_param;
    struct at_close_para_t close_id;
    struct at_client_ssl_path_para_t client_ssl_path_cfg;
    struct at_client_ssl_sni_t client_ssl_sni_cfg;
    struct at_client_ssl_alpn_t client_ssl_alpn_cfg;
    struct at_ble_sync_mode_t ble_sync_mode;
    struct anon_struct.conflict16c8 setgpio_para;
    struct anon_struct.conflict16fc setiodir_para;
    struct anon_struct.conflict16fc writeiodata_para;
    struct anon_struct.conflict1486 readiodata_para;
    struct anon_struct.conflict1486 deleteap_para;
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




AT_ERROR_CODE at_version(char *version)

{
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  uStack300 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x15,&uStack300,0);
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  undefined4 uStack00000004;
  
  _L0();
  uStack00000004 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x15,&stack0x00000004,0);
  }
  return 0;
}



AT_ERROR_CODE at_restore(char *address)

{
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  uStack300 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x16,&uStack300,0);
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  undefined4 uStack00000004;
  
  _L0();
  uStack00000004 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x16,&stack0x00000004,0);
  }
  return 0;
}



// WARNING: Could not reconcile some variable overlaps

AT_ERROR_CODE at_uart_config_get(void)

{
  int iVar1;
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  uStack300 = 0;
  iVar1 = 6;
  if ((pcRam00000000 != (code *)0x0) && (iVar1 = (*pcRam00000000)(0x18,&uStack300,0), iVar1 == 0)) {
    _LVL11(0);
    FUN_000100f2(0,para.u._0_4_,para.u._4_4_,para.u._12_4_,para.u._8_4_,para.u._16_4_);
    FUN_000100fe(0);
  }
  return (AT_ERROR_CODE)iVar1;
}



int _L0(void)

{
  int iVar1;
  undefined4 uStack00000004;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  _L0();
  uStack00000004 = 0;
  iVar1 = 6;
  if ((pcRam00000000 != (code *)0x0) &&
     (iVar1 = (*pcRam00000000)(0x18,&stack0x00000004,0), iVar1 == 0)) {
    _LVL11(0);
    FUN_000100f2(0,in_stack_00000010,in_stack_00000014,in_stack_0000001c,in_stack_00000018,
                 in_stack_00000020);
    FUN_000100fe(0);
  }
  return iVar1;
}



void _LVL11(void)

{
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  
  _LVL11();
  FUN_000100f2(0,in_stack_00000010,in_stack_00000014,in_stack_0000001c,in_stack_00000018,
               in_stack_00000020);
  FUN_000100fe();
  return;
}



void FUN_000100f2(void)

{
  FUN_000100f2();
  FUN_000100fe();
  return;
}



void FUN_000100fe(void)

{
  FUN_000100fe();
  return;
}



// WARNING: Could not reconcile some variable overlaps

AT_ERROR_CODE at_uart_config(int uartId,int uartBaud,int dataBit,int parity,int stopBit,int hwfc)

{
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  uStack300 = 0;
  if (pcRam00000000 != (code *)0x0) {
    para.sts = (at_status_t *)uartId;
    para.u._0_4_ = uartBaud;
    para.u._4_4_ = dataBit;
    para.u._8_4_ = parity;
    para.u._12_4_ = stopBit;
    para.u._16_4_ = hwfc;
    (*pcRam00000000)(0x17,&uStack300,0);
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  undefined4 uStack00000014;
  
  _L0();
  uStack00000014 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x17,&stack0x00000014,0);
  }
  return 0;
}



// WARNING: Could not reconcile some variable overlaps

AT_ERROR_CODE at_deep_sleep_mode(uint32_t sleep_time,int weakup_pin)

{
  AT_ERROR_CODE AVar1;
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  uStack300 = 0;
  AVar1 = AEC_CMD_ERROR;
  if (pcRam00000000 != (code *)0x0) {
    para.sts = (at_status_t *)sleep_time;
    para.u._0_4_ = weakup_pin;
    AVar1 = (*pcRam00000000)(0x1a,&uStack300,0);
  }
  return AVar1;
}



undefined4 _L0(void)

{
  undefined4 uVar1;
  undefined4 uStack00000004;
  
  _L0();
  uStack00000004 = 0;
  uVar1 = 3;
  if (pcRam00000000 != (code *)0x0) {
    uVar1 = (*pcRam00000000)(0x1a,&stack0x00000004,0);
  }
  return uVar1;
}



AT_ERROR_CODE at_wifi_mode(int wifiMode)

{
  AT_ERROR_CODE AVar1;
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  uStack300 = 0;
  AVar1 = AEC_OK;
  if (pcRam00000000 != (code *)0x0) {
    para.sts = (at_status_t *)wifiMode;
    AVar1 = (*pcRam00000000)(0x1c,&uStack300,0);
  }
  return AVar1;
}



undefined4 _L0(void)

{
  undefined4 uVar1;
  undefined4 uStack00000004;
  
  _L0();
  uStack00000004 = 0;
  uVar1 = 0;
  if (pcRam00000000 != (code *)0x0) {
    uVar1 = (*pcRam00000000)(0x1c,&stack0x00000004,0);
  }
  return uVar1;
}



AT_ERROR_CODE at_wifi_mode_get(void)

{
  int iVar1;
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  uStack300 = 0;
  iVar1 = 0;
  if ((pcRam00000000 != (code *)0x0) && (iVar1 = (*pcRam00000000)(0x1d,&uStack300,0), iVar1 == 0)) {
    _LVL38(0);
    FUN_0001029a(0,para.sts);
    FUN_000102a6(0);
  }
  return (AT_ERROR_CODE)iVar1;
}



int _L0(void)

{
  int iVar1;
  undefined4 uStack00000004;
  undefined4 in_stack_0000000c;
  
  _L0();
  uStack00000004 = 0;
  iVar1 = 0;
  if ((pcRam00000000 != (code *)0x0) &&
     (iVar1 = (*pcRam00000000)(0x1d,&stack0x00000004,0), iVar1 == 0)) {
    _LVL38(0);
    FUN_0001029a(0,in_stack_0000000c);
    FUN_000102a6(0);
  }
  return iVar1;
}



void _LVL38(void)

{
  undefined4 in_stack_0000000c;
  
  _LVL38();
  FUN_0001029a(0,in_stack_0000000c);
  FUN_000102a6();
  return;
}



void FUN_0001029a(void)

{
  FUN_0001029a();
  FUN_000102a6();
  return;
}



void FUN_000102a6(void)

{
  FUN_000102a6();
  return;
}



AT_ERROR_CODE at_get_apinfo(void)

{
  AT_ERROR_CODE AVar1;
  
  if (pcRam00000000 != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x000102d2. Too many branches
                    // WARNING: Treating indirect jump as call
    AVar1 = (*pcRam00000000)(0x1f,0,0);
    return AVar1;
  }
  return AEC_CMD_FAIL;
}



AT_ERROR_CODE at_join_ap(char *ssid,char *pwd)

{
  uint uVar1;
  int iVar2;
  int iStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  FUN_00010306(&para.sts,ssid);
  FUN_00010314(&para.u.field_0x1d,pwd);
  iStack300 = 0;
  uVar1 = _L0(ssid);
  *(uint *)(iStack300 + 0x13c) = uVar1;
  if (uVar1 < 0x21) {
    FUN_00010348(iStack300 + 0x118,0,0x21);
    FUN_0001035c(iStack300 + 0x1d8,0,0x41);
    FUN_0001036c(iStack300 + 0x118,ssid);
    FUN_0001037c(iStack300 + 0x1d8,pwd);
    if ((pcRam00000000 == (code *)0x0) || (iVar2 = (*pcRam00000000)(0x1e,&iStack300,0), iVar2 != 0))
    {
      iVar2 = 2;
    }
  }
  else {
    iVar2 = 0x11;
  }
  return (AT_ERROR_CODE)iVar2;
}



int _L0(void)

{
  uint uVar1;
  int iVar2;
  int iStack00000004;
  
  _L0();
  FUN_00010306(&stack0x0000000c);
  FUN_00010314(&stack0x0000002d);
  iStack00000004 = 0;
  uVar1 = _L0();
  *(uint *)(iStack00000004 + 0x13c) = uVar1;
  if (uVar1 < 0x21) {
    FUN_00010348(iStack00000004 + 0x118,0,0x21);
    FUN_0001035c(iStack00000004 + 0x1d8,0,0x41);
    FUN_0001036c(iStack00000004 + 0x118);
    FUN_0001037c(iStack00000004 + 0x1d8);
    if ((pcRam00000000 == (code *)0x0) ||
       (iVar2 = (*pcRam00000000)(0x1e,&stack0x00000004,0), iVar2 != 0)) {
      iVar2 = 2;
    }
  }
  else {
    iVar2 = 0x11;
  }
  return iVar2;
}



int FUN_00010306(void)

{
  uint uVar1;
  int iVar2;
  int iStack00000004;
  
  FUN_00010306();
  FUN_00010314(&stack0x0000002d);
  iStack00000004 = 0;
  uVar1 = _L0();
  *(uint *)(iStack00000004 + 0x13c) = uVar1;
  if (uVar1 < 0x21) {
    FUN_00010348(iStack00000004 + 0x118,0,0x21);
    FUN_0001035c(iStack00000004 + 0x1d8,0,0x41);
    FUN_0001036c(iStack00000004 + 0x118);
    FUN_0001037c(iStack00000004 + 0x1d8);
    if ((pcRam00000000 == (code *)0x0) ||
       (iVar2 = (*pcRam00000000)(0x1e,&stack0x00000004,0), iVar2 != 0)) {
      iVar2 = 2;
    }
  }
  else {
    iVar2 = 0x11;
  }
  return iVar2;
}



int FUN_00010314(void)

{
  uint uVar1;
  int iVar2;
  int iStack00000004;
  
  FUN_00010314();
  iStack00000004 = 0;
  uVar1 = _L0();
  *(uint *)(iStack00000004 + 0x13c) = uVar1;
  if (uVar1 < 0x21) {
    FUN_00010348(iStack00000004 + 0x118,0,0x21);
    FUN_0001035c(iStack00000004 + 0x1d8,0,0x41);
    FUN_0001036c(iStack00000004 + 0x118);
    FUN_0001037c(iStack00000004 + 0x1d8);
    if ((pcRam00000000 == (code *)0x0) ||
       (iVar2 = (*pcRam00000000)(0x1e,&stack0x00000004,0), iVar2 != 0)) {
      iVar2 = 2;
    }
  }
  else {
    iVar2 = 0x11;
  }
  return iVar2;
}



int _L0(void)

{
  uint uVar1;
  int iVar2;
  int in_stack_00000004;
  
  uVar1 = _L0();
  *(uint *)(in_stack_00000004 + 0x13c) = uVar1;
  if (uVar1 < 0x21) {
    FUN_00010348(in_stack_00000004 + 0x118,0,0x21);
    FUN_0001035c(in_stack_00000004 + 0x1d8,0,0x41);
    FUN_0001036c(in_stack_00000004 + 0x118);
    FUN_0001037c(in_stack_00000004 + 0x1d8);
    if ((pcRam00000000 == (code *)0x0) ||
       (iVar2 = (*pcRam00000000)(0x1e,&stack0x00000004,0), iVar2 != 0)) {
      iVar2 = 2;
    }
  }
  else {
    iVar2 = 0x11;
  }
  return iVar2;
}



int FUN_00010348(void)

{
  int iVar1;
  int in_stack_00000004;
  
  FUN_00010348();
  FUN_0001035c(in_stack_00000004 + 0x1d8,0,0x41);
  FUN_0001036c(in_stack_00000004 + 0x118);
  FUN_0001037c(in_stack_00000004 + 0x1d8);
  if ((pcRam00000000 == (code *)0x0) ||
     (iVar1 = (*pcRam00000000)(0x1e,&stack0x00000004,0), iVar1 != 0)) {
    iVar1 = 2;
  }
  return iVar1;
}



int FUN_0001035c(void)

{
  int iVar1;
  int in_stack_00000004;
  
  FUN_0001035c();
  FUN_0001036c(in_stack_00000004 + 0x118);
  FUN_0001037c(in_stack_00000004 + 0x1d8);
  if ((pcRam00000000 == (code *)0x0) ||
     (iVar1 = (*pcRam00000000)(0x1e,&stack0x00000004,0), iVar1 != 0)) {
    iVar1 = 2;
  }
  return iVar1;
}



int FUN_0001036c(void)

{
  int iVar1;
  int in_stack_00000004;
  
  FUN_0001036c();
  FUN_0001037c(in_stack_00000004 + 0x1d8);
  if ((pcRam00000000 == (code *)0x0) ||
     (iVar1 = (*pcRam00000000)(0x1e,&stack0x00000004,0), iVar1 != 0)) {
    iVar1 = 2;
  }
  return iVar1;
}



int FUN_0001037c(void)

{
  int iVar1;
  
  FUN_0001037c();
  if ((pcRam00000000 == (code *)0x0) ||
     (iVar1 = (*pcRam00000000)(0x1e,&stack0x00000004,0), iVar1 != 0)) {
    iVar1 = 2;
  }
  return iVar1;
}



AT_ERROR_CODE at_scan_attr(char *at_para)

{
  _L0(0,0);
  return AEC_OK;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



AT_ERROR_CODE at_disconnect(char *at_para)

{
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  uStack300 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x22,&uStack300,0);
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  undefined4 uStack00000004;
  
  _L0();
  uStack00000004 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x22,&stack0x00000004,0);
  }
  return 0;
}



AT_ERROR_CODE at_set_dhcp(uchar *at_para)

{
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  uStack300 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x22,&uStack300,0);
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  undefined4 uStack00000004;
  
  _L0();
  uStack00000004 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x22,&stack0x00000004,0);
  }
  return 0;
}



AT_ERROR_CODE at_set_mac(uchar *at_para)

{
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  FUN_0001048c(0,0);
  uStack300 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x22,&uStack300,0);
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  undefined4 uStack00000004;
  
  _L0();
  FUN_0001048c();
  uStack00000004 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x22,&stack0x00000004,0);
  }
  return 0;
}



undefined4 FUN_0001048c(void)

{
  undefined4 uStack00000004;
  
  FUN_0001048c();
  uStack00000004 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x22,&stack0x00000004,0);
  }
  return 0;
}



AT_ERROR_CODE at_set_hostname(char *hostname)

{
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  FUN_000104ec(&para.sts,hostname);
  uStack300 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x22,&uStack300,0);
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  undefined4 uStack00000004;
  
  _L0();
  FUN_000104ec(&stack0x0000000c);
  uStack00000004 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x22,&stack0x00000004,0);
  }
  return 0;
}



undefined4 FUN_000104ec(void)

{
  undefined4 uStack00000004;
  
  FUN_000104ec();
  uStack00000004 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x22,&stack0x00000004,0);
  }
  return 0;
}



AT_ERROR_CODE at_network_status(char *param,at_callback_rsp_t *rsp)

{
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  uStack300 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x29,&uStack300,rsp);
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  undefined4 in_stack_0000000c;
  undefined4 uStack00000014;
  
  _L0();
  uStack00000014 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x29,&stack0x00000014,in_stack_0000000c);
  }
  return 0;
}



AT_ERROR_CODE at_domain_query(char *dnsAdress)

{
  AT_ERROR_CODE AVar1;
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  uStack300 = 0;
  _L0(&para.sts,dnsAdress,0x20);
  AVar1 = AEC_OK;
  if (pcRam00000000 != (code *)0x0) {
    AVar1 = (*pcRam00000000)(0x2a,&uStack300,0);
  }
  return AVar1;
}



undefined _L0(void)

{
  undefined uVar1;
  undefined4 uStack00000004;
  
  _L0();
  uStack00000004 = 0;
  _L0(&stack0x0000000c,0x20);
  uVar1 = 0;
  if (pcRam00000000 != (code *)0x0) {
    uVar1 = (*pcRam00000000)(0x2a,&stack0x00000004,0);
  }
  return uVar1;
}



undefined _L0(void)

{
  undefined uVar1;
  
  _L0();
  uVar1 = 0;
  if (pcRam00000000 != (code *)0x0) {
    uVar1 = (*pcRam00000000)(0x2a,&stack0x00000004,0);
  }
  return uVar1;
}



AT_ERROR_CODE at_send_tcp_buffer(char *tcpBuffer)

{
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  uStack300 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x22,&uStack300,0);
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  undefined4 uStack00000004;
  
  _L0();
  uStack00000004 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x22,&stack0x00000004,0);
  }
  return 0;
}



// WARNING: Variable defined which should be unmapped: para
// WARNING: Could not reconcile some variable overlaps

AT_ERROR_CODE at_set_ap(char *ssid,char *psk,char chl,int max_conn)

{
  AT_ERROR_CODE AVar1;
  undefined4 uVar2;
  undefined3 in_register_00002031;
  undefined4 uStack300;
  at_callback_para_t para;
  
  para.u._124_4_ = CONCAT31(in_register_00002031,chl);
  _L0(0,0);
  FUN_0001064c(&para.sts,0,0x40);
  FUN_0001065c(&para.u.field_0x3c,0,0x40);
  uVar2 = FUN_00010666(ssid);
  FUN_00010674(&para.sts,ssid,uVar2);
  uVar2 = FUN_0001067e(psk);
  FUN_0001068c(&para.u.field_0x3c,psk,uVar2);
  uStack300 = 0;
  AVar1 = AEC_CMD_FAIL;
  if (pcRam00000000 != (code *)0x0) {
    para.u._132_4_ = max_conn;
    AVar1 = (*pcRam00000000)(0x27,&uStack300,0);
  }
  return AVar1;
}



undefined4 _L0(void)

{
  undefined4 uVar1;
  undefined4 uStack00000014;
  
  _L0();
  FUN_0001064c(&stack0x0000001c,0,0x40);
  FUN_0001065c(&stack0x0000005c,0,0x40);
  uVar1 = FUN_00010666();
  FUN_00010674(&stack0x0000001c,uVar1);
  uVar1 = FUN_0001067e();
  FUN_0001068c(&stack0x0000005c,uVar1);
  uStack00000014 = 0;
  uVar1 = 2;
  if (pcRam00000000 != (code *)0x0) {
    uVar1 = (*pcRam00000000)(0x27,&stack0x00000014,0);
  }
  return uVar1;
}



undefined4 FUN_0001064c(void)

{
  undefined4 uVar1;
  undefined4 uStack00000014;
  
  FUN_0001064c();
  FUN_0001065c(&stack0x0000005c,0,0x40);
  uVar1 = FUN_00010666();
  FUN_00010674(&stack0x0000001c,uVar1);
  uVar1 = FUN_0001067e();
  FUN_0001068c(&stack0x0000005c,uVar1);
  uStack00000014 = 0;
  uVar1 = 2;
  if (pcRam00000000 != (code *)0x0) {
    uVar1 = (*pcRam00000000)(0x27,&stack0x00000014,0);
  }
  return uVar1;
}



undefined4 FUN_0001065c(void)

{
  undefined4 uVar1;
  undefined4 uStack00000014;
  
  FUN_0001065c();
  uVar1 = FUN_00010666();
  FUN_00010674(&stack0x0000001c,uVar1);
  uVar1 = FUN_0001067e();
  FUN_0001068c(&stack0x0000005c,uVar1);
  uStack00000014 = 0;
  uVar1 = 2;
  if (pcRam00000000 != (code *)0x0) {
    uVar1 = (*pcRam00000000)(0x27,&stack0x00000014,0);
  }
  return uVar1;
}



undefined4 FUN_00010666(void)

{
  undefined4 uVar1;
  undefined4 uStack00000014;
  
  uVar1 = FUN_00010666();
  FUN_00010674(&stack0x0000001c,uVar1);
  uVar1 = FUN_0001067e();
  FUN_0001068c(&stack0x0000005c,uVar1);
  uStack00000014 = 0;
  uVar1 = 2;
  if (pcRam00000000 != (code *)0x0) {
    uVar1 = (*pcRam00000000)(0x27,&stack0x00000014,0);
  }
  return uVar1;
}



undefined4 FUN_00010674(void)

{
  undefined4 uVar1;
  undefined4 uStack00000014;
  
  FUN_00010674();
  uVar1 = FUN_0001067e();
  FUN_0001068c(&stack0x0000005c,uVar1);
  uStack00000014 = 0;
  uVar1 = 2;
  if (pcRam00000000 != (code *)0x0) {
    uVar1 = (*pcRam00000000)(0x27,&stack0x00000014,0);
  }
  return uVar1;
}



undefined4 FUN_0001067e(void)

{
  undefined4 uVar1;
  undefined4 uStack00000014;
  
  uVar1 = FUN_0001067e();
  FUN_0001068c(&stack0x0000005c,uVar1);
  uStack00000014 = 0;
  uVar1 = 2;
  if (pcRam00000000 != (code *)0x0) {
    uVar1 = (*pcRam00000000)(0x27,&stack0x00000014,0);
  }
  return uVar1;
}



undefined4 FUN_0001068c(void)

{
  undefined4 uVar1;
  undefined4 uStack00000014;
  
  FUN_0001068c();
  uStack00000014 = 0;
  uVar1 = 2;
  if (pcRam00000000 != (code *)0x0) {
    uVar1 = (*pcRam00000000)(0x27,&stack0x00000014,0);
  }
  return uVar1;
}



AT_ERROR_CODE at_ap_sta_get(void)

{
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  uStack300 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x28,&uStack300,0);
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  undefined4 uStack00000004;
  
  _L0();
  uStack00000004 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x28,&stack0x00000004,0);
  }
  return 0;
}



AT_ERROR_CODE at_mux_network(int mux)

{
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  uStack300 = 0;
  iRam00000000 = mux;
  if (mux != 0) {
    (*(code *)mux)(0x22,&uStack300,0);
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  code *unaff_s0;
  undefined4 uStack00000004;
  
  _L0();
  uStack00000004 = 0;
  pcRam00000000 = unaff_s0;
  if (unaff_s0 != (code *)0x0) {
    (*unaff_s0)(0x22,&stack0x00000004,0);
  }
  return 0;
}



AT_ERROR_CODE at_set_trans_mode(int mode)

{
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  uStack300 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x22,&uStack300,0);
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  undefined4 uStack00000004;
  
  _L0();
  uStack00000004 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x22,&stack0x00000004,0);
  }
  return 0;
}



// WARNING: Variable defined which should be unmapped: para
// WARNING: Could not reconcile some variable overlaps

AT_ERROR_CODE
at_http_request(char *url,uint8_t type,uint8_t content_type,uint8_t *data,at_callback_rsp_t *req_rsp
               )

{
  AT_ERROR_CODE AVar1;
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  FUN_000107e8(&para.sts,url,0x80);
  uStack300 = 0;
  AVar1 = AEC_UNSUPPORTED;
  if (pcRam00000000 != (code *)0x0) {
    para.u._124_1_ = type;
    para.u._125_1_ = content_type;
    para.u._128_4_ = data;
    AVar1 = (*pcRam00000000)(0x35,&uStack300,req_rsp);
  }
  return AVar1;
}



undefined4 _L0(void)

{
  undefined4 uVar1;
  undefined4 in_stack_00000008;
  undefined4 uStack00000014;
  
  _L0();
  FUN_000107e8(&stack0x0000001c,0x80);
  uStack00000014 = 0;
  uVar1 = 6;
  if (pcRam00000000 != (code *)0x0) {
    uVar1 = (*pcRam00000000)(0x35,&stack0x00000014,in_stack_00000008);
  }
  return uVar1;
}



undefined4 FUN_000107e8(void)

{
  undefined4 uVar1;
  undefined4 in_stack_00000008;
  undefined4 uStack00000014;
  
  FUN_000107e8();
  uStack00000014 = 0;
  uVar1 = 6;
  if (pcRam00000000 != (code *)0x0) {
    uVar1 = (*pcRam00000000)(0x35,&stack0x00000014,in_stack_00000008);
  }
  return uVar1;
}



AT_ERROR_CODE at_set_dns(char *dnsAdress)

{
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  FUN_0001085c(&para.sts,dnsAdress,4);
  uStack300 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x36,&uStack300,0);
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  undefined4 uStack00000004;
  
  _L0();
  FUN_0001085c(&stack0x0000000c,4);
  uStack00000004 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x36,&stack0x00000004,0);
  }
  return 0;
}



undefined4 FUN_0001085c(void)

{
  undefined4 uStack00000004;
  
  FUN_0001085c();
  uStack00000004 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x36,&stack0x00000004,0);
  }
  return 0;
}



// WARNING: Could not reconcile some variable overlaps

AT_ERROR_CODE at_io_cfg(int ID,int mode,int pull)

{
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  uStack300 = 0;
  if (pcRam00000000 != (code *)0x0) {
    para.sts = (at_status_t *)ID;
    para.u._0_4_ = mode;
    para.u._4_4_ = pull;
    (*pcRam00000000)(0x3a,&uStack300,0);
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  undefined4 uStack00000014;
  
  _L0();
  uStack00000014 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x3a,&stack0x00000014,0);
  }
  return 0;
}



AT_ERROR_CODE at_get_io_cfg(void)

{
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x3b,0,0);
    return AEC_OK;
  }
  return AEC_OK;
}



// WARNING: Could not reconcile some variable overlaps

AT_ERROR_CODE at_set_iodir_cfg(int ID,int mode,int driving,int pull)

{
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  uStack300 = 0;
  if (pcRam00000000 != (code *)0x0) {
    para.sts = (at_status_t *)ID;
    para.u._0_4_ = mode;
    (*pcRam00000000)(0x3c,&uStack300,0);
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  undefined4 uStack00000004;
  
  _L0();
  uStack00000004 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x3c,&stack0x00000004,0);
  }
  return 0;
}



// WARNING: Could not reconcile some variable overlaps

AT_ERROR_CODE at_write_io_data(int ID,int data)

{
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  uStack300 = 0;
  if (pcRam00000000 != (code *)0x0) {
    para.sts = (at_status_t *)ID;
    para.u._0_4_ = data;
    (*pcRam00000000)(0x3d,&uStack300,0);
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  undefined4 uStack00000004;
  
  _L0();
  uStack00000004 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x3d,&stack0x00000004,0);
  }
  return 0;
}



AT_ERROR_CODE at_read_io_data(int ID,int data)

{
  undefined4 uStack300;
  at_callback_para_t para;
  
  _L0(0,0);
  uStack300 = 0;
  if (pcRam00000000 != (code *)0x0) {
    para.sts = (at_status_t *)ID;
    (*pcRam00000000)(0x3e,&uStack300,0);
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  undefined4 uStack00000004;
  
  _L0();
  uStack00000004 = 0;
  if (pcRam00000000 != (code *)0x0) {
    (*pcRam00000000)(0x3e,&stack0x00000004,0);
  }
  return 0;
}


