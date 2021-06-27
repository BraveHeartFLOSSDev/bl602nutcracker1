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
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef int _ssize_t;

typedef union anon_union.conflictd8 anon_union.conflictd8, *Panon_union.conflictd8;

typedef uint wint_t;

union anon_union.conflictd8 { // DWARF DIE: d8
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictd8_for___value anon_union.conflictd8_for___value, *Panon_union.conflictd8_for___value;

union anon_union.conflictd8_for___value { // DWARF DIE: d8
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 10a
    int __count;
    union anon_union.conflictd8_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct cJSON cJSON, *PcJSON;

struct cJSON { // DWARF DIE: 27ae
    struct cJSON * next;
    struct cJSON * prev;
    struct cJSON * child;
    int type;
    char * valuestring;
    int valueint;
    double valuedouble;
    char * string;
    undefined field_0x24;
    undefined field_0x25;
    undefined field_0x26;
    undefined field_0x27;
};

typedef struct pbuf pbuf, *Ppbuf;

typedef ushort __uint16_t;

typedef __uint16_t uint16_t;

typedef uint16_t u16_t;

typedef uchar __uint8_t;

typedef __uint8_t uint8_t;

typedef uint8_t u8_t;

struct pbuf { // DWARF DIE: ad6
    struct pbuf * next;
    void * payload;
    u16_t tot_len;
    u16_t len;
    u8_t type_internal;
    u8_t flags;
    u8_t ref;
    u8_t if_idx;
};

typedef struct hostent hostent, *Phostent;

struct hostent { // DWARF DIE: 11e3
    char * h_name;
    char * * h_aliases;
    int h_addrtype;
    int h_length;
    char * * h_addr_list;
};

typedef enum AT_QUEUE_ERROR_CODE {
    AQEC_EMPTY=2,
    AQEC_FAIL=1,
    AQEC_FULL=3,
    AQEC_OK=0
} AT_QUEUE_ERROR_CODE;

typedef struct at_para_descriptor_t at_para_descriptor_t, *Pat_para_descriptor_t;

typedef enum AT_PARA_TYPE {
    APT_DI=3,
    APT_HEX=2,
    APT_HI=4,
    APT_IP=5,
    APT_TDATA=1,
    APT_TEXT=0
} AT_PARA_TYPE;

typedef uint u32;

struct at_para_descriptor_t { // DWARF DIE: 18cd
    enum AT_PARA_TYPE pt;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    void * pvar;
    u32 option;
};

typedef enum anon_enum_16.conflict18b0 {
    AET_LINE=2048,
    AET_PARA=1024
} anon_enum_16.conflict18b0;

typedef struct ip4_addr ip4_addr, *Pip4_addr;

typedef ulong __uint32_t;

typedef __uint32_t uint32_t;

typedef uint32_t u32_t;

struct ip4_addr { // DWARF DIE: 9ea
    u32_t addr;
};

typedef struct ip4_addr ip4_addr_t;

typedef enum __fdlibm_version {
    __fdlibm_ieee=-1,
    __fdlibm_posix=0
} __fdlibm_version;

typedef __uint32_t in_addr_t;

typedef struct at_status_t at_status_t, *Pat_status_t;

typedef char at_text_t;

typedef int at_di_t;

typedef uchar at_hex_t;

typedef uint at_hi_t;

typedef uchar at_ip_t[4];

struct at_status_t { // DWARF DIE: 169c
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

typedef char __int8_t;

typedef __int8_t int8_t;

typedef int8_t s8_t;

typedef s8_t err_t;

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 8e7
};

typedef long __int32_t;

typedef u16_t mem_size_t;

typedef struct in_addr in_addr, *Pin_addr;

struct in_addr { // DWARF DIE: a42
    in_addr_t s_addr;
};

typedef struct in6_addr in6_addr, *Pin6_addr;

typedef union anon_union.conflicta5d_for_un anon_union.conflicta5d_for_un, *Panon_union.conflicta5d_for_un;

union anon_union.conflicta5d_for_un { // DWARF DIE: a5d
    u32_t u32_addr[4];
    u8_t u8_addr[16];
};

struct in6_addr { // DWARF DIE: a9f
    union anon_union.conflicta5d_for_un un;
};

typedef union anon_union.conflicta5d anon_union.conflicta5d, *Panon_union.conflicta5d;

union anon_union.conflicta5d { // DWARF DIE: a5d
    u32_t u32_addr[4];
    u8_t u8_addr[16];
};

typedef struct at_ip_para_t at_ip_para_t, *Pat_ip_para_t;

struct at_ip_para_t { // DWARF DIE: 1d02
    at_ip_t ip;
    at_ip_t getway;
    at_ip_t netmask;
    at_ip_t dns1;
    at_ip_t dns2;
};

typedef struct anon_struct.conflict20a9 anon_struct.conflict20a9, *Panon_struct.conflict20a9;

typedef int s32;

struct anon_struct.conflict20a9 { // DWARF DIE: 20a9
    s32 value;
};

typedef struct at_scan_para_t at_scan_para_t, *Pat_scan_para_t;

struct at_scan_para_t { // DWARF DIE: 1f47
    at_text_t mode[2];
    at_text_t repeat[2];
};

typedef struct at_para_t at_para_t, *Pat_para_t;

struct at_para_t { // DWARF DIE: 2603
    char * ptr;
};

typedef struct cmd_send_cache cmd_send_cache, *Pcmd_send_cache;

typedef uchar u8;

typedef ushort u16;

struct cmd_send_cache { // DWARF DIE: 26d5
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

typedef struct at_callback_para_t at_callback_para_t, *Pat_callback_para_t;

typedef struct at_config_t at_config_t, *Pat_config_t;

typedef union anon_union.conflict239c_for_u anon_union.conflict239c_for_u, *Panon_union.conflict239c_for_u;

typedef struct anon_struct.conflict207f anon_struct.conflict207f, *Panon_struct.conflict207f;

typedef struct anon_struct.conflict20c2 anon_struct.conflict20c2, *Panon_struct.conflict20c2;

typedef struct at_tcpserver_para_t at_tcpserver_para_t, *Pat_tcpserver_para_t;

typedef struct anon_struct.conflict20db anon_struct.conflict20db, *Panon_struct.conflict20db;

typedef struct anon_struct.conflict2102 anon_struct.conflict2102, *Panon_struct.conflict2102;

typedef struct anon_struct.conflict2161 anon_struct.conflict2161, *Panon_struct.conflict2161;

typedef struct anon_struct.conflict2188 anon_struct.conflict2188, *Panon_struct.conflict2188;

typedef struct anon_struct.conflict21a1 anon_struct.conflict21a1, *Panon_struct.conflict21a1;

typedef struct anon_struct.conflict21d8 anon_struct.conflict21d8, *Panon_struct.conflict21d8;

typedef struct anon_struct.conflict2247 anon_struct.conflict2247, *Panon_struct.conflict2247;

typedef struct anon_struct.conflict2260 anon_struct.conflict2260, *Panon_struct.conflict2260;

typedef struct anon_struct.conflict2289 anon_struct.conflict2289, *Panon_struct.conflict2289;

typedef struct anon_struct.conflict22d2 anon_struct.conflict22d2, *Panon_struct.conflict22d2;

typedef struct at_network_para_t at_network_para_t, *Pat_network_para_t;

typedef struct at_sendData_para_t at_sendData_para_t, *Pat_sendData_para_t;

typedef struct at_close_para_t at_close_para_t, *Pat_close_para_t;

typedef struct at_client_ssl_path_para_t at_client_ssl_path_para_t, *Pat_client_ssl_path_para_t;

typedef struct at_client_ssl_sni_t at_client_ssl_sni_t, *Pat_client_ssl_sni_t;

typedef struct at_client_ssl_alpn_t at_client_ssl_alpn_t, *Pat_client_ssl_alpn_t;

typedef struct at_ble_sync_mode_t at_ble_sync_mode_t, *Pat_ble_sync_mode_t;

typedef struct anon_struct.conflict22eb anon_struct.conflict22eb, *Panon_struct.conflict22eb;

typedef struct anon_struct.conflict231f anon_struct.conflict231f, *Panon_struct.conflict231f;

typedef struct anon_struct.conflict2345 anon_struct.conflict2345, *Panon_struct.conflict2345;

typedef struct anon_struct.conflict236b anon_struct.conflict236b, *Panon_struct.conflict236b;

typedef struct anon_struct.conflict2383 anon_struct.conflict2383, *Panon_struct.conflict2383;

struct anon_struct.conflict20c2 { // DWARF DIE: 20c2
    s32 method;
};

struct anon_struct.conflict236b { // DWARF DIE: 236b
    int ID;
};

struct anon_struct.conflict21a1 { // DWARF DIE: 21a1
    char ssid[33];
    char pwd[33];
};

struct anon_struct.conflict22d2 { // DWARF DIE: 22d2
    at_ip_t setdnsip;
};

struct anon_struct.conflict22eb { // DWARF DIE: 22eb
    int ID;
    int mode;
    int pull;
};

struct at_client_ssl_sni_t { // DWARF DIE: 1e3d
    at_di_t linkId;
    at_text_t sni[256];
};

struct anon_struct.conflict21d8 { // DWARF DIE: 21d8
    char ssid[64];
    char psk[64];
    int chl;
    int ecn;
    int max_conn;
    int hidden;
};

struct anon_struct.conflict2383 { // DWARF DIE: 2383
    int apnum;
};

struct anon_struct.conflict2260 { // DWARF DIE: 2260
    char hostname[128];
};

struct anon_struct.conflict2345 { // DWARF DIE: 2345
    int ID;
    int data;
};

struct anon_struct.conflict2289 { // DWARF DIE: 2289
    char hostname[128];
    uint8_t type;
    uint8_t content_type;
    undefined field_0x82;
    undefined field_0x83;
    uint8_t * data;
};

struct at_close_para_t { // DWARF DIE: 1eac
    at_di_t linkId;
};

struct at_sendData_para_t { // DWARF DIE: 201f
    at_di_t linkId;
    at_di_t bufferlen;
    at_text_t * buffer;
    at_text_t hostname[256];
    at_di_t port;
};

struct at_network_para_t { // DWARF DIE: 1faf
    at_di_t linkId;
    at_text_t type[4];
    at_text_t hostname[256];
    at_di_t port;
    at_di_t localport;
    at_di_t keepAlive;
};

struct at_ble_sync_mode_t { // DWARF DIE: 1f21
    int mode;
};

struct anon_struct.conflict231f { // DWARF DIE: 231f
    int ID;
    int mode;
};

struct anon_struct.conflict20db { // DWARF DIE: 20db
    s32 len;
    u8 * buf;
};

struct anon_struct.conflict2247 { // DWARF DIE: 2247
    char hostname[33];
};

struct at_client_ssl_alpn_t { // DWARF DIE: 1e72
    at_di_t linkId;
    at_text_t * * alpn;
};

struct at_tcpserver_para_t { // DWARF DIE: 1ed2
    at_di_t port;
    at_di_t enable;
    at_di_t tls;
    at_di_t ca;
};

struct at_client_ssl_path_para_t { // DWARF DIE: 1dda
    at_di_t linkId;
    at_di_t auth_mode;
    at_text_t * ca;
    at_text_t * key;
    at_text_t * cert;
};

struct anon_struct.conflict2161 { // DWARF DIE: 2161
    uint32_t sleep_time;
    int weakup_pin;
};

struct anon_struct.conflict207f { // DWARF DIE: 207f
    char hostname[256];
};

struct anon_struct.conflict2102 { // DWARF DIE: 2102
    int uartId;
    int uartBaud;
    int dataBit;
    int parity;
    int stopBit;
    int hwfc;
};

struct anon_struct.conflict2188 { // DWARF DIE: 2188
    int mode;
};

union anon_union.conflict239c_for_u { // DWARF DIE: 239c
    struct anon_struct.conflict207f ping;
    struct anon_struct.conflict20a9 wifi;
    struct anon_struct.conflict20c2 scan;
    struct at_tcpserver_para_t tcp_server;
    struct anon_struct.conflict20db mode;
    struct anon_struct.conflict2102 uart;
    struct anon_struct.conflict2161 sleep;
    struct anon_struct.conflict2188 wifiMode;
    struct anon_struct.conflict21a1 joinParam;
    struct at_ip_para_t at_ip_para;
    struct anon_struct.conflict21d8 apcfgParam;
    struct anon_struct.conflict2247 iphostname;
    struct anon_struct.conflict2260 dns_parse;
    struct anon_struct.conflict2289 http_req;
    struct anon_struct.conflict22d2 set_dns;
    struct at_network_para_t net_param;
    struct at_sendData_para_t send_param;
    struct at_close_para_t close_id;
    struct at_client_ssl_path_para_t client_ssl_path_cfg;
    struct at_client_ssl_sni_t client_ssl_sni_cfg;
    struct at_client_ssl_alpn_t client_ssl_alpn_cfg;
    struct at_ble_sync_mode_t ble_sync_mode;
    struct anon_struct.conflict22eb setgpio_para;
    struct anon_struct.conflict231f setiodir_para;
    struct anon_struct.conflict2345 writeiodata_para;
    struct anon_struct.conflict236b readiodata_para;
    struct anon_struct.conflict2383 deleteap_para;
};

struct at_callback_para_t { // DWARF DIE: 2507
    struct at_config_t * cfg;
    struct at_status_t * sts;
    union anon_union.conflict239c_for_u u;
};

struct at_config_t { // DWARF DIE: 12af
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

typedef struct at_uart_para_t at_uart_para_t, *Pat_uart_para_t;

struct at_uart_para_t { // DWARF DIE: 1bd3
    at_di_t uart_id;
    at_di_t baudrate;
    at_di_t data_bits;
    at_di_t stop_bits;
    at_di_t parity;
    at_di_t hwfc;
};

typedef struct at_scan_opt_t at_scan_opt_t, *Pat_scan_opt_t;

struct at_scan_opt_t { // DWARF DIE: 1f7b
    uint8_t sort_enable;
    uint8_t mask;
};

typedef struct at_getcfg_t at_getcfg_t, *Pat_getcfg_t;

struct at_getcfg_t { // DWARF DIE: 1b8f
    at_text_t key[256];
};

typedef struct at_wifiMode_para_t at_wifiMode_para_t, *Pat_wifiMode_para_t;

struct at_wifiMode_para_t { // DWARF DIE: 1cad
    at_di_t wifi_mode;
};

typedef struct at_command_handler_t at_command_handler_t, *Pat_command_handler_t;

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

struct at_command_handler_t { // DWARF DIE: 2629
    char * cmd;
    AT_ERROR_CODE (* handler)(struct at_para_t *);
    char * usage;
};

typedef struct at_autoconnect_para_t at_autoconnect_para_t, *Pat_autoconnect_para_t;

struct at_autoconnect_para_t { // DWARF DIE: 1c5a
    int autoconnectSwitch;
};

typedef struct at_callback_t at_callback_t, *Pat_callback_t;

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

struct at_callback_t { // DWARF DIE: 25a4
    AT_ERROR_CODE (* handle_cb)(enum AT_CALLBACK_CMD, struct at_callback_para_t *, struct at_callback_rsp_t *);
    s32 (* dump_cb)(u8 *, s32);
};

struct at_callback_rsp_t { // DWARF DIE: 2554
    u8 status;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    s32 type;
    void * vptr;
    s32 vsize;
};

typedef struct cmd_cache cmd_cache, *Pcmd_cache;

struct cmd_cache { // DWARF DIE: 268b
    u32 cnt;
    u8 buf[1028];
};

typedef struct at_http_para_t at_http_para_t, *Pat_http_para_t;

struct at_http_para_t { // DWARF DIE: 1d86
    at_text_t hostname[256];
    uint8_t type;
    uint8_t content_type;
    at_text_t data[256];
};

typedef struct cmd_cache cmd_cache_t;

typedef struct at_echoswitch_para_t at_echoswitch_para_t, *Pat_echoswitch_para_t;

struct at_echoswitch_para_t { // DWARF DIE: 1c37
    int echoSwitch;
};

typedef struct at_hostname_para_t at_hostname_para_t, *Pat_hostname_para_t;

struct at_hostname_para_t { // DWARF DIE: 1d5f
    at_text_t hostname[256];
};

typedef struct at_joinAp_para_t at_joinAp_para_t, *Pat_joinAp_para_t;

struct at_joinAp_para_t { // DWARF DIE: 1cd0
    at_text_t ssid[256];
    at_text_t pwd[256];
};

typedef struct at_gpiowakeup_para_t at_gpiowakeup_para_t, *Pat_gpiowakeup_para_t;

struct at_gpiowakeup_para_t { // DWARF DIE: 1c7d
    at_di_t sleep_time;
    at_di_t gpioId;
};

typedef union anon_union.conflict239c anon_union.conflict239c, *Panon_union.conflict239c;

union anon_union.conflict239c { // DWARF DIE: 239c
    struct anon_struct.conflict207f ping;
    struct anon_struct.conflict20a9 wifi;
    struct anon_struct.conflict20c2 scan;
    struct at_tcpserver_para_t tcp_server;
    struct anon_struct.conflict20db mode;
    struct anon_struct.conflict2102 uart;
    struct anon_struct.conflict2161 sleep;
    struct anon_struct.conflict2188 wifiMode;
    struct anon_struct.conflict21a1 joinParam;
    struct at_ip_para_t at_ip_para;
    struct anon_struct.conflict21d8 apcfgParam;
    struct anon_struct.conflict2247 iphostname;
    struct anon_struct.conflict2260 dns_parse;
    struct anon_struct.conflict2289 http_req;
    struct anon_struct.conflict22d2 set_dns;
    struct at_network_para_t net_param;
    struct at_sendData_para_t send_param;
    struct at_close_para_t close_id;
    struct at_client_ssl_path_para_t client_ssl_path_cfg;
    struct at_client_ssl_sni_t client_ssl_sni_cfg;
    struct at_client_ssl_alpn_t client_ssl_alpn_cfg;
    struct at_ble_sync_mode_t ble_sync_mode;
    struct anon_struct.conflict22eb setgpio_para;
    struct anon_struct.conflict231f setiodir_para;
    struct anon_struct.conflict2345 writeiodata_para;
    struct anon_struct.conflict236b readiodata_para;
    struct anon_struct.conflict2383 deleteap_para;
};

typedef struct memp memp, *Pmemp;

struct memp { // DWARF DIE: bcd
    struct memp * next;
};

typedef struct memp_desc memp_desc, *Pmemp_desc;

typedef struct stats_mem stats_mem, *Pstats_mem;

struct stats_mem { // DWARF DIE: c42
    u16_t err;
    mem_size_t avail;
    mem_size_t used;
    mem_size_t max;
    u16_t illegal;
};

struct memp_desc { // DWARF DIE: bee
    struct stats_mem * stats;
    u16_t size;
    u16_t num;
    u8_t * base;
    struct memp * * tab;
};

typedef struct netif netif, *Pnetif;

typedef enum netif_mac_filter_action {
    NETIF_ADD_MAC_FILTER=1,
    NETIF_DEL_MAC_FILTER=0
} netif_mac_filter_action;

typedef ip4_addr_t ip_addr_t;

struct netif { // DWARF DIE: fa2
    struct netif * next;
    ip_addr_t ip_addr;
    ip_addr_t netmask;
    ip_addr_t gw;
    err_t (* input)(struct pbuf *, struct netif *);
    err_t (* output)(struct netif *, struct pbuf *, ip4_addr_t *);
    err_t (* linkoutput)(struct netif *, struct pbuf *);
    void (* status_callback)(struct netif *);
    void (* link_callback)(struct netif *);
    void * state;
    void * client_data[3];
    char * hostname;
    u16_t mtu;
    u8_t hwaddr[6];
    u8_t hwaddr_len;
    u8_t flags;
    char name[2];
    u8_t num;
    u8_t rs_count;
    undefined field_0x46;
    undefined field_0x47;
    err_t (* igmp_mac_filter)(struct netif *, ip4_addr_t *, enum netif_mac_filter_action);
};

typedef enum lwip_internal_netif_client_data_index {
    LWIP_NETIF_CLIENT_DATA_INDEX_DHCP=0,
    LWIP_NETIF_CLIENT_DATA_INDEX_IGMP=1,
    LWIP_NETIF_CLIENT_DATA_INDEX_MAX=2
} lwip_internal_netif_client_data_index;

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8b2_for__new anon_union.conflict8b2_for__new, *Panon_union.conflict8b2_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict726 anon_struct.conflict726, *Panon_struct.conflict726;

typedef struct anon_struct.conflict86b anon_struct.conflict86b, *Panon_struct.conflict86b;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct anon_struct.conflict86b { // DWARF DIE: 86b
    uchar * _nextf[30];
    uint _nmalloc[30];
};

struct _rand48 { // DWARF DIE: 6dd
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue { // DWARF DIE: 698
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf { // DWARF DIE: 308
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 336
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

struct _on_exit_args { // DWARF DIE: 253
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 2a8
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct __tm { // DWARF DIE: 1d0
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

struct anon_struct.conflict726 { // DWARF DIE: 726
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

union anon_union.conflict8b2_for__new { // DWARF DIE: 8b2
    struct anon_struct.conflict726 _reent;
    struct anon_struct.conflict86b _unused;
};

struct _reent { // DWARF DIE: 4a2
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
    union anon_union.conflict8b2_for__new _new;
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

struct _Bigint { // DWARF DIE: 160
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

typedef union anon_union.conflict8b2 anon_union.conflict8b2, *Panon_union.conflict8b2;

union anon_union.conflict8b2 { // DWARF DIE: 8b2
    struct anon_struct.conflict726 _reent;
    struct anon_struct.conflict86b _unused;
};

typedef struct stats_proto stats_proto, *Pstats_proto;

struct stats_proto { // DWARF DIE: ccf
    u16_t xmit;
    u16_t recv;
    u16_t fw;
    u16_t drop;
    u16_t chkerr;
    u16_t lenerr;
    u16_t memerr;
    u16_t rterr;
    u16_t proterr;
    u16_t opterr;
    u16_t err;
    u16_t cachehit;
};

typedef struct stats_sys stats_sys, *Pstats_sys;

typedef struct stats_syselem stats_syselem, *Pstats_syselem;

struct stats_syselem { // DWARF DIE: e3c
    u16_t used;
    u16_t max;
    u16_t err;
};

struct stats_sys { // DWARF DIE: e71
    struct stats_syselem sem;
    struct stats_syselem mutex;
    struct stats_syselem mbox;
};

typedef struct stats_ stats_, *Pstats_;

typedef struct stats_igmp stats_igmp, *Pstats_igmp;

struct stats_igmp { // DWARF DIE: d78
    u16_t xmit;
    u16_t recv;
    u16_t drop;
    u16_t chkerr;
    u16_t lenerr;
    u16_t memerr;
    u16_t proterr;
    u16_t rx_v1;
    u16_t rx_group;
    u16_t rx_general;
    u16_t rx_report;
    u16_t tx_join;
    u16_t tx_leave;
    u16_t tx_report;
};

struct stats_ { // DWARF DIE: ea6
    struct stats_proto link;
    struct stats_proto etharp;
    struct stats_proto ip;
    struct stats_proto icmp;
    struct stats_igmp igmp;
    struct stats_proto udp;
    struct stats_proto tcp;
    struct stats_mem mem;
    undefined field_0xb6;
    undefined field_0xb7;
    struct stats_mem * memp[15];
    struct stats_sys sys;
    undefined field_0x106;
    undefined field_0x107;
};

typedef enum anon_enum_8.conflictb5e {
    MEMP_ALTCP_PCB=5,
    MEMP_IGMP_GROUP=10,
    MEMP_MAX=15,
    MEMP_NETBUF=6,
    MEMP_NETCONN=7,
    MEMP_NETDB=12,
    MEMP_PBUF=13,
    MEMP_PBUF_POOL=14,
    MEMP_RAW_PCB=0,
    MEMP_SYS_TIMEOUT=11,
    MEMP_TCPIP_MSG_API=8,
    MEMP_TCPIP_MSG_INPKT=9,
    MEMP_TCP_PCB=2,
    MEMP_TCP_PCB_LISTEN=3,
    MEMP_TCP_SEG=4,
    MEMP_UDP_PCB=1
} anon_enum_8.conflictb5e;

typedef __int32_t int32_t;

typedef int32_t BaseType_t;

typedef uint32_t TickType_t;

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




// DWARF DIE: 36f2

AT_ERROR_CODE wifi_supports(at_para_t *at_para)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 0) {
    iVar1 = 4;
  }
  return (AT_ERROR_CODE)iVar1;
}



int _L0(void)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 0) {
    iVar1 = 4;
  }
  return iVar1;
}



// DWARF DIE: 3cab

AT_ERROR_CODE attention_handler(at_para_t *at_para)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Could not reconcile some variable overlaps
// DWARF DIE: 3176

AT_ERROR_CODE wifi_mode_handler(at_para_t *at_para)

{
  AT_ERROR_CODE extraout_a0;
  AT_ERROR_CODE AVar1;
  AT_ERROR_CODE extraout_a0_00;
  int iVar2;
  char *pcVar3;
  undefined4 uStack36;
  at_wifiMode_para_t wifiParam;
  s32 paracnt;
  at_para_descriptor_t cmd_para_list [1];
  
  paracnt._0_1_ = 3;
  cmd_para_list[0]._0_4_ = &uStack36;
  cmd_para_list[0].pvar = (void *)0xc04;
  pcVar3 = at_para->ptr;
  uStack36 = 0;
  if (*pcVar3 == '?') {
    at_para->ptr = pcVar3 + 1;
    _L0();
    AVar1 = extraout_a0;
  }
  else {
    if (*pcVar3 == '=') {
      at_para->ptr = pcVar3 + 1;
      iVar2 = FUN_00010078();
      if ((iVar2 == 0) && (0 < wifiParam)) {
        FUN_00010092();
        FUN_0001009c();
        return extraout_a0_00;
      }
    }
    AVar1 = AEC_PARA_ERROR;
  }
  return AVar1;
}



void _L0(void)

{
  _L0();
  return;
}



undefined4 FUN_00010078(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_a0;
  int in_stack_00000010;
  
  iVar2 = FUN_00010078();
  if ((iVar2 == 0) && (0 < in_stack_00000010)) {
    FUN_00010092();
    FUN_0001009c();
    uVar1 = extraout_a0;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}



void FUN_00010092(void)

{
  FUN_00010092();
  FUN_0001009c();
  return;
}



void FUN_0001009c(void)

{
  FUN_0001009c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 3408

AT_ERROR_CODE http_req(at_para_t *at_para)

{
  AT_ERROR_CODE AVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iStack84;
  s32 paracnt;
  at_para_descriptor_t cmd_para_list [4];
  
  iVar2 = _L0();
  AVar1 = AEC_NOT_ENOUGH_MEMORY;
  if (iVar2 != 0) {
    AVar1 = AEC_PARA_ERROR;
    if (*at_para->ptr == '=') {
      at_para->ptr = at_para->ptr + 1;
      iVar3 = _LVL17();
      if ((((iVar3 == 0) && (2 < iStack84)) && (*(byte *)(iVar2 + 0x100) < 2)) &&
         (*(byte *)(iVar2 + 0x101) < 4)) {
        uRam00000000 = 0;
        _DAT_00000008 = 0;
        _DAT_0000000c = 0;
        uVar4 = _L0();
        FUN_0001016e();
        AVar1 = (AT_ERROR_CODE)uVar4;
      }
      else {
        _LVL25();
        AVar1 = AEC_PARA_ERROR;
      }
    }
  }
  return AVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char **unaff_s3;
  int in_stack_0000000c;
  undefined uStack00000010;
  int iStack00000014;
  undefined4 uStack00000018;
  undefined uStack0000001c;
  int iStack00000020;
  undefined4 uStack00000024;
  undefined uStack00000028;
  int iStack0000002c;
  undefined4 uStack00000030;
  undefined uStack00000034;
  int iStack00000038;
  undefined4 uStack0000003c;
  
  iVar2 = _L0();
  uVar1 = 0x14;
  if (iVar2 != 0) {
    iStack00000014 = iVar2 + 0x100;
    uStack00000030 = 0xd00;
    uStack0000003c = 0xd00;
    iStack00000020 = iVar2 + 0x101;
    iStack00000038 = iVar2 + 0x102;
    uStack00000018 = 0xc01;
    uStack00000024 = 0xc01;
    uStack00000010 = 3;
    uStack0000001c = 3;
    uStack00000028 = 0;
    uStack00000034 = 1;
    uVar1 = 4;
    if (**unaff_s3 == '=') {
      *unaff_s3 = *unaff_s3 + 1;
      iStack0000002c = iVar2;
      iVar3 = _LVL17();
      if ((((iVar3 == 0) && (2 < in_stack_0000000c)) && (*(byte *)(iVar2 + 0x100) < 2)) &&
         (*(byte *)(iVar2 + 0x101) < 4)) {
        uRam00000000 = 0;
        _DAT_00000008 = 0;
        _DAT_0000000c = 0;
        uVar1 = _L0();
        FUN_0001016e();
      }
      else {
        _LVL25();
        uVar1 = 4;
      }
    }
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _LVL17(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  uint unaff_s2;
  uint unaff_s5;
  int in_stack_0000000c;
  
  iVar1 = _LVL17();
  if ((((iVar1 == 0) && (2 < in_stack_0000000c)) && (*(byte *)(unaff_s0 + 0x100) <= unaff_s5)) &&
     (*(byte *)(unaff_s0 + 0x101) <= unaff_s2)) {
    uRam00000000 = 0;
    _DAT_00000008 = 0;
    _DAT_0000000c = 0;
    uVar2 = _L0();
    FUN_0001016e();
  }
  else {
    _LVL25();
    uVar2 = 4;
  }
  return uVar2;
}



undefined4 _L0(void)

{
  undefined4 uVar1;
  
  uVar1 = _L0();
  FUN_0001016e();
  return uVar1;
}



void FUN_0001016e(void)

{
  FUN_0001016e();
  return;
}



undefined4 _LVL25(void)

{
  _LVL25();
  return 4;
}



// WARNING: Could not reconcile some variable overlaps
// DWARF DIE: 3233

AT_ERROR_CODE domain_name_resolution(at_para_t *at_para)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_a0;
  int iVar3;
  int iStack304;
  s32 paracnt;
  at_para_descriptor_t cmd_para_list [1];
  at_hostname_para_t hostParam;
  
  cmd_para_list[0]._0_4_ = &cmd_para_list[0].option;
  _L0();
  FUN_000101da();
  cmd_para_list[0].pvar = (void *)0xd00;
  if (*at_para->ptr == '=') {
    at_para->ptr = at_para->ptr + 1;
    iVar1 = FUN_0001022e();
    if ((iVar1 == 0) && (0 < iStack304)) {
      FUN_0001024a();
      iVar2 = FUN_00010254();
      if (iVar2 == 0) {
        iVar1 = 0x13;
      }
      else {
        for (iVar3 = 0; *(int *)(iVar3 * 4 + *(int *)(iVar2 + 0x10)) != 0; iVar3 += 1) {
        }
        _L0();
        FUN_0001028a();
        FUN_00010296();
        iVar3 = 0;
        while (*(int *)(*(int *)(iVar2 + 0x10) + iVar3) != 0) {
          FUN_000102b6();
          _L0(*(undefined4 *)(iVar3 + *(int *)(iVar2 + 0x10)));
          FUN_000102d8(extraout_a0);
          FUN_000102e4();
          iVar3 = iVar3 + 4;
        }
      }
      goto _L0;
    }
  }
  iVar1 = 4;
_L0:
  return (AT_ERROR_CODE)iVar1;
}



undefined4 _L0(void)

{
  char **unaff_s1;
  int iVar1;
  undefined4 extraout_a0;
  int iVar2;
  int iStack0000000c;
  int in_stack_00000010;
  undefined uStack00000014;
  undefined4 uStack0000001c;
  
  _L0();
  FUN_000101da();
  uStack0000001c = 0xd00;
  uStack00000014 = 0;
  if (**unaff_s1 == '=') {
    *unaff_s1 = *unaff_s1 + 1;
    iVar1 = FUN_0001022e();
    if ((iVar1 == 0) && (0 < in_stack_00000010)) {
      FUN_0001024a();
      iVar1 = FUN_00010254();
      if (iVar1 != 0) {
        for (iStack0000000c = 0; *(int *)(iStack0000000c * 4 + *(int *)(iVar1 + 0x10)) != 0;
            iStack0000000c += 1) {
        }
        _L0();
        FUN_0001028a();
        FUN_00010296();
        iVar2 = 0;
        while (*(int *)(*(int *)(iVar1 + 0x10) + iVar2) != 0) {
          FUN_000102b6();
          _L0(*(undefined4 *)(iVar2 + *(int *)(iVar1 + 0x10)));
          FUN_000102d8(extraout_a0);
          FUN_000102e4();
          iVar2 = iVar2 + 4;
        }
        return 0;
      }
      return 0x13;
    }
  }
  return 4;
}



undefined4 FUN_000101da(void)

{
  char **unaff_s1;
  int iVar1;
  undefined4 extraout_a0;
  int iVar2;
  int iStack0000000c;
  int in_stack_00000010;
  undefined uStack00000014;
  undefined4 uStack0000001c;
  
  FUN_000101da();
  uStack0000001c = 0xd00;
  uStack00000014 = 0;
  if (**unaff_s1 == '=') {
    *unaff_s1 = *unaff_s1 + 1;
    iVar1 = FUN_0001022e();
    if ((iVar1 == 0) && (0 < in_stack_00000010)) {
      FUN_0001024a();
      iVar1 = FUN_00010254();
      if (iVar1 != 0) {
        for (iStack0000000c = 0; *(int *)(iStack0000000c * 4 + *(int *)(iVar1 + 0x10)) != 0;
            iStack0000000c += 1) {
        }
        _L0();
        FUN_0001028a();
        FUN_00010296();
        iVar2 = 0;
        while (*(int *)(*(int *)(iVar1 + 0x10) + iVar2) != 0) {
          FUN_000102b6();
          _L0(*(undefined4 *)(iVar2 + *(int *)(iVar1 + 0x10)));
          FUN_000102d8(extraout_a0);
          FUN_000102e4();
          iVar2 = iVar2 + 4;
        }
        return 0;
      }
      return 0x13;
    }
  }
  return 4;
}



int FUN_0001022e(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_a0;
  int iVar3;
  int iStack0000000c;
  int in_stack_00000010;
  
  iVar1 = FUN_0001022e();
  if ((iVar1 == 0) && (0 < in_stack_00000010)) {
    FUN_0001024a();
    iVar2 = FUN_00010254();
    if (iVar2 == 0) {
      iVar1 = 0x13;
    }
    else {
      for (iStack0000000c = 0; *(int *)(iStack0000000c * 4 + *(int *)(iVar2 + 0x10)) != 0;
          iStack0000000c += 1) {
      }
      _L0();
      FUN_0001028a();
      FUN_00010296();
      iVar3 = 0;
      while (*(int *)(*(int *)(iVar2 + 0x10) + iVar3) != 0) {
        FUN_000102b6();
        _L0(*(undefined4 *)(iVar3 + *(int *)(iVar2 + 0x10)));
        FUN_000102d8(extraout_a0);
        FUN_000102e4();
        iVar3 = iVar3 + 4;
      }
    }
  }
  else {
    iVar1 = 4;
  }
  return iVar1;
}



undefined4 FUN_0001024a(void)

{
  undefined4 unaff_s1;
  int iVar1;
  undefined4 extraout_a0;
  int iVar2;
  int iStack0000000c;
  
  FUN_0001024a();
  iVar1 = FUN_00010254();
  if (iVar1 == 0) {
    unaff_s1 = 0x13;
  }
  else {
    for (iStack0000000c = 0; *(int *)(iStack0000000c * 4 + *(int *)(iVar1 + 0x10)) != 0;
        iStack0000000c += 1) {
    }
    _L0();
    FUN_0001028a();
    FUN_00010296();
    iVar2 = 0;
    while (*(int *)(*(int *)(iVar1 + 0x10) + iVar2) != 0) {
      FUN_000102b6();
      _L0(*(undefined4 *)(iVar2 + *(int *)(iVar1 + 0x10)));
      FUN_000102d8(extraout_a0);
      FUN_000102e4();
      iVar2 = iVar2 + 4;
    }
  }
  return unaff_s1;
}



undefined4 FUN_00010254(void)

{
  undefined4 unaff_s1;
  int iVar1;
  undefined4 extraout_a0;
  int iVar2;
  int iStack0000000c;
  
  iVar1 = FUN_00010254();
  if (iVar1 == 0) {
    unaff_s1 = 0x13;
  }
  else {
    for (iStack0000000c = 0; *(int *)(iStack0000000c * 4 + *(int *)(iVar1 + 0x10)) != 0;
        iStack0000000c += 1) {
    }
    _L0();
    FUN_0001028a();
    FUN_00010296();
    iVar2 = 0;
    while (*(int *)(*(int *)(iVar1 + 0x10) + iVar2) != 0) {
      FUN_000102b6();
      _L0(*(undefined4 *)(iVar2 + *(int *)(iVar1 + 0x10)));
      FUN_000102d8(extraout_a0);
      FUN_000102e4();
      iVar2 = iVar2 + 4;
    }
  }
  return unaff_s1;
}



void _L0(void)

{
  undefined4 extraout_a0;
  int iVar1;
  int unaff_s3;
  
  _L0();
  FUN_0001028a();
  FUN_00010296();
  iVar1 = 0;
  while (*(int *)(*(int *)(unaff_s3 + 0x10) + iVar1) != 0) {
    FUN_000102b6();
    _L0(*(undefined4 *)(iVar1 + *(int *)(unaff_s3 + 0x10)));
    FUN_000102d8(extraout_a0);
    FUN_000102e4();
    iVar1 = iVar1 + 4;
  }
  return;
}



void FUN_0001028a(void)

{
  undefined4 extraout_a0;
  int iVar1;
  int unaff_s3;
  
  FUN_0001028a();
  FUN_00010296();
  iVar1 = 0;
  while (*(int *)(*(int *)(unaff_s3 + 0x10) + iVar1) != 0) {
    FUN_000102b6();
    _L0(*(undefined4 *)(iVar1 + *(int *)(unaff_s3 + 0x10)));
    FUN_000102d8(extraout_a0);
    FUN_000102e4();
    iVar1 = iVar1 + 4;
  }
  return;
}



void FUN_00010296(void)

{
  undefined4 extraout_a0;
  int iVar1;
  int unaff_s3;
  
  FUN_00010296();
  iVar1 = 0;
  while (*(int *)(*(int *)(unaff_s3 + 0x10) + iVar1) != 0) {
    FUN_000102b6();
    _L0(*(undefined4 *)(iVar1 + *(int *)(unaff_s3 + 0x10)));
    FUN_000102d8(extraout_a0);
    FUN_000102e4();
    iVar1 = iVar1 + 4;
  }
  return;
}



void FUN_000102b6(void)

{
  undefined4 extraout_a0;
  int *piVar1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  do {
    FUN_000102b6();
    _L0(*(undefined4 *)(unaff_s2 + *(int *)(unaff_s3 + 0x10)));
    FUN_000102d8(extraout_a0);
    FUN_000102e4();
    piVar1 = (int *)(*(int *)(unaff_s3 + 0x10) + unaff_s4);
    unaff_s2 = unaff_s4;
    unaff_s4 = unaff_s4 + 4;
  } while (*piVar1 != 0);
  return;
}



void _L0(undefined4 param_1)

{
  undefined4 extraout_a0;
  int unaff_s2;
  int unaff_s3;
  
  while( true ) {
    _L0(param_1);
    FUN_000102d8(extraout_a0);
    FUN_000102e4();
    if (*(int *)(*(int *)(unaff_s3 + 0x10) + unaff_s2) == 0) break;
    FUN_000102b6();
    param_1 = *(undefined4 *)(unaff_s2 + *(int *)(unaff_s3 + 0x10));
    unaff_s2 = unaff_s2 + 4;
  }
  return;
}



void FUN_000102d8(undefined4 param_1)

{
  undefined4 extraout_a0;
  int unaff_s2;
  int unaff_s3;
  
  while( true ) {
    FUN_000102d8(param_1);
    FUN_000102e4();
    if (*(int *)(*(int *)(unaff_s3 + 0x10) + unaff_s2) == 0) break;
    FUN_000102b6();
    _L0(*(undefined4 *)(unaff_s2 + *(int *)(unaff_s3 + 0x10)));
    param_1 = extraout_a0;
    unaff_s2 = unaff_s2 + 4;
  }
  return;
}



void FUN_000102e4(void)

{
  undefined4 extraout_a0;
  int unaff_s2;
  int unaff_s3;
  
  while( true ) {
    FUN_000102e4();
    if (*(int *)(*(int *)(unaff_s3 + 0x10) + unaff_s2) == 0) break;
    FUN_000102b6();
    _L0(*(undefined4 *)(unaff_s2 + *(int *)(unaff_s3 + 0x10)));
    FUN_000102d8(extraout_a0);
    unaff_s2 = unaff_s2 + 4;
  }
  return;
}



// DWARF DIE: 3533

AT_ERROR_CODE base_station_info(at_para_t *at_para)

{
  int iVar1;
  int iVar2;
  at_callback_rsp_t rsp;
  
  iVar2 = _L0();
  iVar1 = 4;
  if (iVar2 == 0) {
    _LVL56();
    iVar1 = _L0();
    if (iVar1 == 0) {
      iVar2 = _LVL60();
      if (iVar2 == 0) {
        iVar1 = 0x13;
      }
      else {
        FUN_00010362();
        _LVL65();
        _LVL68();
        _LVL71();
        FUN_000103c2();
        FUN_000103ce();
        FUN_000103d8();
        FUN_000103e2();
      }
    }
  }
  return (AT_ERROR_CODE)iVar1;
}



int _L0(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_a0;
  undefined4 extraout_a0_00;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  int iStack00000018;
  undefined4 uStack0000001c;
  
  iVar2 = _L0();
  iVar1 = 4;
  if (iVar2 == 0) {
    iStack00000018 = _LVL56();
    uStack0000001c = 0x80;
    iVar1 = _L0();
    if (iVar1 == 0) {
      iVar2 = _LVL60();
      if (iVar2 == 0) {
        iVar1 = 0x13;
      }
      else {
        FUN_00010362();
        _LVL65();
        uStack0000000c = extraout_a0;
        _LVL68();
        uStack00000008 = extraout_a0_00;
        _LVL71();
        FUN_000103c2();
        FUN_000103ce();
        FUN_000103d8();
        FUN_000103e2();
      }
    }
  }
  return iVar1;
}



int _LVL56(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_a0;
  undefined4 extraout_a0_00;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  int iStack00000018;
  undefined4 uStack0000001c;
  
  iStack00000018 = _LVL56();
  uStack0000001c = 0x80;
  iVar1 = _L0();
  if (iVar1 == 0) {
    iVar2 = _LVL60();
    if (iVar2 == 0) {
      iVar1 = 0x13;
    }
    else {
      FUN_00010362();
      _LVL65();
      uStack0000000c = extraout_a0;
      _LVL68();
      uStack00000008 = extraout_a0_00;
      _LVL71();
      FUN_000103c2();
      FUN_000103ce();
      FUN_000103d8();
      FUN_000103e2();
    }
  }
  return iVar1;
}



int _L0(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_a0;
  undefined4 extraout_a0_00;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  iVar1 = _L0();
  if (iVar1 == 0) {
    iVar2 = _LVL60();
    if (iVar2 == 0) {
      iVar1 = 0x13;
    }
    else {
      FUN_00010362();
      _LVL65();
      uStack0000000c = extraout_a0;
      _LVL68();
      uStack00000008 = extraout_a0_00;
      _LVL71();
      FUN_000103c2();
      FUN_000103ce();
      FUN_000103d8();
      FUN_000103e2();
    }
  }
  return iVar1;
}



undefined4 _LVL60(void)

{
  undefined4 unaff_s0;
  int iVar1;
  undefined4 extraout_a0;
  undefined4 extraout_a0_00;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  iVar1 = _LVL60();
  if (iVar1 == 0) {
    unaff_s0 = 0x13;
  }
  else {
    FUN_00010362();
    _LVL65();
    uStack0000000c = extraout_a0;
    _LVL68();
    uStack00000008 = extraout_a0_00;
    _LVL71();
    FUN_000103c2();
    FUN_000103ce();
    FUN_000103d8();
    FUN_000103e2();
  }
  return unaff_s0;
}



void FUN_00010362(void)

{
  undefined4 extraout_a0;
  undefined4 extraout_a0_00;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  FUN_00010362();
  _LVL65();
  uStack0000000c = extraout_a0;
  _LVL68();
  uStack00000008 = extraout_a0_00;
  _LVL71();
  FUN_000103c2();
  FUN_000103ce();
  FUN_000103d8();
  FUN_000103e2();
  return;
}



void _LVL65(void)

{
  undefined4 extraout_a0;
  undefined4 extraout_a0_00;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  _LVL65();
  uStack0000000c = extraout_a0;
  _LVL68();
  uStack00000008 = extraout_a0_00;
  _LVL71();
  FUN_000103c2();
  FUN_000103ce();
  FUN_000103d8();
  FUN_000103e2();
  return;
}



void _LVL68(void)

{
  undefined4 extraout_a0;
  undefined4 uStack00000008;
  
  _LVL68();
  uStack00000008 = extraout_a0;
  _LVL71();
  FUN_000103c2();
  FUN_000103ce();
  FUN_000103d8();
  FUN_000103e2();
  return;
}



void _LVL71(void)

{
  _LVL71();
  FUN_000103c2();
  FUN_000103ce();
  FUN_000103d8();
  FUN_000103e2();
  return;
}



void FUN_000103c2(void)

{
  FUN_000103c2();
  FUN_000103ce();
  FUN_000103d8();
  FUN_000103e2();
  return;
}



void FUN_000103ce(void)

{
  FUN_000103ce();
  FUN_000103d8();
  FUN_000103e2();
  return;
}



void FUN_000103d8(void)

{
  FUN_000103d8();
  FUN_000103e2();
  return;
}



void FUN_000103e2(void)

{
  FUN_000103e2();
  return;
}



// WARNING: Could not reconcile some variable overlaps
// DWARF DIE: 2e31

AT_ERROR_CODE deep_sleep_handler(at_para_t *at_para)

{
  AT_ERROR_CODE extraout_a0;
  int iVar1;
  int iStack52;
  s32 paracnt;
  at_gpiowakeup_para_t wakeupParam;
  at_para_descriptor_t cmd_para_list [2];
  
  cmd_para_list[0]._0_4_ = &paracnt;
  cmd_para_list[0].pvar = (void *)0xc04;
  cmd_para_list[1].pvar = (void *)0xc04;
  wakeupParam.gpioId._0_1_ = 3;
  cmd_para_list[0].option._0_1_ = 3;
  cmd_para_list[1]._0_4_ = &wakeupParam;
  paracnt = 0;
  wakeupParam.sleep_time = 0;
  if (*at_para->ptr == '=') {
    at_para->ptr = at_para->ptr + 1;
    iVar1 = FUN_00010442();
    if ((iVar1 == 0) && (0 < iStack52)) {
      FUN_0001045e();
      FUN_0001046a();
      return extraout_a0;
    }
  }
  return AEC_PARA_ERROR;
}



undefined4 FUN_00010442(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_a0;
  int in_stack_0000000c;
  
  iVar2 = FUN_00010442();
  if ((iVar2 == 0) && (0 < in_stack_0000000c)) {
    FUN_0001045e();
    FUN_0001046a();
    uVar1 = extraout_a0;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}



void FUN_0001045e(void)

{
  FUN_0001045e();
  FUN_0001046a();
  return;
}



void FUN_0001046a(void)

{
  FUN_0001046a();
  return;
}



// WARNING: Could not reconcile some variable overlaps
// DWARF DIE: 2a1a

AT_ERROR_CODE setautoconnect_handler(at_para_t *at_para)

{
  char cVar1;
  AT_ERROR_CODE AVar2;
  int iStack40;
  at_autoconnect_para_t autoParam;
  s32 paracnt;
  int res;
  at_para_descriptor_t cmd_para_list [1];
  
  _L0();
  res._0_1_ = 3;
  cmd_para_list[0]._0_4_ = &iStack40;
  cmd_para_list[0].pvar = (void *)0xc04;
  iStack40 = 0;
  paracnt = 0;
  cVar1 = *at_para->ptr;
  if (cVar1 == '?') {
    FUN_000104c2();
    FUN_000104d2();
    FUN_000104e4();
    FUN_000104f0();
_L0:
    AVar2 = AEC_OK;
  }
  else {
    if (cVar1 == '=') {
      at_para->ptr = at_para->ptr + 1;
      paracnt = FUN_0001051c();
      if (paracnt != 0) {
        return AEC_OK;
      }
      if (0 < autoParam) {
        FUN_0001053a();
        if (iStack40 == 1) {
          paracnt = iStack40;
        }
        else {
          if (iStack40 != 0) goto _L0;
          paracnt = 0;
        }
        FUN_00010556();
        goto _L0;
      }
    }
_L0:
    AVar2 = AEC_PARA_ERROR;
  }
  return AVar2;
}



undefined4 _L0(void)

{
  char cVar1;
  char **unaff_s0;
  undefined4 uVar2;
  int iStack00000008;
  int in_stack_0000000c;
  int iStack00000010;
  undefined uStack00000014;
  undefined *puStack00000018;
  undefined4 uStack0000001c;
  
  _L0();
  uStack00000014 = 3;
  puStack00000018 = &stack0x00000008;
  uStack0000001c = 0xc04;
  iStack00000008 = 0;
  iStack00000010 = 0;
  cVar1 = **unaff_s0;
  if (cVar1 == '?') {
    FUN_000104c2();
    FUN_000104d2();
    FUN_000104e4();
    FUN_000104f0();
_L0:
    uVar2 = 0;
  }
  else {
    if (cVar1 == '=') {
      *unaff_s0 = *unaff_s0 + 1;
      iStack00000010 = FUN_0001051c();
      if (iStack00000010 != 0) {
        return 0;
      }
      if (0 < in_stack_0000000c) {
        FUN_0001053a();
        if (iStack00000008 == 1) {
          iStack00000010 = iStack00000008;
        }
        else {
          if (iStack00000008 != 0) goto _L0;
          iStack00000010 = 0;
        }
        FUN_00010556();
        goto _L0;
      }
    }
_L0:
    uVar2 = 4;
  }
  return uVar2;
}



undefined4 FUN_000104c2(void)

{
  FUN_000104c2();
  FUN_000104d2();
  FUN_000104e4();
  FUN_000104f0();
  return 0;
}



undefined4 FUN_000104d2(void)

{
  FUN_000104d2();
  FUN_000104e4();
  FUN_000104f0();
  return 0;
}



undefined4 FUN_000104e4(void)

{
  FUN_000104e4();
  FUN_000104f0();
  return 0;
}



undefined4 FUN_000104f0(void)

{
  FUN_000104f0();
  return 0;
}



undefined4 FUN_0001051c(void)

{
  undefined4 uVar1;
  int in_stack_00000008;
  int in_stack_0000000c;
  int iStack00000010;
  
  iStack00000010 = FUN_0001051c();
  if (iStack00000010 != 0) {
    return 0;
  }
  if (in_stack_0000000c < 1) {
_L0:
    uVar1 = 4;
  }
  else {
    FUN_0001053a();
    iStack00000010 = in_stack_00000008;
    if (in_stack_00000008 != 1) {
      if (in_stack_00000008 != 0) goto _L0;
      iStack00000010 = 0;
    }
    FUN_00010556();
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_0001053a(void)

{
  int in_stack_00000008;
  int iStack00000010;
  
  FUN_0001053a();
  iStack00000010 = in_stack_00000008;
  if (in_stack_00000008 != 1) {
    if (in_stack_00000008 != 0) {
      return 4;
    }
    iStack00000010 = 0;
  }
  FUN_00010556();
  return 0;
}



undefined4 FUN_00010556(void)

{
  FUN_00010556();
  return 0;
}



// WARNING: Could not reconcile some variable overlaps
// DWARF DIE: 39a2

AT_ERROR_CODE scan_handler_opt(at_para_t *at_para)

{
  char cVar1;
  AT_ERROR_CODE AVar2;
  int iVar3;
  undefined2 uStack48;
  uint8_t opt;
  at_scan_opt_t cmd_para;
  s32 paracnt;
  at_para_descriptor_t cmd_para_list [2];
  
  paracnt._0_1_ = 3;
  cmd_para_list[0].option._0_1_ = 3;
  cmd_para_list[1]._0_4_ = (int)&uStack48 + 1;
  cmd_para_list[0]._0_4_ = &uStack48;
  cmd_para_list[1].pvar = (void *)0x801;
  uStack48 = 0;
  cmd_para_list[0].pvar = (void *)0x401;
  cVar1 = *at_para->ptr;
  if (cVar1 == '?') {
    FUN_000105b0();
    FUN_000105c8();
    FUN_000105e4();
    FUN_000105f0();
    AVar2 = AEC_OK;
  }
  else {
    if (cVar1 == '=') {
      at_para->ptr = at_para->ptr + 1;
      iVar3 = FUN_00010618();
      if ((iVar3 == 0) && (1 < _cmd_para)) {
        AVar2 = _L0();
        return AVar2;
      }
    }
    AVar2 = AEC_PARA_ERROR;
  }
  return AVar2;
}



undefined4 FUN_000105b0(void)

{
  FUN_000105b0();
  FUN_000105c8();
  FUN_000105e4();
  FUN_000105f0();
  return 0;
}



undefined4 FUN_000105c8(void)

{
  FUN_000105c8();
  FUN_000105e4();
  FUN_000105f0();
  return 0;
}



undefined4 FUN_000105e4(void)

{
  FUN_000105e4();
  FUN_000105f0();
  return 0;
}



undefined4 FUN_000105f0(void)

{
  FUN_000105f0();
  return 0;
}



undefined FUN_00010618(void)

{
  undefined uVar1;
  int iVar2;
  byte bStack0000000f;
  char in_stack_00000010;
  byte in_stack_00000011;
  int in_stack_00000014;
  
  iVar2 = FUN_00010618();
  if ((iVar2 == 0) && (1 < in_stack_00000014)) {
    bStack0000000f = in_stack_00000011 & 0x1f | in_stack_00000010 << 5;
    uVar1 = _L0();
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}



undefined _L0(void)

{
  undefined uVar1;
  
  uVar1 = _L0();
  return uVar1;
}



// WARNING: Could not reconcile some variable overlaps
// DWARF DIE: 3ac1

AT_ERROR_CODE scan_handler(at_para_t *at_para)

{
  AT_ERROR_CODE extraout_a0;
  AT_ERROR_CODE AVar1;
  int iVar2;
  void *pvVar3;
  undefined4 local_30;
  at_scan_para_t cmd_para;
  s32 paracnt;
  at_para_descriptor_t cmd_para_list [2];
  
  cmd_para_list[0]._0_4_ = &local_30;
  AVar1 = 0xd0;
  cmd_para_list[0].pvar = (void *)0x402;
  cmd_para_list[1].pvar = (void *)0x802;
  cmd_para_list[1]._0_4_ = (int)&local_30 + 2;
  local_30 = 0;
  paracnt._0_1_ = 0;
  cmd_para_list[0].option._0_1_ = 0;
  if (*at_para->ptr == '=') {
    at_para->ptr = at_para->ptr + 1;
    iVar2 = FUN_000106ba();
    if ((((iVar2 == 0) && (1 < cmd_para)) &&
        ((pvVar3 = _LVL120(), pvVar3 == (void *)0x0 || (iVar2 = FUN_00010704(), iVar2 == 0)))) &&
       (pvVar3 = FUN_000106ea(), pvVar3 == (void *)0x0)) {
      _L0();
      return AVar1;
    }
  }
  else {
    cmd_para_list[0]._0_4_ = &local_30;
    iVar2 = FUN_00010690();
    if (iVar2 == 0) {
      _L0();
      return extraout_a0;
    }
  }
  return AEC_PARA_ERROR;
}



undefined4 FUN_00010690(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_a0;
  
  iVar1 = FUN_00010690();
  if (iVar1 == 0) {
    _L0();
    uVar2 = extraout_a0;
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}



void _L0(void)

{
  _L0();
  return;
}



BADSPACEBASE * FUN_000106ba(void)

{
  int iVar1;
  void *pvVar2;
  int in_stack_00000004;
  
  iVar1 = FUN_000106ba();
  if ((((iVar1 == 0) && (1 < in_stack_00000004)) &&
      ((pvVar2 = _LVL120(), pvVar2 == (void *)0x0 || (iVar1 = FUN_00010704(), iVar1 == 0)))) &&
     (pvVar2 = FUN_000106ea(), pvVar2 == (void *)0x0)) {
    _L0();
    return register0x00002008;
  }
  return (BADSPACEBASE *)&DAT_00000004;
}



void * _LVL120(void)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = _LVL120();
  if (((pvVar1 == (void *)0x0) || (iVar2 = FUN_00010704(), iVar2 == 0)) &&
     (pvVar1 = FUN_000106ea(), pvVar1 == (void *)0x0)) {
    _L0();
    return register0x00002008;
  }
  return &DAT_00000004;
}



void * FUN_000106ea(void)

{
  void *pvVar1;
  
  pvVar1 = FUN_000106ea();
  if (pvVar1 == (void *)0x0) {
    _L0();
    return register0x00002008;
  }
  return &DAT_00000004;
}



undefined * FUN_00010704(void)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = FUN_00010704();
  if ((iVar2 == 0) && (pvVar1 = FUN_000106ea(), pvVar1 == (void *)0x0)) {
    _L0();
    return (undefined *)register0x00002008;
  }
  return &DAT_00000004;
}



// WARNING: Could not reconcile some variable overlaps
// DWARF DIE: 3750

AT_ERROR_CODE uart_config_handler(at_para_t *at_para)

{
  char cVar1;
  AT_ERROR_CODE extraout_a0;
  AT_ERROR_CODE AVar2;
  AT_ERROR_CODE extraout_a0_00;
  int iVar3;
  int iStack104;
  s32 paracnt;
  at_uart_para_t uartParam;
  at_para_descriptor_t cmd_para_list [5];
  
  _L0();
  FUN_00010738();
  cmd_para_list[0]._0_4_ = &uartParam;
  cmd_para_list[1]._0_4_ = &uartParam.baudrate;
  cmd_para_list[2]._0_4_ = &uartParam.data_bits;
  cmd_para_list[0].pvar = (void *)0xc04;
  cmd_para_list[1].pvar = (void *)0xc04;
  cmd_para_list[2].pvar = (void *)0xc04;
  cmd_para_list[3]._0_4_ = &uartParam.stop_bits;
  cmd_para_list[3].pvar = (void *)0xc04;
  cmd_para_list[4].pvar = (void *)0xc04;
  cmd_para_list[4]._0_4_ = &uartParam.parity;
  uartParam.hwfc._0_1_ = 3;
  cmd_para_list[0].option._0_1_ = 3;
  cmd_para_list[1].option._0_1_ = 3;
  cmd_para_list[2].option._0_1_ = 3;
  cmd_para_list[3].option._0_1_ = 3;
  cVar1 = *at_para->ptr;
  if (cVar1 == '?') {
    _L0();
    AVar2 = extraout_a0;
  }
  else {
    AVar2 = AEC_UNSUPPORTED;
    if (cVar1 == '=') {
      at_para->ptr = at_para->ptr + 1;
      iVar3 = FUN_000107b0();
      if ((iVar3 == 0) &&
         ((((4 < iStack104 || (uartParam.parity = 0, iStack104 == 4)) ||
           (uartParam.stop_bits = 0, iStack104 == 3)) ||
          ((uartParam.data_bits = 1, iStack104 == 2 || (uartParam.baudrate = 8, iStack104 == 1))))))
      {
        FUN_000107d0();
        FUN_000107e2();
        FUN_000107f4();
        FUN_00010806();
        FUN_00010818();
        FUN_0001082c();
        AVar2 = extraout_a0_00;
      }
      else {
        AVar2 = AEC_PARA_ERROR;
      }
    }
  }
  return AVar2;
}



undefined4 _L0(void)

{
  char cVar1;
  char **unaff_s1;
  undefined4 extraout_a0;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_a0_00;
  int in_stack_00000008;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined uStack00000024;
  undefined *puStack00000028;
  undefined4 uStack0000002c;
  undefined uStack00000030;
  undefined4 *puStack00000034;
  undefined4 uStack00000038;
  undefined uStack0000003c;
  undefined4 *puStack00000040;
  undefined4 uStack00000044;
  undefined uStack00000048;
  undefined4 *puStack0000004c;
  undefined4 uStack00000050;
  undefined uStack00000054;
  undefined4 *puStack00000058;
  undefined4 uStack0000005c;
  
  _L0();
  FUN_00010738();
  puStack00000028 = &stack0x00000010;
  puStack00000034 = (undefined4 *)&stack0x00000014;
  puStack00000040 = (undefined4 *)&stack0x00000018;
  uStack0000002c = 0xc04;
  uStack00000038 = 0xc04;
  uStack00000044 = 0xc04;
  puStack0000004c = (undefined4 *)&stack0x0000001c;
  uStack00000050 = 0xc04;
  uStack0000005c = 0xc04;
  puStack00000058 = (undefined4 *)&stack0x00000020;
  uStack00000024 = 3;
  uStack00000030 = 3;
  uStack0000003c = 3;
  uStack00000048 = 3;
  uStack00000054 = 3;
  cVar1 = **unaff_s1;
  if (cVar1 == '?') {
    _L0();
    uVar3 = extraout_a0;
  }
  else {
    uVar3 = 6;
    if (cVar1 == '=') {
      *unaff_s1 = *unaff_s1 + 1;
      iVar2 = FUN_000107b0();
      if ((iVar2 == 0) &&
         ((((4 < in_stack_00000008 || (in_stack_00000020 = 0, in_stack_00000008 == 4)) ||
           (in_stack_0000001c = 0, in_stack_00000008 == 3)) ||
          ((in_stack_00000018 = 1, in_stack_00000008 == 2 ||
           (in_stack_00000014 = 8, in_stack_00000008 == 1)))))) {
        FUN_000107d0();
        FUN_000107e2();
        FUN_000107f4();
        FUN_00010806();
        FUN_00010818();
        FUN_0001082c();
        uVar3 = extraout_a0_00;
      }
      else {
        uVar3 = 4;
      }
    }
  }
  return uVar3;
}



undefined4 FUN_00010738(void)

{
  char cVar1;
  char **unaff_s1;
  undefined4 extraout_a0;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_a0_00;
  int in_stack_00000008;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined uStack00000024;
  undefined *puStack00000028;
  undefined4 uStack0000002c;
  undefined uStack00000030;
  undefined4 *puStack00000034;
  undefined4 uStack00000038;
  undefined uStack0000003c;
  undefined4 *puStack00000040;
  undefined4 uStack00000044;
  undefined uStack00000048;
  undefined4 *puStack0000004c;
  undefined4 uStack00000050;
  undefined uStack00000054;
  undefined4 *puStack00000058;
  undefined4 uStack0000005c;
  
  FUN_00010738();
  puStack00000028 = &stack0x00000010;
  puStack00000034 = (undefined4 *)&stack0x00000014;
  puStack00000040 = (undefined4 *)&stack0x00000018;
  uStack0000002c = 0xc04;
  uStack00000038 = 0xc04;
  uStack00000044 = 0xc04;
  puStack0000004c = (undefined4 *)&stack0x0000001c;
  uStack00000050 = 0xc04;
  uStack0000005c = 0xc04;
  puStack00000058 = (undefined4 *)&stack0x00000020;
  uStack00000024 = 3;
  uStack00000030 = 3;
  uStack0000003c = 3;
  uStack00000048 = 3;
  uStack00000054 = 3;
  cVar1 = **unaff_s1;
  if (cVar1 == '?') {
    _L0();
    uVar3 = extraout_a0;
  }
  else {
    uVar3 = 6;
    if (cVar1 == '=') {
      *unaff_s1 = *unaff_s1 + 1;
      iVar2 = FUN_000107b0();
      if ((iVar2 == 0) &&
         ((((4 < in_stack_00000008 || (in_stack_00000020 = 0, in_stack_00000008 == 4)) ||
           (in_stack_0000001c = 0, in_stack_00000008 == 3)) ||
          ((in_stack_00000018 = 1, in_stack_00000008 == 2 ||
           (in_stack_00000014 = 8, in_stack_00000008 == 1)))))) {
        FUN_000107d0();
        FUN_000107e2();
        FUN_000107f4();
        FUN_00010806();
        FUN_00010818();
        FUN_0001082c();
        uVar3 = extraout_a0_00;
      }
      else {
        uVar3 = 4;
      }
    }
  }
  return uVar3;
}



void _L0(void)

{
  _L0();
  return;
}



undefined4 FUN_000107b0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_a0;
  int in_stack_00000008;
  
  iVar2 = FUN_000107b0();
  if ((iVar2 == 0) &&
     ((((4 < in_stack_00000008 || (in_stack_00000008 == 4)) || (in_stack_00000008 == unaff_s0)) ||
      ((in_stack_00000008 == 2 || (in_stack_00000008 == 1)))))) {
    FUN_000107d0();
    FUN_000107e2();
    FUN_000107f4();
    FUN_00010806();
    FUN_00010818();
    FUN_0001082c();
    uVar1 = extraout_a0;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}



void FUN_000107d0(void)

{
  FUN_000107d0();
  FUN_000107e2();
  FUN_000107f4();
  FUN_00010806();
  FUN_00010818();
  FUN_0001082c();
  return;
}



void FUN_000107e2(void)

{
  FUN_000107e2();
  FUN_000107f4();
  FUN_00010806();
  FUN_00010818();
  FUN_0001082c();
  return;
}



void FUN_000107f4(void)

{
  FUN_000107f4();
  FUN_00010806();
  FUN_00010818();
  FUN_0001082c();
  return;
}



void FUN_00010806(void)

{
  FUN_00010806();
  FUN_00010818();
  FUN_0001082c();
  return;
}



void FUN_00010818(void)

{
  FUN_00010818();
  FUN_0001082c();
  return;
}



void FUN_0001082c(void)

{
  FUN_0001082c();
  return;
}



// DWARF DIE: 3c40

AT_ERROR_CODE reset_handler(at_para_t *at_para)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 0) {
    return AEC_PARA_ERROR;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 _L0(void)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 0) {
    return 4;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 42db

AT_ERROR_CODE echo_on_handler(at_para_t *at_para)

{
  char cVar1;
  int iVar2;
  int iStack36;
  at_echoswitch_para_t echoswitch;
  s32 paracnt;
  at_para_descriptor_t cmd_para_list [1];
  
  _L0(_DAT_000000e0);
  paracnt._0_1_ = 3;
  cmd_para_list[0].pvar = (void *)0xc04;
  cmd_para_list[0]._0_4_ = &iStack36;
  iStack36 = 0;
  cVar1 = *at_para->ptr;
  if (cVar1 == '?') {
    FUN_000108cc();
    FUN_000108dc();
    FUN_000108ee();
    FUN_000108fa();
    iVar2 = 0;
  }
  else {
    if (cVar1 == '=') {
      at_para->ptr = at_para->ptr + 1;
      iVar2 = FUN_00010928(_DAT_000000e0);
      if (((iVar2 == 0) && (0 < echoswitch)) && (iStack36 < 2)) {
        _DAT_000000e0 = iStack36;
        _L0();
        goto _L0;
      }
    }
    iVar2 = 4;
  }
_L0:
  return (AT_ERROR_CODE)iVar2;
}



undefined4 _L0(int iRam000000e0)

{
  char cVar1;
  char **unaff_s0;
  undefined4 uVar2;
  int iVar3;
  int iStack0000000c;
  int in_stack_00000010;
  undefined uStack00000014;
  undefined *puStack00000018;
  undefined4 uStack0000001c;
  
  _L0(iRam000000e0);
  uStack00000014 = 3;
  uStack0000001c = 0xc04;
  puStack00000018 = &stack0x0000000c;
  iStack0000000c = 0;
  cVar1 = **unaff_s0;
  if (cVar1 == '?') {
    FUN_000108cc();
    FUN_000108dc();
    FUN_000108ee();
    FUN_000108fa();
    uVar2 = 0;
  }
  else {
    if (cVar1 == '=') {
      *unaff_s0 = *unaff_s0 + 1;
      iVar3 = FUN_00010928(iRam000000e0);
      if (((iVar3 == 0) && (0 < in_stack_00000010)) && (iStack0000000c < 2)) {
        iRam000000e0 = iStack0000000c;
        _L0();
        return 0;
      }
    }
    uVar2 = 4;
  }
  return uVar2;
}



undefined4 FUN_000108cc(void)

{
  FUN_000108cc();
  FUN_000108dc();
  FUN_000108ee();
  FUN_000108fa();
  return 0;
}



undefined4 FUN_000108dc(void)

{
  FUN_000108dc();
  FUN_000108ee();
  FUN_000108fa();
  return 0;
}



undefined4 FUN_000108ee(void)

{
  FUN_000108ee();
  FUN_000108fa();
  return 0;
}



undefined4 FUN_000108fa(void)

{
  FUN_000108fa();
  return 0;
}



int FUN_00010928(int iRam000000e0)

{
  int iVar1;
  int in_stack_0000000c;
  int in_stack_00000010;
  
  iVar1 = FUN_00010928(iRam000000e0);
  if (((iVar1 == 0) && (0 < in_stack_00000010)) && (in_stack_0000000c < 2)) {
    iRam000000e0 = in_stack_0000000c;
    _L0();
  }
  else {
    iVar1 = 4;
  }
  return iVar1;
}



void _L0(void)

{
  _L0();
  return;
}



// DWARF DIE: 4415

AT_ERROR_CODE disconnect_handler(at_para_t *at_para)

{
  _L0();
  if (*at_para->ptr != '=') {
    FUN_0001098e();
    FUN_0001099a();
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  char **unaff_s0;
  
  _L0();
  if (**unaff_s0 != '=') {
    FUN_0001098e();
    FUN_0001099a();
  }
  return 0;
}



undefined4 FUN_0001098e(void)

{
  FUN_0001098e();
  FUN_0001099a();
  return 0;
}



undefined4 FUN_0001099a(void)

{
  FUN_0001099a();
  return 0;
}



// DWARF DIE: 449a

AT_ERROR_CODE restore_handler(at_para_t *at_para)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 0) {
    return AEC_PARA_ERROR;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 _L0(void)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 0) {
    return 4;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 4513

AT_ERROR_CODE version_handler(at_para_t *at_para)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 0) {
    return AEC_PARA_ERROR;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 _L0(void)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 0) {
    return 4;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 4206

AT_ERROR_CODE at_help(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  
  puVar2 = (undefined4 *)0x0;
  do {
    FUN_00010a28();
    puVar1 = puVar2 + 2;
    uVar4 = *puVar2;
    puVar2 = puVar2 + 3;
    FUN_00010a3a(uVar4,*puVar1);
    FUN_00010a46();
    FUN_00010a50(10);
  } while (puVar2 != (undefined4 *)0x150);
  for (uVar3 = 0; uVar3 < uRam00000000; uVar3 += 1) {
    FUN_00010a88();
    puVar2 = (undefined4 *)(uRam00000000 + uVar3 * 0xc);
    FUN_00010aa4(*puVar2,puVar2[2]);
    FUN_00010ab0();
    FUN_00010aba(10);
  }
  return AEC_OK;
}



undefined4 FUN_00010a28(void)

{
  undefined4 *unaff_s0;
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *unaff_s5;
  
  do {
    FUN_00010a28();
    puVar3 = unaff_s0 + 2;
    uVar2 = *unaff_s0;
    unaff_s0 = unaff_s0 + 3;
    FUN_00010a3a(uVar2,*puVar3);
    FUN_00010a46();
    FUN_00010a50(10);
  } while (unaff_s0 != unaff_s5);
  for (uVar1 = 0; uVar1 < uRam00000000; uVar1 += 1) {
    FUN_00010a88();
    puVar3 = (undefined4 *)(uRam00000000 + uVar1 * 0xc);
    FUN_00010aa4(*puVar3,puVar3[2]);
    FUN_00010ab0();
    FUN_00010aba(10);
  }
  return 0;
}



undefined4 FUN_00010a3a(undefined4 param_1,undefined4 param_2)

{
  undefined4 *unaff_s0;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *unaff_s5;
  
  while( true ) {
    FUN_00010a3a(param_1,param_2);
    FUN_00010a46();
    FUN_00010a50(10);
    if (unaff_s0 == unaff_s5) break;
    FUN_00010a28();
    param_2 = unaff_s0[2];
    param_1 = *unaff_s0;
    unaff_s0 = unaff_s0 + 3;
  }
  for (uVar1 = 0; uVar1 < uRam00000000; uVar1 += 1) {
    FUN_00010a88();
    puVar2 = (undefined4 *)(uRam00000000 + uVar1 * 0xc);
    FUN_00010aa4(*puVar2,puVar2[2]);
    FUN_00010ab0();
    FUN_00010aba(10);
  }
  return 0;
}



undefined4 FUN_00010a46(void)

{
  undefined4 *unaff_s0;
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *unaff_s5;
  
  while( true ) {
    FUN_00010a46();
    FUN_00010a50(10);
    if (unaff_s0 == unaff_s5) break;
    FUN_00010a28();
    puVar3 = unaff_s0 + 2;
    uVar2 = *unaff_s0;
    unaff_s0 = unaff_s0 + 3;
    FUN_00010a3a(uVar2,*puVar3);
  }
  for (uVar1 = 0; uVar1 < uRam00000000; uVar1 += 1) {
    FUN_00010a88();
    puVar3 = (undefined4 *)(uRam00000000 + uVar1 * 0xc);
    FUN_00010aa4(*puVar3,puVar3[2]);
    FUN_00010ab0();
    FUN_00010aba(10);
  }
  return 0;
}



undefined4 FUN_00010a50(undefined4 param_1)

{
  undefined4 *unaff_s0;
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *unaff_s5;
  
  for (; FUN_00010a50(param_1), unaff_s0 != unaff_s5; unaff_s0 = unaff_s0 + 3) {
    FUN_00010a28();
    FUN_00010a3a(*unaff_s0,unaff_s0[2]);
    FUN_00010a46();
    param_1 = 10;
  }
  for (uVar1 = 0; uVar1 < uRam00000000; uVar1 += 1) {
    FUN_00010a88();
    puVar2 = (undefined4 *)(uRam00000000 + uVar1 * 0xc);
    FUN_00010aa4(*puVar2,puVar2[2]);
    FUN_00010ab0();
    FUN_00010aba(10);
  }
  return 0;
}



undefined4 FUN_00010a88(void)

{
  uint unaff_s0;
  uint *unaff_s1;
  int iVar1;
  undefined4 *puVar2;
  int *unaff_s3;
  int unaff_s5;
  
  do {
    FUN_00010a88();
    iVar1 = unaff_s0 * unaff_s5;
    unaff_s0 += 1;
    puVar2 = (undefined4 *)(*unaff_s3 + iVar1);
    FUN_00010aa4(*puVar2,puVar2[2]);
    FUN_00010ab0();
    FUN_00010aba(10);
  } while (unaff_s0 < *unaff_s1);
  return 0;
}



undefined4 FUN_00010aa4(undefined4 param_1,undefined4 param_2)

{
  uint unaff_s0;
  uint *unaff_s1;
  int iVar1;
  undefined4 *puVar2;
  int *unaff_s3;
  int unaff_s5;
  
  while( true ) {
    FUN_00010aa4(param_1,param_2);
    FUN_00010ab0();
    FUN_00010aba(10);
    if (*unaff_s1 <= unaff_s0) break;
    FUN_00010a88();
    iVar1 = unaff_s0 * unaff_s5;
    unaff_s0 += 1;
    puVar2 = (undefined4 *)(*unaff_s3 + iVar1);
    param_2 = puVar2[2];
    param_1 = *puVar2;
  }
  return 0;
}



undefined4 FUN_00010ab0(void)

{
  uint unaff_s0;
  uint *unaff_s1;
  int iVar1;
  undefined4 *puVar2;
  int *unaff_s3;
  int unaff_s5;
  
  while( true ) {
    FUN_00010ab0();
    FUN_00010aba(10);
    if (*unaff_s1 <= unaff_s0) break;
    FUN_00010a88();
    iVar1 = unaff_s0 * unaff_s5;
    unaff_s0 += 1;
    puVar2 = (undefined4 *)(*unaff_s3 + iVar1);
    FUN_00010aa4(*puVar2,puVar2[2]);
  }
  return 0;
}



undefined4 FUN_00010aba(undefined4 param_1)

{
  uint unaff_s0;
  uint *unaff_s1;
  undefined4 *puVar1;
  int *unaff_s3;
  int unaff_s5;
  
  for (; FUN_00010aba(param_1), unaff_s0 < *unaff_s1; unaff_s0 += 1) {
    FUN_00010a88();
    puVar1 = (undefined4 *)(*unaff_s3 + unaff_s0 * unaff_s5);
    FUN_00010aa4(*puVar1,puVar1[2]);
    FUN_00010ab0();
    param_1 = 10;
  }
  return 0;
}



// DWARF DIE: 3bd5

AT_ERROR_CODE help_handler(at_para_t *at_para)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 0) {
    return AEC_PARA_ERROR;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 _L0(void)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 0) {
    return 4;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 412c

AT_ERROR_CODE at_init(at_callback_t *cb)

{
  AT_ERROR_CODE AVar1;
  
  _L0();
  AVar1 = AEC_UNDEFINED;
  if (cb != (at_callback_t *)0x0) {
    paRam00000000 = cb->handle_cb;
    _DAT_00000004 = cb->dump_cb;
    _L0();
    AVar1 = AEC_OK;
  }
  return AVar1;
}



undefined4 _L0(void)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s1;
  undefined4 uVar1;
  
  _L0();
  uVar1 = 0x1a;
  if (unaff_s1 != (undefined4 *)0x0) {
    *unaff_s0 = *unaff_s1;
    unaff_s0[1] = unaff_s1[1];
    _L0();
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 4077

AT_ERROR_CODE at_command_register(at_command_handler_t *cmd,uint32_t cmd_cnt)

{
  if (cmd != (at_command_handler_t *)0x0) {
    uRam00000000 = cmd_cnt;
    return AEC_OK;
  }
  return AEC_NULL_POINTER;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 3d63

AT_ERROR_CODE at_parse(void)

{
  byte bVar1;
  bool bVar2;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  int extraout_a0_03;
  int extraout_a0_04;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  code *pcVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  undefined uStack105;
  u8 tmp;
  byte *pbStack104;
  at_para_t at_para;
  char at_cmd [33];
  
  _L0(_DAT_000000e0);
  _L0();
  iVar10 = 0;
  bVar2 = false;
  uVar8 = 0;
_L0:
  do {
    while (FUN_00010bc0(&uStack105), extraout_a0 != 0) {
_L0:
      if ((bVar2) && (_L0(), 10000 < (uint)(extraout_a0_00 - iVar10))) {
        FUN_00010c4c(0,0x518);
        FUN_00010c5e(0,0x408);
        FUN_00010c68(0x18);
        bVar2 = false;
      }
      uVar4 = uRam00000000;
      if (uVar8 != 0) {
        iVar5 = 0;
        for (pbVar9 = &DAT_00000004;
            (((iVar5 < (int)uRam00000000 && (bVar1 = *pbVar9, (bVar1 & 0xfd) != 0x3d)) &&
             (bVar1 != 10)) && (bVar1 != 0xd)); pbVar9 = pbVar9 + 1) {
          if (iVar5 == 0x20) goto _L0;
          at_cmd[iVar5 + -4] = bVar1;
          iVar5 += 1;
        }
        *(undefined *)((int)&at_para.ptr + iVar5) = 0;
        iVar11 = 1;
        if (iVar5 != 0) {
          iVar5 = 0;
          if (uRam00000000 != 0) {
            for (; iVar5 < (int)uVar4; iVar5 += 1) {
              FUN_00010e18((undefined *)&at_para,*(undefined4 *)(uVar4 + iVar5 * 0xc));
              if (extraout_a0_04 == 0) {
                pcVar7 = *(code **)(uRam00000000 + iVar5 * 0xc + 4);
                goto _L0;
              }
            }
          }
          puVar6 = (undefined4 *)0x0;
          iVar5 = 0;
_L0:
          FUN_00010cc0((undefined *)&at_para,*puVar6);
          if (extraout_a0_01 != 0) goto code_r0x00010ccc;
          pcVar7 = *(code **)(iVar5 * 0xc + 4);
_L0:
          if (pcVar7 != (code *)0x0) {
            pbStack104 = pbVar9;
            iVar11 = (*pcVar7)(&stack0xffffff98);
            goto _L0;
          }
_L0:
          iVar11 = 3;
        }
_L0:
        if ((uRam00000000 == 1) && (iVar11 != 0x17)) {
          FUN_00010ddc(0,0x518);
        }
        FUN_00010de6(iVar11);
        uRam00000000 = 0;
        uVar8 = 0;
      }
    }
    if (_DAT_000000e0 != 0) {
      (*_DAT_00000004)(&uStack105,1,_DAT_00000004);
    }
    uVar4 = uRam00000000;
    if (uRam00000000 == 0) {
      if (uStack105 == (code)0xa) {
        if (true) {
_L0:
          uRam00000000 = uVar4 + 1;
          *(code *)(uVar4 + 4) = uStack105;
_L0:
          uVar8 = 1;
          goto _L0;
        }
      }
      else {
        if (uStack105 != (code)0xd) goto _L0;
        uRam00000000 = 1;
                    // WARNING: Ignoring partial resolution of indirect
        DAT_00000004 = 0xd;
        _L0(&uStack105);
        if ((extraout_a0_02 != 0) || (uStack105 != (code)0xa)) goto _L0;
        _LVL233(&uStack105);
        uVar4 = uRam00000000;
        if (uRam00000000 < 0x400) goto _L0;
      }
_L0:
      uRam00000000 = 0;
      _L0(0);
      goto _L0;
    }
    if (uRam00000000 != 1) {
_L0:
      if (uRam00000000 < 0x400) {
        pcVar7 = (code *)(uRam00000000 + 4);
        uRam00000000 = uRam00000000 + 1;
        *pcVar7 = uStack105;
        goto _L0;
      }
      goto _L0;
    }
    _L0();
    pcVar3 = _DAT_00000004 + 1;
    pcVar7 = _DAT_00000004 + 0x112;
    _DAT_00000004 = pcVar3;
    *pcVar7 = uStack105;
    bVar2 = true;
    iVar10 = extraout_a0_03;
    if (pcVar3 < _DAT_0000000c) goto _L0;
    if ((code *)0x3ff < pcVar3) {
      _DAT_00000004 = (code *)0x0;
    }
    _LVL238(0,0x408);
    FUN_00010d80(0,0x15);
    uRam00000000 = 0x15;
    bVar2 = false;
    uVar8 = uVar4;
  } while( true );
code_r0x00010ccc:
  iVar5 += 1;
  puVar6 = puVar6 + 3;
  if (iVar5 == 0x1c) goto _L0;
  goto _L0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(int iRam000000e0)

{
  byte bVar1;
  bool bVar2;
  int *unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  int extraout_a0_03;
  int extraout_a0_04;
  uint uVar3;
  undefined4 *puVar4;
  code *pcVar5;
  uint *unaff_s2;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char in_stack_00000017;
  uint *in_stack_00000018;
  
  _L0(iRam000000e0);
  _L0();
  iVar8 = 0;
  bVar2 = false;
  iVar6 = 0;
_L0:
  do {
    while (FUN_00010bc0(&stack0x00000017), extraout_a0 != 0) {
_L0:
      if ((bVar2) && (_L0(), 10000 < (uint)(extraout_a0_00 - iVar8))) {
        FUN_00010c4c(0,0x518);
        FUN_00010c5e(0,0x408);
        FUN_00010c68(0x18);
        bVar2 = false;
      }
      iVar9 = iRam00000000;
      if (iVar6 != 0) {
        uVar3 = *unaff_s2;
        iVar6 = 0;
        for (puVar7 = unaff_s2 + 1;
            (((iVar6 < (int)uVar3 && (bVar1 = *(byte *)puVar7, (bVar1 & 0xfd) != 0x3d)) &&
             (bVar1 != 10)) && (bVar1 != 0xd)); puVar7 = (uint *)((int)puVar7 + 1)) {
          if (iVar6 == 0x20) goto _L0;
          (&stack0x0000001c)[iVar6] = bVar1;
          iVar6 += 1;
        }
        (&stack0x0000001c)[iVar6] = 0;
        iVar10 = 1;
        if (iVar6 != 0) {
          iVar6 = 0;
          if (iRam00000000 != 0) {
            for (; iVar6 < iVar9; iVar6 += 1) {
              FUN_00010e18(&stack0x0000001c,*(undefined4 *)(iVar9 + iVar6 * 0xc));
              if (extraout_a0_04 == 0) {
                pcVar5 = *(code **)(iRam00000000 + iVar6 * 0xc + 4);
                goto _L0;
              }
            }
          }
          puVar4 = (undefined4 *)0x0;
          iVar6 = 0;
_L0:
          FUN_00010cc0(&stack0x0000001c,*puVar4);
          if (extraout_a0_01 != 0) goto code_r0x00010ccc;
          pcVar5 = *(code **)(iVar6 * 0xc + 4);
_L0:
          if (pcVar5 != (code *)0x0) {
            in_stack_00000018 = puVar7;
            iVar10 = (*pcVar5)(&stack0x00000018);
            goto _L0;
          }
_L0:
          iVar10 = 3;
        }
_L0:
        if ((*unaff_s1 == 1) && (iVar10 != 0x17)) {
          FUN_00010ddc(0,0x518);
        }
        FUN_00010de6(iVar10);
        *unaff_s2 = 0;
        iVar6 = 0;
      }
    }
    if (iRam000000e0 != 0) {
      (*_DAT_00000004)(&stack0x00000017,1,_DAT_00000004);
    }
    iVar9 = *unaff_s1;
    if (iVar9 == 0) {
      uVar3 = *unaff_s2;
      if (in_stack_00000017 == '\n') {
        if (uVar3 < 0x400) {
          *unaff_s2 = uVar3 + 1;
_L0:
          *(char *)((int)unaff_s2 + uVar3 + 4) = in_stack_00000017;
_L0:
          iVar6 = 1;
          goto _L0;
        }
      }
      else {
        if (in_stack_00000017 != '\r') goto _L0;
        *unaff_s2 = uVar3 + 1;
        *(undefined *)((int)unaff_s2 + uVar3 + 4) = 0xd;
        _L0(&stack0x00000017);
        if ((extraout_a0_02 != 0) || (in_stack_00000017 != '\n')) goto _L0;
        _LVL233(&stack0x00000017);
        uVar3 = *unaff_s2;
        if (uVar3 < 0x400) {
          *unaff_s2 = uVar3 + 1;
          goto _L0;
        }
      }
_L0:
      *unaff_s2 = 0;
      _L0(0);
      goto _L0;
    }
    if (iVar9 != 1) {
_L0:
      uVar3 = *unaff_s2;
      if (uVar3 < 0x400) {
        *unaff_s2 = uVar3 + 1;
        *(char *)((int)unaff_s2 + uVar3 + 4) = in_stack_00000017;
        goto _L0;
      }
      goto _L0;
    }
    _L0();
    iVar8 = unaff_s1[1];
    uVar3 = iVar8 + 1;
    unaff_s1[1] = uVar3;
    *(char *)((int)unaff_s1 + iVar8 + 0x112) = in_stack_00000017;
    bVar2 = true;
    iVar8 = extraout_a0_03;
    if (uVar3 < (uint)unaff_s1[3]) goto _L0;
    if (0x3ff < uVar3) {
      unaff_s1[1] = 0;
    }
    _LVL238(0,0x408);
    FUN_00010d80(0,0x15);
    *unaff_s2 = 0x15;
    bVar2 = false;
    iVar6 = iVar9;
  } while( true );
code_r0x00010ccc:
  iVar6 += 1;
  puVar4 = puVar4 + 3;
  if (iVar6 == 0x1c) goto _L0;
  goto _L0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  byte bVar1;
  bool bVar2;
  uint *unaff_s0;
  int *unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  int extraout_a0_03;
  int extraout_a0_04;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int *unaff_s2;
  int iVar7;
  int *piVar8;
  int unaff_s5;
  int iVar9;
  int iVar10;
  char in_stack_00000017;
  int *in_stack_00000018;
  
  _L0();
  iVar9 = 0;
  bVar2 = false;
  iVar7 = 0;
_L0:
  do {
    while (FUN_00010bc0(&stack0x00000017), extraout_a0 != 0) {
_L0:
      if ((bVar2) && (_L0(), 10000 < (uint)(extraout_a0_00 - iVar9))) {
        FUN_00010c4c(0,0x518);
        FUN_00010c5e(0,0x408);
        FUN_00010c68(0x18);
        bVar2 = false;
      }
      iVar10 = iRam00000000;
      if (iVar7 != 0) {
        iVar7 = *unaff_s2;
        iVar4 = 0;
        for (piVar8 = unaff_s2 + 1;
            (((iVar4 < iVar7 && (bVar1 = *(byte *)piVar8, (bVar1 & 0xfd) != 0x3d)) && (bVar1 != 10))
            && (bVar1 != 0xd)); piVar8 = (int *)((int)piVar8 + 1)) {
          if (iVar4 == 0x20) goto _L0;
          (&stack0x0000001c)[iVar4] = bVar1;
          iVar4 += 1;
        }
        (&stack0x0000001c)[iVar4] = 0;
        iVar7 = 1;
        if (iVar4 != 0) {
          iVar7 = 0;
          if (iRam00000000 != 0) {
            for (; iVar7 < iVar10; iVar7 += 1) {
              FUN_00010e18(&stack0x0000001c,*(undefined4 *)(iVar10 + iVar7 * 0xc));
              if (extraout_a0_04 == 0) {
                pcVar6 = *(code **)(iRam00000000 + iVar7 * 0xc + 4);
                goto _L0;
              }
            }
          }
          puVar5 = (undefined4 *)0x0;
          iVar7 = 0;
_L0:
          FUN_00010cc0(&stack0x0000001c,*puVar5);
          if (extraout_a0_01 != 0) goto code_r0x00010ccc;
          pcVar6 = *(code **)(iVar7 * 0xc + 4);
_L0:
          if (pcVar6 != (code *)0x0) {
            in_stack_00000018 = piVar8;
            iVar7 = (*pcVar6)(&stack0x00000018);
            goto _L0;
          }
_L0:
          iVar7 = 3;
        }
_L0:
        if ((*unaff_s1 == 1) && (iVar7 != 0x17)) {
          FUN_00010ddc(0,0x518);
        }
        FUN_00010de6(iVar7);
        *unaff_s0 = 0;
        iVar7 = 0;
      }
    }
    if (*(int *)(unaff_s5 + 0xe0) != 0) {
      (*_DAT_00000004)(&stack0x00000017,1,_DAT_00000004);
    }
    iVar10 = *unaff_s1;
    if (iVar10 == 0) {
      uVar3 = *unaff_s0;
      if (in_stack_00000017 == '\n') {
        if (uVar3 < 0x400) {
          *unaff_s0 = uVar3 + 1;
_L0:
          *(char *)((int)unaff_s0 + uVar3 + 4) = in_stack_00000017;
_L0:
          iVar7 = 1;
          goto _L0;
        }
      }
      else {
        if (in_stack_00000017 != '\r') goto _L0;
        *unaff_s0 = uVar3 + 1;
        *(undefined *)((int)unaff_s0 + uVar3 + 4) = 0xd;
        _L0(&stack0x00000017);
        if ((extraout_a0_02 != 0) || (in_stack_00000017 != '\n')) goto _L0;
        _LVL233(&stack0x00000017);
        uVar3 = *unaff_s0;
        if (uVar3 < 0x400) {
          *unaff_s0 = uVar3 + 1;
          goto _L0;
        }
      }
_L0:
      *unaff_s0 = 0;
      _L0(0);
      goto _L0;
    }
    if (iVar10 != 1) {
_L0:
      uVar3 = *unaff_s0;
      if (uVar3 < 0x400) {
        *unaff_s0 = uVar3 + 1;
        *(char *)((int)unaff_s0 + uVar3 + 4) = in_stack_00000017;
        goto _L0;
      }
      goto _L0;
    }
    _L0();
    iVar9 = unaff_s1[1];
    uVar3 = iVar9 + 1;
    unaff_s1[1] = uVar3;
    *(char *)((int)unaff_s1 + iVar9 + 0x112) = in_stack_00000017;
    bVar2 = true;
    iVar9 = extraout_a0_03;
    if (uVar3 < (uint)unaff_s1[3]) goto _L0;
    if (0x3ff < uVar3) {
      unaff_s1[1] = 0;
    }
    _LVL238(0,0x408);
    FUN_00010d80(0,0x15);
    *unaff_s0 = 0x15;
    bVar2 = false;
    iVar7 = iVar10;
  } while( true );
code_r0x00010ccc:
  iVar7 += 1;
  puVar5 = puVar5 + 3;
  if (iVar7 == 0x1c) goto _L0;
  goto _L0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010bc0(undefined *param_1)

{
  byte bVar1;
  uint *unaff_s0;
  int *unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  int extraout_a0_03;
  int extraout_a0_04;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  code *pcVar6;
  int *unaff_s2;
  int unaff_s3;
  int *piVar7;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int *unaff_s7;
  undefined4 *unaff_s8;
  int iVar8;
  char in_stack_00000017;
  int *in_stack_00000018;
  
  do {
    FUN_00010bc0(param_1);
    iVar8 = unaff_s3;
    if (extraout_a0 == 0) {
      if (*(int *)(unaff_s5 + 0xe0) != 0) {
        (*_DAT_00000004)(&stack0x00000017,1,_DAT_00000004);
      }
      iVar8 = *unaff_s1;
      if (iVar8 == 0) {
        uVar2 = *unaff_s0;
        if (in_stack_00000017 == '\n') {
          iVar8 = unaff_s3;
          if (uVar2 < 0x400) {
            *unaff_s0 = uVar2 + 1;
_L0:
            *(char *)((int)unaff_s0 + uVar2 + 4) = in_stack_00000017;
_L0:
            unaff_s3 = 1;
            goto _L0;
          }
        }
        else {
          if (in_stack_00000017 != '\r') goto _L0;
          *unaff_s0 = uVar2 + 1;
          *(undefined *)((int)unaff_s0 + uVar2 + 4) = 0xd;
          _L0(&stack0x00000017);
          if ((extraout_a0_02 != 0) || (in_stack_00000017 != '\n')) goto _L0;
          _LVL233(&stack0x00000017);
          uVar2 = *unaff_s0;
          iVar8 = unaff_s3;
          if (uVar2 < 0x400) {
            *unaff_s0 = uVar2 + 1;
            goto _L0;
          }
        }
      }
      else {
        if (iVar8 == 1) {
          _L0();
          iVar5 = unaff_s1[1];
          uVar2 = iVar5 + 1;
          unaff_s1[1] = uVar2;
          *(char *)((int)unaff_s1 + iVar5 + 0x112) = in_stack_00000017;
          unaff_s4 = 1;
          unaff_s6 = extraout_a0_03;
          if (uVar2 < (uint)unaff_s1[3]) goto _L0;
          if (0x3ff < uVar2) {
            unaff_s1[1] = 0;
          }
          _LVL238(0,0x408);
          FUN_00010d80(0,0x15);
          *unaff_s0 = 0x15;
          unaff_s4 = 0;
          goto _L0;
        }
_L0:
        uVar2 = *unaff_s0;
        iVar8 = unaff_s3;
        if (uVar2 < 0x400) {
          *unaff_s0 = uVar2 + 1;
          *(char *)((int)unaff_s0 + uVar2 + 4) = in_stack_00000017;
          goto _L0;
        }
      }
      *unaff_s0 = 0;
      _L0(0);
    }
    else {
_L0:
      if ((unaff_s4 != 0) && (_L0(), 10000 < (uint)(extraout_a0_00 - unaff_s6))) {
        FUN_00010c4c(0,0x518);
        FUN_00010c5e(0,0x408);
        FUN_00010c68(0x18);
        unaff_s4 = 0;
      }
      iVar5 = iRam00000000;
      if (iVar8 != 0) {
        iVar8 = *unaff_s2;
        iVar3 = 0;
        for (piVar7 = unaff_s2 + 1;
            (((iVar3 < iVar8 && (bVar1 = *(byte *)piVar7, (bVar1 & 0xfd) != 0x3d)) && (bVar1 != 10))
            && (bVar1 != 0xd)); piVar7 = (int *)((int)piVar7 + 1)) {
          if (iVar3 == 0x20) goto _L0;
          (&stack0x0000001c)[iVar3] = bVar1;
          iVar3 += 1;
        }
        (&stack0x0000001c)[iVar3] = 0;
        iVar8 = 1;
        if (iVar3 != 0) {
          iVar8 = *unaff_s7;
          iVar3 = 0;
          if (iVar8 != 0) {
            for (; iVar3 < iVar5; iVar3 += 1) {
              FUN_00010e18(&stack0x0000001c,*(undefined4 *)(iVar8 + iVar3 * 0xc));
              if (extraout_a0_04 == 0) {
                pcVar6 = *(code **)(iRam00000000 + iVar3 * 0xc + 4);
                goto _L0;
              }
            }
          }
          iVar8 = 0;
          puVar4 = unaff_s8;
_L0:
          FUN_00010cc0(&stack0x0000001c,*puVar4);
          if (extraout_a0_01 != 0) break;
          pcVar6 = *(code **)(iVar8 * 0xc + 4);
_L0:
          if (pcVar6 != (code *)0x0) {
            in_stack_00000018 = piVar7;
            iVar8 = (*pcVar6)(&stack0x00000018);
            goto _L0;
          }
_L0:
          iVar8 = 3;
        }
_L0:
        if ((*unaff_s1 == 1) && (iVar8 != 0x17)) {
          FUN_00010ddc(0,0x518);
        }
        FUN_00010de6(iVar8);
        iVar8 = 0;
        *unaff_s0 = 0;
      }
    }
_L0:
    param_1 = &stack0x00000017;
    unaff_s3 = iVar8;
  } while( true );
  iVar8 += 1;
  puVar4 = puVar4 + 3;
  if (iVar8 == 0x1c) goto _L0;
  goto _L0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  byte bVar1;
  uint *unaff_s0;
  int *unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  int extraout_a0_03;
  int extraout_a0_04;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int *unaff_s2;
  int unaff_s3;
  int *piVar7;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int *unaff_s7;
  undefined4 *unaff_s8;
  int iVar8;
  char in_stack_00000017;
  int *in_stack_00000018;
  
  do {
    _L0();
    if (10000 < (uint)(extraout_a0_00 - unaff_s6)) {
      FUN_00010c4c(0,0x518);
      FUN_00010c5e(0,0x408);
      FUN_00010c68(0x18);
      unaff_s4 = 0;
    }
    do {
      iVar8 = iRam00000000;
      if (unaff_s3 != 0) {
        iVar2 = *unaff_s2;
        iVar4 = 0;
        for (piVar7 = unaff_s2 + 1;
            (((iVar4 < iVar2 && (bVar1 = *(byte *)piVar7, (bVar1 & 0xfd) != 0x3d)) && (bVar1 != 10))
            && (bVar1 != 0xd)); piVar7 = (int *)((int)piVar7 + 1)) {
          if (iVar4 == 0x20) goto _L0;
          (&stack0x0000001c)[iVar4] = bVar1;
          iVar4 += 1;
        }
        (&stack0x0000001c)[iVar4] = 0;
        iVar2 = 1;
        if (iVar4 != 0) {
          iVar2 = *unaff_s7;
          iVar4 = 0;
          if (iVar2 != 0) {
            for (; iVar4 < iVar8; iVar4 += 1) {
              FUN_00010e18(&stack0x0000001c,*(undefined4 *)(iVar2 + iVar4 * 0xc));
              if (extraout_a0_04 == 0) {
                pcVar6 = *(code **)(iRam00000000 + iVar4 * 0xc + 4);
                goto _L0;
              }
            }
          }
          iVar8 = 0;
          puVar5 = unaff_s8;
_L0:
          FUN_00010cc0(&stack0x0000001c,*puVar5);
          if (extraout_a0_01 != 0) goto code_r0x00010ccc;
          pcVar6 = *(code **)(iVar8 * 0xc + 4);
_L0:
          if (pcVar6 != (code *)0x0) {
            in_stack_00000018 = piVar7;
            iVar2 = (*pcVar6)(&stack0x00000018);
            goto _L0;
          }
_L0:
          iVar2 = 3;
        }
_L0:
        if ((*unaff_s1 == 1) && (iVar2 != 0x17)) {
          FUN_00010ddc(0,0x518);
        }
        FUN_00010de6(iVar2);
        *unaff_s0 = 0;
        unaff_s3 = 0;
      }
      while (FUN_00010bc0(&stack0x00000017), extraout_a0 == 0) {
        if (*(int *)(unaff_s5 + 0xe0) != 0) {
          (*_DAT_00000004)(&stack0x00000017,1,_DAT_00000004);
        }
        iVar8 = *unaff_s1;
        if (iVar8 == 0) {
          uVar3 = *unaff_s0;
          if (in_stack_00000017 == '\n') {
            if (uVar3 < 0x400) {
              *unaff_s0 = uVar3 + 1;
_L0:
              *(char *)((int)unaff_s0 + uVar3 + 4) = in_stack_00000017;
_L0:
              unaff_s3 = 1;
              goto _L0;
            }
          }
          else {
            if (in_stack_00000017 != '\r') goto _L0;
            *unaff_s0 = uVar3 + 1;
            *(undefined *)((int)unaff_s0 + uVar3 + 4) = 0xd;
            _L0(&stack0x00000017);
            if ((extraout_a0_02 != 0) || (in_stack_00000017 != '\n')) goto _L0;
            _LVL233(&stack0x00000017);
            uVar3 = *unaff_s0;
            if (uVar3 < 0x400) {
              *unaff_s0 = uVar3 + 1;
              goto _L0;
            }
          }
_L0:
          *unaff_s0 = 0;
          _L0(0);
        }
        else {
          if (iVar8 != 1) {
_L0:
            uVar3 = *unaff_s0;
            if (0x3ff < uVar3) goto _L0;
            *unaff_s0 = uVar3 + 1;
            *(char *)((int)unaff_s0 + uVar3 + 4) = in_stack_00000017;
            break;
          }
          _L0();
          iVar2 = unaff_s1[1];
          uVar3 = iVar2 + 1;
          unaff_s1[1] = uVar3;
          *(char *)((int)unaff_s1 + iVar2 + 0x112) = in_stack_00000017;
          unaff_s4 = 1;
          unaff_s6 = extraout_a0_03;
          if (uVar3 < (uint)unaff_s1[3]) goto _L0;
          if (0x3ff < uVar3) {
            unaff_s1[1] = 0;
          }
          _LVL238(0,0x408);
          FUN_00010d80(0,0x15);
          *unaff_s0 = 0x15;
          unaff_s4 = 0;
          unaff_s3 = iVar8;
        }
      }
    } while (unaff_s4 == 0);
  } while( true );
code_r0x00010ccc:
  iVar8 += 1;
  puVar5 = puVar5 + 3;
  if (iVar8 == 0x1c) goto _L0;
  goto _L0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010c4c(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  bool bVar2;
  uint *unaff_s0;
  int *unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  int extraout_a0_03;
  int extraout_a0_04;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int *unaff_s2;
  int unaff_s3;
  int *piVar8;
  int unaff_s5;
  int unaff_s6;
  int *unaff_s7;
  undefined4 *unaff_s8;
  int iVar9;
  char in_stack_00000017;
  int *in_stack_00000018;
  
  do {
    FUN_00010c4c(param_1,param_2);
    FUN_00010c5e(0,0x408);
    FUN_00010c68(0x18);
    bVar2 = false;
    do {
      iVar9 = iRam00000000;
      if (unaff_s3 != 0) {
        iVar3 = *unaff_s2;
        iVar5 = 0;
        for (piVar8 = unaff_s2 + 1;
            (((iVar5 < iVar3 && (bVar1 = *(byte *)piVar8, (bVar1 & 0xfd) != 0x3d)) && (bVar1 != 10))
            && (bVar1 != 0xd)); piVar8 = (int *)((int)piVar8 + 1)) {
          if (iVar5 == 0x20) goto _L0;
          (&stack0x0000001c)[iVar5] = bVar1;
          iVar5 += 1;
        }
        (&stack0x0000001c)[iVar5] = 0;
        iVar3 = 1;
        if (iVar5 != 0) {
          iVar3 = *unaff_s7;
          iVar5 = 0;
          if (iVar3 != 0) {
            for (; iVar5 < iVar9; iVar5 += 1) {
              FUN_00010e18(&stack0x0000001c,*(undefined4 *)(iVar3 + iVar5 * 0xc));
              if (extraout_a0_04 == 0) {
                pcVar7 = *(code **)(iRam00000000 + iVar5 * 0xc + 4);
                goto _L0;
              }
            }
          }
          iVar9 = 0;
          puVar6 = unaff_s8;
_L0:
          FUN_00010cc0(&stack0x0000001c,*puVar6);
          if (extraout_a0_01 != 0) goto code_r0x00010ccc;
          pcVar7 = *(code **)(iVar9 * 0xc + 4);
_L0:
          if (pcVar7 != (code *)0x0) {
            in_stack_00000018 = piVar8;
            iVar3 = (*pcVar7)(&stack0x00000018);
            goto _L0;
          }
_L0:
          iVar3 = 3;
        }
_L0:
        if ((*unaff_s1 == 1) && (iVar3 != 0x17)) {
          FUN_00010ddc(0,0x518);
        }
        FUN_00010de6(iVar3);
        *unaff_s0 = 0;
        unaff_s3 = 0;
      }
      while (FUN_00010bc0(&stack0x00000017), extraout_a0 == 0) {
        if (*(int *)(unaff_s5 + 0xe0) != 0) {
          (*_DAT_00000004)(&stack0x00000017,1,_DAT_00000004);
        }
        iVar9 = *unaff_s1;
        if (iVar9 == 0) {
          uVar4 = *unaff_s0;
          if (in_stack_00000017 == '\n') {
            if (uVar4 < 0x400) {
              *unaff_s0 = uVar4 + 1;
_L0:
              *(char *)((int)unaff_s0 + uVar4 + 4) = in_stack_00000017;
_L0:
              unaff_s3 = 1;
              goto _L0;
            }
          }
          else {
            if (in_stack_00000017 != '\r') goto _L0;
            *unaff_s0 = uVar4 + 1;
            *(undefined *)((int)unaff_s0 + uVar4 + 4) = 0xd;
            _L0(&stack0x00000017);
            if ((extraout_a0_02 != 0) || (in_stack_00000017 != '\n')) goto _L0;
            _LVL233(&stack0x00000017);
            uVar4 = *unaff_s0;
            if (uVar4 < 0x400) {
              *unaff_s0 = uVar4 + 1;
              goto _L0;
            }
          }
_L0:
          *unaff_s0 = 0;
          _L0(0);
        }
        else {
          if (iVar9 != 1) {
_L0:
            uVar4 = *unaff_s0;
            if (0x3ff < uVar4) goto _L0;
            *unaff_s0 = uVar4 + 1;
            *(char *)((int)unaff_s0 + uVar4 + 4) = in_stack_00000017;
            break;
          }
          _L0();
          iVar3 = unaff_s1[1];
          uVar4 = iVar3 + 1;
          unaff_s1[1] = uVar4;
          *(char *)((int)unaff_s1 + iVar3 + 0x112) = in_stack_00000017;
          bVar2 = true;
          unaff_s6 = extraout_a0_03;
          if (uVar4 < (uint)unaff_s1[3]) goto _L0;
          if (0x3ff < uVar4) {
            unaff_s1[1] = 0;
          }
          _LVL238(0,0x408);
          FUN_00010d80(0,0x15);
          *unaff_s0 = 0x15;
          bVar2 = false;
          unaff_s3 = iVar9;
        }
      }
    } while ((!bVar2) || (_L0(), (uint)(extraout_a0_00 - unaff_s6) < 0x2711));
    param_2 = 0x518;
    param_1 = 0;
  } while( true );
code_r0x00010ccc:
  iVar9 += 1;
  puVar6 = puVar6 + 3;
  if (iVar9 == 0x1c) goto _L0;
  goto _L0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010c5e(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  bool bVar2;
  uint *unaff_s0;
  int *unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  int extraout_a0_03;
  int extraout_a0_04;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int *unaff_s2;
  int unaff_s3;
  int *piVar8;
  int unaff_s5;
  int unaff_s6;
  int *unaff_s7;
  undefined4 *unaff_s8;
  int iVar9;
  char in_stack_00000017;
  int *in_stack_00000018;
  
  do {
    FUN_00010c5e(param_1,param_2);
    FUN_00010c68(0x18);
    bVar2 = false;
    do {
      iVar9 = iRam00000000;
      if (unaff_s3 != 0) {
        iVar3 = *unaff_s2;
        iVar5 = 0;
        for (piVar8 = unaff_s2 + 1;
            (((iVar5 < iVar3 && (bVar1 = *(byte *)piVar8, (bVar1 & 0xfd) != 0x3d)) && (bVar1 != 10))
            && (bVar1 != 0xd)); piVar8 = (int *)((int)piVar8 + 1)) {
          if (iVar5 == 0x20) goto _L0;
          (&stack0x0000001c)[iVar5] = bVar1;
          iVar5 += 1;
        }
        (&stack0x0000001c)[iVar5] = 0;
        iVar3 = 1;
        if (iVar5 != 0) {
          iVar3 = *unaff_s7;
          iVar5 = 0;
          if (iVar3 != 0) {
            for (; iVar5 < iVar9; iVar5 += 1) {
              FUN_00010e18(&stack0x0000001c,*(undefined4 *)(iVar3 + iVar5 * 0xc));
              if (extraout_a0_04 == 0) {
                pcVar7 = *(code **)(iRam00000000 + iVar5 * 0xc + 4);
                goto _L0;
              }
            }
          }
          iVar9 = 0;
          puVar6 = unaff_s8;
_L0:
          FUN_00010cc0(&stack0x0000001c,*puVar6);
          if (extraout_a0_01 != 0) goto code_r0x00010ccc;
          pcVar7 = *(code **)(iVar9 * 0xc + 4);
_L0:
          if (pcVar7 != (code *)0x0) {
            in_stack_00000018 = piVar8;
            iVar3 = (*pcVar7)(&stack0x00000018);
            goto _L0;
          }
_L0:
          iVar3 = 3;
        }
_L0:
        if ((*unaff_s1 == 1) && (iVar3 != 0x17)) {
          FUN_00010ddc(0,0x518);
        }
        FUN_00010de6(iVar3);
        *unaff_s0 = 0;
        unaff_s3 = 0;
      }
      while (FUN_00010bc0(&stack0x00000017), extraout_a0 == 0) {
        if (*(int *)(unaff_s5 + 0xe0) != 0) {
          (*_DAT_00000004)(&stack0x00000017,1,_DAT_00000004);
        }
        iVar9 = *unaff_s1;
        if (iVar9 == 0) {
          uVar4 = *unaff_s0;
          if (in_stack_00000017 == '\n') {
            if (uVar4 < 0x400) {
              *unaff_s0 = uVar4 + 1;
_L0:
              *(char *)((int)unaff_s0 + uVar4 + 4) = in_stack_00000017;
_L0:
              unaff_s3 = 1;
              goto _L0;
            }
          }
          else {
            if (in_stack_00000017 != '\r') goto _L0;
            *unaff_s0 = uVar4 + 1;
            *(undefined *)((int)unaff_s0 + uVar4 + 4) = 0xd;
            _L0(&stack0x00000017);
            if ((extraout_a0_02 != 0) || (in_stack_00000017 != '\n')) goto _L0;
            _LVL233(&stack0x00000017);
            uVar4 = *unaff_s0;
            if (uVar4 < 0x400) {
              *unaff_s0 = uVar4 + 1;
              goto _L0;
            }
          }
_L0:
          *unaff_s0 = 0;
          _L0(0);
        }
        else {
          if (iVar9 != 1) {
_L0:
            uVar4 = *unaff_s0;
            if (0x3ff < uVar4) goto _L0;
            *unaff_s0 = uVar4 + 1;
            *(char *)((int)unaff_s0 + uVar4 + 4) = in_stack_00000017;
            break;
          }
          _L0();
          iVar3 = unaff_s1[1];
          uVar4 = iVar3 + 1;
          unaff_s1[1] = uVar4;
          *(char *)((int)unaff_s1 + iVar3 + 0x112) = in_stack_00000017;
          bVar2 = true;
          unaff_s6 = extraout_a0_03;
          if (uVar4 < (uint)unaff_s1[3]) goto _L0;
          if (0x3ff < uVar4) {
            unaff_s1[1] = 0;
          }
          _LVL238(0,0x408);
          FUN_00010d80(0,0x15);
          *unaff_s0 = 0x15;
          bVar2 = false;
          unaff_s3 = iVar9;
        }
      }
    } while ((!bVar2) || (_L0(), (uint)(extraout_a0_00 - unaff_s6) < 0x2711));
    FUN_00010c4c(0,0x518);
    param_2 = 0x408;
    param_1 = 0;
  } while( true );
code_r0x00010ccc:
  iVar9 += 1;
  puVar6 = puVar6 + 3;
  if (iVar9 == 0x1c) goto _L0;
  goto _L0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010c68(undefined4 param_1)

{
  byte bVar1;
  bool bVar2;
  uint *unaff_s0;
  int *unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  int extraout_a0_03;
  int extraout_a0_04;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int *unaff_s2;
  int unaff_s3;
  int *piVar8;
  int unaff_s5;
  int unaff_s6;
  int *unaff_s7;
  undefined4 *unaff_s8;
  int iVar9;
  char in_stack_00000017;
  int *in_stack_00000018;
  
  do {
    FUN_00010c68(param_1);
    bVar2 = false;
    do {
      iVar9 = iRam00000000;
      if (unaff_s3 != 0) {
        iVar3 = *unaff_s2;
        iVar5 = 0;
        for (piVar8 = unaff_s2 + 1;
            (((iVar5 < iVar3 && (bVar1 = *(byte *)piVar8, (bVar1 & 0xfd) != 0x3d)) && (bVar1 != 10))
            && (bVar1 != 0xd)); piVar8 = (int *)((int)piVar8 + 1)) {
          if (iVar5 == 0x20) goto _L0;
          (&stack0x0000001c)[iVar5] = bVar1;
          iVar5 += 1;
        }
        (&stack0x0000001c)[iVar5] = 0;
        iVar3 = 1;
        if (iVar5 != 0) {
          iVar3 = *unaff_s7;
          iVar5 = 0;
          if (iVar3 != 0) {
            for (; iVar5 < iVar9; iVar5 += 1) {
              FUN_00010e18(&stack0x0000001c,*(undefined4 *)(iVar3 + iVar5 * 0xc));
              if (extraout_a0_04 == 0) {
                pcVar7 = *(code **)(iRam00000000 + iVar5 * 0xc + 4);
                goto _L0;
              }
            }
          }
          iVar9 = 0;
          puVar6 = unaff_s8;
_L0:
          FUN_00010cc0(&stack0x0000001c,*puVar6);
          if (extraout_a0_01 != 0) goto code_r0x00010ccc;
          pcVar7 = *(code **)(iVar9 * 0xc + 4);
_L0:
          if (pcVar7 != (code *)0x0) {
            in_stack_00000018 = piVar8;
            iVar3 = (*pcVar7)(&stack0x00000018);
            goto _L0;
          }
_L0:
          iVar3 = 3;
        }
_L0:
        if ((*unaff_s1 == 1) && (iVar3 != 0x17)) {
          FUN_00010ddc(0,0x518);
        }
        FUN_00010de6(iVar3);
        *unaff_s0 = 0;
        unaff_s3 = 0;
      }
      while (FUN_00010bc0(&stack0x00000017), extraout_a0 == 0) {
        if (*(int *)(unaff_s5 + 0xe0) != 0) {
          (*_DAT_00000004)(&stack0x00000017,1,_DAT_00000004);
        }
        iVar9 = *unaff_s1;
        if (iVar9 == 0) {
          uVar4 = *unaff_s0;
          if (in_stack_00000017 == '\n') {
            if (uVar4 < 0x400) {
              *unaff_s0 = uVar4 + 1;
_L0:
              *(char *)((int)unaff_s0 + uVar4 + 4) = in_stack_00000017;
_L0:
              unaff_s3 = 1;
              goto _L0;
            }
          }
          else {
            if (in_stack_00000017 != '\r') goto _L0;
            *unaff_s0 = uVar4 + 1;
            *(undefined *)((int)unaff_s0 + uVar4 + 4) = 0xd;
            _L0(&stack0x00000017);
            if ((extraout_a0_02 != 0) || (in_stack_00000017 != '\n')) goto _L0;
            _LVL233(&stack0x00000017);
            uVar4 = *unaff_s0;
            if (uVar4 < 0x400) {
              *unaff_s0 = uVar4 + 1;
              goto _L0;
            }
          }
_L0:
          *unaff_s0 = 0;
          _L0(0);
        }
        else {
          if (iVar9 != 1) {
_L0:
            uVar4 = *unaff_s0;
            if (0x3ff < uVar4) goto _L0;
            *unaff_s0 = uVar4 + 1;
            *(char *)((int)unaff_s0 + uVar4 + 4) = in_stack_00000017;
            break;
          }
          _L0();
          iVar3 = unaff_s1[1];
          uVar4 = iVar3 + 1;
          unaff_s1[1] = uVar4;
          *(char *)((int)unaff_s1 + iVar3 + 0x112) = in_stack_00000017;
          bVar2 = true;
          unaff_s6 = extraout_a0_03;
          if (uVar4 < (uint)unaff_s1[3]) goto _L0;
          if (0x3ff < uVar4) {
            unaff_s1[1] = 0;
          }
          _LVL238(0,0x408);
          FUN_00010d80(0,0x15);
          *unaff_s0 = 0x15;
          bVar2 = false;
          unaff_s3 = iVar9;
        }
      }
    } while ((!bVar2) || (_L0(), (uint)(extraout_a0_00 - unaff_s6) < 0x2711));
    FUN_00010c4c(0,0x518);
    FUN_00010c5e(0,0x408);
    param_1 = 0x18;
  } while( true );
code_r0x00010ccc:
  iVar9 += 1;
  puVar6 = puVar6 + 3;
  if (iVar9 == 0x1c) goto _L0;
  goto _L0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010cc0(undefined *param_1,undefined4 param_2)

{
  byte bVar1;
  uint *unaff_s0;
  int *unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  int extraout_a0_03;
  int extraout_a0_04;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  int *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int *unaff_s7;
  undefined4 *unaff_s8;
  int iVar5;
  int unaff_s11;
  int iVar6;
  undefined4 *in_stack_00000004;
  char in_stack_00000017;
  int *in_stack_00000018;
  
  while( true ) {
    FUN_00010cc0(param_1,param_2);
    if (extraout_a0_01 == 0) {
      pcVar4 = *(code **)(unaff_s11 * 0xc + 4);
      goto _L0;
    }
    unaff_s11 += 1;
    in_stack_00000004 = in_stack_00000004 + 3;
    if (unaff_s11 == 0x1c) break;
_L0:
    param_2 = *in_stack_00000004;
    param_1 = &stack0x0000001c;
  }
_L0:
  iVar6 = 3;
  do {
    do {
      if ((*unaff_s1 == 1) && (iVar6 != 0x17)) {
        FUN_00010ddc(0,0x518);
      }
      FUN_00010de6(iVar6);
      *unaff_s0 = 0;
      iVar6 = 0;
_L0:
      do {
        FUN_00010bc0(&stack0x00000017);
        if (extraout_a0 == 0) {
          if (*(int *)(unaff_s5 + 0xe0) != 0) {
            (*_DAT_00000004)(&stack0x00000017,1,_DAT_00000004);
          }
          iVar5 = *unaff_s1;
          if (iVar5 == 0) {
            uVar2 = *unaff_s0;
            if (in_stack_00000017 == '\n') {
              if (uVar2 < 0x400) {
                *unaff_s0 = uVar2 + 1;
_L0:
                *(char *)((int)unaff_s0 + uVar2 + 4) = in_stack_00000017;
_L0:
                iVar6 = 1;
                goto _L0;
              }
            }
            else {
              if (in_stack_00000017 != '\r') goto _L0;
              *unaff_s0 = uVar2 + 1;
              *(undefined *)((int)unaff_s0 + uVar2 + 4) = 0xd;
              _L0(&stack0x00000017);
              if ((extraout_a0_02 != 0) || (in_stack_00000017 != '\n')) goto _L0;
              _LVL233(&stack0x00000017);
              uVar2 = *unaff_s0;
              if (uVar2 < 0x400) {
                *unaff_s0 = uVar2 + 1;
                goto _L0;
              }
            }
          }
          else {
            if (iVar5 == 1) {
              _L0();
              iVar3 = unaff_s1[1];
              uVar2 = iVar3 + 1;
              unaff_s1[1] = uVar2;
              *(char *)((int)unaff_s1 + iVar3 + 0x112) = in_stack_00000017;
              unaff_s4 = 1;
              unaff_s6 = extraout_a0_03;
              if ((uint)unaff_s1[3] <= uVar2) {
                if (0x3ff < uVar2) {
                  unaff_s1[1] = 0;
                }
                _LVL238(0,0x408);
                FUN_00010d80(0,0x15);
                *unaff_s0 = 0x15;
                unaff_s4 = 0;
                iVar6 = iVar5;
                goto _L0;
              }
            }
_L0:
            uVar2 = *unaff_s0;
            if (uVar2 < 0x400) {
              *unaff_s0 = uVar2 + 1;
              *(char *)((int)unaff_s0 + uVar2 + 4) = in_stack_00000017;
              goto _L0;
            }
          }
          *unaff_s0 = 0;
          _L0(0);
          goto _L0;
        }
_L0:
        if ((unaff_s4 != 0) && (_L0(), 10000 < (uint)(extraout_a0_00 - unaff_s6))) {
          FUN_00010c4c(0,0x518);
          FUN_00010c5e(0,0x408);
          FUN_00010c68(0x18);
          unaff_s4 = 0;
        }
        iVar5 = iRam00000000;
      } while (iVar6 == 0);
      iVar6 = *unaff_s2;
      iVar3 = 0;
      for (unaff_s3 = unaff_s2 + 1;
          (((iVar3 < iVar6 && (bVar1 = *(byte *)unaff_s3, (bVar1 & 0xfd) != 0x3d)) && (bVar1 != 10))
          && (bVar1 != 0xd)); unaff_s3 = (int *)((int)unaff_s3 + 1)) {
        if (iVar3 == 0x20) goto _L0;
        (&stack0x0000001c)[iVar3] = bVar1;
        iVar3 += 1;
      }
      (&stack0x0000001c)[iVar3] = 0;
      iVar6 = 1;
    } while (iVar3 == 0);
    iVar6 = *unaff_s7;
    iVar3 = 0;
    if (iVar6 == 0) {
_L146:
      unaff_s11 = 0;
      in_stack_00000004 = unaff_s8;
      goto _L0;
    }
    while( true ) {
      if (iVar5 <= iVar3) goto _L146;
      FUN_00010e18(&stack0x0000001c,*(undefined4 *)(iVar6 + iVar3 * 0xc));
      if (extraout_a0_04 == 0) break;
      iVar3 += 1;
    }
    pcVar4 = *(code **)(iRam00000000 + iVar3 * 0xc + 4);
_L0:
    if (pcVar4 == (code *)0x0) goto _L0;
    in_stack_00000018 = unaff_s3;
    iVar6 = (*pcVar4)(&stack0x00000018);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(undefined *param_1)

{
  byte bVar1;
  uint *unaff_s0;
  int *unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  int extraout_a0_03;
  int extraout_a0_04;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  code *pcVar6;
  int *unaff_s2;
  int unaff_s3;
  int *piVar7;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int *unaff_s7;
  undefined4 *unaff_s8;
  int iVar8;
  uint unaff_s11;
  byte in_stack_00000017;
  int *in_stack_00000018;
  
code_r0x00010cf0:
  _L0(param_1);
  if (extraout_a0_02 != 0) goto _L0;
  if (in_stack_00000017 != unaff_s11) goto _L0;
  _LVL233(&stack0x00000017);
  uVar5 = *unaff_s0;
  if (0x3ff < uVar5) goto _L0;
  *unaff_s0 = uVar5 + 1;
_L0:
  *(byte *)((int)unaff_s0 + uVar5 + 4) = in_stack_00000017;
_L0:
  unaff_s3 = 1;
_L0:
  uVar5 = *unaff_s0;
  if (0x3ff < uVar5) goto _L0;
  *unaff_s0 = uVar5 + 1;
  *(byte *)((int)unaff_s0 + uVar5 + 4) = in_stack_00000017;
  do {
    if ((unaff_s4 != 0) && (_L0(), 10000 < (uint)(extraout_a0_00 - unaff_s6))) {
      FUN_00010c4c(0,0x518);
      FUN_00010c5e(0,0x408);
      FUN_00010c68(0x18);
      unaff_s4 = 0;
    }
    iVar8 = iRam00000000;
    if (unaff_s3 != 0) {
      iVar2 = *unaff_s2;
      iVar3 = 0;
      for (piVar7 = unaff_s2 + 1;
          (((iVar3 < iVar2 && (bVar1 = *(byte *)piVar7, (bVar1 & 0xfd) != 0x3d)) && (bVar1 != 10))
          && (bVar1 != 0xd)); piVar7 = (int *)((int)piVar7 + 1)) {
        if (iVar3 == 0x20) goto _L0;
        (&stack0x0000001c)[iVar3] = bVar1;
        iVar3 += 1;
      }
      (&stack0x0000001c)[iVar3] = 0;
      iVar2 = 1;
      if (iVar3 != 0) {
        iVar2 = *unaff_s7;
        iVar3 = 0;
        if (iVar2 != 0) {
          for (; iVar3 < iVar8; iVar3 += 1) {
            FUN_00010e18(&stack0x0000001c,*(undefined4 *)(iVar2 + iVar3 * 0xc));
            if (extraout_a0_04 == 0) {
              pcVar6 = *(code **)(iRam00000000 + iVar3 * 0xc + 4);
              goto _L0;
            }
          }
        }
        iVar8 = 0;
        puVar4 = unaff_s8;
_L0:
        FUN_00010cc0(&stack0x0000001c,*puVar4);
        if (extraout_a0_01 != 0) break;
        pcVar6 = *(code **)(iVar8 * 0xc + 4);
_L0:
        if (pcVar6 != (code *)0x0) {
          in_stack_00000018 = piVar7;
          iVar2 = (*pcVar6)(&stack0x00000018);
          goto _L0;
        }
_L0:
        iVar2 = 3;
      }
_L0:
      if ((*unaff_s1 == 1) && (iVar2 != 0x17)) {
        FUN_00010ddc(0,0x518);
      }
      FUN_00010de6(iVar2);
      *unaff_s0 = 0;
      unaff_s3 = 0;
    }
    while (FUN_00010bc0(&stack0x00000017), extraout_a0 == 0) {
      if (*(int *)(unaff_s5 + 0xe0) != 0) {
        (*_DAT_00000004)(&stack0x00000017,1,_DAT_00000004);
      }
      iVar8 = *unaff_s1;
      if (iVar8 == 0) {
        unaff_s11 = 10;
        uVar5 = *unaff_s0;
        if (in_stack_00000017 != 10) {
          if (in_stack_00000017 != 0xd) goto _L0;
          param_1 = &stack0x00000017;
          *unaff_s0 = uVar5 + 1;
          *(undefined *)((int)unaff_s0 + uVar5 + 4) = 0xd;
          goto code_r0x00010cf0;
        }
        if (uVar5 < 0x400) {
          *unaff_s0 = uVar5 + 1;
          goto _L0;
        }
_L0:
        *unaff_s0 = 0;
        _L0(0);
      }
      else {
        if (iVar8 != 1) goto _L0;
        _L0();
        iVar2 = unaff_s1[1];
        uVar5 = iVar2 + 1;
        unaff_s1[1] = uVar5;
        *(byte *)((int)unaff_s1 + iVar2 + 0x112) = in_stack_00000017;
        unaff_s4 = 1;
        unaff_s6 = extraout_a0_03;
        if (uVar5 < (uint)unaff_s1[3]) goto _L0;
        if (0x3ff < uVar5) {
          unaff_s1[1] = 0;
        }
        _LVL238(0,0x408);
        FUN_00010d80(0,0x15);
        *unaff_s0 = 0x15;
        unaff_s4 = 0;
        unaff_s3 = iVar8;
      }
    }
  } while( true );
  iVar8 += 1;
  puVar4 = puVar4 + 3;
  if (iVar8 == 0x1c) goto _L0;
  goto _L0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _LVL233(undefined *param_1)

{
  byte bVar1;
  uint *unaff_s0;
  int *unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  int extraout_a0_03;
  int extraout_a0_04;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  code *pcVar6;
  int *unaff_s2;
  int unaff_s3;
  int *piVar7;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int *unaff_s7;
  undefined4 *unaff_s8;
  int iVar8;
  char in_stack_00000017;
  int *in_stack_00000018;
  
code_r0x00010d06:
  _LVL233(param_1);
  uVar5 = *unaff_s0;
  if (0x3ff < uVar5) goto _L0;
  *unaff_s0 = uVar5 + 1;
_L0:
  *(char *)((int)unaff_s0 + uVar5 + 4) = in_stack_00000017;
_L0:
  unaff_s3 = 1;
_L0:
  uVar5 = *unaff_s0;
  if (0x3ff < uVar5) goto _L0;
  *unaff_s0 = uVar5 + 1;
  *(char *)((int)unaff_s0 + uVar5 + 4) = in_stack_00000017;
  do {
    if ((unaff_s4 != 0) && (_L0(), 10000 < (uint)(extraout_a0_00 - unaff_s6))) {
      FUN_00010c4c(0,0x518);
      FUN_00010c5e(0,0x408);
      FUN_00010c68(0x18);
      unaff_s4 = 0;
    }
    iVar8 = iRam00000000;
    if (unaff_s3 != 0) {
      iVar2 = *unaff_s2;
      iVar3 = 0;
      for (piVar7 = unaff_s2 + 1;
          (((iVar3 < iVar2 && (bVar1 = *(byte *)piVar7, (bVar1 & 0xfd) != 0x3d)) && (bVar1 != 10))
          && (bVar1 != 0xd)); piVar7 = (int *)((int)piVar7 + 1)) {
        if (iVar3 == 0x20) goto _L0;
        (&stack0x0000001c)[iVar3] = bVar1;
        iVar3 += 1;
      }
      (&stack0x0000001c)[iVar3] = 0;
      iVar2 = 1;
      if (iVar3 != 0) {
        iVar2 = *unaff_s7;
        iVar3 = 0;
        if (iVar2 != 0) {
          for (; iVar3 < iVar8; iVar3 += 1) {
            FUN_00010e18(&stack0x0000001c,*(undefined4 *)(iVar2 + iVar3 * 0xc));
            if (extraout_a0_04 == 0) {
              pcVar6 = *(code **)(iRam00000000 + iVar3 * 0xc + 4);
              goto _L0;
            }
          }
        }
        iVar8 = 0;
        puVar4 = unaff_s8;
_L0:
        FUN_00010cc0(&stack0x0000001c,*puVar4);
        if (extraout_a0_01 != 0) break;
        pcVar6 = *(code **)(iVar8 * 0xc + 4);
_L0:
        if (pcVar6 != (code *)0x0) {
          in_stack_00000018 = piVar7;
          iVar2 = (*pcVar6)(&stack0x00000018);
          goto _L0;
        }
_L0:
        iVar2 = 3;
      }
_L0:
      if ((*unaff_s1 == 1) && (iVar2 != 0x17)) {
        FUN_00010ddc(0,0x518);
      }
      FUN_00010de6(iVar2);
      *unaff_s0 = 0;
      unaff_s3 = 0;
    }
    while (FUN_00010bc0(&stack0x00000017), extraout_a0 == 0) {
      if (*(int *)(unaff_s5 + 0xe0) != 0) {
        (*_DAT_00000004)(&stack0x00000017,1,_DAT_00000004);
      }
      iVar8 = *unaff_s1;
      if (iVar8 == 0) {
        uVar5 = *unaff_s0;
        if (in_stack_00000017 != '\n') {
          if (in_stack_00000017 != '\r') goto _L0;
          *unaff_s0 = uVar5 + 1;
          *(undefined *)((int)unaff_s0 + uVar5 + 4) = 0xd;
          _L0(&stack0x00000017);
          if ((extraout_a0_02 != 0) || (in_stack_00000017 != '\n')) goto _L0;
          param_1 = &stack0x00000017;
          goto code_r0x00010d06;
        }
        if (uVar5 < 0x400) {
          *unaff_s0 = uVar5 + 1;
          goto _L0;
        }
_L0:
        *unaff_s0 = 0;
        _L0(0);
      }
      else {
        if (iVar8 != 1) goto _L0;
        _L0();
        iVar2 = unaff_s1[1];
        uVar5 = iVar2 + 1;
        unaff_s1[1] = uVar5;
        *(char *)((int)unaff_s1 + iVar2 + 0x112) = in_stack_00000017;
        unaff_s4 = 1;
        unaff_s6 = extraout_a0_03;
        if (uVar5 < (uint)unaff_s1[3]) goto _L0;
        if (0x3ff < uVar5) {
          unaff_s1[1] = 0;
        }
        _LVL238(0,0x408);
        FUN_00010d80(0,0x15);
        *unaff_s0 = 0x15;
        unaff_s4 = 0;
        unaff_s3 = iVar8;
      }
    }
  } while( true );
  iVar8 += 1;
  puVar4 = puVar4 + 3;
  if (iVar8 == 0x1c) goto _L0;
  goto _L0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  byte bVar1;
  bool bVar2;
  uint *unaff_s0;
  int *unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  int extraout_a0_03;
  int extraout_a0_04;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  code *pcVar8;
  int *unaff_s2;
  int unaff_s3;
  int *piVar9;
  int unaff_s5;
  int *unaff_s7;
  undefined4 *unaff_s8;
  int unaff_s9;
  int *unaff_s11;
  char in_stack_00000017;
  int *in_stack_00000018;
  
code_r0x00010d2c:
  _L0();
  iVar7 = unaff_s11[1];
  uVar4 = iVar7 + 1;
  unaff_s11[1] = uVar4;
  *(char *)((int)unaff_s11 + iVar7 + 0x112) = in_stack_00000017;
  bVar2 = true;
  if (uVar4 < (uint)unaff_s11[3]) goto _L0;
  if (0x3ff < uVar4) {
    unaff_s11[1] = 0;
  }
  _LVL238(0,0x408);
  FUN_00010d80(0,0x15);
  *unaff_s0 = 0x15;
  bVar2 = false;
_L0:
  while (FUN_00010bc0(&stack0x00000017), extraout_a0 != 0) {
_L0:
    if ((bVar2) && (_L0(), 10000 < (uint)(extraout_a0_00 - extraout_a0_03))) {
      FUN_00010c4c(0,0x518);
      FUN_00010c5e(0,0x408);
      FUN_00010c68(0x18);
      bVar2 = false;
    }
    iVar7 = iRam00000000;
    if (unaff_s9 != 0) {
      iVar3 = *unaff_s2;
      iVar5 = 0;
      for (piVar9 = unaff_s2 + 1;
          (((iVar5 < iVar3 && (bVar1 = *(byte *)piVar9, (bVar1 & 0xfd) != 0x3d)) && (bVar1 != 10))
          && (bVar1 != 0xd)); piVar9 = (int *)((int)piVar9 + 1)) {
        if (iVar5 == 0x20) goto _L0;
        (&stack0x0000001c)[iVar5] = bVar1;
        iVar5 += 1;
      }
      (&stack0x0000001c)[iVar5] = 0;
      iVar3 = 1;
      if (iVar5 != 0) {
        iVar3 = *unaff_s7;
        iVar5 = 0;
        if (iVar3 != 0) {
          for (; iVar5 < iVar7; iVar5 += 1) {
            FUN_00010e18(&stack0x0000001c,*(undefined4 *)(iVar3 + iVar5 * 0xc));
            if (extraout_a0_04 == 0) {
              pcVar8 = *(code **)(iRam00000000 + iVar5 * 0xc + 4);
              goto _L0;
            }
          }
        }
        iVar7 = 0;
        puVar6 = unaff_s8;
_L0:
        FUN_00010cc0(&stack0x0000001c,*puVar6);
        if (extraout_a0_01 != 0) goto code_r0x00010ccc;
        pcVar8 = *(code **)(iVar7 * 0xc + 4);
_L0:
        if (pcVar8 != (code *)0x0) {
          in_stack_00000018 = piVar9;
          iVar3 = (*pcVar8)(&stack0x00000018);
          goto _L0;
        }
_L0:
        iVar3 = 3;
      }
_L0:
      if ((*unaff_s1 == 1) && (iVar3 != 0x17)) {
        FUN_00010ddc(0,0x518);
      }
      FUN_00010de6(iVar3);
      unaff_s9 = 0;
      *unaff_s0 = 0;
    }
  }
  if (*(int *)(unaff_s5 + 0xe0) != 0) {
    (*_DAT_00000004)(&stack0x00000017,1,_DAT_00000004);
  }
  iVar7 = *unaff_s1;
  unaff_s3 = unaff_s9;
  if (iVar7 == 0) {
    uVar4 = *unaff_s0;
    if (in_stack_00000017 == '\n') {
      if (uVar4 < 0x400) {
        *unaff_s0 = uVar4 + 1;
_L0:
        *(char *)((int)unaff_s0 + uVar4 + 4) = in_stack_00000017;
_L0:
        unaff_s3 = 1;
        goto _L0;
      }
    }
    else {
      if (in_stack_00000017 != '\r') goto _L0;
      *unaff_s0 = uVar4 + 1;
      *(undefined *)((int)unaff_s0 + uVar4 + 4) = 0xd;
      _L0(&stack0x00000017);
      if ((extraout_a0_02 != 0) || (in_stack_00000017 != '\n')) goto _L0;
      _LVL233(&stack0x00000017);
      uVar4 = *unaff_s0;
      if (uVar4 < 0x400) {
        *unaff_s0 = uVar4 + 1;
        goto _L0;
      }
    }
  }
  else {
    unaff_s9 = iVar7;
    unaff_s11 = unaff_s1;
    if (iVar7 == 1) goto code_r0x00010d2c;
_L0:
    uVar4 = *unaff_s0;
    unaff_s9 = unaff_s3;
    if (uVar4 < 0x400) {
      *unaff_s0 = uVar4 + 1;
      *(char *)((int)unaff_s0 + uVar4 + 4) = in_stack_00000017;
      goto _L0;
    }
  }
  *unaff_s0 = 0;
  _L0(0);
  goto _L0;
code_r0x00010ccc:
  iVar7 += 1;
  puVar6 = puVar6 + 3;
  if (iVar7 == 0x1c) goto _L0;
  goto _L0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _LVL238(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  bool bVar2;
  uint *unaff_s0;
  int *unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  int extraout_a0_03;
  int extraout_a0_04;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int *unaff_s2;
  int *piVar8;
  int unaff_s5;
  int unaff_s6;
  int *unaff_s7;
  undefined4 *unaff_s8;
  int iVar9;
  int unaff_s9;
  char in_stack_00000017;
  int *in_stack_00000018;
  
code_r0x00010d6c:
  _LVL238(param_1,param_2);
  FUN_00010d80(0,0x15);
  *unaff_s0 = 0x15;
  bVar2 = false;
_L0:
  while (FUN_00010bc0(&stack0x00000017), extraout_a0 != 0) {
_L0:
    if ((bVar2) && (_L0(), 10000 < (uint)(extraout_a0_00 - unaff_s6))) {
      FUN_00010c4c(0,0x518);
      FUN_00010c5e(0,0x408);
      FUN_00010c68(0x18);
      bVar2 = false;
    }
    iVar9 = iRam00000000;
    if (unaff_s9 != 0) {
      iVar3 = *unaff_s2;
      iVar5 = 0;
      for (piVar8 = unaff_s2 + 1;
          (((iVar5 < iVar3 && (bVar1 = *(byte *)piVar8, (bVar1 & 0xfd) != 0x3d)) && (bVar1 != 10))
          && (bVar1 != 0xd)); piVar8 = (int *)((int)piVar8 + 1)) {
        if (iVar5 == 0x20) goto _L0;
        (&stack0x0000001c)[iVar5] = bVar1;
        iVar5 += 1;
      }
      (&stack0x0000001c)[iVar5] = 0;
      iVar3 = 1;
      if (iVar5 != 0) {
        iVar3 = *unaff_s7;
        iVar5 = 0;
        if (iVar3 != 0) {
          for (; iVar5 < iVar9; iVar5 += 1) {
            FUN_00010e18(&stack0x0000001c,*(undefined4 *)(iVar3 + iVar5 * 0xc));
            if (extraout_a0_04 == 0) {
              pcVar7 = *(code **)(iRam00000000 + iVar5 * 0xc + 4);
              goto _L0;
            }
          }
        }
        iVar9 = 0;
        puVar6 = unaff_s8;
_L0:
        FUN_00010cc0(&stack0x0000001c,*puVar6);
        if (extraout_a0_01 != 0) goto code_r0x00010ccc;
        pcVar7 = *(code **)(iVar9 * 0xc + 4);
_L0:
        if (pcVar7 != (code *)0x0) {
          in_stack_00000018 = piVar8;
          iVar3 = (*pcVar7)(&stack0x00000018);
          goto _L0;
        }
_L0:
        iVar3 = 3;
      }
_L0:
      if ((*unaff_s1 == 1) && (iVar3 != 0x17)) {
        FUN_00010ddc(0,0x518);
      }
      FUN_00010de6(iVar3);
      unaff_s9 = 0;
      *unaff_s0 = 0;
    }
  }
  if (*(int *)(unaff_s5 + 0xe0) != 0) {
    (*_DAT_00000004)(&stack0x00000017,1,_DAT_00000004);
  }
  iVar9 = *unaff_s1;
  if (iVar9 == 0) {
    uVar4 = *unaff_s0;
    if (in_stack_00000017 == '\n') {
      if (uVar4 < 0x400) {
        *unaff_s0 = uVar4 + 1;
_L0:
        *(char *)((int)unaff_s0 + uVar4 + 4) = in_stack_00000017;
_L0:
        unaff_s9 = 1;
        goto _L0;
      }
    }
    else {
      if (in_stack_00000017 != '\r') goto _L0;
      *unaff_s0 = uVar4 + 1;
      *(undefined *)((int)unaff_s0 + uVar4 + 4) = 0xd;
      _L0(&stack0x00000017);
      if ((extraout_a0_02 != 0) || (in_stack_00000017 != '\n')) goto _L0;
      _LVL233(&stack0x00000017);
      uVar4 = *unaff_s0;
      if (uVar4 < 0x400) {
        *unaff_s0 = uVar4 + 1;
        goto _L0;
      }
    }
  }
  else {
    if (iVar9 == 1) {
      _L0();
      iVar3 = unaff_s1[1];
      uVar4 = iVar3 + 1;
      unaff_s1[1] = uVar4;
      *(char *)((int)unaff_s1 + iVar3 + 0x112) = in_stack_00000017;
      bVar2 = true;
      unaff_s6 = extraout_a0_03;
      if ((uint)unaff_s1[3] <= uVar4) goto _L0;
    }
_L0:
    uVar4 = *unaff_s0;
    if (uVar4 < 0x400) {
      *unaff_s0 = uVar4 + 1;
      *(char *)((int)unaff_s0 + uVar4 + 4) = in_stack_00000017;
      goto _L0;
    }
  }
  *unaff_s0 = 0;
  _L0(0);
  goto _L0;
_L0:
  if (0x3ff < uVar4) {
    unaff_s1[1] = 0;
  }
  param_2 = 0x408;
  param_1 = 0;
  unaff_s9 = iVar9;
  goto code_r0x00010d6c;
code_r0x00010ccc:
  iVar9 += 1;
  puVar6 = puVar6 + 3;
  if (iVar9 == 0x1c) goto _L0;
  goto _L0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010d80(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  bool bVar2;
  uint *unaff_s0;
  int *unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  int extraout_a0_03;
  int extraout_a0_04;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  code *pcVar7;
  int *unaff_s2;
  int *piVar8;
  int unaff_s5;
  int unaff_s6;
  int *unaff_s7;
  undefined4 *unaff_s8;
  int iVar9;
  int unaff_s9;
  char in_stack_00000017;
  int *in_stack_00000018;
  
code_r0x00010d80:
  FUN_00010d80(param_1,param_2);
  *unaff_s0 = 0x15;
  bVar2 = false;
_L0:
  while (FUN_00010bc0(&stack0x00000017), extraout_a0 != 0) {
_L0:
    if ((bVar2) && (_L0(), 10000 < (uint)(extraout_a0_00 - unaff_s6))) {
      FUN_00010c4c(0,0x518);
      FUN_00010c5e(0,0x408);
      FUN_00010c68(0x18);
      bVar2 = false;
    }
    iVar9 = iRam00000000;
    if (unaff_s9 != 0) {
      iVar3 = *unaff_s2;
      iVar5 = 0;
      for (piVar8 = unaff_s2 + 1;
          (((iVar5 < iVar3 && (bVar1 = *(byte *)piVar8, (bVar1 & 0xfd) != 0x3d)) && (bVar1 != 10))
          && (bVar1 != 0xd)); piVar8 = (int *)((int)piVar8 + 1)) {
        if (iVar5 == 0x20) goto _L0;
        (&stack0x0000001c)[iVar5] = bVar1;
        iVar5 += 1;
      }
      (&stack0x0000001c)[iVar5] = 0;
      iVar3 = 1;
      if (iVar5 != 0) {
        iVar3 = *unaff_s7;
        iVar5 = 0;
        if (iVar3 != 0) {
          for (; iVar5 < iVar9; iVar5 += 1) {
            FUN_00010e18(&stack0x0000001c,*(undefined4 *)(iVar3 + iVar5 * 0xc));
            if (extraout_a0_04 == 0) {
              pcVar7 = *(code **)(iRam00000000 + iVar5 * 0xc + 4);
              goto _L0;
            }
          }
        }
        iVar9 = 0;
        puVar6 = unaff_s8;
_L0:
        FUN_00010cc0(&stack0x0000001c,*puVar6);
        if (extraout_a0_01 != 0) goto code_r0x00010ccc;
        pcVar7 = *(code **)(iVar9 * 0xc + 4);
_L0:
        if (pcVar7 != (code *)0x0) {
          in_stack_00000018 = piVar8;
          iVar3 = (*pcVar7)(&stack0x00000018);
          goto _L0;
        }
_L0:
        iVar3 = 3;
      }
_L0:
      if ((*unaff_s1 == 1) && (iVar3 != 0x17)) {
        FUN_00010ddc(0,0x518);
      }
      FUN_00010de6(iVar3);
      unaff_s9 = 0;
      *unaff_s0 = 0;
    }
  }
  if (*(int *)(unaff_s5 + 0xe0) != 0) {
    (*_DAT_00000004)(&stack0x00000017,1,_DAT_00000004);
  }
  iVar9 = *unaff_s1;
  if (iVar9 == 0) {
    uVar4 = *unaff_s0;
    if (in_stack_00000017 == '\n') {
      if (uVar4 < 0x400) {
        *unaff_s0 = uVar4 + 1;
_L0:
        *(char *)((int)unaff_s0 + uVar4 + 4) = in_stack_00000017;
_L0:
        unaff_s9 = 1;
        goto _L0;
      }
    }
    else {
      if (in_stack_00000017 != '\r') goto _L0;
      *unaff_s0 = uVar4 + 1;
      *(undefined *)((int)unaff_s0 + uVar4 + 4) = 0xd;
      _L0(&stack0x00000017);
      if ((extraout_a0_02 != 0) || (in_stack_00000017 != '\n')) goto _L0;
      _LVL233(&stack0x00000017);
      uVar4 = *unaff_s0;
      if (uVar4 < 0x400) {
        *unaff_s0 = uVar4 + 1;
        goto _L0;
      }
    }
  }
  else {
    if (iVar9 == 1) {
      _L0();
      iVar3 = unaff_s1[1];
      uVar4 = iVar3 + 1;
      unaff_s1[1] = uVar4;
      *(char *)((int)unaff_s1 + iVar3 + 0x112) = in_stack_00000017;
      bVar2 = true;
      unaff_s6 = extraout_a0_03;
      if ((uint)unaff_s1[3] <= uVar4) goto _L0;
    }
_L0:
    uVar4 = *unaff_s0;
    if (uVar4 < 0x400) {
      *unaff_s0 = uVar4 + 1;
      *(char *)((int)unaff_s0 + uVar4 + 4) = in_stack_00000017;
      goto _L0;
    }
  }
  *unaff_s0 = 0;
  _L0(0);
  goto _L0;
_L0:
  if (0x3ff < uVar4) {
    unaff_s1[1] = 0;
  }
  _LVL238(0,0x408);
  param_2 = 0x15;
  param_1 = 0;
  unaff_s9 = iVar9;
  goto code_r0x00010d80;
code_r0x00010ccc:
  iVar9 += 1;
  puVar6 = puVar6 + 3;
  if (iVar9 == 0x1c) goto _L0;
  goto _L0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(undefined4 param_1)

{
  byte bVar1;
  uint *unaff_s0;
  int *unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  int extraout_a0_03;
  int extraout_a0_04;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  code *pcVar6;
  int *unaff_s2;
  int unaff_s3;
  int *piVar7;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int *unaff_s7;
  undefined4 *unaff_s8;
  int iVar8;
  char in_stack_00000017;
  int *in_stack_00000018;
  
  do {
    _L0(param_1);
_L0:
    while (FUN_00010bc0(&stack0x00000017), extraout_a0 != 0) {
_L0:
      if ((unaff_s4 != 0) && (_L0(), 10000 < (uint)(extraout_a0_00 - unaff_s6))) {
        FUN_00010c4c(0,0x518);
        FUN_00010c5e(0,0x408);
        FUN_00010c68(0x18);
        unaff_s4 = 0;
      }
      iVar8 = iRam00000000;
      if (unaff_s3 != 0) {
        iVar2 = *unaff_s2;
        iVar4 = 0;
        for (piVar7 = unaff_s2 + 1;
            (((iVar4 < iVar2 && (bVar1 = *(byte *)piVar7, (bVar1 & 0xfd) != 0x3d)) && (bVar1 != 10))
            && (bVar1 != 0xd)); piVar7 = (int *)((int)piVar7 + 1)) {
          if (iVar4 == 0x20) goto _L0;
          (&stack0x0000001c)[iVar4] = bVar1;
          iVar4 += 1;
        }
        (&stack0x0000001c)[iVar4] = 0;
        iVar2 = 1;
        if (iVar4 != 0) {
          iVar2 = *unaff_s7;
          iVar4 = 0;
          if (iVar2 != 0) {
            for (; iVar4 < iVar8; iVar4 += 1) {
              FUN_00010e18(&stack0x0000001c,*(undefined4 *)(iVar2 + iVar4 * 0xc));
              if (extraout_a0_04 == 0) {
                pcVar6 = *(code **)(iRam00000000 + iVar4 * 0xc + 4);
                goto _L0;
              }
            }
          }
          iVar8 = 0;
          puVar5 = unaff_s8;
_L0:
          FUN_00010cc0(&stack0x0000001c,*puVar5);
          if (extraout_a0_01 != 0) goto code_r0x00010ccc;
          pcVar6 = *(code **)(iVar8 * 0xc + 4);
_L0:
          if (pcVar6 != (code *)0x0) {
            in_stack_00000018 = piVar7;
            iVar2 = (*pcVar6)(&stack0x00000018);
            goto _L0;
          }
_L0:
          iVar2 = 3;
        }
_L0:
        if ((*unaff_s1 == 1) && (iVar2 != 0x17)) {
          FUN_00010ddc(0,0x518);
        }
        FUN_00010de6(iVar2);
        *unaff_s0 = 0;
        unaff_s3 = 0;
      }
    }
    if (*(int *)(unaff_s5 + 0xe0) != 0) {
      (*_DAT_00000004)(&stack0x00000017,1,_DAT_00000004);
    }
    iVar8 = *unaff_s1;
    if (iVar8 != 0) {
      if (iVar8 != 1) goto _L0;
      _L0();
      iVar2 = unaff_s1[1];
      uVar3 = iVar2 + 1;
      unaff_s1[1] = uVar3;
      *(char *)((int)unaff_s1 + iVar2 + 0x112) = in_stack_00000017;
      unaff_s4 = 1;
      unaff_s6 = extraout_a0_03;
      if (uVar3 < (uint)unaff_s1[3]) goto _L0;
      if (0x3ff < uVar3) {
        unaff_s1[1] = 0;
      }
      _LVL238(0,0x408);
      FUN_00010d80(0,0x15);
      *unaff_s0 = 0x15;
      unaff_s4 = 0;
      unaff_s3 = iVar8;
      goto _L0;
    }
    uVar3 = *unaff_s0;
    if (in_stack_00000017 == '\n') {
      if (0x3ff < uVar3) goto _L0;
      *unaff_s0 = uVar3 + 1;
_L0:
      *(char *)((int)unaff_s0 + uVar3 + 4) = in_stack_00000017;
_L0:
      unaff_s3 = 1;
_L0:
      uVar3 = *unaff_s0;
      if (uVar3 < 0x400) {
        *unaff_s0 = uVar3 + 1;
        *(char *)((int)unaff_s0 + uVar3 + 4) = in_stack_00000017;
        goto _L0;
      }
      goto _L0;
    }
    if (in_stack_00000017 != '\r') goto _L0;
    *unaff_s0 = uVar3 + 1;
    *(undefined *)((int)unaff_s0 + uVar3 + 4) = 0xd;
    _L0(&stack0x00000017);
    if ((extraout_a0_02 != 0) || (in_stack_00000017 != '\n')) goto _L0;
    _LVL233(&stack0x00000017);
    uVar3 = *unaff_s0;
    if (uVar3 < 0x400) {
      *unaff_s0 = uVar3 + 1;
      goto _L0;
    }
_L0:
    param_1 = 0;
    *unaff_s0 = 0;
  } while( true );
code_r0x00010ccc:
  iVar8 += 1;
  puVar5 = puVar5 + 3;
  if (iVar8 == 0x1c) goto _L0;
  goto _L0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010ddc(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  uint *unaff_s0;
  int *unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  int extraout_a0_03;
  int extraout_a0_04;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int *unaff_s2;
  int iVar6;
  int *piVar7;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int *unaff_s7;
  undefined4 *unaff_s8;
  int iVar8;
  int unaff_s11;
  char in_stack_00000017;
  int *in_stack_00000018;
  
  do {
    FUN_00010ddc(param_1,param_2);
    do {
      FUN_00010de6(unaff_s11);
      *unaff_s0 = 0;
      iVar6 = 0;
_L0:
      do {
        FUN_00010bc0(&stack0x00000017);
        if (extraout_a0 == 0) {
          if (*(int *)(unaff_s5 + 0xe0) != 0) {
            (*_DAT_00000004)(&stack0x00000017,1,_DAT_00000004);
          }
          iVar8 = *unaff_s1;
          if (iVar8 == 0) {
            uVar2 = *unaff_s0;
            if (in_stack_00000017 == '\n') {
              if (uVar2 < 0x400) {
                *unaff_s0 = uVar2 + 1;
_L0:
                *(char *)((int)unaff_s0 + uVar2 + 4) = in_stack_00000017;
_L0:
                iVar6 = 1;
                goto _L0;
              }
            }
            else {
              if (in_stack_00000017 != '\r') goto _L0;
              *unaff_s0 = uVar2 + 1;
              *(undefined *)((int)unaff_s0 + uVar2 + 4) = 0xd;
              _L0(&stack0x00000017);
              if ((extraout_a0_02 != 0) || (in_stack_00000017 != '\n')) goto _L0;
              _LVL233(&stack0x00000017);
              uVar2 = *unaff_s0;
              if (uVar2 < 0x400) {
                *unaff_s0 = uVar2 + 1;
                goto _L0;
              }
            }
          }
          else {
            if (iVar8 == 1) {
              _L0();
              iVar3 = unaff_s1[1];
              uVar2 = iVar3 + 1;
              unaff_s1[1] = uVar2;
              *(char *)((int)unaff_s1 + iVar3 + 0x112) = in_stack_00000017;
              unaff_s4 = 1;
              unaff_s6 = extraout_a0_03;
              if ((uint)unaff_s1[3] <= uVar2) {
                if (0x3ff < uVar2) {
                  unaff_s1[1] = 0;
                }
                _LVL238(0,0x408);
                FUN_00010d80(0,0x15);
                *unaff_s0 = 0x15;
                unaff_s4 = 0;
                iVar6 = iVar8;
                goto _L0;
              }
            }
_L0:
            uVar2 = *unaff_s0;
            if (uVar2 < 0x400) {
              *unaff_s0 = uVar2 + 1;
              *(char *)((int)unaff_s0 + uVar2 + 4) = in_stack_00000017;
              goto _L0;
            }
          }
          *unaff_s0 = 0;
          _L0(0);
          goto _L0;
        }
_L0:
        if ((unaff_s4 != 0) && (_L0(), 10000 < (uint)(extraout_a0_00 - unaff_s6))) {
          FUN_00010c4c(0,0x518);
          FUN_00010c5e(0,0x408);
          FUN_00010c68(0x18);
          unaff_s4 = 0;
        }
        iVar8 = iRam00000000;
      } while (iVar6 == 0);
      iVar6 = *unaff_s2;
      iVar3 = 0;
      for (piVar7 = unaff_s2 + 1;
          (((iVar3 < iVar6 && (bVar1 = *(byte *)piVar7, (bVar1 & 0xfd) != 0x3d)) && (bVar1 != 10))
          && (bVar1 != 0xd)); piVar7 = (int *)((int)piVar7 + 1)) {
        if (iVar3 == 0x20) goto _L0;
        (&stack0x0000001c)[iVar3] = bVar1;
        iVar3 += 1;
      }
      (&stack0x0000001c)[iVar3] = 0;
      unaff_s11 = 1;
      if (iVar3 != 0) {
        iVar6 = *unaff_s7;
        iVar3 = 0;
        if (iVar6 != 0) {
          for (; iVar3 < iVar8; iVar3 += 1) {
            FUN_00010e18(&stack0x0000001c,*(undefined4 *)(iVar6 + iVar3 * 0xc));
            if (extraout_a0_04 == 0) {
              pcVar5 = *(code **)(iRam00000000 + iVar3 * 0xc + 4);
              goto _L0;
            }
          }
        }
        iVar6 = 0;
        puVar4 = unaff_s8;
_L0:
        FUN_00010cc0(&stack0x0000001c,*puVar4);
        if (extraout_a0_01 != 0) goto code_r0x00010ccc;
        pcVar5 = *(code **)(iVar6 * 0xc + 4);
_L0:
        if (pcVar5 != (code *)0x0) {
          in_stack_00000018 = piVar7;
          unaff_s11 = (*pcVar5)(&stack0x00000018);
          goto _L0;
        }
_L0:
        unaff_s11 = 3;
      }
_L0:
    } while ((*unaff_s1 != 1) || (unaff_s11 == 0x17));
    param_2 = 0x518;
    param_1 = 0;
  } while( true );
code_r0x00010ccc:
  iVar6 += 1;
  puVar4 = puVar4 + 3;
  if (iVar6 == 0x1c) goto _L0;
  goto _L0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010de6(int param_1)

{
  byte bVar1;
  uint *unaff_s0;
  int *unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  int extraout_a0_03;
  int extraout_a0_04;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  int *unaff_s2;
  int iVar6;
  int *piVar7;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int *unaff_s7;
  undefined4 *unaff_s8;
  int iVar8;
  char in_stack_00000017;
  int *in_stack_00000018;
  
  do {
    FUN_00010de6(param_1);
    *unaff_s0 = 0;
    iVar6 = 0;
_L0:
    do {
      FUN_00010bc0(&stack0x00000017);
      if (extraout_a0 == 0) {
        if (*(int *)(unaff_s5 + 0xe0) != 0) {
          (*_DAT_00000004)(&stack0x00000017,1,_DAT_00000004);
        }
        iVar8 = *unaff_s1;
        if (iVar8 == 0) {
          uVar2 = *unaff_s0;
          if (in_stack_00000017 == '\n') {
            if (uVar2 < 0x400) {
              *unaff_s0 = uVar2 + 1;
_L0:
              *(char *)((int)unaff_s0 + uVar2 + 4) = in_stack_00000017;
_L0:
              iVar6 = 1;
              goto _L0;
            }
          }
          else {
            if (in_stack_00000017 != '\r') goto _L0;
            *unaff_s0 = uVar2 + 1;
            *(undefined *)((int)unaff_s0 + uVar2 + 4) = 0xd;
            _L0(&stack0x00000017);
            if ((extraout_a0_02 != 0) || (in_stack_00000017 != '\n')) goto _L0;
            _LVL233(&stack0x00000017);
            uVar2 = *unaff_s0;
            if (uVar2 < 0x400) {
              *unaff_s0 = uVar2 + 1;
              goto _L0;
            }
          }
        }
        else {
          if (iVar8 == 1) {
            _L0();
            iVar3 = unaff_s1[1];
            uVar2 = iVar3 + 1;
            unaff_s1[1] = uVar2;
            *(char *)((int)unaff_s1 + iVar3 + 0x112) = in_stack_00000017;
            unaff_s4 = 1;
            unaff_s6 = extraout_a0_03;
            if ((uint)unaff_s1[3] <= uVar2) {
              if (0x3ff < uVar2) {
                unaff_s1[1] = 0;
              }
              _LVL238(0,0x408);
              FUN_00010d80(0,0x15);
              *unaff_s0 = 0x15;
              unaff_s4 = 0;
              iVar6 = iVar8;
              goto _L0;
            }
          }
_L0:
          uVar2 = *unaff_s0;
          if (uVar2 < 0x400) {
            *unaff_s0 = uVar2 + 1;
            *(char *)((int)unaff_s0 + uVar2 + 4) = in_stack_00000017;
            goto _L0;
          }
        }
        *unaff_s0 = 0;
        _L0(0);
        goto _L0;
      }
_L0:
      if ((unaff_s4 != 0) && (_L0(), 10000 < (uint)(extraout_a0_00 - unaff_s6))) {
        FUN_00010c4c(0,0x518);
        FUN_00010c5e(0,0x408);
        FUN_00010c68(0x18);
        unaff_s4 = 0;
      }
      iVar8 = iRam00000000;
    } while (iVar6 == 0);
    iVar6 = *unaff_s2;
    iVar3 = 0;
    for (piVar7 = unaff_s2 + 1;
        (((iVar3 < iVar6 && (bVar1 = *(byte *)piVar7, (bVar1 & 0xfd) != 0x3d)) && (bVar1 != 10)) &&
        (bVar1 != 0xd)); piVar7 = (int *)((int)piVar7 + 1)) {
      if (iVar3 == 0x20) goto _L0;
      (&stack0x0000001c)[iVar3] = bVar1;
      iVar3 += 1;
    }
    (&stack0x0000001c)[iVar3] = 0;
    param_1 = 1;
    if (iVar3 != 0) {
      iVar6 = *unaff_s7;
      iVar3 = 0;
      if (iVar6 != 0) {
        for (; iVar3 < iVar8; iVar3 += 1) {
          FUN_00010e18(&stack0x0000001c,*(undefined4 *)(iVar6 + iVar3 * 0xc));
          if (extraout_a0_04 == 0) {
            pcVar5 = *(code **)(iRam00000000 + iVar3 * 0xc + 4);
            goto _L0;
          }
        }
      }
      iVar6 = 0;
      puVar4 = unaff_s8;
_L0:
      FUN_00010cc0(&stack0x0000001c,*puVar4);
      if (extraout_a0_01 != 0) break;
      pcVar5 = *(code **)(iVar6 * 0xc + 4);
_L0:
      if (pcVar5 != (code *)0x0) {
        in_stack_00000018 = piVar7;
        param_1 = (*pcVar5)(&stack0x00000018);
        goto _L0;
      }
_L0:
      param_1 = 3;
    }
_L0:
    if ((*unaff_s1 == 1) && (param_1 != 0x17)) {
      FUN_00010ddc(0,0x518);
    }
  } while( true );
  iVar6 += 1;
  puVar4 = puVar4 + 3;
  if (iVar6 == 0x1c) goto _L0;
  goto _L0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010e18(undefined *param_1,undefined4 param_2)

{
  byte bVar1;
  uint *unaff_s0;
  int *unaff_s1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  int extraout_a0_02;
  int extraout_a0_03;
  int extraout_a0_04;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  code *pcVar5;
  int *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int *unaff_s7;
  undefined4 *unaff_s8;
  int iVar6;
  int iVar7;
  int unaff_s11;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  char in_stack_00000017;
  int *in_stack_00000018;
  
  do {
    FUN_00010e18(param_1,param_2);
    if (extraout_a0_04 == 0) {
      pcVar5 = *(code **)(iRam00000000 + in_stack_00000008 + 4);
      goto _L0;
    }
    unaff_s11 += 1;
    while (in_stack_0000000c <= unaff_s11) {
      do {
        iVar7 = 0;
        puVar3 = unaff_s8;
        while (FUN_00010cc0(&stack0x0000001c,*puVar3), extraout_a0_01 != 0) {
          iVar7 += 1;
          puVar3 = puVar3 + 3;
          if (iVar7 == 0x1c) goto _L0;
        }
        pcVar5 = *(code **)(iVar7 * 0xc + 4);
_L0:
        if (pcVar5 != (code *)0x0) {
          in_stack_00000018 = unaff_s3;
          iVar7 = (*pcVar5)(&stack0x00000018);
          goto _L0;
        }
_L0:
        iVar7 = 3;
_L0:
        do {
          if ((*unaff_s1 == 1) && (iVar7 != 0x17)) {
            FUN_00010ddc(0,0x518);
          }
          FUN_00010de6(iVar7);
          *unaff_s0 = 0;
          iVar7 = 0;
_L0:
          do {
            FUN_00010bc0(&stack0x00000017);
            if (extraout_a0 == 0) {
              if (*(int *)(unaff_s5 + 0xe0) != 0) {
                (*_DAT_00000004)(&stack0x00000017,1,_DAT_00000004);
              }
              iVar6 = *unaff_s1;
              if (iVar6 == 0) {
                uVar2 = *unaff_s0;
                if (in_stack_00000017 == '\n') {
                  if (uVar2 < 0x400) {
                    *unaff_s0 = uVar2 + 1;
_L0:
                    *(char *)((int)unaff_s0 + uVar2 + 4) = in_stack_00000017;
_L0:
                    iVar7 = 1;
                    goto _L0;
                  }
                }
                else {
                  if (in_stack_00000017 != '\r') goto _L0;
                  *unaff_s0 = uVar2 + 1;
                  *(undefined *)((int)unaff_s0 + uVar2 + 4) = 0xd;
                  _L0(&stack0x00000017);
                  if ((extraout_a0_02 != 0) || (in_stack_00000017 != '\n')) goto _L0;
                  _LVL233(&stack0x00000017);
                  uVar2 = *unaff_s0;
                  if (uVar2 < 0x400) {
                    *unaff_s0 = uVar2 + 1;
                    goto _L0;
                  }
                }
              }
              else {
                if (iVar6 == 1) {
                  _L0();
                  iVar4 = unaff_s1[1];
                  uVar2 = iVar4 + 1;
                  unaff_s1[1] = uVar2;
                  *(char *)((int)unaff_s1 + iVar4 + 0x112) = in_stack_00000017;
                  unaff_s4 = 1;
                  unaff_s6 = extraout_a0_03;
                  if ((uint)unaff_s1[3] <= uVar2) {
                    if (0x3ff < uVar2) {
                      unaff_s1[1] = 0;
                    }
                    _LVL238(0,0x408);
                    FUN_00010d80(0,0x15);
                    *unaff_s0 = 0x15;
                    unaff_s4 = 0;
                    iVar7 = iVar6;
                    goto _L0;
                  }
                }
_L0:
                uVar2 = *unaff_s0;
                if (uVar2 < 0x400) {
                  *unaff_s0 = uVar2 + 1;
                  *(char *)((int)unaff_s0 + uVar2 + 4) = in_stack_00000017;
                  goto _L0;
                }
              }
              *unaff_s0 = 0;
              _L0(0);
              goto _L0;
            }
_L0:
            if ((unaff_s4 != 0) && (_L0(), 10000 < (uint)(extraout_a0_00 - unaff_s6))) {
              FUN_00010c4c(0,0x518);
              FUN_00010c5e(0,0x408);
              FUN_00010c68(0x18);
              unaff_s4 = 0;
            }
          } while (iVar7 == 0);
          iVar7 = *unaff_s2;
          iVar6 = 0;
          for (unaff_s3 = unaff_s2 + 1;
              (((iVar6 < iVar7 && (bVar1 = *(byte *)unaff_s3, (bVar1 & 0xfd) != 0x3d)) &&
               (bVar1 != 10)) && (bVar1 != 0xd)); unaff_s3 = (int *)((int)unaff_s3 + 1)) {
            if (iVar6 == 0x20) goto _L0;
            (&stack0x0000001c)[iVar6] = bVar1;
            iVar6 += 1;
          }
          (&stack0x0000001c)[iVar6] = 0;
          iVar7 = 1;
        } while (iVar6 == 0);
        in_stack_00000004 = *unaff_s7;
        unaff_s11 = 0;
        in_stack_0000000c = iRam00000000;
      } while (in_stack_00000004 == 0);
    }
    in_stack_00000008 = unaff_s11 * 0xc;
    param_1 = &stack0x0000001c;
    param_2 = *(undefined4 *)(in_stack_00000004 + in_stack_00000008);
  } while( true );
}



// DWARF DIE: 3d05

AT_ERROR_CODE at_callback_do(AT_CALLBACK_CMD cmd,at_callback_para_t *para)

{
  AT_ERROR_CODE AVar1;
  undefined3 in_register_00002029;
  
  para->cfg = (at_config_t *)0x0;
  if (pcRam00000000 != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00010e7a. Too many branches
                    // WARNING: Treating indirect jump as call
    AVar1 = (*pcRam00000000)(CONCAT31(in_register_00002029,cmd),0);
    return AVar1;
  }
  return AEC_CMD_FAIL;
}



// DWARF DIE: 2ef5

AT_ERROR_CODE ble_sync_mode(at_para_t *at_para)

{
  char cVar1;
  AT_ERROR_CODE extraout_a0;
  int iVar2;
  int iStack600;
  s32 paracnt;
  at_para_descriptor_t cmd_para_list [1];
  char *mode_type [3];
  at_getcfg_t sync_mode;
  at_callback_para_t para;
  
  _L0();
  cVar1 = *at_para->ptr;
  if (cVar1 == '?') {
    FUN_00010ef2();
    FUN_00010f14();
    FUN_00010f20();
    return AEC_OK;
  }
  if (cVar1 == '=') {
    at_para->ptr = at_para->ptr + 1;
    iVar2 = FUN_00010f60();
    if ((iVar2 == 0) && (0 < iStack600)) {
      iVar2 = _LVL277();
      if (iVar2 == 0) {
        para.sts = (at_status_t *)0x0;
      }
      else {
        iVar2 = FUN_00010fa2();
        para.sts = (at_status_t *)0x1;
        if (iVar2 != 0) {
          iVar2 = FUN_00010fb4();
          if (iVar2 != 0) {
            return AEC_PARA_ERROR;
          }
          para.sts = (at_status_t *)0x2;
        }
      }
      paRam00000000 = para.sts;
      FUN_00010f92();
      return extraout_a0;
    }
  }
  return AEC_PARA_ERROR;
}



undefined4 _L0(void)

{
  char cVar1;
  char **unaff_s1;
  int iVar2;
  undefined4 extraout_a0;
  int in_stack_00000008;
  undefined uStack0000000c;
  undefined4 uStack00000014;
  undefined4 uStack00000018;
  undefined4 uStack0000001c;
  undefined4 uStack00000020;
  undefined4 uStack0000012c;
  
  _L0();
  uStack00000014 = 0xd00;
  uStack00000018 = 0;
  uStack0000001c = 0;
  uStack00000020 = 0;
  uStack0000000c = 0;
  cVar1 = **unaff_s1;
  if (cVar1 == '?') {
    FUN_00010ef2();
    FUN_00010f14();
    FUN_00010f20();
    return 0;
  }
  if (cVar1 == '=') {
    *unaff_s1 = *unaff_s1 + 1;
    iVar2 = FUN_00010f60();
    if ((iVar2 == 0) && (0 < in_stack_00000008)) {
      iVar2 = _LVL277();
      if (iVar2 == 0) {
        uStack0000012c = 0;
      }
      else {
        iVar2 = FUN_00010fa2();
        uStack0000012c = 1;
        if (iVar2 != 0) {
          iVar2 = FUN_00010fb4();
          if (iVar2 != 0) {
            return 4;
          }
          uStack0000012c = 2;
        }
      }
      uRam00000000 = uStack0000012c;
      FUN_00010f92();
      return extraout_a0;
    }
  }
  return 4;
}



undefined4 FUN_00010ef2(void)

{
  FUN_00010ef2();
  FUN_00010f14();
  FUN_00010f20();
  return 0;
}



undefined4 FUN_00010f14(void)

{
  FUN_00010f14();
  FUN_00010f20();
  return 0;
}



undefined4 FUN_00010f20(void)

{
  FUN_00010f20();
  return 0;
}



undefined4 FUN_00010f60(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_a0;
  int in_stack_00000008;
  undefined4 uStack0000012c;
  
  iVar2 = FUN_00010f60();
  if ((iVar2 == 0) && (0 < in_stack_00000008)) {
    iVar2 = _LVL277();
    if (iVar2 == 0) {
      uStack0000012c = 0;
    }
    else {
      iVar2 = FUN_00010fa2();
      uStack0000012c = 1;
      if (iVar2 != 0) {
        iVar2 = FUN_00010fb4();
        if (iVar2 != 0) goto _L0;
        uStack0000012c = 2;
      }
    }
    uRam00000000 = uStack0000012c;
    FUN_00010f92();
    uVar1 = extraout_a0;
  }
  else {
_L0:
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 _LVL277(void)

{
  int iVar1;
  undefined4 extraout_a0;
  undefined4 uStack0000012c;
  
  iVar1 = _LVL277();
  if (iVar1 == 0) {
    uStack0000012c = 0;
  }
  else {
    iVar1 = FUN_00010fa2();
    uStack0000012c = 1;
    if (iVar1 != 0) {
      iVar1 = FUN_00010fb4();
      if (iVar1 != 0) {
        return 4;
      }
      uStack0000012c = 2;
    }
  }
  uRam00000000 = uStack0000012c;
  FUN_00010f92();
  return extraout_a0;
}



void FUN_00010f92(void)

{
  FUN_00010f92();
  return;
}



undefined4 FUN_00010fa2(void)

{
  undefined4 extraout_a0;
  int iVar1;
  undefined4 uStack0000012c;
  
  iVar1 = FUN_00010fa2();
  uStack0000012c = 1;
  if (iVar1 != 0) {
    iVar1 = FUN_00010fb4();
    if (iVar1 != 0) {
      return 4;
    }
    uStack0000012c = 2;
  }
  uRam00000000 = uStack0000012c;
  FUN_00010f92();
  return extraout_a0;
}



undefined4 FUN_00010fb4(void)

{
  undefined4 uVar1;
  undefined4 extraout_a0;
  int iVar2;
  undefined4 uStack0000012c;
  
  iVar2 = FUN_00010fb4();
  if (iVar2 == 0) {
    uStack0000012c = 2;
    uRam00000000 = 2;
    FUN_00010f92();
    uVar1 = extraout_a0;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}



// DWARF DIE: 2912

AT_ERROR_CODE set_ip_handler(at_para_t *at_para)

{
  char cVar1;
  AT_ERROR_CODE AVar2;
  int iVar4;
  int iStack364;
  s32 paracnt;
  at_para_descriptor_t cmd_para_list [5];
  at_callback_para_t para;
  undefined4 uVar3;
  
  _L0();
  cVar1 = *at_para->ptr;
  if (cVar1 == '?') {
    uVar3 = _L0();
    AVar2 = (AT_ERROR_CODE)uVar3;
  }
  else {
    AVar2 = AEC_CMD_ERROR;
    if (cVar1 == '=') {
      at_para->ptr = at_para->ptr + 1;
      iVar4 = FUN_0001106e();
      AVar2 = AEC_PARA_ERROR;
      if ((iVar4 == 0) && (0 < iStack364)) {
        uVar3 = _L0();
        return (AT_ERROR_CODE)uVar3;
      }
    }
  }
  return AVar2;
}



undefined4 _L0(void)

{
  char cVar1;
  char **unaff_s0;
  undefined4 uVar2;
  int iVar3;
  int in_stack_00000004;
  undefined uStack00000008;
  undefined *puStack0000000c;
  undefined4 uStack00000010;
  undefined uStack00000014;
  undefined *puStack00000018;
  undefined4 uStack0000001c;
  undefined uStack00000020;
  undefined *puStack00000024;
  undefined4 uStack00000028;
  undefined uStack0000002c;
  undefined *puStack00000030;
  undefined4 uStack00000034;
  undefined uStack00000038;
  undefined *puStack0000003c;
  undefined4 uStack00000040;
  
  _L0();
  uStack00000008 = 5;
  puStack0000000c = &stack0x0000004c;
  uStack00000014 = 5;
  puStack00000018 = &stack0x00000050;
  uStack00000020 = 5;
  uStack0000002c = 5;
  uStack00000038 = 5;
  puStack0000003c = &stack0x0000005c;
  puStack00000024 = &stack0x00000054;
  puStack00000030 = &stack0x00000058;
  uStack00000010 = 0xc04;
  uStack0000001c = 0xc04;
  uStack00000028 = 0xc04;
  uStack00000034 = 0xc04;
  uStack00000040 = 0xc04;
  cVar1 = **unaff_s0;
  if (cVar1 == '?') {
    uVar2 = _L0();
  }
  else {
    uVar2 = 3;
    if (cVar1 == '=') {
      *unaff_s0 = *unaff_s0 + 1;
      iVar3 = FUN_0001106e();
      uVar2 = 4;
      if ((iVar3 == 0) && (0 < in_stack_00000004)) {
        uVar2 = _L0();
        return uVar2;
      }
    }
  }
  return uVar2;
}



undefined4 _L0(void)

{
  undefined4 uVar1;
  
  uVar1 = _L0();
  return uVar1;
}



undefined4 FUN_0001106e(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_stack_00000004;
  
  iVar1 = FUN_0001106e();
  if ((iVar1 == 0) && (0 < in_stack_00000004)) {
    uVar2 = _L0();
    return uVar2;
  }
  return 4;
}



// DWARF DIE: 2e1e

void set_reconnect_enable(void)

{
  uRam00000000 = 1;
  return;
}



// DWARF DIE: 2e0b

void set_reconnect_disable(void)

{
  uRam00000000 = 0;
  return;
}



// DWARF DIE: 2df4

int get_reconnect_enable_status(void)

{
  return iRam00000000;
}



// DWARF DIE: 2d76

AT_ERROR_CODE at_get_ssid_psk(char **ppara,char *ssid,char *pwd)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = *ppara;
  iVar3 = 0;
  do {
    cVar2 = *pcVar4;
    if (cVar2 == '\\') {
      pcVar1 = pcVar4 + 1;
      iVar3 += 1;
      pcVar4 = pcVar4 + 2;
      *ssid = *pcVar1;
_L0:
      ssid = ssid + 1;
    }
    else {
      if (cVar2 == '\"') {
        pcVar4 = pcVar4 + 1;
        iVar3 += 1;
      }
      else {
        if (cVar2 != ',') {
          if (cVar2 == '\r') {
            return AEC_OK;
          }
          *ssid = cVar2;
          pcVar4 = pcVar4 + 1;
          goto _L0;
        }
        pcVar4 = pcVar4 + 1;
        iVar3 += 1;
        ssid = pwd;
      }
    }
    iVar3 += 1;
    if (0x61 < iVar3) {
      return AEC_PARA_ERROR;
    }
  } while( true );
}



// DWARF DIE: 30a5

AT_ERROR_CODE ap_cfg_handler(at_para_t *at_para)

{
  char cVar1;
  AT_ERROR_CODE extraout_a0;
  AT_ERROR_CODE AVar2;
  AT_ERROR_CODE extraout_a0_00;
  int iVar3;
  at_joinAp_para_t joinParam;
  
  _L0();
  FUN_0001112a();
  cVar1 = *at_para->ptr;
  if (cVar1 == '?') {
    _L0();
    AVar2 = extraout_a0;
  }
  else {
    if (cVar1 == '=') {
      at_para->ptr = at_para->ptr + 1;
      iVar3 = FUN_0001116c();
      if (iVar3 == 0) {
        _LVL319();
        return extraout_a0_00;
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
  undefined4 extraout_a0_00;
  
  _L0();
  FUN_0001112a();
  cVar1 = **unaff_s0;
  if (cVar1 == '?') {
    _L0();
    uVar2 = extraout_a0;
  }
  else {
    if (cVar1 == '=') {
      *unaff_s0 = *unaff_s0 + 1;
      iVar3 = FUN_0001116c();
      if (iVar3 == 0) {
        _LVL319();
        return extraout_a0_00;
      }
    }
    uVar2 = 4;
  }
  return uVar2;
}



undefined4 FUN_0001112a(void)

{
  char cVar1;
  char **unaff_s0;
  undefined4 extraout_a0;
  undefined4 uVar2;
  int iVar3;
  undefined4 extraout_a0_00;
  
  FUN_0001112a();
  cVar1 = **unaff_s0;
  if (cVar1 == '?') {
    _L0();
    uVar2 = extraout_a0;
  }
  else {
    if (cVar1 == '=') {
      *unaff_s0 = *unaff_s0 + 1;
      iVar3 = FUN_0001116c();
      if (iVar3 == 0) {
        _LVL319();
        return extraout_a0_00;
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



undefined4 FUN_0001116c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_a0;
  
  iVar2 = FUN_0001116c();
  if (iVar2 == 0) {
    _LVL319();
    uVar1 = extraout_a0;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}



void _LVL319(void)

{
  _LVL319();
  return;
}



// DWARF DIE: 2bd6

AT_ERROR_CODE join_ap_handler(at_para_t *at_para)

{
  char cVar1;
  int iVar2;
  int iVar3;
  at_joinAp_para_t joinParam;
  
  _L0();
  FUN_000111ae();
  cVar1 = *at_para->ptr;
  if (cVar1 == '?') {
    iVar2 = _L0();
  }
  else {
    if (cVar1 == '=') {
      at_para->ptr = at_para->ptr + 1;
      iVar3 = FUN_00011222();
      iVar2 = 4;
      if (iVar3 == 0) {
        FUN_0001123a();
        iVar2 = FUN_00011246();
        if (iVar2 != 0) {
          _LVL337();
          _L0();
          FUN_00011274();
          FUN_00011280();
          iVar2 = 2;
        }
      }
    }
    else {
      FUN_000111f0();
      FUN_00011202();
      iVar2 = FUN_0001120e();
    }
  }
  return (AT_ERROR_CODE)iVar2;
}



int _L0(void)

{
  char cVar1;
  char **unaff_s0;
  int iVar2;
  int iVar3;
  
  _L0();
  FUN_000111ae();
  cVar1 = **unaff_s0;
  if (cVar1 == '?') {
    iVar2 = _L0();
  }
  else {
    if (cVar1 == '=') {
      *unaff_s0 = *unaff_s0 + 1;
      iVar3 = FUN_00011222();
      iVar2 = 4;
      if (iVar3 == 0) {
        FUN_0001123a();
        iVar2 = FUN_00011246();
        if (iVar2 != 0) {
          _LVL337();
          _L0();
          FUN_00011274();
          FUN_00011280();
          iVar2 = 2;
        }
      }
    }
    else {
      FUN_000111f0();
      FUN_00011202();
      iVar2 = FUN_0001120e();
    }
  }
  return iVar2;
}



int FUN_000111ae(void)

{
  char cVar1;
  char **unaff_s0;
  int iVar2;
  int iVar3;
  
  FUN_000111ae();
  cVar1 = **unaff_s0;
  if (cVar1 == '?') {
    iVar2 = _L0();
  }
  else {
    if (cVar1 == '=') {
      *unaff_s0 = *unaff_s0 + 1;
      iVar3 = FUN_00011222();
      iVar2 = 4;
      if (iVar3 == 0) {
        FUN_0001123a();
        iVar2 = FUN_00011246();
        if (iVar2 != 0) {
          _LVL337();
          _L0();
          FUN_00011274();
          FUN_00011280();
          iVar2 = 2;
        }
      }
    }
    else {
      FUN_000111f0();
      FUN_00011202();
      iVar2 = FUN_0001120e();
    }
  }
  return iVar2;
}



undefined4 _L0(void)

{
  undefined4 uVar1;
  
  uVar1 = _L0();
  return uVar1;
}



undefined4 FUN_000111f0(void)

{
  undefined4 uVar1;
  
  FUN_000111f0();
  FUN_00011202();
  uVar1 = FUN_0001120e();
  return uVar1;
}



undefined4 FUN_00011202(void)

{
  undefined4 uVar1;
  
  FUN_00011202();
  uVar1 = FUN_0001120e();
  return uVar1;
}



undefined4 FUN_0001120e(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0001120e();
  return uVar1;
}



int FUN_00011222(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00011222();
  iVar2 = 4;
  if (iVar1 == 0) {
    FUN_0001123a();
    iVar2 = FUN_00011246();
    if (iVar2 != 0) {
      _LVL337();
      _L0();
      FUN_00011274();
      FUN_00011280();
      iVar2 = 2;
    }
  }
  return iVar2;
}



int FUN_0001123a(void)

{
  int iVar1;
  
  FUN_0001123a();
  iVar1 = FUN_00011246();
  if (iVar1 != 0) {
    _LVL337();
    _L0();
    FUN_00011274();
    FUN_00011280();
    iVar1 = 2;
  }
  return iVar1;
}



int FUN_00011246(void)

{
  int iVar1;
  
  iVar1 = FUN_00011246();
  if (iVar1 != 0) {
    _LVL337();
    _L0();
    FUN_00011274();
    FUN_00011280();
    iVar1 = 2;
  }
  return iVar1;
}



undefined4 _LVL337(void)

{
  _LVL337();
  _L0();
  FUN_00011274();
  FUN_00011280();
  return 2;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00011274();
  FUN_00011280();
  return 2;
}



undefined4 FUN_00011274(void)

{
  FUN_00011274();
  FUN_00011280();
  return 2;
}



undefined4 FUN_00011280(void)

{
  FUN_00011280();
  return 2;
}


