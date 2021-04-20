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
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct _romfs_file_buf _romfs_file_buf, *P_romfs_file_buf;

typedef ulong uint32_t;

struct _romfs_file_buf {
    char * buf;
    uint32_t bufsize;
};

typedef struct _romfs_file_buf romfs_filebuf_t;

typedef int _ssize_t;

typedef union anon_union.conflict131 anon_union.conflict131, *Panon_union.conflict131;

typedef uint wint_t;

union anon_union.conflict131 {
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict131_for___value anon_union.conflict131_for___value, *Panon_union.conflict131_for___value;

union anon_union.conflict131_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflict131_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct QueueDefinition QueueDefinition, *PQueueDefinition;

typedef struct QueueDefinition * QueueHandle_t;

struct QueueDefinition {
};

typedef enum anon_enum_16.conflictbb8 {
    PBUF_ROM=1,
    PBUF_REF=65,
    PBUF_POOL=386,
    PBUF_RAM=640
} anon_enum_16.conflictbb8;

typedef struct pbuf pbuf, *Ppbuf;

typedef ushort uint16_t;

typedef uint16_t u16_t;

typedef uchar uint8_t;

typedef uint8_t u8_t;

struct pbuf {
    struct pbuf * next;
    void * payload;
    u16_t tot_len;
    u16_t len;
    u8_t type_internal;
    u8_t flags;
    u8_t ref;
    u8_t if_idx;
};

typedef uint uintptr_t;

typedef long int32_t;

typedef char int8_t;

typedef int intptr_t;

typedef struct altcp_pcb altcp_pcb, *Paltcp_pcb;

typedef int8_t s8_t;

typedef s8_t err_t;

typedef struct altcp_functions altcp_functions, *Paltcp_functions;

typedef err_t (* altcp_accept_fn)(void *, struct altcp_pcb *, err_t);

typedef err_t (* altcp_connected_fn)(void *, struct altcp_pcb *, err_t);

struct altcp_pcb {
    struct altcp_functions * fns;
    struct altcp_pcb * inner_conn;
    void * arg;
    void * state;
    altcp_accept_fn accept;
    altcp_connected_fn connected;
    err_t (* recv)(void *, struct altcp_pcb *, struct pbuf *, err_t);
    err_t (* sent)(void *, struct altcp_pcb *, u16_t);
    err_t (* poll)(void *, struct altcp_pcb *);
    void (* err)(void *, err_t);
    u8_t pollinterval;
    undefined field_0x29;
    undefined field_0x2a;
    undefined field_0x2b;
};

struct altcp_functions {
};

typedef struct addrinfo addrinfo, *Paddrinfo;

typedef uint32_t u32_t;

typedef u32_t socklen_t;

typedef struct sockaddr sockaddr, *Psockaddr;

typedef u8_t sa_family_t;

struct addrinfo {
    int ai_flags;
    int ai_family;
    int ai_socktype;
    int ai_protocol;
    socklen_t ai_addrlen;
    struct sockaddr * ai_addr;
    char * ai_canonname;
    struct addrinfo * ai_next;
};

struct sockaddr {
    u8_t sa_len;
    sa_family_t sa_family;
    char sa_data[14];
};

typedef struct ip4_addr ip4_addr, *Pip4_addr;

struct ip4_addr {
    u32_t addr;
};

typedef struct ip4_addr ip4_addr_t;

typedef struct ip_globals ip_globals, *Pip_globals;

typedef struct netif netif, *Pnetif;

typedef enum netif_mac_filter_action {
    NETIF_DEL_MAC_FILTER=0,
    NETIF_ADD_MAC_FILTER=1
} netif_mac_filter_action;

typedef struct ip_hdr ip_hdr, *Pip_hdr;

typedef ip4_addr_t ip_addr_t;

typedef struct ip4_addr_packed ip4_addr_packed, *Pip4_addr_packed;

typedef struct ip4_addr_packed ip4_addr_p_t;

struct netif {
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

struct ip4_addr_packed {
    u32_t addr;
};

struct ip_hdr {
    u8_t _v_hl;
    u8_t _tos;
    u16_t _len;
    u16_t _id;
    u16_t _offset;
    u8_t _ttl;
    u8_t _proto;
    u16_t _chksum;
    ip4_addr_p_t src;
    ip4_addr_p_t dest;
};

struct ip_globals {
    struct netif * current_netif;
    struct netif * current_input_netif;
    struct ip_hdr * current_ip4_header;
    u16_t current_ip_header_tot_len;
    undefined field_0xe;
    undefined field_0xf;
    ip_addr_t current_iphdr_src;
    ip_addr_t current_iphdr_dest;
};

typedef struct at_status_t at_status_t, *Pat_status_t;

typedef char at_text_t;

typedef int at_di_t;

typedef uchar at_hex_t;

typedef uint at_hi_t;

typedef uchar at_ip_t[4];

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

typedef struct send_data_ctx send_data_ctx, *Psend_data_ctx;

struct send_data_ctx {
    int linkId;
    uint8_t * buf;
};

typedef enum anon_enum_8.conflict9f9 {
    PBUF_RAW=0,
    MEMP_MAX=15,
    PBUF_IP=-94,
    ERR_CLSD=-15,
    PBUF_LINK=-114,
    ERR_INPROGRESS=-5,
    ERR_USE=-8,
    MEMP_RAW_PCB=0,
    MEMP_NETDB=12,
    MEMP_TCP_PCB_LISTEN=3,
    ERR_MEM=-1,
    ERR_ALREADY=-9,
    ERR_CONN=-11,
    ERR_RST=-14,
    ERR_WOULDBLOCK=-7,
    ERR_ARG=-16,
    ERR_ISCONN=-10,
    PBUF_RAW_TX=-128,
    ERR_RTE=-4,
    MEMP_TCP_SEG=4,
    MEMP_NETCONN=7,
    MEMP_UDP_PCB=1,
    ERR_TIMEOUT=-3,
    ERR_ABRT=-13,
    MEMP_SYS_TIMEOUT=11,
    ERR_VAL=-6,
    MEMP_PBUF=13,
    MEMP_IGMP_GROUP=10,
    ERR_BUF=-2,
    MEMP_TCPIP_MSG_API=8,
    MEMP_PBUF_POOL=14,
    MEMP_ALTCP_PCB=5,
    PBUF_TRANSPORT=-74,
    MEMP_NETBUF=6,
    MEMP_TCP_PCB=2,
    MEMP_TCPIP_MSG_INPKT=9,
    ERR_OK=0,
    ERR_IF=-12
} anon_enum_8.conflict9f9;

typedef struct altcp_tls_config altcp_tls_config, *Paltcp_tls_config;

struct altcp_tls_config {
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t {
};

typedef u16_t mem_size_t;

typedef QueueHandle_t SemaphoreHandle_t;

typedef struct udp_pcb udp_pcb, *Pudp_pcb;

struct udp_pcb {
    ip_addr_t local_ip;
    ip_addr_t remote_ip;
    u8_t netif_idx;
    u8_t so_options;
    u8_t tos;
    u8_t ttl;
    struct udp_pcb * next;
    u8_t flags;
    undefined field_0x11;
    u16_t local_port;
    u16_t remote_port;
    undefined field_0x16;
    undefined field_0x17;
    ip4_addr_t mcast_ip4;
    u8_t mcast_ifindex;
    u8_t mcast_ttl;
    undefined field_0x1e;
    undefined field_0x1f;
    void (* recv)(void *, struct udp_pcb *, struct pbuf *, ip_addr_t *, u16_t);
    void * recv_arg;
};

typedef struct in6_addr in6_addr, *Pin6_addr;

typedef union anon_union.conflict12d8_for_un anon_union.conflict12d8_for_un, *Panon_union.conflict12d8_for_un;

union anon_union.conflict12d8_for_un {
    u32_t u32_addr[4];
    u8_t u8_addr[16];
};

struct in6_addr {
    union anon_union.conflict12d8_for_un un;
};

typedef union anon_union.conflict12d8 anon_union.conflict12d8, *Panon_union.conflict12d8;

union anon_union.conflict12d8 {
    u32_t u32_addr[4];
    u8_t u8_addr[16];
};

typedef struct at_ip_para_t at_ip_para_t, *Pat_ip_para_t;

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

typedef union anon_union.conflict2730_for_u anon_union.conflict2730_for_u, *Panon_union.conflict2730_for_u;

typedef struct anon_struct.conflict2419 anon_struct.conflict2419, *Panon_struct.conflict2419;

typedef struct anon_struct.conflict2443 anon_struct.conflict2443, *Panon_struct.conflict2443;

typedef struct at_tcpserver_para_t at_tcpserver_para_t, *Pat_tcpserver_para_t;

typedef struct anon_struct.conflict2475 anon_struct.conflict2475, *Panon_struct.conflict2475;

typedef struct anon_struct.conflict249c anon_struct.conflict249c, *Panon_struct.conflict249c;

typedef struct anon_struct.conflict24fb anon_struct.conflict24fb, *Panon_struct.conflict24fb;

typedef struct anon_struct.conflict253b anon_struct.conflict253b, *Panon_struct.conflict253b;

typedef struct anon_struct.conflict2572 anon_struct.conflict2572, *Panon_struct.conflict2572;

typedef struct anon_struct.conflict25e1 anon_struct.conflict25e1, *Panon_struct.conflict25e1;

typedef struct anon_struct.conflict25fa anon_struct.conflict25fa, *Panon_struct.conflict25fa;

typedef struct anon_struct.conflict2623 anon_struct.conflict2623, *Panon_struct.conflict2623;

typedef struct anon_struct.conflict2666 anon_struct.conflict2666, *Panon_struct.conflict2666;

typedef struct at_network_para_t at_network_para_t, *Pat_network_para_t;

typedef struct at_sendData_para_t at_sendData_para_t, *Pat_sendData_para_t;

typedef struct at_close_para_t at_close_para_t, *Pat_close_para_t;

typedef struct at_client_ssl_path_para_t at_client_ssl_path_para_t, *Pat_client_ssl_path_para_t;

typedef struct at_client_ssl_sni_t at_client_ssl_sni_t, *Pat_client_ssl_sni_t;

typedef struct at_client_ssl_alpn_t at_client_ssl_alpn_t, *Pat_client_ssl_alpn_t;

typedef struct at_ble_sync_mode_t at_ble_sync_mode_t, *Pat_ble_sync_mode_t;

typedef struct anon_struct.conflict267f anon_struct.conflict267f, *Panon_struct.conflict267f;

typedef struct anon_struct.conflict26b3 anon_struct.conflict26b3, *Panon_struct.conflict26b3;

typedef int s32;

typedef uchar u8;

struct anon_struct.conflict267f {
    int ID;
    int mode;
    int pull;
};

struct anon_struct.conflict253b {
    char ssid[33];
    char pwd[33];
};

struct anon_struct.conflict26b3 {
    int ID;
    int mode;
};

struct at_network_para_t {
    at_di_t linkId;
    at_text_t type[4];
    at_text_t hostname[256];
    at_di_t port;
    at_di_t localport;
    at_di_t keepAlive;
};

struct anon_struct.conflict2419 {
    char hostname[256];
};

struct anon_struct.conflict249c {
    int uartId;
    int uartBaud;
    int dataBit;
    int parity;
    int stopBit;
    int hwfc;
};

struct at_tcpserver_para_t {
    at_di_t port;
    at_di_t enable;
    at_di_t tls;
    at_di_t ca;
};

struct anon_struct.conflict25e1 {
    char hostname[33];
};

struct anon_struct.conflict2666 {
    at_ip_t setdnsip;
};

struct anon_struct.conflict24fb {
    uint32_t sleep_time;
    int weakup_pin;
};

struct at_client_ssl_sni_t {
    at_di_t linkId;
    at_text_t sni[256];
};

struct anon_struct.conflict2443 {
    s32 value;
};

struct at_close_para_t {
    at_di_t linkId;
};

struct at_client_ssl_path_para_t {
    at_di_t linkId;
    at_di_t auth_mode;
    at_text_t * ca;
    at_text_t * key;
    at_text_t * cert;
};

struct at_ble_sync_mode_t {
    int mode;
};

struct anon_struct.conflict2623 {
    char hostname[128];
    uint8_t type;
    uint8_t content_type;
    undefined field_0x82;
    undefined field_0x83;
    uint8_t * data;
};

struct anon_struct.conflict25fa {
    char hostname[128];
};

struct anon_struct.conflict2572 {
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

struct anon_struct.conflict2475 {
    s32 len;
    u8 * buf;
};

struct at_client_ssl_alpn_t {
    at_di_t linkId;
    at_text_t * * alpn;
};

union anon_union.conflict2730_for_u {
    struct anon_struct.conflict2419 ping;
    struct anon_struct.conflict2443 wifi;
    struct anon_struct.conflict2443 scan;
    struct at_tcpserver_para_t tcp_server;
    struct anon_struct.conflict2475 mode;
    struct anon_struct.conflict249c uart;
    struct anon_struct.conflict24fb sleep;
    struct anon_struct.conflict2443 wifiMode;
    struct anon_struct.conflict253b joinParam;
    struct at_ip_para_t at_ip_para;
    struct anon_struct.conflict2572 apcfgParam;
    struct anon_struct.conflict25e1 iphostname;
    struct anon_struct.conflict25fa dns_parse;
    struct anon_struct.conflict2623 http_req;
    struct anon_struct.conflict2666 set_dns;
    struct at_network_para_t net_param;
    struct at_sendData_para_t send_param;
    struct at_close_para_t close_id;
    struct at_client_ssl_path_para_t client_ssl_path_cfg;
    struct at_client_ssl_sni_t client_ssl_sni_cfg;
    struct at_client_ssl_alpn_t client_ssl_alpn_cfg;
    struct at_ble_sync_mode_t ble_sync_mode;
    struct anon_struct.conflict267f setgpio_para;
    struct anon_struct.conflict26b3 setiodir_para;
    struct anon_struct.conflict26b3 writeiodata_para;
    struct anon_struct.conflict2443 readiodata_para;
    struct anon_struct.conflict2443 deleteap_para;
};

struct at_callback_para_t {
    struct at_config_t * cfg;
    struct at_status_t * sts;
    union anon_union.conflict2730_for_u u;
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

typedef union anon_union.conflict2730 anon_union.conflict2730, *Panon_union.conflict2730;

union anon_union.conflict2730 {
    struct anon_struct.conflict2419 ping;
    struct anon_struct.conflict2443 wifi;
    struct anon_struct.conflict2443 scan;
    struct at_tcpserver_para_t tcp_server;
    struct anon_struct.conflict2475 mode;
    struct anon_struct.conflict249c uart;
    struct anon_struct.conflict24fb sleep;
    struct anon_struct.conflict2443 wifiMode;
    struct anon_struct.conflict253b joinParam;
    struct at_ip_para_t at_ip_para;
    struct anon_struct.conflict2572 apcfgParam;
    struct anon_struct.conflict25e1 iphostname;
    struct anon_struct.conflict25fa dns_parse;
    struct anon_struct.conflict2623 http_req;
    struct anon_struct.conflict2666 set_dns;
    struct at_network_para_t net_param;
    struct at_sendData_para_t send_param;
    struct at_close_para_t close_id;
    struct at_client_ssl_path_para_t client_ssl_path_cfg;
    struct at_client_ssl_sni_t client_ssl_sni_cfg;
    struct at_client_ssl_alpn_t client_ssl_alpn_cfg;
    struct at_ble_sync_mode_t ble_sync_mode;
    struct anon_struct.conflict267f setgpio_para;
    struct anon_struct.conflict26b3 setiodir_para;
    struct anon_struct.conflict26b3 writeiodata_para;
    struct anon_struct.conflict2443 readiodata_para;
    struct anon_struct.conflict2443 deleteap_para;
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

typedef struct network_t network_t, *Pnetwork_t;

typedef struct connect_t connect_t, *Pconnect_t;

typedef uint u32;

typedef enum socket_type {
    SOCK_TYPE_TLS=3,
    SOCK_TYPE_TCP=1,
    SOCK_TYPE_UDP=2
} socket_type;

typedef enum auth_mode {
    CLIENT_AUTH_CA=2,
    BOTH_AUTH=3,
    NO_AUTH=0,
    SERVER_AUTH_CERT_KEY=1
} auth_mode;

typedef union anon_union.conflict2b52_for_pcb anon_union.conflict2b52_for_pcb, *Panon_union.conflict2b52_for_pcb;

typedef enum socket_state {
    SOCK_CLIENT_CONNECTED=3,
    SOCK_SERVER_LISTENING=1,
    SOCK_IDLE_CLOSE=0,
    SOCK_CLIENT_CONNECTING=2
} socket_state;

typedef struct anon_struct.conflict29cc anon_struct.conflict29cc, *Panon_struct.conflict29cc;

struct anon_struct.conflict29cc {
    struct altcp_pcb * pcb;
    struct altcp_tls_config * config;
};

union anon_union.conflict2b52_for_pcb {
    struct udp_pcb * udp;
    struct altcp_pcb * tcp;
    struct anon_struct.conflict29cc tls;
};

struct connect_t {
    char ip[16];
    u32 port;
    enum socket_type protocol;
    enum auth_mode auth_mode;
    undefined field_0x16;
    undefined field_0x17;
    char * sni;
    char * ca;
    char * cert;
    char * key;
    char * * alpn;
    union anon_union.conflict2b52_for_pcb pcb;
    enum socket_state status;
    undefined field_0x35;
    undefined field_0x36;
    undefined field_0x37;
};

struct network_t {
    s32 count;
    struct connect_t connect[5];
};

typedef union anon_union.conflict29fb anon_union.conflict29fb, *Panon_union.conflict29fb;

union anon_union.conflict29fb {
    struct udp_pcb * udp;
    struct altcp_pcb * tcp;
    struct anon_struct.conflict29cc tls;
};

typedef struct server_arg server_arg, *Pserver_arg;

typedef short s16;

struct server_arg {
    s16 port;
    undefined field_0x2;
    undefined field_0x3;
    s32 protocol;
};

typedef struct server_ctrl_t server_ctrl_t, *Pserver_ctrl_t;

typedef union anon_union.conflict29fb_for_pcb anon_union.conflict29fb_for_pcb, *Panon_union.conflict29fb_for_pcb;

union anon_union.conflict29fb_for_pcb {
    struct udp_pcb * udp;
    struct altcp_pcb * tcp;
    struct anon_struct.conflict29cc tls;
};

struct server_ctrl_t {
    u32 flag;
    s16 port;
    undefined field_0x6;
    undefined field_0x7;
    s32 protocol;
    u32 auth_mode;
    char * cert;
    char * key;
    char * ca;
    char * * alpn;
    union anon_union.conflict29fb_for_pcb pcb;
};

typedef struct memp memp, *Pmemp;

struct memp {
    struct memp * next;
};

typedef struct memp_desc memp_desc, *Pmemp_desc;

typedef struct stats_mem stats_mem, *Pstats_mem;

struct stats_mem {
    u16_t err;
    mem_size_t avail;
    mem_size_t used;
    mem_size_t max;
    u16_t illegal;
};

struct memp_desc {
    struct stats_mem * stats;
    u16_t size;
    u16_t num;
    u8_t * base;
    struct memp * * tab;
};

typedef enum lwip_internal_netif_client_data_index {
    LWIP_NETIF_CLIENT_DATA_INDEX_MAX=2,
    LWIP_NETIF_CLIENT_DATA_INDEX_DHCP=0,
    LWIP_NETIF_CLIENT_DATA_INDEX_IGMP=1
} lwip_internal_netif_client_data_index;

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict909_for__new anon_union.conflict909_for__new, *Panon_union.conflict909_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict77d anon_struct.conflict77d, *Panon_struct.conflict77d;

typedef struct anon_struct.conflict8c2 anon_struct.conflict8c2, *Panon_struct.conflict8c2;

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

struct anon_struct.conflict77d {
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

struct anon_struct.conflict8c2 {
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict909_for__new {
    struct anon_struct.conflict77d _reent;
    struct anon_struct.conflict8c2 _unused;
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
    union anon_union.conflict909_for__new _new;
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

typedef union anon_union.conflict909 anon_union.conflict909, *Panon_union.conflict909;

union anon_union.conflict909 {
    struct anon_struct.conflict77d _reent;
    struct anon_struct.conflict8c2 _unused;
};

typedef struct lwip_cyclic_timer lwip_cyclic_timer, *Plwip_cyclic_timer;

struct lwip_cyclic_timer {
    u32_t interval_ms;
    void (* handler)(void);
};

typedef struct stats_proto stats_proto, *Pstats_proto;

struct stats_proto {
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

struct stats_syselem {
    u16_t used;
    u16_t max;
    u16_t err;
};

struct stats_sys {
    struct stats_syselem sem;
    struct stats_syselem mutex;
    struct stats_syselem mbox;
};

typedef struct stats_ stats_, *Pstats_;

typedef struct stats_igmp stats_igmp, *Pstats_igmp;

struct stats_igmp {
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

struct stats_ {
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

typedef uint32_t TickType_t;

typedef int32_t BaseType_t;

typedef enum lwip_ip_addr_type {
    IPADDR_TYPE_V6=6,
    IPADDR_TYPE_V4=0,
    IPADDR_TYPE_ANY=46
} lwip_ip_addr_type;

typedef struct mbedtls_x509_crt_profile mbedtls_x509_crt_profile, *Pmbedtls_x509_crt_profile;

struct mbedtls_x509_crt_profile {
    uint32_t allowed_mds;
    uint32_t allowed_pks;
    uint32_t allowed_curves;
    uint32_t rsa_min_bitlen;
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




err_t tcp_sent_callback(void *arg,altcp_pcb *conn,u16_t len)

{
  err_t eVar1;
  altcp_pcb *extraout_a1;
  undefined2 in_register_00002032;
  int iVar2;
  
  iVar2 = CONCAT22(in_register_00002032,len);
  if (4 < (int)arg) {
    iVar2 = 0;
    arg = (void *)FUN_0001002e(0,0xaa,0);
    conn = extraout_a1;
  }
  _L0(conn);
  if (*(char *)((int)arg * 0x38 + 0x38) == '\x03') {
    _L0();
    if (*(char *)((int)arg * 0x38 + 0x18) == '\x03') {
      iRam00000000 = 0;
      FUN_000100ae(0);
      FUN_000100c0(0,arg);
      FUN_000100cc(0);
      eVar1 = '\0';
    }
    else {
      FUN_000100e4(0,arg,iVar2);
      iRam00000000 = iRam00000000 - iVar2;
      eVar1 = '\0';
      if (iRam00000000 < 1) {
        FUN_00010102(0);
        FUN_00010114(0,arg);
        FUN_00010120(0);
      }
    }
  }
  else {
    _L0();
    FUN_00010070(0,arg);
    eVar1 = -0xb;
  }
  return eVar1;
}



undefined4 FUN_0001002e(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0001002e();
  _L0();
  if (*(char *)(iVar2 * 0x38 + 0x38) == '\x03') {
    _L0();
    if (*(char *)(iVar2 * 0x38 + 0x18) == '\x03') {
      iRam00000000 = 0;
      FUN_000100ae(0);
      FUN_000100c0(0,iVar2);
      FUN_000100cc(0);
      uVar1 = 0;
    }
    else {
      FUN_000100e4(0,iVar2,param_1);
      iRam00000000 = iRam00000000 - param_1;
      uVar1 = 0;
      if (iRam00000000 < 1) {
        FUN_00010102(0);
        FUN_00010114(0,iVar2);
        FUN_00010120(0);
      }
    }
  }
  else {
    _L0();
    FUN_00010070(0,iVar2);
    uVar1 = 0xfffffff5;
  }
  return uVar1;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int unaff_s2;
  
  _L0();
  if (*(char *)(unaff_s0 * unaff_s1 + 0x38) == '\x03') {
    _L0();
    if (*(char *)(unaff_s0 * unaff_s1 + 0x18) == '\x03') {
      iRam00000000 = 0;
      FUN_000100ae(0);
      FUN_000100c0(0);
      FUN_000100cc(0);
      uVar1 = 0;
    }
    else {
      FUN_000100e4(0);
      iRam00000000 = iRam00000000 - unaff_s2;
      uVar1 = 0;
      if (iRam00000000 < 1) {
        FUN_00010102(0);
        FUN_00010114(0);
        FUN_00010120(0);
      }
    }
  }
  else {
    _L0();
    FUN_00010070(0);
    uVar1 = 0xfffffff5;
  }
  return uVar1;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010070(0);
  return 0xfffffff5;
}



undefined4 FUN_00010070(void)

{
  FUN_00010070();
  return 0xfffffff5;
}



undefined4 _L0(void)

{
  int unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  
  _L0();
  if (*(byte *)(unaff_s1 + 0x18) == unaff_s3) {
    iRam00000000 = 0;
    FUN_000100ae(0);
    FUN_000100c0(0);
    FUN_000100cc(0);
  }
  else {
    FUN_000100e4(0);
    iRam00000000 = iRam00000000 - unaff_s2;
    if (iRam00000000 < 1) {
      FUN_00010102(0);
      FUN_00010114(0);
      FUN_00010120(0);
    }
  }
  return 0;
}



undefined4 FUN_000100ae(void)

{
  FUN_000100ae();
  FUN_000100c0(0);
  FUN_000100cc();
  return 0;
}



undefined4 FUN_000100c0(void)

{
  FUN_000100c0();
  FUN_000100cc();
  return 0;
}



undefined4 FUN_000100cc(void)

{
  FUN_000100cc();
  return 0;
}



undefined4 FUN_000100e4(void)

{
  int *unaff_s1;
  int iVar1;
  int unaff_s2;
  
  FUN_000100e4();
  iVar1 = *unaff_s1;
  *unaff_s1 = iVar1 - unaff_s2;
  if (iVar1 - unaff_s2 < 1) {
    FUN_00010102(0);
    FUN_00010114(0);
    FUN_00010120(0);
  }
  return 0;
}



void FUN_00010102(void)

{
  FUN_00010102();
  FUN_00010114(0);
  FUN_00010120();
  return;
}



void FUN_00010114(void)

{
  FUN_00010114();
  FUN_00010120();
  return;
}



void FUN_00010120(void)

{
  FUN_00010120();
  return;
}



err_t tcp_connected_callback(void *arg,altcp_pcb *conn,err_t err)

{
  undefined4 uVar1;
  altcp_pcb *extraout_a1;
  undefined3 in_register_00002031;
  int iVar2;
  
  iVar2 = CONCAT31(in_register_00002031,err);
  if ((int)arg < 5) goto _L9;
  uVar1 = 0xd7;
  while( true ) {
    iVar2 = 0;
    arg = (void *)FUN_0001015a(0,uVar1,0);
    conn = extraout_a1;
_L9:
    if (iVar2 != 0) {
      FUN_00010266(0,conn);
      FUN_00010278(0,arg);
      FUN_00010284(0);
      FUN_00010292(uRam00000000,0xffffffff);
      iVar2 = (int)arg * 0x38;
      *(undefined *)(iVar2 + 0x38) = 0;
      _L0(*(undefined4 *)(iVar2 + 0x30));
      *(undefined4 *)(iVar2 + 0x30) = 0;
      if (*(char *)(iVar2 + 0x18) == '\x03') {
        FUN_000102c2(*(undefined4 *)(iVar2 + 0x34));
        *(undefined4 *)(iVar2 + 0x34) = 0;
      }
      goto _L0;
    }
    _LVL23(uRam00000000,0xffffffff);
    iVar2 = (int)arg * 0x38;
    *(undefined *)(iVar2 + 0x38) = 3;
    if (*(char *)(iVar2 + 0x18) != '\x03') goto code_r0x00010246;
    iVar2 = FUN_000101a4(*(undefined4 *)(iVar2 + 0x30));
    if (iVar2 != 0) break;
    uVar1 = 0xe0;
  }
  iVar2 = _L0();
  if (iVar2 == 0) {
code_r0x00010246:
    _L0(0);
    FUN_00010258(0,arg);
  }
  else {
    _L0();
    FUN_000101ea(0,arg,iVar2);
  }
  FUN_000101f6(0);
  FUN_00010208(conn,0);
  FUN_0001021a(conn,0);
_L0:
  FUN_0001022c(uRam00000000,0,0,0);
  return '\0';
}



undefined4 FUN_0001015a(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 extraout_a1;
  int iVar2;
  
  do {
    iVar1 = FUN_0001015a(param_1,param_2,param_4);
    if (param_3 != 0) {
      FUN_00010266(0);
      FUN_00010278(0,iVar1);
      FUN_00010284(0);
      FUN_00010292(uRam00000000,0xffffffff);
      iVar1 = iVar1 * 0x38;
      *(undefined *)(iVar1 + 0x38) = 0;
      _L0(*(undefined4 *)(iVar1 + 0x30));
      *(undefined4 *)(iVar1 + 0x30) = 0;
      if (*(char *)(iVar1 + 0x18) == '\x03') {
        FUN_000102c2(*(undefined4 *)(iVar1 + 0x34));
        *(undefined4 *)(iVar1 + 0x34) = 0;
      }
_L0:
      FUN_0001022c(uRam00000000,0,0,0);
      return 0;
    }
    _LVL23(uRam00000000,0xffffffff);
    iVar2 = iVar1 * 0x38;
    *(undefined *)(iVar2 + 0x38) = 3;
    if (*(char *)(iVar2 + 0x18) != '\x03') {
code_r0x00010246:
      _L0(0);
      FUN_00010258(0,iVar1);
_L0:
      FUN_000101f6(0);
      FUN_00010208(extraout_a1,0);
      FUN_0001021a(extraout_a1,0);
      goto _L0;
    }
    iVar2 = FUN_000101a4(*(undefined4 *)(iVar2 + 0x30));
    if (iVar2 != 0) {
      iVar2 = _L0();
      if (iVar2 == 0) goto code_r0x00010246;
      _L0();
      FUN_000101ea(0,iVar1,iVar2);
      goto _L0;
    }
    param_4 = 0;
    param_3 = 0;
    param_2 = 0xe0;
    param_1 = 0;
  } while( true );
}



undefined4 _LVL23(undefined4 param_1,undefined4 param_2)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  undefined4 extraout_a1;
  undefined4 unaff_s2;
  undefined4 *unaff_s3;
  undefined4 unaff_s4;
  
  do {
    _LVL23(param_1,param_2);
    iVar1 = unaff_s0 + unaff_s1 * 0x38;
    *(undefined *)(iVar1 + 0x38) = 3;
    if (*(char *)(iVar1 + 0x18) != '\x03') {
code_r0x00010246:
      _L0(unaff_s2);
      FUN_00010258(0,unaff_s1);
_L0:
      FUN_000101f6(unaff_s2);
      FUN_00010208(unaff_s4,0);
      FUN_0001021a(unaff_s4,0);
_L0:
      FUN_0001022c(*unaff_s3,0,0,0);
      return 0;
    }
    iVar1 = FUN_000101a4(*(undefined4 *)(iVar1 + 0x30));
    if (iVar1 != 0) {
      iVar1 = _L0();
      if (iVar1 != 0) {
        _L0();
        FUN_000101ea(0,unaff_s1,iVar1);
        goto _L0;
      }
      goto code_r0x00010246;
    }
    iVar1 = 0;
    unaff_s1 = FUN_0001015a(0,0xe0,0);
    unaff_s3 = (undefined4 *)0x0;
    unaff_s0 = 0;
    unaff_s2 = 0;
    if (iVar1 != 0) {
      FUN_00010266(0);
      FUN_00010278(0,unaff_s1);
      FUN_00010284(0);
      FUN_00010292(uRam00000000,0xffffffff);
      iVar1 = unaff_s1 * 0x38;
      *(undefined *)(iVar1 + 0x38) = 0;
      _L0(*(undefined4 *)(iVar1 + 0x30));
      *(undefined4 *)(iVar1 + 0x30) = 0;
      if (*(char *)(iVar1 + 0x18) == '\x03') {
        FUN_000102c2(*(undefined4 *)(iVar1 + 0x34));
        *(undefined4 *)(iVar1 + 0x34) = 0;
      }
      goto _L0;
    }
    param_2 = 0xffffffff;
    param_1 = uRam00000000;
    unaff_s4 = extraout_a1;
  } while( true );
}



undefined4 FUN_000101a4(undefined4 param_1)

{
  int unaff_s1;
  int iVar1;
  undefined4 extraout_a1;
  undefined4 unaff_s2;
  undefined4 *unaff_s3;
  undefined4 unaff_s4;
  
  do {
    iVar1 = FUN_000101a4(param_1);
    if (iVar1 != 0) {
      iVar1 = _L0();
      if (iVar1 == 0) {
code_r0x00010246:
        _L0(unaff_s2);
        FUN_00010258(0,unaff_s1);
      }
      else {
        _L0(unaff_s2);
        FUN_000101ea(0,unaff_s1,iVar1);
      }
      FUN_000101f6(unaff_s2);
      FUN_00010208(unaff_s4,0);
      FUN_0001021a(unaff_s4,0);
_L0:
      FUN_0001022c(*unaff_s3,0,0,0);
      return 0;
    }
    iVar1 = 0;
    unaff_s1 = FUN_0001015a(0,0xe0,0);
    unaff_s3 = (undefined4 *)0x0;
    unaff_s2 = 0;
    if (iVar1 != 0) {
      FUN_00010266(0);
      FUN_00010278(0,unaff_s1);
      FUN_00010284(0);
      FUN_00010292(uRam00000000,0xffffffff);
      iVar1 = unaff_s1 * 0x38;
      *(undefined *)(iVar1 + 0x38) = 0;
      _L0(*(undefined4 *)(iVar1 + 0x30));
      *(undefined4 *)(iVar1 + 0x30) = 0;
      if (*(char *)(iVar1 + 0x18) == '\x03') {
        FUN_000102c2(*(undefined4 *)(iVar1 + 0x34));
        *(undefined4 *)(iVar1 + 0x34) = 0;
      }
      goto _L0;
    }
    _LVL23(uRam00000000,0xffffffff);
    iVar1 = unaff_s1 * 0x38;
    *(undefined *)(iVar1 + 0x38) = 3;
    unaff_s4 = extraout_a1;
    if (*(char *)(iVar1 + 0x18) != '\x03') goto code_r0x00010246;
    param_1 = *(undefined4 *)(iVar1 + 0x30);
  } while( true );
}



undefined4 _L0(void)

{
  undefined4 *unaff_s3;
  int iStack0000000c;
  
  iStack0000000c = _L0();
  if (iStack0000000c == 0) {
    _L0();
    FUN_00010258(0);
  }
  else {
    _L0();
    FUN_000101ea(0,iStack0000000c);
  }
  FUN_000101f6();
  FUN_00010208(0);
  FUN_0001021a(0);
  FUN_0001022c(*unaff_s3,0,0,0);
  return 0;
}



undefined4 _L0(void)

{
  undefined4 *unaff_s3;
  undefined4 in_stack_0000000c;
  
  _L0();
  FUN_000101ea(0,in_stack_0000000c);
  FUN_000101f6();
  FUN_00010208(0);
  FUN_0001021a(0);
  FUN_0001022c(*unaff_s3,0,0,0);
  return 0;
}



undefined4 FUN_000101ea(void)

{
  undefined4 *unaff_s3;
  
  FUN_000101ea();
  FUN_000101f6();
  FUN_00010208(0);
  FUN_0001021a(0);
  FUN_0001022c(*unaff_s3,0,0,0);
  return 0;
}



undefined4 FUN_000101f6(void)

{
  undefined4 *unaff_s3;
  
  FUN_000101f6();
  FUN_00010208(0);
  FUN_0001021a(0);
  FUN_0001022c(*unaff_s3,0,0,0);
  return 0;
}



undefined4 FUN_00010208(void)

{
  undefined4 *unaff_s3;
  
  FUN_00010208();
  FUN_0001021a(0);
  FUN_0001022c(*unaff_s3,0,0,0);
  return 0;
}



undefined4 FUN_0001021a(void)

{
  undefined4 *unaff_s3;
  
  FUN_0001021a();
  FUN_0001022c(*unaff_s3,0,0,0);
  return 0;
}



undefined4 FUN_0001022c(void)

{
  FUN_0001022c();
  return 0;
}



undefined4 _L0(void)

{
  undefined4 *unaff_s3;
  
  _L0();
  FUN_00010258(0);
  FUN_000101f6();
  FUN_00010208(0);
  FUN_0001021a(0);
  FUN_0001022c(*unaff_s3,0,0,0);
  return 0;
}



undefined4 FUN_00010258(void)

{
  undefined4 *unaff_s3;
  
  FUN_00010258();
  FUN_000101f6();
  FUN_00010208(0);
  FUN_0001021a(0);
  FUN_0001022c(*unaff_s3,0,0,0);
  return 0;
}



undefined4 FUN_00010266(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  undefined4 *unaff_s3;
  
  FUN_00010266();
  FUN_00010278(0);
  FUN_00010284();
  FUN_00010292(*unaff_s3,0xffffffff);
  iVar1 = unaff_s0 + unaff_s1 * 0x38;
  *(undefined *)(iVar1 + 0x38) = 0;
  _L0(*(undefined4 *)(iVar1 + 0x30));
  *(undefined4 *)(iVar1 + 0x30) = 0;
  if (*(char *)(iVar1 + 0x18) == '\x03') {
    FUN_000102c2(*(undefined4 *)(iVar1 + 0x34));
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  FUN_0001022c(*unaff_s3,0,0,0);
  return 0;
}



undefined4 FUN_00010278(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  undefined4 *unaff_s3;
  
  FUN_00010278();
  FUN_00010284();
  FUN_00010292(*unaff_s3,0xffffffff);
  iVar1 = unaff_s0 + unaff_s1 * 0x38;
  *(undefined *)(iVar1 + 0x38) = 0;
  _L0(*(undefined4 *)(iVar1 + 0x30));
  *(undefined4 *)(iVar1 + 0x30) = 0;
  if (*(char *)(iVar1 + 0x18) == '\x03') {
    FUN_000102c2(*(undefined4 *)(iVar1 + 0x34));
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  FUN_0001022c(*unaff_s3,0,0,0);
  return 0;
}



undefined4 FUN_00010284(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  undefined4 *unaff_s3;
  
  FUN_00010284();
  FUN_00010292(*unaff_s3,0xffffffff);
  iVar1 = unaff_s0 + unaff_s1 * 0x38;
  *(undefined *)(iVar1 + 0x38) = 0;
  _L0(*(undefined4 *)(iVar1 + 0x30));
  *(undefined4 *)(iVar1 + 0x30) = 0;
  if (*(char *)(iVar1 + 0x18) == '\x03') {
    FUN_000102c2(*(undefined4 *)(iVar1 + 0x34));
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  FUN_0001022c(*unaff_s3,0,0,0);
  return 0;
}



undefined4 FUN_00010292(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  undefined4 *unaff_s3;
  
  FUN_00010292();
  iVar1 = unaff_s0 + unaff_s1 * 0x38;
  *(undefined *)(iVar1 + 0x38) = 0;
  _L0(*(undefined4 *)(iVar1 + 0x30));
  *(undefined4 *)(iVar1 + 0x30) = 0;
  if (*(char *)(iVar1 + 0x18) == '\x03') {
    FUN_000102c2(*(undefined4 *)(iVar1 + 0x34));
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  FUN_0001022c(*unaff_s3,0,0,0);
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  undefined4 *unaff_s3;
  
  _L0();
  *(undefined4 *)(unaff_s0 + 0x30) = 0;
  if (*(char *)(unaff_s0 + 0x18) == '\x03') {
    FUN_000102c2(*(undefined4 *)(unaff_s0 + 0x34));
    *(undefined4 *)(unaff_s0 + 0x34) = 0;
  }
  FUN_0001022c(*unaff_s3,0,0,0);
  return 0;
}



undefined4 FUN_000102c2(void)

{
  int unaff_s0;
  undefined4 *unaff_s3;
  
  FUN_000102c2();
  *(undefined4 *)(unaff_s0 + 0x34) = 0;
  FUN_0001022c(*unaff_s3,0,0,0);
  return 0;
}



err_t tcp_receive_callback(void *arg,altcp_pcb *conn,pbuf *p,err_t err)

{
  pbuf *ppVar1;
  err_t eVar2;
  int iVar3;
  
  if (4 < (int)arg) {
    p = (pbuf *)0x0;
    arg = (void *)FUN_00010306(0,0x82,0);
  }
  _L0(uRam00000000,0xffffffff);
  iVar3 = (int)arg * 0x38;
  if (*(char *)(iVar3 + 0x38) == '\x03') {
    if (p == (pbuf *)0x0) {
      *(undefined *)(iVar3 + 0x38) = 0;
      FUN_00010392(0);
      FUN_000103a4(0,arg);
      FUN_000103b0(0);
      FUN_000103ba(*(undefined4 *)(iVar3 + 0x30));
      *(undefined4 *)(iVar3 + 0x30) = 0;
      if (*(char *)(iVar3 + 0x18) == '\x03') {
        FUN_000103d0(*(undefined4 *)(iVar3 + 0x34));
        *(undefined4 *)(iVar3 + 0x34) = 0;
      }
      FUN_000103e6(uRam00000000,0,0,0);
    }
    else {
      FUN_000103fc(uRam00000000,0,0,0);
      _L0();
      FUN_00010410(0);
      FUN_00010420(0);
      FUN_0001042c(0);
      FUN_00010438(0);
      FUN_0001044e(0,arg,p->tot_len);
      FUN_0001045a(0);
      ppVar1 = p;
      do {
        FUN_0001046a(ppVar1->payload,ppVar1->len);
        ppVar1 = ppVar1->next;
      } while (ppVar1 != (pbuf *)0x0);
      _L0();
      FUN_0001048e(*(undefined4 *)((int)arg * 0x38 + 0x30),p->tot_len);
      FUN_00010498(p);
    }
    eVar2 = '\0';
  }
  else {
    FUN_00010350(0,arg);
    FUN_00010362(uRam00000000,0,0,0);
    eVar2 = -0xb;
  }
  return eVar2;
}



undefined4 FUN_00010306(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = FUN_00010306();
  _L0(uRam00000000,0xffffffff);
  iVar4 = iVar2 * 0x38;
  if (*(char *)(iVar4 + 0x38) == '\x03') {
    if (param_1 == (int *)0x0) {
      *(undefined *)(iVar4 + 0x38) = 0;
      FUN_00010392(0);
      FUN_000103a4(0,iVar2);
      FUN_000103b0(0);
      FUN_000103ba(*(undefined4 *)(iVar4 + 0x30));
      *(undefined4 *)(iVar4 + 0x30) = 0;
      if (*(char *)(iVar4 + 0x18) == '\x03') {
        FUN_000103d0(*(undefined4 *)(iVar4 + 0x34));
        *(undefined4 *)(iVar4 + 0x34) = 0;
      }
      FUN_000103e6(uRam00000000,0,0,0);
    }
    else {
      FUN_000103fc(uRam00000000,0,0,0);
      _L0();
      FUN_00010410(0);
      FUN_00010420(0);
      FUN_0001042c(0);
      FUN_00010438(0);
      FUN_0001044e(0,iVar2,*(undefined2 *)(param_1 + 2));
      FUN_0001045a(0);
      piVar1 = param_1;
      do {
        FUN_0001046a(piVar1[1],*(undefined2 *)((int)piVar1 + 10));
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)0x0);
      _L0();
      FUN_0001048e(*(undefined4 *)(iVar2 * 0x38 + 0x30),*(undefined2 *)(param_1 + 2));
      FUN_00010498(param_1);
    }
    uVar3 = 0;
  }
  else {
    FUN_00010350(0,iVar2);
    FUN_00010362(uRam00000000,0,0,0);
    uVar3 = 0xfffffff5;
  }
  return uVar3;
}



undefined4 _L0(void)

{
  int *piVar1;
  int unaff_s1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_s3;
  int *unaff_s4;
  
  _L0();
  iVar3 = unaff_s1 * 0x38;
  if (*(char *)(iVar3 + 0x38) == '\x03') {
    if (unaff_s4 == (int *)0x0) {
      *(undefined *)(iVar3 + 0x38) = 0;
      FUN_00010392(0);
      FUN_000103a4(0);
      FUN_000103b0(0);
      FUN_000103ba(*(undefined4 *)(iVar3 + 0x30));
      *(undefined4 *)(iVar3 + 0x30) = 0;
      if (*(char *)(iVar3 + 0x18) == '\x03') {
        FUN_000103d0(*(undefined4 *)(iVar3 + 0x34));
        *(undefined4 *)(iVar3 + 0x34) = 0;
      }
      FUN_000103e6(*unaff_s3,0,0,0);
    }
    else {
      FUN_000103fc(*unaff_s3,0,0,0);
      _L0();
      FUN_00010410(0);
      FUN_00010420(0);
      FUN_0001042c(0);
      FUN_00010438(0);
      FUN_0001044e(0,*(undefined2 *)(unaff_s4 + 2));
      FUN_0001045a(0);
      piVar1 = unaff_s4;
      do {
        FUN_0001046a(piVar1[1],*(undefined2 *)((int)piVar1 + 10));
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)0x0);
      _L0();
      FUN_0001048e(*(undefined4 *)(unaff_s1 * 0x38 + 0x30),*(undefined2 *)(unaff_s4 + 2));
      FUN_00010498();
    }
    uVar2 = 0;
  }
  else {
    FUN_00010350(0);
    FUN_00010362(*unaff_s3,0,0,0);
    uVar2 = 0xfffffff5;
  }
  return uVar2;
}



undefined4 FUN_00010350(void)

{
  undefined4 *unaff_s3;
  
  FUN_00010350();
  FUN_00010362(*unaff_s3,0,0,0);
  return 0xfffffff5;
}



undefined4 FUN_00010362(void)

{
  FUN_00010362();
  return 0xfffffff5;
}



undefined4 FUN_00010392(void)

{
  int unaff_s0;
  uint unaff_s5;
  undefined4 *unaff_s7;
  
  FUN_00010392();
  FUN_000103a4(0);
  FUN_000103b0();
  FUN_000103ba(*(undefined4 *)(unaff_s0 + 0x30));
  *(undefined4 *)(unaff_s0 + 0x30) = 0;
  if (*(byte *)(unaff_s0 + 0x18) == unaff_s5) {
    FUN_000103d0(*(undefined4 *)(unaff_s0 + 0x34));
    *(undefined4 *)(unaff_s0 + 0x34) = 0;
  }
  FUN_000103e6(*unaff_s7,0,0,0);
  return 0;
}



undefined4 FUN_000103a4(void)

{
  int unaff_s0;
  uint unaff_s5;
  undefined4 *unaff_s7;
  
  FUN_000103a4();
  FUN_000103b0();
  FUN_000103ba(*(undefined4 *)(unaff_s0 + 0x30));
  *(undefined4 *)(unaff_s0 + 0x30) = 0;
  if (*(byte *)(unaff_s0 + 0x18) == unaff_s5) {
    FUN_000103d0(*(undefined4 *)(unaff_s0 + 0x34));
    *(undefined4 *)(unaff_s0 + 0x34) = 0;
  }
  FUN_000103e6(*unaff_s7,0,0,0);
  return 0;
}



undefined4 FUN_000103b0(void)

{
  int unaff_s0;
  uint unaff_s5;
  undefined4 *unaff_s7;
  
  FUN_000103b0();
  FUN_000103ba(*(undefined4 *)(unaff_s0 + 0x30));
  *(undefined4 *)(unaff_s0 + 0x30) = 0;
  if (*(byte *)(unaff_s0 + 0x18) == unaff_s5) {
    FUN_000103d0(*(undefined4 *)(unaff_s0 + 0x34));
    *(undefined4 *)(unaff_s0 + 0x34) = 0;
  }
  FUN_000103e6(*unaff_s7,0,0,0);
  return 0;
}



undefined4 FUN_000103ba(void)

{
  int unaff_s0;
  uint unaff_s5;
  undefined4 *unaff_s7;
  
  FUN_000103ba();
  *(undefined4 *)(unaff_s0 + 0x30) = 0;
  if (*(byte *)(unaff_s0 + 0x18) == unaff_s5) {
    FUN_000103d0(*(undefined4 *)(unaff_s0 + 0x34));
    *(undefined4 *)(unaff_s0 + 0x34) = 0;
  }
  FUN_000103e6(*unaff_s7,0,0,0);
  return 0;
}



undefined4 FUN_000103d0(void)

{
  int unaff_s0;
  undefined4 *unaff_s7;
  
  FUN_000103d0();
  *(undefined4 *)(unaff_s0 + 0x34) = 0;
  FUN_000103e6(*unaff_s7,0,0,0);
  return 0;
}



undefined4 FUN_000103e6(void)

{
  FUN_000103e6();
  return 0;
}



undefined4 FUN_000103fc(void)

{
  int *piVar1;
  int unaff_s1;
  int *unaff_s4;
  int unaff_s6;
  
  FUN_000103fc();
  _L0();
  FUN_00010410();
  FUN_00010420(0);
  FUN_0001042c();
  FUN_00010438();
  FUN_0001044e(0,*(undefined2 *)(unaff_s4 + 2));
  FUN_0001045a();
  piVar1 = unaff_s4;
  do {
    FUN_0001046a(piVar1[1],*(undefined2 *)((int)piVar1 + 10));
    piVar1 = (int *)*piVar1;
  } while (piVar1 != (int *)0x0);
  _L0();
  FUN_0001048e(*(undefined4 *)(unaff_s1 * 0x38 + unaff_s6 + 0x30),*(undefined2 *)(unaff_s4 + 2));
  FUN_00010498();
  return 0;
}



undefined4 _L0(void)

{
  int *piVar1;
  int unaff_s1;
  int *unaff_s4;
  int unaff_s6;
  
  _L0();
  FUN_00010410();
  FUN_00010420(0);
  FUN_0001042c();
  FUN_00010438();
  FUN_0001044e(0,*(undefined2 *)(unaff_s4 + 2));
  FUN_0001045a();
  piVar1 = unaff_s4;
  do {
    FUN_0001046a(piVar1[1],*(undefined2 *)((int)piVar1 + 10));
    piVar1 = (int *)*piVar1;
  } while (piVar1 != (int *)0x0);
  _L0();
  FUN_0001048e(*(undefined4 *)(unaff_s1 * 0x38 + unaff_s6 + 0x30),*(undefined2 *)(unaff_s4 + 2));
  FUN_00010498();
  return 0;
}



undefined4 FUN_00010410(void)

{
  int *piVar1;
  int unaff_s1;
  int *unaff_s4;
  int unaff_s6;
  
  FUN_00010410();
  FUN_00010420(0);
  FUN_0001042c();
  FUN_00010438();
  FUN_0001044e(0,*(undefined2 *)(unaff_s4 + 2));
  FUN_0001045a();
  piVar1 = unaff_s4;
  do {
    FUN_0001046a(piVar1[1],*(undefined2 *)((int)piVar1 + 10));
    piVar1 = (int *)*piVar1;
  } while (piVar1 != (int *)0x0);
  _L0();
  FUN_0001048e(*(undefined4 *)(unaff_s1 * 0x38 + unaff_s6 + 0x30),*(undefined2 *)(unaff_s4 + 2));
  FUN_00010498();
  return 0;
}



undefined4 FUN_00010420(void)

{
  int *piVar1;
  int unaff_s1;
  int *unaff_s4;
  int unaff_s6;
  
  FUN_00010420();
  FUN_0001042c();
  FUN_00010438();
  FUN_0001044e(0,*(undefined2 *)(unaff_s4 + 2));
  FUN_0001045a();
  piVar1 = unaff_s4;
  do {
    FUN_0001046a(piVar1[1],*(undefined2 *)((int)piVar1 + 10));
    piVar1 = (int *)*piVar1;
  } while (piVar1 != (int *)0x0);
  _L0();
  FUN_0001048e(*(undefined4 *)(unaff_s1 * 0x38 + unaff_s6 + 0x30),*(undefined2 *)(unaff_s4 + 2));
  FUN_00010498();
  return 0;
}



undefined4 FUN_0001042c(void)

{
  int *piVar1;
  int unaff_s1;
  int *unaff_s4;
  int unaff_s6;
  
  FUN_0001042c();
  FUN_00010438();
  FUN_0001044e(0,*(undefined2 *)(unaff_s4 + 2));
  FUN_0001045a();
  piVar1 = unaff_s4;
  do {
    FUN_0001046a(piVar1[1],*(undefined2 *)((int)piVar1 + 10));
    piVar1 = (int *)*piVar1;
  } while (piVar1 != (int *)0x0);
  _L0();
  FUN_0001048e(*(undefined4 *)(unaff_s1 * 0x38 + unaff_s6 + 0x30),*(undefined2 *)(unaff_s4 + 2));
  FUN_00010498();
  return 0;
}



undefined4 FUN_00010438(void)

{
  int *piVar1;
  int unaff_s1;
  int *unaff_s4;
  int unaff_s6;
  
  FUN_00010438();
  FUN_0001044e(0,*(undefined2 *)(unaff_s4 + 2));
  FUN_0001045a();
  piVar1 = unaff_s4;
  do {
    FUN_0001046a(piVar1[1],*(undefined2 *)((int)piVar1 + 10));
    piVar1 = (int *)*piVar1;
  } while (piVar1 != (int *)0x0);
  _L0();
  FUN_0001048e(*(undefined4 *)(unaff_s1 * 0x38 + unaff_s6 + 0x30),*(undefined2 *)(unaff_s4 + 2));
  FUN_00010498();
  return 0;
}



undefined4 FUN_0001044e(void)

{
  int *piVar1;
  int unaff_s1;
  int *unaff_s4;
  int unaff_s6;
  
  FUN_0001044e();
  FUN_0001045a();
  piVar1 = unaff_s4;
  do {
    FUN_0001046a(piVar1[1],*(undefined2 *)((int)piVar1 + 10));
    piVar1 = (int *)*piVar1;
  } while (piVar1 != (int *)0x0);
  _L0();
  FUN_0001048e(*(undefined4 *)(unaff_s1 * 0x38 + unaff_s6 + 0x30),*(undefined2 *)(unaff_s4 + 2));
  FUN_00010498();
  return 0;
}



undefined4 FUN_0001045a(void)

{
  int *piVar1;
  int unaff_s1;
  int *unaff_s4;
  int unaff_s6;
  
  FUN_0001045a();
  piVar1 = unaff_s4;
  do {
    FUN_0001046a(piVar1[1],*(undefined2 *)((int)piVar1 + 10));
    piVar1 = (int *)*piVar1;
  } while (piVar1 != (int *)0x0);
  _L0();
  FUN_0001048e(*(undefined4 *)(unaff_s1 * 0x38 + unaff_s6 + 0x30),*(undefined2 *)(unaff_s4 + 2));
  FUN_00010498();
  return 0;
}



undefined4 FUN_0001046a(undefined4 param_1,uint param_2)

{
  int *unaff_s0;
  int unaff_s1;
  int unaff_s4;
  int unaff_s6;
  
  while( true ) {
    FUN_0001046a(param_1,param_2);
    unaff_s0 = (int *)*unaff_s0;
    if (unaff_s0 == (int *)0x0) break;
    param_2 = (uint)*(ushort *)((int)unaff_s0 + 10);
    param_1 = unaff_s0[1];
  }
  _L0();
  FUN_0001048e(*(undefined4 *)(unaff_s1 * 0x38 + unaff_s6 + 0x30),*(undefined2 *)(unaff_s4 + 8));
  FUN_00010498();
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s1;
  int unaff_s4;
  int unaff_s6;
  
  _L0();
  FUN_0001048e(*(undefined4 *)(unaff_s1 * 0x38 + unaff_s6 + 0x30),*(undefined2 *)(unaff_s4 + 8));
  FUN_00010498();
  return 0;
}



undefined4 FUN_0001048e(void)

{
  FUN_0001048e();
  FUN_00010498();
  return 0;
}



undefined4 FUN_00010498(void)

{
  FUN_00010498();
  return 0;
}



int get_romfs_file_content(char *path,romfs_filebuf_t *buf)

{
  int iVar1;
  
  iVar1 = _L0(0);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    _L0(1,buf);
    FUN_000104c8(iVar1);
    iVar1 = 0;
  }
  return iVar1;
}



undefined4 _L0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_stack_0000000c;
  
  iVar1 = _L0();
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    _L0(1,in_stack_0000000c);
    FUN_000104c8(iVar1);
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 _L0(void)

{
  _L0();
  FUN_000104c8();
  return 0;
}



undefined4 FUN_000104c8(void)

{
  FUN_000104c8();
  return 0;
}



void udp_send_data(void *arg)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (arg != (void *)0x0) goto _L0;
  uVar2 = 0x2b6;
  while( true ) {
    arg = (void *)FUN_0001050a(0,uVar2,0,0);
_L0:
    if (*(int *)((int)arg + 4) != 0) break;
    uVar2 = 0x2ba;
  }
  _L0();
                    // WARNING: Load size is inaccurate
  iVar3 = *arg * 0x38;
  if ((*(char *)(iVar3 + 0x18) == '\x02') && (*(char *)(iVar3 + 0x38) != '\0')) {
    _L0();
    iVar1 = FUN_000105c6(0xb6,uRam00000000 & 0xffff,0x280);
    if (iVar1 != 0) {
      _LVL108(*(undefined4 *)(iVar1 + 4),*(int *)((int)arg + 4),uRam00000000);
      iVar3 = FUN_000105e8(*(undefined4 *)(iVar3 + 0x30),iVar1);
      if (iVar3 == 0) {
        FUN_0001062c(0);
                    // WARNING: Load size is inaccurate
        _L0(0,*arg);
        return;
      }
      FUN_000105f6(0);
                    // WARNING: Load size is inaccurate
      _L0(0,*arg);
      FUN_00010614(0);
      FUN_0001061e(iVar1);
      goto _L0;
    }
  }
  else {
    _L0();
  }
  FUN_0001056c(0);
                    // WARNING: Load size is inaccurate
  FUN_0001057e(0,*arg);
  FUN_0001058a(0);
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001050a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  while (piVar1 = (int *)FUN_0001050a(param_1,param_2,param_3,param_4), piVar1[1] == 0) {
    param_4 = 0;
    param_3 = 0;
    param_2 = 0x2ba;
    param_1 = 0;
  }
  _L0();
  iVar3 = *piVar1 * 0x38;
  if ((*(char *)(iVar3 + 0x18) == '\x02') && (*(char *)(iVar3 + 0x38) != '\0')) {
    _L0();
    iVar2 = FUN_000105c6(0xb6,uRam00000000 & 0xffff,0x280);
    if (iVar2 != 0) {
      _LVL108(*(undefined4 *)(iVar2 + 4),piVar1[1],uRam00000000);
      iVar3 = FUN_000105e8(*(undefined4 *)(iVar3 + 0x30),iVar2);
      if (iVar3 == 0) {
        FUN_0001062c(0);
        _L0(0,*piVar1);
        return;
      }
      FUN_000105f6(0);
      _L0(0,*piVar1);
      FUN_00010614(0);
      FUN_0001061e(iVar2);
      goto _L0;
    }
  }
  else {
    _L0();
  }
  FUN_0001056c(0);
  FUN_0001057e(0,*piVar1);
  FUN_0001058a(0);
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int *unaff_s0;
  int iVar1;
  int iVar2;
  
  _L0();
  iVar2 = *unaff_s0 * 0x38;
  if ((*(char *)(iVar2 + 0x18) == '\x02') && (*(char *)(iVar2 + 0x38) != '\0')) {
    _L0();
    iVar1 = FUN_000105c6(0xb6,uRam00000000 & 0xffff,0x280);
    if (iVar1 != 0) {
      _LVL108(*(undefined4 *)(iVar1 + 4),unaff_s0[1],uRam00000000);
      iVar2 = FUN_000105e8(*(undefined4 *)(iVar2 + 0x30),iVar1);
      if (iVar2 == 0) {
        FUN_0001062c(0);
        _L0(0,*unaff_s0);
        return;
      }
      FUN_000105f6(0);
      _L0(0,*unaff_s0);
      FUN_00010614(0);
      FUN_0001061e(iVar1);
      goto _L0;
    }
  }
  else {
    _L0();
  }
  FUN_0001056c(0);
  FUN_0001057e(0,*unaff_s0);
  FUN_0001058a(0);
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined4 *unaff_s0;
  
  _L0();
  FUN_0001056c();
  FUN_0001057e(0,*unaff_s0);
  FUN_0001058a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001056c(void)

{
  undefined4 *unaff_s0;
  
  FUN_0001056c();
  FUN_0001057e(0,*unaff_s0);
  FUN_0001058a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001057e(void)

{
  FUN_0001057e();
  FUN_0001058a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001058a(void)

{
  FUN_0001058a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined4 *unaff_s0;
  int iVar1;
  int iVar2;
  int unaff_s2;
  undefined4 *unaff_s4;
  
  _L0();
  iVar1 = FUN_000105c6(0xb6,*(undefined2 *)unaff_s4,0x280);
  if (iVar1 == 0) {
    FUN_0001056c();
    FUN_0001057e(0,*unaff_s0);
    FUN_0001058a();
  }
  else {
    _LVL108(*(undefined4 *)(iVar1 + 4),unaff_s0[1],*unaff_s4);
    iVar2 = FUN_000105e8(*(undefined4 *)(unaff_s2 + 0x30),iVar1);
    if (iVar2 == 0) {
      FUN_0001062c();
      _L0(0,*unaff_s0);
      return;
    }
    FUN_000105f6();
    _L0(0,*unaff_s0);
    FUN_00010614();
    FUN_0001061e(iVar1);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000105c6(void)

{
  undefined4 *unaff_s0;
  int iVar1;
  int iVar2;
  int unaff_s2;
  undefined4 *unaff_s4;
  
  iVar1 = FUN_000105c6();
  if (iVar1 == 0) {
    FUN_0001056c();
    FUN_0001057e(0,*unaff_s0);
    FUN_0001058a();
  }
  else {
    _LVL108(*(undefined4 *)(iVar1 + 4),unaff_s0[1],*unaff_s4);
    iVar2 = FUN_000105e8(*(undefined4 *)(unaff_s2 + 0x30),iVar1);
    if (iVar2 == 0) {
      FUN_0001062c();
      _L0(0,*unaff_s0);
      return;
    }
    FUN_000105f6();
    _L0(0,*unaff_s0);
    FUN_00010614();
    FUN_0001061e(iVar1);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL108(void)

{
  undefined4 *unaff_s0;
  int iVar1;
  int unaff_s2;
  
  _LVL108();
  iVar1 = FUN_000105e8(*(undefined4 *)(unaff_s2 + 0x30));
  if (iVar1 == 0) {
    FUN_0001062c();
    _L0(0,*unaff_s0);
    return;
  }
  FUN_000105f6();
  _L0(0,*unaff_s0);
  FUN_00010614();
  FUN_0001061e();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000105e8(void)

{
  undefined4 *unaff_s0;
  int iVar1;
  
  iVar1 = FUN_000105e8();
  if (iVar1 == 0) {
    FUN_0001062c();
    _L0(0,*unaff_s0);
    return;
  }
  FUN_000105f6();
  _L0(0,*unaff_s0);
  FUN_00010614();
  FUN_0001061e();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000105f6(void)

{
  undefined4 *unaff_s0;
  
  FUN_000105f6();
  _L0(0,*unaff_s0);
  FUN_00010614();
  FUN_0001061e();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  FUN_00010614();
  FUN_0001061e();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010614(void)

{
  FUN_00010614();
  FUN_0001061e();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001061e(void)

{
  FUN_0001061e();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001062c(void)

{
  undefined4 *unaff_s0;
  
  FUN_0001062c();
  _L0(0,*unaff_s0);
  return;
}



void tcp_err_callback(void *arg,err_t err)

{
  undefined3 in_register_0000202d;
  undefined4 uVar1;
  undefined4 extraout_a1;
  int iVar2;
  
  uVar1 = CONCAT31(in_register_0000202d,err);
  if (4 < (int)arg) {
    arg = (void *)FUN_0001066a(0,0xc6,0,0);
    uVar1 = extraout_a1;
  }
  _LVL121(0,uVar1);
  FUN_0001068e(0,arg);
  FUN_0001069a(0);
  FUN_000106ac(uRam00000000,0xffffffff);
  iVar2 = (int)arg * 0x38;
  *(undefined *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x30) = 0;
  if (*(char *)(iVar2 + 0x18) == '\x03') {
    FUN_000106da(*(undefined4 *)(iVar2 + 0x34));
    *(undefined4 *)(iVar2 + 0x34) = 0;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001066a(void)

{
  int iVar1;
  
  iVar1 = FUN_0001066a();
  _LVL121(0);
  FUN_0001068e(0,iVar1);
  FUN_0001069a(0);
  FUN_000106ac(uRam00000000,0xffffffff);
  iVar1 = iVar1 * 0x38;
  *(undefined *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  if (*(char *)(iVar1 + 0x18) == '\x03') {
    FUN_000106da(*(undefined4 *)(iVar1 + 0x34));
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL121(void)

{
  int unaff_s0;
  int iVar1;
  
  _LVL121();
  FUN_0001068e(0);
  FUN_0001069a();
  FUN_000106ac(uRam00000000,0xffffffff);
  iVar1 = unaff_s0 * 0x38;
  *(undefined *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  if (*(char *)(iVar1 + 0x18) == '\x03') {
    FUN_000106da(*(undefined4 *)(iVar1 + 0x34));
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001068e(void)

{
  int unaff_s0;
  int iVar1;
  
  FUN_0001068e();
  FUN_0001069a();
  FUN_000106ac(uRam00000000,0xffffffff);
  iVar1 = unaff_s0 * 0x38;
  *(undefined *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  if (*(char *)(iVar1 + 0x18) == '\x03') {
    FUN_000106da(*(undefined4 *)(iVar1 + 0x34));
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001069a(void)

{
  int unaff_s0;
  int iVar1;
  
  FUN_0001069a();
  FUN_000106ac(uRam00000000,0xffffffff);
  iVar1 = unaff_s0 * 0x38;
  *(undefined *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  if (*(char *)(iVar1 + 0x18) == '\x03') {
    FUN_000106da(*(undefined4 *)(iVar1 + 0x34));
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000106ac(void)

{
  int unaff_s0;
  int iVar1;
  
  FUN_000106ac();
  iVar1 = unaff_s0 * 0x38;
  *(undefined *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  if (*(char *)(iVar1 + 0x18) == '\x03') {
    FUN_000106da(*(undefined4 *)(iVar1 + 0x34));
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000106da(void)

{
  int unaff_s0;
  
  FUN_000106da();
  *(undefined4 *)(unaff_s0 + 0x34) = 0;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void udp_receive_callback(void *arg,udp_pcb *pcb,pbuf *p,ip_addr_t *addr,u16_t port)

{
  undefined2 in_register_0000203a;
  
  if ((int)arg < 5) {
    _L0(CONCAT22(in_register_0000203a,port));
    if (*(char *)((int)arg * 0x38 + 0x38) == '\0') {
      _L0();
      FUN_0001076a(0,arg);
    }
    else {
      _L0();
      _L0();
      FUN_0001078c(0);
      FUN_0001079c(0);
      FUN_000107a8(0);
      FUN_000107b4(0);
      FUN_000107ca(0,arg,p->tot_len);
      FUN_000107d6(0);
      do {
        FUN_000107e6(p->payload,p->len);
        p = p->next;
      } while (p != (pbuf *)0x0);
      _L0();
    }
  }
  else {
    FUN_0001071a(0);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001071a(void)

{
  FUN_0001071a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int *unaff_s0;
  int unaff_s2;
  
  _L0();
  if (*(char *)(unaff_s2 * 0x38 + 0x38) == '\0') {
    _L0();
    FUN_0001076a(0);
  }
  else {
    _L0();
    _L0();
    FUN_0001078c(0);
    FUN_0001079c(0);
    FUN_000107a8(0);
    FUN_000107b4(0);
    FUN_000107ca(0,*(undefined2 *)(unaff_s0 + 2));
    FUN_000107d6(0);
    do {
      FUN_000107e6(unaff_s0[1],*(undefined2 *)((int)unaff_s0 + 10));
      unaff_s0 = (int *)*unaff_s0;
    } while (unaff_s0 != (int *)0x0);
    _L0();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  FUN_0001076a(0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001076a(void)

{
  FUN_0001076a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int *unaff_s0;
  
  _L0();
  _L0();
  FUN_0001078c(0);
  FUN_0001079c(0);
  FUN_000107a8(0);
  FUN_000107b4(0);
  FUN_000107ca(0,*(undefined2 *)(unaff_s0 + 2));
  FUN_000107d6(0);
  do {
    FUN_000107e6(unaff_s0[1],*(undefined2 *)((int)unaff_s0 + 10));
    unaff_s0 = (int *)*unaff_s0;
  } while (unaff_s0 != (int *)0x0);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int *unaff_s0;
  
  _L0();
  FUN_0001078c();
  FUN_0001079c(0);
  FUN_000107a8();
  FUN_000107b4();
  FUN_000107ca(0,*(undefined2 *)(unaff_s0 + 2));
  FUN_000107d6();
  do {
    FUN_000107e6(unaff_s0[1],*(undefined2 *)((int)unaff_s0 + 10));
    unaff_s0 = (int *)*unaff_s0;
  } while (unaff_s0 != (int *)0x0);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001078c(void)

{
  int *unaff_s0;
  
  FUN_0001078c();
  FUN_0001079c(0);
  FUN_000107a8();
  FUN_000107b4();
  FUN_000107ca(0,*(undefined2 *)(unaff_s0 + 2));
  FUN_000107d6();
  do {
    FUN_000107e6(unaff_s0[1],*(undefined2 *)((int)unaff_s0 + 10));
    unaff_s0 = (int *)*unaff_s0;
  } while (unaff_s0 != (int *)0x0);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001079c(void)

{
  int *unaff_s0;
  
  FUN_0001079c();
  FUN_000107a8();
  FUN_000107b4();
  FUN_000107ca(0,*(undefined2 *)(unaff_s0 + 2));
  FUN_000107d6();
  do {
    FUN_000107e6(unaff_s0[1],*(undefined2 *)((int)unaff_s0 + 10));
    unaff_s0 = (int *)*unaff_s0;
  } while (unaff_s0 != (int *)0x0);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000107a8(void)

{
  int *unaff_s0;
  
  FUN_000107a8();
  FUN_000107b4();
  FUN_000107ca(0,*(undefined2 *)(unaff_s0 + 2));
  FUN_000107d6();
  do {
    FUN_000107e6(unaff_s0[1],*(undefined2 *)((int)unaff_s0 + 10));
    unaff_s0 = (int *)*unaff_s0;
  } while (unaff_s0 != (int *)0x0);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000107b4(void)

{
  int *unaff_s0;
  
  FUN_000107b4();
  FUN_000107ca(0,*(undefined2 *)(unaff_s0 + 2));
  FUN_000107d6();
  do {
    FUN_000107e6(unaff_s0[1],*(undefined2 *)((int)unaff_s0 + 10));
    unaff_s0 = (int *)*unaff_s0;
  } while (unaff_s0 != (int *)0x0);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000107ca(void)

{
  int *unaff_s0;
  
  FUN_000107ca();
  FUN_000107d6();
  do {
    FUN_000107e6(unaff_s0[1],*(undefined2 *)((int)unaff_s0 + 10));
    unaff_s0 = (int *)*unaff_s0;
  } while (unaff_s0 != (int *)0x0);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000107d6(void)

{
  int *unaff_s0;
  
  FUN_000107d6();
  do {
    FUN_000107e6(unaff_s0[1],*(undefined2 *)((int)unaff_s0 + 10));
    unaff_s0 = (int *)*unaff_s0;
  } while (unaff_s0 != (int *)0x0);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000107e6(undefined4 param_1,uint param_2)

{
  int *unaff_s1;
  
  while( true ) {
    FUN_000107e6(param_1,param_2);
    unaff_s1 = (int *)*unaff_s1;
    if (unaff_s1 == (int *)0x0) break;
    param_2 = (uint)*(ushort *)((int)unaff_s1 + 10);
    param_1 = unaff_s1[1];
  }
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



err_t tcp_accept_callback(void *arg,altcp_pcb *new_conn,err_t err)

{
  err_t eVar1;
  undefined4 uVar2;
  undefined3 in_register_00002031;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = CONCAT31(in_register_00002031,err);
  if (iVar5 == 0) {
    _L0(iRam00000000,0xffffffff);
    iVar3 = 0;
    iVar4 = 0;
    do {
      if (*(char *)(iVar3 + 0x38) == '\0') {
        FUN_00010880(iVar4 * 0x38 + 4,0,0x38);
        break;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x38;
    } while (iVar4 != 5);
    iVar3 = iVar4 * 0x38;
    if (*(char *)(iVar3 + 0x38) != '\0') {
      FUN_000108a4(iRam00000000,0,0,0);
      eVar1 = _L0(0);
      return eVar1;
    }
    *(altcp_pcb **)(iVar3 + 0x30) = new_conn;
    iRam00000000 = iRam00000000 + 1;
    *(undefined *)(iVar3 + 0x38) = 3;
    *(undefined *)(iVar3 + 0x18) = 1;
    FUN_000108dc(new_conn,0);
    FUN_000108ec(iVar3 + 4,0x10);
    uVar2 = FUN_000108f8(new_conn,0);
    *(undefined4 *)(iVar3 + 0x14) = uVar2;
    FUN_0001090e(iRam00000000,0,0,0);
    FUN_0001091e(0);
    FUN_00010930(0,iVar4);
    FUN_0001093c(0);
    FUN_00010948(new_conn,iVar4);
    FUN_0001095a(new_conn,0);
    FUN_0001096c(new_conn,0);
    FUN_0001097e(new_conn,0);
  }
  else {
    _L0(0);
    FUN_00010824(new_conn);
    iVar5 = -0xb;
  }
  return (err_t)iVar5;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010824();
  return 0xfffffff5;
}



undefined4 FUN_00010824(void)

{
  FUN_00010824();
  return 0xfffffff5;
}



void _L0(void)

{
  int unaff_s0;
  int *unaff_s1;
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *unaff_s4;
  
  _L0();
  iVar3 = 0;
  piVar1 = unaff_s1;
  do {
    if (*(char *)(piVar1 + 0xe) == '\0') {
      FUN_00010880(unaff_s1 + iVar3 * 0xe + 1,0,0x38);
      break;
    }
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 0xe;
  } while (iVar3 != 5);
  piVar1 = unaff_s1 + iVar3 * 0xe;
  if (*(char *)(piVar1 + 0xe) == '\0') {
    iVar2 = *unaff_s1;
    piVar1[0xc] = unaff_s0;
    *unaff_s1 = iVar2 + 1;
    *(undefined *)(piVar1 + 0xe) = 3;
    *(undefined *)(piVar1 + 6) = 1;
    FUN_000108dc(0);
    FUN_000108ec(unaff_s1 + iVar3 * 0xe + 1,0x10);
    iVar2 = FUN_000108f8(0);
    piVar1[5] = iVar2;
    FUN_0001090e(*unaff_s4,0,0,0);
    FUN_0001091e(0);
    FUN_00010930(0,iVar3);
    FUN_0001093c(0);
    FUN_00010948(iVar3);
    FUN_0001095a(0);
    FUN_0001096c(0);
    FUN_0001097e(0);
    return;
  }
  FUN_000108a4(*unaff_s4,0,0,0);
  _L0(0);
  return;
}



void FUN_00010880(void)

{
  int unaff_s0;
  int *unaff_s1;
  int iVar1;
  int unaff_s2;
  undefined4 *unaff_s4;
  int *piVar2;
  
  FUN_00010880();
  piVar2 = unaff_s1 + unaff_s2 * 0xe;
  if (*(char *)(piVar2 + 0xe) != '\0') {
    FUN_000108a4(*unaff_s4,0,0,0);
    _L0(0);
    return;
  }
  iVar1 = *unaff_s1;
  piVar2[0xc] = unaff_s0;
  *unaff_s1 = iVar1 + 1;
  *(undefined *)(piVar2 + 0xe) = 3;
  *(undefined *)(piVar2 + 6) = 1;
  FUN_000108dc(0);
  FUN_000108ec(unaff_s1 + unaff_s2 * 0xe + 1,0x10);
  iVar1 = FUN_000108f8(0);
  piVar2[5] = iVar1;
  FUN_0001090e(*unaff_s4,0,0,0);
  FUN_0001091e(0);
  FUN_00010930(0);
  FUN_0001093c(0);
  FUN_00010948();
  FUN_0001095a(0);
  FUN_0001096c(0);
  FUN_0001097e(0);
  return;
}



void FUN_000108a4(void)

{
  FUN_000108a4();
  _L0(0);
  return;
}



void FUN_000108dc(void)

{
  int unaff_s1;
  undefined4 uVar1;
  int unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s5;
  
  FUN_000108dc();
  FUN_000108ec(unaff_s3 + 4 + unaff_s1,0x10);
  uVar1 = FUN_000108f8(0);
  *(undefined4 *)(unaff_s5 + 0x14) = uVar1;
  FUN_0001090e(*unaff_s4,0,0,0);
  FUN_0001091e(0);
  FUN_00010930(0);
  FUN_0001093c(0);
  FUN_00010948();
  FUN_0001095a(0);
  FUN_0001096c(0);
  FUN_0001097e(0);
  return;
}



void FUN_000108ec(void)

{
  undefined4 uVar1;
  undefined4 *unaff_s4;
  int unaff_s5;
  
  FUN_000108ec();
  uVar1 = FUN_000108f8(0);
  *(undefined4 *)(unaff_s5 + 0x14) = uVar1;
  FUN_0001090e(*unaff_s4,0,0,0);
  FUN_0001091e(0);
  FUN_00010930(0);
  FUN_0001093c(0);
  FUN_00010948();
  FUN_0001095a(0);
  FUN_0001096c(0);
  FUN_0001097e(0);
  return;
}



void FUN_000108f8(void)

{
  undefined4 uVar1;
  undefined4 *unaff_s4;
  int unaff_s5;
  
  uVar1 = FUN_000108f8();
  *(undefined4 *)(unaff_s5 + 0x14) = uVar1;
  FUN_0001090e(*unaff_s4,0,0,0);
  FUN_0001091e(0);
  FUN_00010930(0);
  FUN_0001093c(0);
  FUN_00010948();
  FUN_0001095a(0);
  FUN_0001096c(0);
  FUN_0001097e(0);
  return;
}



void FUN_0001090e(void)

{
  FUN_0001090e();
  FUN_0001091e(0);
  FUN_00010930(0);
  FUN_0001093c(0);
  FUN_00010948();
  FUN_0001095a(0);
  FUN_0001096c(0);
  FUN_0001097e(0);
  return;
}



void FUN_0001091e(void)

{
  FUN_0001091e();
  FUN_00010930(0);
  FUN_0001093c();
  FUN_00010948();
  FUN_0001095a(0);
  FUN_0001096c(0);
  FUN_0001097e(0);
  return;
}



void FUN_00010930(void)

{
  FUN_00010930();
  FUN_0001093c();
  FUN_00010948();
  FUN_0001095a(0);
  FUN_0001096c(0);
  FUN_0001097e(0);
  return;
}



void FUN_0001093c(void)

{
  FUN_0001093c();
  FUN_00010948();
  FUN_0001095a(0);
  FUN_0001096c(0);
  FUN_0001097e(0);
  return;
}



void FUN_00010948(void)

{
  FUN_00010948();
  FUN_0001095a(0);
  FUN_0001096c(0);
  FUN_0001097e(0);
  return;
}



void FUN_0001095a(void)

{
  FUN_0001095a();
  FUN_0001096c(0);
  FUN_0001097e(0);
  return;
}



void FUN_0001096c(void)

{
  FUN_0001096c();
  FUN_0001097e(0);
  return;
}



void FUN_0001097e(void)

{
  FUN_0001097e();
  return;
}



void tcp_send_data(void *arg)

{
  undefined4 uVar1;
  int iVar2;
  
  if (arg != (void *)0x0) goto _L0;
  uVar1 = 0x2a1;
  while( true ) {
    arg = (void *)FUN_000109ae(0,uVar1,0,0);
_L0:
    if (*(int *)((int)arg + 4) != 0) break;
    uVar1 = 0x2a4;
  }
  _L0();
                    // WARNING: Load size is inaccurate
  iVar2 = *arg * 0x38;
  if ((*(char *)(iVar2 + 0x18) == '\x02') || (*(char *)(iVar2 + 0x38) == '\0')) {
    _L0();
    FUN_00010a0e(0);
                    // WARNING: Load size is inaccurate
    FUN_00010a20(0,*arg);
    FUN_00010a2c(0);
  }
  else {
    _L0();
    FUN_00010a5c(*(undefined4 *)(iVar2 + 0x30),*(int *)((int)arg + 4),uRam00000000,0);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000109ae(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  while (piVar1 = (int *)FUN_000109ae(param_1,param_2,param_3,param_4), piVar1[1] == 0) {
    param_4 = 0;
    param_3 = 0;
    param_2 = 0x2a4;
    param_1 = 0;
  }
  _L0();
  iVar2 = *piVar1 * 0x38;
  if ((*(char *)(iVar2 + 0x18) == '\x02') || (*(char *)(iVar2 + 0x38) == '\0')) {
    _L0();
    FUN_00010a0e(0);
    FUN_00010a20(0,*piVar1);
    FUN_00010a2c(0);
  }
  else {
    _L0();
    FUN_00010a5c(*(undefined4 *)(iVar2 + 0x30),piVar1[1],uRam00000000,0);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int *unaff_s0;
  int iVar1;
  
  _L0();
  iVar1 = *unaff_s0 * 0x38;
  if ((*(char *)(iVar1 + 0x18) == '\x02') || (*(char *)(iVar1 + 0x38) == '\0')) {
    _L0();
    FUN_00010a0e(0);
    FUN_00010a20(0,*unaff_s0);
    FUN_00010a2c(0);
  }
  else {
    _L0();
    FUN_00010a5c(*(undefined4 *)(iVar1 + 0x30),unaff_s0[1],uRam00000000,0);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  undefined4 *unaff_s0;
  
  _L0();
  FUN_00010a0e(0);
  FUN_00010a20(0,*unaff_s0);
  FUN_00010a2c(0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010a0e(void)

{
  undefined4 *unaff_s0;
  
  FUN_00010a0e();
  FUN_00010a20(0,*unaff_s0);
  FUN_00010a2c();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010a20(void)

{
  FUN_00010a20();
  FUN_00010a2c();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010a2c(void)

{
  FUN_00010a2c();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  
  _L0();
  FUN_00010a5c(*(undefined4 *)(unaff_s1 + 0x30),*(undefined4 *)(unaff_s0 + 4),uRam00000000,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010a5c(void)

{
  FUN_00010a5c();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



AT_ERROR_CODE bl_cipstatus(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*(char *)(iVar1 + 0x38) != '\0') {
      FUN_00010aa6(0,rsp);
      uVar3 = 0;
      uVar4 = *(byte *)(iVar1 + 0x18) - 1 & 0xff;
      if (uVar4 < 3) {
        uVar3 = *(undefined4 *)(uVar4 * 4);
      }
      FUN_00010ad0(0,iVar2,uVar3,iVar1 + 4,*(undefined4 *)(iVar1 + 0x14));
      rsp = (at_callback_rsp_t *)FUN_00010adc(0);
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 0x38;
  } while (iVar2 != 5);
  return AEC_OK;
}



undefined4 FUN_00010aa6(void)

{
  char *pcVar1;
  int unaff_s0;
  int iVar2;
  int unaff_s1;
  
  do {
    FUN_00010aa6();
    FUN_00010ad0(unaff_s1,unaff_s0 + 4,*(undefined4 *)(unaff_s0 + 0x14));
    FUN_00010adc();
    iVar2 = unaff_s0;
    do {
      unaff_s1 = unaff_s1 + 1;
      unaff_s0 = iVar2 + 0x38;
      if (unaff_s1 == 5) {
        return 0;
      }
      pcVar1 = (char *)(iVar2 + 0x70);
      iVar2 = unaff_s0;
    } while (*pcVar1 == '\0');
  } while( true );
}



undefined4 FUN_00010ad0(int param_1,int param_2,undefined4 param_3)

{
  int unaff_s0;
  int unaff_s1;
  
  do {
    FUN_00010ad0(param_1,param_2,param_3);
    FUN_00010adc();
    do {
      param_2 = unaff_s0;
      unaff_s1 = unaff_s1 + 1;
      unaff_s0 = param_2 + 0x38;
      if (unaff_s1 == 5) {
        return 0;
      }
    } while (*(char *)(param_2 + 0x70) == '\0');
    FUN_00010aa6();
    param_3 = *(undefined4 *)(param_2 + 0x4c);
    param_2 = param_2 + 0x3c;
    param_1 = unaff_s1;
  } while( true );
}



undefined4 FUN_00010adc(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  
  do {
    FUN_00010adc();
    do {
      iVar1 = unaff_s0;
      unaff_s1 = unaff_s1 + 1;
      unaff_s0 = iVar1 + 0x38;
      if (unaff_s1 == 5) {
        return 0;
      }
    } while (*(char *)(iVar1 + 0x70) == '\0');
    FUN_00010aa6();
    FUN_00010ad0(unaff_s1,iVar1 + 0x3c,*(undefined4 *)(iVar1 + 0x4c));
  } while( true );
}



AT_ERROR_CODE bl_cipstart(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  char cVar1;
  AT_ERROR_CODE AVar2;
  int iVar3;
  int iVar4;
  undefined uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined auStack76 [4];
  ip_addr_t ip_addr;
  romfs_filebuf_t ca_buf;
  romfs_filebuf_t cert_buf;
  romfs_filebuf_t filebuf;
  
  iVar7 = *(int *)&para->u;
  if (4 < iVar7) {
    return AEC_OUT_OF_RANGE;
  }
  iVar8 = iVar7 * 0x38;
  _LVL200(iRam00000000,0xffffffff);
  AVar2 = *(AT_ERROR_CODE *)(iVar8 + 0x38);
  if (AVar2 != AEC_OK) {
    FUN_00010b60(iRam00000000,0,0,0);
    FUN_00010b70(0);
    FUN_00010b82(0,iVar7);
    FUN_00010b8e(0);
    return AEC_SOCKET_EXISTING;
  }
  FUN_00010bbc(iVar8 + 4,&(para->u).field_0x8,0xf);
  iVar4 = &(para->u).field_0x4;
  *(undefined4 *)(iVar8 + 0x14) = *(undefined4 *)&(para->u).field_0x108;
  iVar3 = FUN_00010bd8(iVar4,0);
  if (iVar3 == 0) {
_L0:
    uVar5 = 1;
  }
  else {
    iVar3 = FUN_00010c0c(iVar4,0);
    uVar5 = 2;
    if (iVar3 != 0) {
      iVar4 = FUN_00010c22(iVar4,0);
      if (iVar4 != 0) {
        _L0(iRam00000000,0,0,0);
        return AEC_PARA_ERROR;
      }
      if (*(char *)(iVar8 + 0x19) == '\0') {
        FUN_00010c3a(0);
        goto _L0;
      }
      uVar5 = 3;
    }
  }
  *(undefined *)(iVar8 + 0x18) = uVar5;
  iVar8 = FUN_00010bec(iVar8 + 4,auStack76);
  if (iVar8 == 0) {
    AVar2 = _L0(iRam00000000,0,0,0);
    return AVar2;
  }
  iVar8 = iVar7 * 0x38;
  cVar1 = *(char *)(iVar8 + 0x18);
  if (cVar1 == '\x01') {
    iVar4 = _LVL220(0x2e);
    *(int *)(iVar8 + 0x30) = iVar4;
    if (iVar4 == 0) goto _L0;
    FUN_00010c9a(iVar7);
    iVar4 = FUN_00010cb2(*(undefined4 *)(iVar8 + 0x30),auStack76,*(undefined2 *)(iVar8 + 0x14),0);
    uVar6 = *(undefined4 *)(iVar8 + 0x30);
    if (iVar4 != 0) {
      _LVL225(uVar6);
      *(undefined4 *)(iVar8 + 0x30) = 0;
      goto _L0;
    }
_L0:
    FUN_00010f86(uVar6,0);
    uVar5 = 2;
_L0:
    *(undefined *)(iVar7 * 0x38 + 0x38) = uVar5;
    iVar7 = iRam00000000;
    iRam00000000 = iRam00000000 + 1;
    _L0(iVar7,0,0,0);
  }
  else {
    if (cVar1 == '\x02') {
      iVar4 = _LVL229(0x2e);
      *(int *)(iVar8 + 0x30) = iVar4;
      if (iVar4 != 0) {
        iVar4 = FUN_00010d02(0,0);
        uVar6 = *(undefined4 *)(iVar8 + 0x30);
        if (iVar4 == 0) {
          iVar4 = FUN_00010d26(uVar6,auStack76,*(undefined2 *)(iVar8 + 0x14));
          uVar6 = *(undefined4 *)(iVar8 + 0x30);
          if (iVar4 == 0) {
            FUN_00010d3e(uVar6,0,iVar7);
            uVar5 = 3;
            goto _L0;
          }
        }
        FUN_00010d10(uVar6);
        *(undefined4 *)(iVar8 + 0x30) = 0;
      }
    }
    else {
      if (cVar1 != '\x03') {
        return AEC_UNDEFINED;
      }
      cVar1 = *(char *)(iVar8 + 0x19);
      if (cVar1 == '\x02') {
        iVar4 = FUN_00010d7c(*(undefined4 *)(iVar8 + 0x20),&cert_buf.bufsize);
        if (iVar4 == 0) {
          uVar6 = FUN_00010d8c(cert_buf.bufsize,filebuf.buf);
_L0:
          *(undefined4 *)(iVar8 + 0x34) = uVar6;
          iVar8 = iVar7 * 0x38;
          if (*(int *)(iVar8 + 0x34) != 0) {
            iVar4 = FUN_00010daa(0x2e);
            *(int *)(iVar8 + 0x30) = iVar4;
            if (iVar4 != 0) {
              if (*(int *)(iVar8 + 0x1c) == 0) {
                if (*(char *)(iVar8 + 0x19) == '\x01') goto _L0;
              }
              else {
                if (*(char *)(iVar8 + 0x19) == '\x01') {
_L0:
                  FUN_00010f0c(*(undefined4 *)(iVar7 * 0x38 + 0x34),0);
                }
                else {
                  iVar4 = _L0();
                  if (iVar4 == 0) {
                    FUN_00010e94(0,0x1cc,0,0);
                  }
                  FUN_00010ea0(*(undefined4 *)(iVar8 + 0x34),2);
                  iVar4 = FUN_00010eac(iVar4,*(undefined4 *)(iVar8 + 0x1c));
                  if (iVar4 != 0) {
                    FUN_00010eb8(*(undefined4 *)(iVar8 + 0x30));
                    *(undefined4 *)(iVar8 + 0x30) = 0;
                    _L0(*(undefined4 *)(iVar8 + 0x34));
                    iVar7 = iRam00000000;
                    *(undefined4 *)(iVar8 + 0x34) = 0;
                    FUN_00010edc(iVar7,0,0,0);
                    FUN_00010eec(0);
                    return AEC_CONNECT_FAIL;
                  }
                }
              }
              if (*(int *)(iVar7 * 0x38 + 0x2c) != 0) {
                FUN_00010f24(*(undefined4 *)(iVar7 * 0x38 + 0x34));
              }
              iVar8 = iVar7 * 0x38;
              FUN_00010f3a(*(undefined4 *)(iVar8 + 0x30),iVar7);
              iVar4 = FUN_00010f52(*(undefined4 *)(iVar8 + 0x30),auStack76,
                                   *(undefined2 *)(iVar8 + 0x14),0);
              uVar6 = *(undefined4 *)(iVar8 + 0x30);
              if (iVar4 != 0) {
                _LVL270(uVar6);
                *(undefined4 *)(iVar8 + 0x30) = 0;
                _L0(*(undefined4 *)(iVar8 + 0x34));
                *(undefined4 *)(iVar8 + 0x34) = 0;
_L0:
                FUN_00010cd8(iRam00000000,0,0,0);
                return AEC_CONNECT_FAIL;
              }
              goto _L0;
            }
            FUN_00010db8(*(undefined4 *)(iVar8 + 0x34));
            *(undefined4 *)(iVar8 + 0x34) = 0;
          }
        }
      }
      else {
        if (cVar1 == '\x03') {
          iVar4 = FUN_00010dce(*(undefined4 *)(iVar8 + 0x20),&ip_addr);
          if (((iVar4 == 0) &&
              (iVar4 = FUN_00010dde(*(undefined4 *)(iVar8 + 0x24),&ca_buf.bufsize), iVar4 == 0)) &&
             (iVar4 = FUN_00010dee(*(undefined4 *)(iVar8 + 0x28),&cert_buf.bufsize), iVar4 == 0)) {
            uVar6 = _L0(ip_addr,ca_buf.buf,cert_buf.bufsize,filebuf.buf,0,0,ca_buf.bufsize,
                        cert_buf.buf);
            goto _L0;
          }
        }
        else {
          if (cVar1 != '\x01') {
            FUN_00010e52(iRam00000000,0,0,0);
            return AEC_UNSUPPORTED;
          }
          iVar7 = FUN_00010e1c(*(undefined4 *)(iVar8 + 0x24),&ca_buf.bufsize);
          if ((iVar7 == 0) &&
             (iVar7 = FUN_00010e2c(*(undefined4 *)(iVar8 + 0x28),&cert_buf.bufsize), iVar7 == 0)) {
            AVar2 = _L0(0,cert_buf.bufsize,filebuf.buf,0,0,ca_buf.bufsize,cert_buf.buf);
            return AVar2;
          }
        }
      }
    }
_L0:
    FUN_00010c8c(iRam00000000,0,0,0);
    AVar2 = AEC_SOCKET_FAIL;
  }
  return AVar2;
}



uint _LVL200(void)

{
  char cVar1;
  int unaff_s0;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined uVar7;
  int *unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int iVar8;
  int unaff_s6;
  int iVar9;
  undefined4 *unaff_s7;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  _LVL200();
  iVar9 = unaff_s6 + unaff_s5;
  uVar4 = (uint)*(byte *)(iVar9 + 0x38);
  if (uVar4 != 0) {
    FUN_00010b60(*unaff_s7,0,0,0);
    FUN_00010b70(0);
    FUN_00010b82(0);
    FUN_00010b8e(0);
    return 0x16;
  }
  iVar8 = unaff_s5 + 4 + (int)unaff_s3;
  FUN_00010bbc(iVar8,unaff_s0 + 0x10,0xf);
  iVar2 = unaff_s0 + 0xc;
  *(undefined4 *)(iVar9 + 0x14) = *(undefined4 *)(unaff_s0 + 0x110);
  iVar5 = FUN_00010bd8(iVar2,0);
  if (iVar5 == 0) {
_L0:
    uVar7 = 1;
  }
  else {
    iVar5 = FUN_00010c0c(iVar2,0);
    uVar7 = 2;
    if (iVar5 != 0) {
      iVar2 = FUN_00010c22(iVar2,0);
      if (iVar2 != 0) {
        _L0(*unaff_s7,0,0,0);
        return 4;
      }
      if (*(char *)(iVar9 + 0x19) == '\0') {
        FUN_00010c3a(0);
        goto _L0;
      }
      uVar7 = 3;
    }
  }
  *(undefined *)(iVar9 + 0x18) = uVar7;
  iVar9 = FUN_00010bec(iVar8,&stack0x00000004);
  if (iVar9 == 0) {
    uVar4 = _L0(*unaff_s7,0,0,0);
    return uVar4;
  }
  piVar3 = unaff_s3 + unaff_s4 * 0xe;
  cVar1 = *(char *)(piVar3 + 6);
  if (cVar1 == '\x01') {
    iVar9 = _LVL220(0x2e);
    piVar3[0xc] = iVar9;
    if (iVar9 == 0) goto _L0;
    FUN_00010c9a();
    iVar9 = FUN_00010cb2(piVar3[0xc],&stack0x00000004,*(undefined2 *)(piVar3 + 5),0);
    iVar2 = piVar3[0xc];
    if (iVar9 != 0) {
      _LVL225(iVar2);
      piVar3[0xc] = 0;
      goto _L0;
    }
_L0:
    FUN_00010f86(iVar2,0);
    uVar7 = 2;
_L0:
    *(undefined *)(piVar3 + 0xe) = uVar7;
    uVar6 = *unaff_s7;
    *unaff_s3 = *unaff_s3 + 1;
    _L0(uVar6,0,0,0);
  }
  else {
    if (cVar1 == '\x02') {
      iVar9 = _LVL229(0x2e);
      piVar3[0xc] = iVar9;
      if (iVar9 != 0) {
        iVar9 = FUN_00010d02(0,0);
        iVar2 = piVar3[0xc];
        if (iVar9 == 0) {
          iVar9 = FUN_00010d26(iVar2,&stack0x00000004,*(undefined2 *)(piVar3 + 5));
          iVar2 = piVar3[0xc];
          if (iVar9 == 0) {
            FUN_00010d3e(iVar2,0);
            uVar7 = 3;
            goto _L0;
          }
        }
        FUN_00010d10(iVar2);
        piVar3[0xc] = 0;
      }
    }
    else {
      if (cVar1 != '\x03') {
        return 0x1a;
      }
      cVar1 = *(char *)((int)piVar3 + 0x19);
      if (cVar1 == '\x02') {
        iVar9 = FUN_00010d7c(piVar3[8],&stack0x00000018);
        if (iVar9 == 0) {
          iVar9 = FUN_00010d8c(in_stack_00000018,in_stack_0000001c);
_L0:
          piVar3[0xd] = iVar9;
          piVar3 = unaff_s3 + unaff_s4 * 0xe;
          if (piVar3[0xd] != 0) {
            iVar9 = FUN_00010daa(0x2e);
            piVar3[0xc] = iVar9;
            if (iVar9 != 0) {
              if (piVar3[7] == 0) {
                if (*(char *)((int)piVar3 + 0x19) == '\x01') goto _L0;
              }
              else {
                if (*(char *)((int)piVar3 + 0x19) == '\x01') {
_L0:
                  FUN_00010f0c(unaff_s3[unaff_s4 * 0xe + 0xd],0);
                }
                else {
                  iVar9 = _L0();
                  if (iVar9 == 0) {
                    FUN_00010e94(0,0x1cc,0,0);
                  }
                  FUN_00010ea0(piVar3[0xd],2);
                  iVar9 = FUN_00010eac(iVar9,piVar3[7]);
                  if (iVar9 != 0) {
                    FUN_00010eb8(piVar3[0xc]);
                    piVar3[0xc] = 0;
                    _L0(piVar3[0xd]);
                    uVar6 = *unaff_s7;
                    piVar3[0xd] = 0;
                    FUN_00010edc(uVar6,0,0,0);
                    FUN_00010eec(0);
                    return 0xe;
                  }
                }
              }
              if ((unaff_s3 + unaff_s4 * 0xe)[0xb] != 0) {
                FUN_00010f24((unaff_s3 + unaff_s4 * 0xe)[0xd]);
              }
              piVar3 = unaff_s3 + unaff_s4 * 0xe;
              FUN_00010f3a(piVar3[0xc]);
              iVar9 = FUN_00010f52(piVar3[0xc],&stack0x00000004,*(undefined2 *)(piVar3 + 5),0);
              iVar2 = piVar3[0xc];
              if (iVar9 != 0) {
                _LVL270(iVar2);
                piVar3[0xc] = 0;
                _L0(piVar3[0xd]);
                piVar3[0xd] = 0;
_L0:
                FUN_00010cd8(*unaff_s7,0,0,0);
                return 0xe;
              }
              goto _L0;
            }
            FUN_00010db8(piVar3[0xd]);
            piVar3[0xd] = 0;
          }
        }
      }
      else {
        if (cVar1 == '\x03') {
          iVar9 = FUN_00010dce(piVar3[8],&stack0x00000008);
          if (((iVar9 == 0) && (iVar9 = FUN_00010dde(piVar3[9],&stack0x00000010), iVar9 == 0)) &&
             (iVar9 = FUN_00010dee(piVar3[10],&stack0x00000018), iVar9 == 0)) {
            iVar9 = _L0(in_stack_00000008,in_stack_0000000c,in_stack_00000018,in_stack_0000001c,0,0,
                        in_stack_00000010,in_stack_00000014);
            goto _L0;
          }
        }
        else {
          if (cVar1 != '\x01') {
            FUN_00010e52(*unaff_s7,0,0,0);
            return 6;
          }
          iVar9 = FUN_00010e1c(piVar3[9],&stack0x00000010);
          if ((iVar9 == 0) && (iVar9 = FUN_00010e2c(piVar3[10],&stack0x00000018), iVar9 == 0)) {
            uVar4 = _L0(0,in_stack_00000018,in_stack_0000001c,0,0,in_stack_00000010,
                        in_stack_00000014);
            return uVar4;
          }
        }
      }
    }
_L0:
    FUN_00010c8c(*unaff_s7,0,0,0);
    uVar4 = 0x10;
  }
  return uVar4;
}



undefined4 FUN_00010b60(void)

{
  FUN_00010b60();
  FUN_00010b70(0);
  FUN_00010b82(0);
  FUN_00010b8e(0);
  return 0x16;
}



undefined4 FUN_00010b70(void)

{
  FUN_00010b70();
  FUN_00010b82(0);
  FUN_00010b8e();
  return 0x16;
}



undefined4 FUN_00010b82(void)

{
  FUN_00010b82();
  FUN_00010b8e();
  return 0x16;
}



undefined4 FUN_00010b8e(void)

{
  FUN_00010b8e();
  return 0x16;
}



undefined4 FUN_00010bbc(void)

{
  char cVar1;
  int unaff_s0;
  int iVar2;
  int *piVar3;
  undefined4 unaff_s1;
  int iVar4;
  undefined4 uVar5;
  undefined uVar6;
  undefined4 *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  int unaff_s6;
  undefined4 *unaff_s7;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  FUN_00010bbc();
  iVar2 = unaff_s0 + 0xc;
  *(undefined4 *)(unaff_s6 + 0x14) = *(undefined4 *)(unaff_s0 + 0x110);
  iVar4 = FUN_00010bd8(iVar2,0);
  if (iVar4 == 0) {
_L0:
    uVar6 = 1;
  }
  else {
    iVar4 = FUN_00010c0c(iVar2,0);
    uVar6 = 2;
    if (iVar4 != 0) {
      iVar2 = FUN_00010c22(iVar2,0);
      if (iVar2 != 0) {
        _L0(*unaff_s7,0,0,0);
        return 4;
      }
      if (*(char *)(unaff_s6 + 0x19) == '\0') {
        FUN_00010c3a(0);
        goto _L0;
      }
      uVar6 = 3;
    }
  }
  *(undefined *)(unaff_s6 + 0x18) = uVar6;
  iVar2 = FUN_00010bec(&stack0x00000004);
  if (iVar2 == 0) {
    uVar5 = _L0(*unaff_s2,0,0,0);
    return uVar5;
  }
  piVar3 = unaff_s3 + unaff_s4 * 0xe;
  cVar1 = *(char *)(piVar3 + 6);
  if (cVar1 == '\x01') {
    iVar2 = _LVL220(0x2e);
    piVar3[0xc] = iVar2;
    if (iVar2 == 0) goto _L0;
    FUN_00010c9a();
    iVar2 = FUN_00010cb2(piVar3[0xc],&stack0x00000004,*(undefined2 *)(piVar3 + 5),0);
    iVar4 = piVar3[0xc];
    if (iVar2 != 0) {
      _LVL225(iVar4);
      piVar3[0xc] = 0;
      goto _L0;
    }
_L0:
    FUN_00010f86(iVar4,0);
    uVar6 = 2;
_L0:
    *(undefined *)(piVar3 + 0xe) = uVar6;
    uVar5 = *unaff_s2;
    *unaff_s3 = *unaff_s3 + 1;
    _L0(uVar5,0,0,0);
  }
  else {
    if (cVar1 == '\x02') {
      iVar2 = _LVL229(0x2e);
      piVar3[0xc] = iVar2;
      if (iVar2 != 0) {
        iVar2 = FUN_00010d02(0,0);
        iVar4 = piVar3[0xc];
        if (iVar2 == 0) {
          iVar2 = FUN_00010d26(iVar4,&stack0x00000004,*(undefined2 *)(piVar3 + 5));
          iVar4 = piVar3[0xc];
          if (iVar2 == 0) {
            FUN_00010d3e(iVar4,0);
            uVar6 = 3;
            goto _L0;
          }
        }
        FUN_00010d10(iVar4);
        piVar3[0xc] = 0;
      }
    }
    else {
      if (cVar1 != '\x03') {
        return 0x1a;
      }
      cVar1 = *(char *)((int)piVar3 + 0x19);
      if (cVar1 == '\x02') {
        iVar2 = FUN_00010d7c(piVar3[8],&stack0x00000018);
        if (iVar2 == 0) {
          iVar2 = FUN_00010d8c(in_stack_00000018,in_stack_0000001c);
_L0:
          piVar3[0xd] = iVar2;
          piVar3 = unaff_s3 + unaff_s4 * 0xe;
          if (piVar3[0xd] != 0) {
            iVar2 = FUN_00010daa(0x2e);
            piVar3[0xc] = iVar2;
            if (iVar2 != 0) {
              if (piVar3[7] == 0) {
                if (*(char *)((int)piVar3 + 0x19) == '\x01') goto _L0;
              }
              else {
                if (*(char *)((int)piVar3 + 0x19) == '\x01') {
_L0:
                  FUN_00010f0c(unaff_s3[unaff_s4 * 0xe + 0xd],0);
                }
                else {
                  iVar2 = _L0();
                  if (iVar2 == 0) {
                    FUN_00010e94(0,0x1cc,0,0);
                  }
                  FUN_00010ea0(piVar3[0xd],2);
                  iVar2 = FUN_00010eac(iVar2,piVar3[7]);
                  if (iVar2 != 0) {
                    FUN_00010eb8(piVar3[0xc]);
                    piVar3[0xc] = 0;
                    _L0(piVar3[0xd]);
                    uVar5 = *unaff_s2;
                    piVar3[0xd] = 0;
                    FUN_00010edc(uVar5,0,0,0);
                    FUN_00010eec(0);
                    return 0xe;
                  }
                }
              }
              if ((unaff_s3 + unaff_s4 * 0xe)[0xb] != 0) {
                FUN_00010f24((unaff_s3 + unaff_s4 * 0xe)[0xd]);
              }
              piVar3 = unaff_s3 + unaff_s4 * 0xe;
              FUN_00010f3a(piVar3[0xc]);
              iVar2 = FUN_00010f52(piVar3[0xc],&stack0x00000004,*(undefined2 *)(piVar3 + 5),0);
              iVar4 = piVar3[0xc];
              if (iVar2 != 0) {
                _LVL270(iVar4);
                piVar3[0xc] = 0;
                _L0(piVar3[0xd]);
                piVar3[0xd] = 0;
_L0:
                FUN_00010cd8(*unaff_s2,0,0,0);
                return 0xe;
              }
              goto _L0;
            }
            FUN_00010db8(piVar3[0xd]);
            piVar3[0xd] = 0;
          }
        }
      }
      else {
        if (cVar1 == '\x03') {
          iVar2 = FUN_00010dce(piVar3[8],&stack0x00000008);
          if (((iVar2 == 0) && (iVar2 = FUN_00010dde(piVar3[9],&stack0x00000010), iVar2 == 0)) &&
             (iVar2 = FUN_00010dee(piVar3[10],&stack0x00000018), iVar2 == 0)) {
            iVar2 = _L0(in_stack_00000008,in_stack_0000000c,in_stack_00000018,in_stack_0000001c,0,0,
                        in_stack_00000010,in_stack_00000014);
            goto _L0;
          }
        }
        else {
          if (cVar1 != '\x01') {
            FUN_00010e52(*unaff_s2,0,0,0);
            return 6;
          }
          iVar2 = FUN_00010e1c(piVar3[9],&stack0x00000010);
          if ((iVar2 == 0) && (iVar2 = FUN_00010e2c(piVar3[10],&stack0x00000018), iVar2 == 0)) {
            uVar5 = _L0(0,in_stack_00000018,in_stack_0000001c,0,0,in_stack_00000010,
                        in_stack_00000014);
            return uVar5;
          }
        }
      }
    }
_L0:
    FUN_00010c8c(*unaff_s2,0,0,0);
    unaff_s1 = 0x10;
  }
  return unaff_s1;
}



undefined4 FUN_00010bd8(void)

{
  char cVar1;
  int *piVar2;
  undefined4 unaff_s1;
  int iVar3;
  undefined4 uVar4;
  undefined uVar5;
  int iVar6;
  undefined4 *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  int unaff_s6;
  undefined4 *unaff_s7;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  iVar3 = FUN_00010bd8();
  if (iVar3 == 0) {
_L0:
    uVar5 = 1;
  }
  else {
    iVar3 = FUN_00010c0c(0);
    uVar5 = 2;
    if (iVar3 != 0) {
      iVar3 = FUN_00010c22(0);
      if (iVar3 != 0) {
        _L0(*unaff_s7,0,0,0);
        return 4;
      }
      if (*(char *)(unaff_s6 + 0x19) == '\0') {
        FUN_00010c3a(0);
        goto _L0;
      }
      uVar5 = 3;
    }
  }
  *(undefined *)(unaff_s6 + 0x18) = uVar5;
  iVar3 = FUN_00010bec(&stack0x00000004);
  if (iVar3 == 0) {
    uVar4 = _L0(*unaff_s2,0,0,0);
    return uVar4;
  }
  piVar2 = unaff_s3 + unaff_s4 * 0xe;
  cVar1 = *(char *)(piVar2 + 6);
  if (cVar1 == '\x01') {
    iVar3 = _LVL220(0x2e);
    piVar2[0xc] = iVar3;
    if (iVar3 == 0) goto _L0;
    FUN_00010c9a();
    iVar3 = FUN_00010cb2(piVar2[0xc],&stack0x00000004,*(undefined2 *)(piVar2 + 5),0);
    iVar6 = piVar2[0xc];
    if (iVar3 != 0) {
      _LVL225(iVar6);
      piVar2[0xc] = 0;
      goto _L0;
    }
_L0:
    FUN_00010f86(iVar6,0);
    uVar5 = 2;
_L0:
    *(undefined *)(piVar2 + 0xe) = uVar5;
    uVar4 = *unaff_s2;
    *unaff_s3 = *unaff_s3 + 1;
    _L0(uVar4,0,0,0);
  }
  else {
    if (cVar1 == '\x02') {
      iVar3 = _LVL229(0x2e);
      piVar2[0xc] = iVar3;
      if (iVar3 != 0) {
        iVar3 = FUN_00010d02(0,0);
        iVar6 = piVar2[0xc];
        if (iVar3 == 0) {
          iVar3 = FUN_00010d26(iVar6,&stack0x00000004,*(undefined2 *)(piVar2 + 5));
          iVar6 = piVar2[0xc];
          if (iVar3 == 0) {
            FUN_00010d3e(iVar6,0);
            uVar5 = 3;
            goto _L0;
          }
        }
        FUN_00010d10(iVar6);
        piVar2[0xc] = 0;
      }
    }
    else {
      if (cVar1 != '\x03') {
        return 0x1a;
      }
      cVar1 = *(char *)((int)piVar2 + 0x19);
      if (cVar1 == '\x02') {
        iVar3 = FUN_00010d7c(piVar2[8],&stack0x00000018);
        if (iVar3 == 0) {
          iVar3 = FUN_00010d8c(in_stack_00000018,in_stack_0000001c);
_L0:
          piVar2[0xd] = iVar3;
          piVar2 = unaff_s3 + unaff_s4 * 0xe;
          if (piVar2[0xd] != 0) {
            iVar3 = FUN_00010daa(0x2e);
            piVar2[0xc] = iVar3;
            if (iVar3 != 0) {
              if (piVar2[7] == 0) {
                if (*(char *)((int)piVar2 + 0x19) == '\x01') goto _L0;
              }
              else {
                if (*(char *)((int)piVar2 + 0x19) == '\x01') {
_L0:
                  FUN_00010f0c(unaff_s3[unaff_s4 * 0xe + 0xd],0);
                }
                else {
                  iVar3 = _L0();
                  if (iVar3 == 0) {
                    FUN_00010e94(0,0x1cc,0,0);
                  }
                  FUN_00010ea0(piVar2[0xd],2);
                  iVar3 = FUN_00010eac(iVar3,piVar2[7]);
                  if (iVar3 != 0) {
                    FUN_00010eb8(piVar2[0xc]);
                    piVar2[0xc] = 0;
                    _L0(piVar2[0xd]);
                    uVar4 = *unaff_s2;
                    piVar2[0xd] = 0;
                    FUN_00010edc(uVar4,0,0,0);
                    FUN_00010eec(0);
                    return 0xe;
                  }
                }
              }
              if ((unaff_s3 + unaff_s4 * 0xe)[0xb] != 0) {
                FUN_00010f24((unaff_s3 + unaff_s4 * 0xe)[0xd]);
              }
              piVar2 = unaff_s3 + unaff_s4 * 0xe;
              FUN_00010f3a(piVar2[0xc]);
              iVar3 = FUN_00010f52(piVar2[0xc],&stack0x00000004,*(undefined2 *)(piVar2 + 5),0);
              iVar6 = piVar2[0xc];
              if (iVar3 != 0) {
                _LVL270(iVar6);
                piVar2[0xc] = 0;
                _L0(piVar2[0xd]);
                piVar2[0xd] = 0;
_L0:
                FUN_00010cd8(*unaff_s2,0,0,0);
                return 0xe;
              }
              goto _L0;
            }
            FUN_00010db8(piVar2[0xd]);
            piVar2[0xd] = 0;
          }
        }
      }
      else {
        if (cVar1 == '\x03') {
          iVar3 = FUN_00010dce(piVar2[8],&stack0x00000008);
          if (((iVar3 == 0) && (iVar3 = FUN_00010dde(piVar2[9],&stack0x00000010), iVar3 == 0)) &&
             (iVar3 = FUN_00010dee(piVar2[10],&stack0x00000018), iVar3 == 0)) {
            iVar3 = _L0(in_stack_00000008,in_stack_0000000c,in_stack_00000018,in_stack_0000001c,0,0,
                        in_stack_00000010,in_stack_00000014);
            goto _L0;
          }
        }
        else {
          if (cVar1 != '\x01') {
            FUN_00010e52(*unaff_s2,0,0,0);
            return 6;
          }
          iVar3 = FUN_00010e1c(piVar2[9],&stack0x00000010);
          if ((iVar3 == 0) && (iVar3 = FUN_00010e2c(piVar2[10],&stack0x00000018), iVar3 == 0)) {
            uVar4 = _L0(0,in_stack_00000018,in_stack_0000001c,0,0,in_stack_00000010,
                        in_stack_00000014);
            return uVar4;
          }
        }
      }
    }
_L0:
    FUN_00010c8c(*unaff_s2,0,0,0);
    unaff_s1 = 0x10;
  }
  return unaff_s1;
}



undefined4 FUN_00010bec(void)

{
  char cVar1;
  int *piVar2;
  undefined4 unaff_s1;
  int iVar3;
  undefined4 uVar4;
  undefined uVar5;
  int iVar6;
  undefined4 *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  iVar3 = FUN_00010bec();
  if (iVar3 == 0) {
    uVar4 = _L0(*unaff_s2,0,0,0);
    return uVar4;
  }
  piVar2 = unaff_s3 + unaff_s4 * 0xe;
  cVar1 = *(char *)(piVar2 + 6);
  if (cVar1 == '\x01') {
    iVar3 = _LVL220(0x2e);
    piVar2[0xc] = iVar3;
    if (iVar3 == 0) goto _L0;
    FUN_00010c9a();
    iVar3 = FUN_00010cb2(piVar2[0xc],&stack0x00000004,*(undefined2 *)(piVar2 + 5),0);
    iVar6 = piVar2[0xc];
    if (iVar3 != 0) {
      _LVL225(iVar6);
      piVar2[0xc] = 0;
      goto _L0;
    }
_L0:
    FUN_00010f86(iVar6,0);
    uVar5 = 2;
_L0:
    *(undefined *)(piVar2 + 0xe) = uVar5;
    uVar4 = *unaff_s2;
    *unaff_s3 = *unaff_s3 + 1;
    _L0(uVar4,0,0,0);
  }
  else {
    if (cVar1 == '\x02') {
      iVar3 = _LVL229(0x2e);
      piVar2[0xc] = iVar3;
      if (iVar3 != 0) {
        iVar3 = FUN_00010d02(0,0);
        iVar6 = piVar2[0xc];
        if (iVar3 == 0) {
          iVar3 = FUN_00010d26(iVar6,&stack0x00000004,*(undefined2 *)(piVar2 + 5));
          iVar6 = piVar2[0xc];
          if (iVar3 == 0) {
            FUN_00010d3e(iVar6,0);
            uVar5 = 3;
            goto _L0;
          }
        }
        FUN_00010d10(iVar6);
        piVar2[0xc] = 0;
      }
    }
    else {
      if (cVar1 != '\x03') {
        return 0x1a;
      }
      cVar1 = *(char *)((int)piVar2 + 0x19);
      if (cVar1 == '\x02') {
        iVar3 = FUN_00010d7c(piVar2[8],&stack0x00000018);
        if (iVar3 == 0) {
          iVar3 = FUN_00010d8c(in_stack_00000018,in_stack_0000001c);
_L0:
          piVar2[0xd] = iVar3;
          piVar2 = unaff_s3 + unaff_s4 * 0xe;
          if (piVar2[0xd] != 0) {
            iVar3 = FUN_00010daa(0x2e);
            piVar2[0xc] = iVar3;
            if (iVar3 != 0) {
              if (piVar2[7] == 0) {
                if (*(char *)((int)piVar2 + 0x19) == '\x01') goto _L0;
              }
              else {
                if (*(char *)((int)piVar2 + 0x19) == '\x01') {
_L0:
                  FUN_00010f0c(unaff_s3[unaff_s4 * 0xe + 0xd],0);
                }
                else {
                  iVar3 = _L0();
                  if (iVar3 == 0) {
                    FUN_00010e94(0,0x1cc,0,0);
                  }
                  FUN_00010ea0(piVar2[0xd],2);
                  iVar3 = FUN_00010eac(iVar3,piVar2[7]);
                  if (iVar3 != 0) {
                    FUN_00010eb8(piVar2[0xc]);
                    piVar2[0xc] = 0;
                    _L0(piVar2[0xd]);
                    uVar4 = *unaff_s2;
                    piVar2[0xd] = 0;
                    FUN_00010edc(uVar4,0,0,0);
                    FUN_00010eec(0);
                    return 0xe;
                  }
                }
              }
              if ((unaff_s3 + unaff_s4 * 0xe)[0xb] != 0) {
                FUN_00010f24((unaff_s3 + unaff_s4 * 0xe)[0xd]);
              }
              piVar2 = unaff_s3 + unaff_s4 * 0xe;
              FUN_00010f3a(piVar2[0xc]);
              iVar3 = FUN_00010f52(piVar2[0xc],&stack0x00000004,*(undefined2 *)(piVar2 + 5),0);
              iVar6 = piVar2[0xc];
              if (iVar3 != 0) {
                _LVL270(iVar6);
                piVar2[0xc] = 0;
                _L0(piVar2[0xd]);
                piVar2[0xd] = 0;
_L0:
                FUN_00010cd8(*unaff_s2,0,0,0);
                return 0xe;
              }
              goto _L0;
            }
            FUN_00010db8(piVar2[0xd]);
            piVar2[0xd] = 0;
          }
        }
      }
      else {
        if (cVar1 == '\x03') {
          iVar3 = FUN_00010dce(piVar2[8],&stack0x00000008);
          if (((iVar3 == 0) && (iVar3 = FUN_00010dde(piVar2[9],&stack0x00000010), iVar3 == 0)) &&
             (iVar3 = FUN_00010dee(piVar2[10],&stack0x00000018), iVar3 == 0)) {
            iVar3 = _L0(in_stack_00000008,in_stack_0000000c,in_stack_00000018,in_stack_0000001c,0,0,
                        in_stack_00000010,in_stack_00000014);
            goto _L0;
          }
        }
        else {
          if (cVar1 != '\x01') {
            FUN_00010e52(*unaff_s2,0,0,0);
            return 6;
          }
          iVar3 = FUN_00010e1c(piVar2[9],&stack0x00000010);
          if ((iVar3 == 0) && (iVar3 = FUN_00010e2c(piVar2[10],&stack0x00000018), iVar3 == 0)) {
            uVar4 = _L0(0,in_stack_00000018,in_stack_0000001c,0,0,in_stack_00000010,
                        in_stack_00000014);
            return uVar4;
          }
        }
      }
    }
_L0:
    FUN_00010c8c(*unaff_s2,0,0,0);
    unaff_s1 = 0x10;
  }
  return unaff_s1;
}



undefined4 FUN_00010c0c(void)

{
  char cVar1;
  int *piVar2;
  undefined4 unaff_s1;
  undefined4 uVar3;
  int iVar4;
  undefined uVar5;
  int iVar6;
  undefined4 *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  int unaff_s6;
  undefined4 *unaff_s7;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  iVar4 = FUN_00010c0c();
  uVar5 = 2;
  if (iVar4 != 0) {
    iVar4 = FUN_00010c22(0);
    if (iVar4 != 0) {
      _L0(*unaff_s7,0,0,0);
      return 4;
    }
    if (*(char *)(unaff_s6 + 0x19) == '\0') {
      FUN_00010c3a(0);
      uVar5 = 1;
    }
    else {
      uVar5 = 3;
    }
  }
  *(undefined *)(unaff_s6 + 0x18) = uVar5;
  iVar4 = FUN_00010bec(&stack0x00000004);
  if (iVar4 == 0) {
    uVar3 = _L0(*unaff_s2,0,0,0);
    return uVar3;
  }
  piVar2 = unaff_s3 + unaff_s4 * 0xe;
  cVar1 = *(char *)(piVar2 + 6);
  if (cVar1 == '\x01') {
    iVar4 = _LVL220(0x2e);
    piVar2[0xc] = iVar4;
    if (iVar4 == 0) goto _L0;
    FUN_00010c9a();
    iVar4 = FUN_00010cb2(piVar2[0xc],&stack0x00000004,*(undefined2 *)(piVar2 + 5),0);
    iVar6 = piVar2[0xc];
    if (iVar4 != 0) {
      _LVL225(iVar6);
      piVar2[0xc] = 0;
      goto _L0;
    }
_L0:
    FUN_00010f86(iVar6,0);
    uVar5 = 2;
_L0:
    *(undefined *)(piVar2 + 0xe) = uVar5;
    uVar3 = *unaff_s2;
    *unaff_s3 = *unaff_s3 + 1;
    _L0(uVar3,0,0,0);
  }
  else {
    if (cVar1 == '\x02') {
      iVar4 = _LVL229(0x2e);
      piVar2[0xc] = iVar4;
      if (iVar4 != 0) {
        iVar4 = FUN_00010d02(0,0);
        iVar6 = piVar2[0xc];
        if (iVar4 == 0) {
          iVar4 = FUN_00010d26(iVar6,&stack0x00000004,*(undefined2 *)(piVar2 + 5));
          iVar6 = piVar2[0xc];
          if (iVar4 == 0) {
            FUN_00010d3e(iVar6,0);
            uVar5 = 3;
            goto _L0;
          }
        }
        FUN_00010d10(iVar6);
        piVar2[0xc] = 0;
      }
    }
    else {
      if (cVar1 != '\x03') {
        return 0x1a;
      }
      cVar1 = *(char *)((int)piVar2 + 0x19);
      if (cVar1 == '\x02') {
        iVar4 = FUN_00010d7c(piVar2[8],&stack0x00000018);
        if (iVar4 == 0) {
          iVar4 = FUN_00010d8c(in_stack_00000018,in_stack_0000001c);
_L0:
          piVar2[0xd] = iVar4;
          piVar2 = unaff_s3 + unaff_s4 * 0xe;
          if (piVar2[0xd] != 0) {
            iVar4 = FUN_00010daa(0x2e);
            piVar2[0xc] = iVar4;
            if (iVar4 != 0) {
              if (piVar2[7] == 0) {
                if (*(char *)((int)piVar2 + 0x19) == '\x01') goto _L0;
              }
              else {
                if (*(char *)((int)piVar2 + 0x19) == '\x01') {
_L0:
                  FUN_00010f0c(unaff_s3[unaff_s4 * 0xe + 0xd],0);
                }
                else {
                  iVar4 = _L0();
                  if (iVar4 == 0) {
                    FUN_00010e94(0,0x1cc,0,0);
                  }
                  FUN_00010ea0(piVar2[0xd],2);
                  iVar4 = FUN_00010eac(iVar4,piVar2[7]);
                  if (iVar4 != 0) {
                    FUN_00010eb8(piVar2[0xc]);
                    piVar2[0xc] = 0;
                    _L0(piVar2[0xd]);
                    uVar3 = *unaff_s2;
                    piVar2[0xd] = 0;
                    FUN_00010edc(uVar3,0,0,0);
                    FUN_00010eec(0);
                    return 0xe;
                  }
                }
              }
              if ((unaff_s3 + unaff_s4 * 0xe)[0xb] != 0) {
                FUN_00010f24((unaff_s3 + unaff_s4 * 0xe)[0xd]);
              }
              piVar2 = unaff_s3 + unaff_s4 * 0xe;
              FUN_00010f3a(piVar2[0xc]);
              iVar4 = FUN_00010f52(piVar2[0xc],&stack0x00000004,*(undefined2 *)(piVar2 + 5),0);
              iVar6 = piVar2[0xc];
              if (iVar4 != 0) {
                _LVL270(iVar6);
                piVar2[0xc] = 0;
                _L0(piVar2[0xd]);
                piVar2[0xd] = 0;
_L0:
                FUN_00010cd8(*unaff_s2,0,0,0);
                return 0xe;
              }
              goto _L0;
            }
            FUN_00010db8(piVar2[0xd]);
            piVar2[0xd] = 0;
          }
        }
      }
      else {
        if (cVar1 == '\x03') {
          iVar4 = FUN_00010dce(piVar2[8],&stack0x00000008);
          if (((iVar4 == 0) && (iVar4 = FUN_00010dde(piVar2[9],&stack0x00000010), iVar4 == 0)) &&
             (iVar4 = FUN_00010dee(piVar2[10],&stack0x00000018), iVar4 == 0)) {
            iVar4 = _L0(in_stack_00000008,in_stack_0000000c,in_stack_00000018,in_stack_0000001c,0,0,
                        in_stack_00000010,in_stack_00000014);
            goto _L0;
          }
        }
        else {
          if (cVar1 != '\x01') {
            FUN_00010e52(*unaff_s2,0,0,0);
            return 6;
          }
          iVar4 = FUN_00010e1c(piVar2[9],&stack0x00000010);
          if ((iVar4 == 0) && (iVar4 = FUN_00010e2c(piVar2[10],&stack0x00000018), iVar4 == 0)) {
            uVar3 = _L0(0,in_stack_00000018,in_stack_0000001c,0,0,in_stack_00000010,
                        in_stack_00000014);
            return uVar3;
          }
        }
      }
    }
_L0:
    FUN_00010c8c(*unaff_s2,0,0,0);
    unaff_s1 = 0x10;
  }
  return unaff_s1;
}



undefined4 FUN_00010c22(void)

{
  char cVar1;
  int *piVar2;
  undefined4 unaff_s1;
  undefined4 uVar3;
  int iVar4;
  undefined uVar5;
  int iVar6;
  undefined4 *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  int unaff_s6;
  undefined4 *unaff_s7;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  iVar4 = FUN_00010c22();
  if (iVar4 != 0) {
    _L0(*unaff_s7,0,0,0);
    return 4;
  }
  if (*(char *)(unaff_s6 + 0x19) == '\0') {
    FUN_00010c3a(0);
    uVar5 = 1;
  }
  else {
    uVar5 = 3;
  }
  *(undefined *)(unaff_s6 + 0x18) = uVar5;
  iVar4 = FUN_00010bec(&stack0x00000004);
  if (iVar4 == 0) {
    uVar3 = _L0(*unaff_s2,0,0,0);
    return uVar3;
  }
  piVar2 = unaff_s3 + unaff_s4 * 0xe;
  cVar1 = *(char *)(piVar2 + 6);
  if (cVar1 == '\x01') {
    iVar4 = _LVL220(0x2e);
    piVar2[0xc] = iVar4;
    if (iVar4 == 0) goto _L0;
    FUN_00010c9a();
    iVar4 = FUN_00010cb2(piVar2[0xc],&stack0x00000004,*(undefined2 *)(piVar2 + 5),0);
    iVar6 = piVar2[0xc];
    if (iVar4 != 0) {
      _LVL225(iVar6);
      piVar2[0xc] = 0;
      goto _L0;
    }
_L0:
    FUN_00010f86(iVar6,0);
    uVar5 = 2;
_L0:
    *(undefined *)(piVar2 + 0xe) = uVar5;
    uVar3 = *unaff_s2;
    *unaff_s3 = *unaff_s3 + 1;
    _L0(uVar3,0,0,0);
  }
  else {
    if (cVar1 == '\x02') {
      iVar4 = _LVL229(0x2e);
      piVar2[0xc] = iVar4;
      if (iVar4 != 0) {
        iVar4 = FUN_00010d02(0,0);
        iVar6 = piVar2[0xc];
        if (iVar4 == 0) {
          iVar4 = FUN_00010d26(iVar6,&stack0x00000004,*(undefined2 *)(piVar2 + 5));
          iVar6 = piVar2[0xc];
          if (iVar4 == 0) {
            FUN_00010d3e(iVar6,0);
            uVar5 = 3;
            goto _L0;
          }
        }
        FUN_00010d10(iVar6);
        piVar2[0xc] = 0;
      }
    }
    else {
      if (cVar1 != '\x03') {
        return 0x1a;
      }
      cVar1 = *(char *)((int)piVar2 + 0x19);
      if (cVar1 == '\x02') {
        iVar4 = FUN_00010d7c(piVar2[8],&stack0x00000018);
        if (iVar4 == 0) {
          iVar4 = FUN_00010d8c(in_stack_00000018,in_stack_0000001c);
_L0:
          piVar2[0xd] = iVar4;
          piVar2 = unaff_s3 + unaff_s4 * 0xe;
          if (piVar2[0xd] != 0) {
            iVar4 = FUN_00010daa(0x2e);
            piVar2[0xc] = iVar4;
            if (iVar4 != 0) {
              if (piVar2[7] == 0) {
                if (*(char *)((int)piVar2 + 0x19) == '\x01') goto _L0;
              }
              else {
                if (*(char *)((int)piVar2 + 0x19) == '\x01') {
_L0:
                  FUN_00010f0c(unaff_s3[unaff_s4 * 0xe + 0xd],0);
                }
                else {
                  iVar4 = _L0();
                  if (iVar4 == 0) {
                    FUN_00010e94(0,0x1cc,0,0);
                  }
                  FUN_00010ea0(piVar2[0xd],2);
                  iVar4 = FUN_00010eac(iVar4,piVar2[7]);
                  if (iVar4 != 0) {
                    FUN_00010eb8(piVar2[0xc]);
                    piVar2[0xc] = 0;
                    _L0(piVar2[0xd]);
                    uVar3 = *unaff_s2;
                    piVar2[0xd] = 0;
                    FUN_00010edc(uVar3,0,0,0);
                    FUN_00010eec(0);
                    return 0xe;
                  }
                }
              }
              if ((unaff_s3 + unaff_s4 * 0xe)[0xb] != 0) {
                FUN_00010f24((unaff_s3 + unaff_s4 * 0xe)[0xd]);
              }
              piVar2 = unaff_s3 + unaff_s4 * 0xe;
              FUN_00010f3a(piVar2[0xc]);
              iVar4 = FUN_00010f52(piVar2[0xc],&stack0x00000004,*(undefined2 *)(piVar2 + 5),0);
              iVar6 = piVar2[0xc];
              if (iVar4 != 0) {
                _LVL270(iVar6);
                piVar2[0xc] = 0;
                _L0(piVar2[0xd]);
                piVar2[0xd] = 0;
_L0:
                FUN_00010cd8(*unaff_s2,0,0,0);
                return 0xe;
              }
              goto _L0;
            }
            FUN_00010db8(piVar2[0xd]);
            piVar2[0xd] = 0;
          }
        }
      }
      else {
        if (cVar1 == '\x03') {
          iVar4 = FUN_00010dce(piVar2[8],&stack0x00000008);
          if (((iVar4 == 0) && (iVar4 = FUN_00010dde(piVar2[9],&stack0x00000010), iVar4 == 0)) &&
             (iVar4 = FUN_00010dee(piVar2[10],&stack0x00000018), iVar4 == 0)) {
            iVar4 = _L0(in_stack_00000008,in_stack_0000000c,in_stack_00000018,in_stack_0000001c,0,0,
                        in_stack_00000010,in_stack_00000014);
            goto _L0;
          }
        }
        else {
          if (cVar1 != '\x01') {
            FUN_00010e52(*unaff_s2,0,0,0);
            return 6;
          }
          iVar4 = FUN_00010e1c(piVar2[9],&stack0x00000010);
          if ((iVar4 == 0) && (iVar4 = FUN_00010e2c(piVar2[10],&stack0x00000018), iVar4 == 0)) {
            uVar3 = _L0(0,in_stack_00000018,in_stack_0000001c,0,0,in_stack_00000010,
                        in_stack_00000014);
            return uVar3;
          }
        }
      }
    }
_L0:
    FUN_00010c8c(*unaff_s2,0,0,0);
    unaff_s1 = 0x10;
  }
  return unaff_s1;
}



undefined4 FUN_00010c3a(void)

{
  char cVar1;
  int *piVar2;
  undefined4 unaff_s1;
  int iVar3;
  undefined4 uVar4;
  undefined uVar5;
  int iVar6;
  undefined4 *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  int unaff_s6;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  FUN_00010c3a();
  *(undefined *)(unaff_s6 + 0x18) = 1;
  iVar3 = FUN_00010bec(&stack0x00000004);
  if (iVar3 == 0) {
    uVar4 = _L0(*unaff_s2,0,0,0);
    return uVar4;
  }
  piVar2 = unaff_s3 + unaff_s4 * 0xe;
  cVar1 = *(char *)(piVar2 + 6);
  if (cVar1 == '\x01') {
    iVar3 = _LVL220(0x2e);
    piVar2[0xc] = iVar3;
    if (iVar3 == 0) goto _L0;
    FUN_00010c9a();
    iVar3 = FUN_00010cb2(piVar2[0xc],&stack0x00000004,*(undefined2 *)(piVar2 + 5),0);
    iVar6 = piVar2[0xc];
    if (iVar3 != 0) {
      _LVL225(iVar6);
      piVar2[0xc] = 0;
      goto _L0;
    }
_L0:
    FUN_00010f86(iVar6,0);
    uVar5 = 2;
_L0:
    *(undefined *)(piVar2 + 0xe) = uVar5;
    uVar4 = *unaff_s2;
    *unaff_s3 = *unaff_s3 + 1;
    _L0(uVar4,0,0,0);
  }
  else {
    if (cVar1 == '\x02') {
      iVar3 = _LVL229(0x2e);
      piVar2[0xc] = iVar3;
      if (iVar3 != 0) {
        iVar3 = FUN_00010d02(0,0);
        iVar6 = piVar2[0xc];
        if (iVar3 == 0) {
          iVar3 = FUN_00010d26(iVar6,&stack0x00000004,*(undefined2 *)(piVar2 + 5));
          iVar6 = piVar2[0xc];
          if (iVar3 == 0) {
            FUN_00010d3e(iVar6,0);
            uVar5 = 3;
            goto _L0;
          }
        }
        FUN_00010d10(iVar6);
        piVar2[0xc] = 0;
      }
    }
    else {
      if (cVar1 != '\x03') {
        return 0x1a;
      }
      cVar1 = *(char *)((int)piVar2 + 0x19);
      if (cVar1 == '\x02') {
        iVar3 = FUN_00010d7c(piVar2[8],&stack0x00000018);
        if (iVar3 == 0) {
          iVar3 = FUN_00010d8c(in_stack_00000018,in_stack_0000001c);
_L0:
          piVar2[0xd] = iVar3;
          piVar2 = unaff_s3 + unaff_s4 * 0xe;
          if (piVar2[0xd] != 0) {
            iVar3 = FUN_00010daa(0x2e);
            piVar2[0xc] = iVar3;
            if (iVar3 != 0) {
              if (piVar2[7] == 0) {
                if (*(char *)((int)piVar2 + 0x19) == '\x01') goto _L0;
              }
              else {
                if (*(char *)((int)piVar2 + 0x19) == '\x01') {
_L0:
                  FUN_00010f0c(unaff_s3[unaff_s4 * 0xe + 0xd],0);
                }
                else {
                  iVar3 = _L0();
                  if (iVar3 == 0) {
                    FUN_00010e94(0,0x1cc,0,0);
                  }
                  FUN_00010ea0(piVar2[0xd],2);
                  iVar3 = FUN_00010eac(iVar3,piVar2[7]);
                  if (iVar3 != 0) {
                    FUN_00010eb8(piVar2[0xc]);
                    piVar2[0xc] = 0;
                    _L0(piVar2[0xd]);
                    uVar4 = *unaff_s2;
                    piVar2[0xd] = 0;
                    FUN_00010edc(uVar4,0,0,0);
                    FUN_00010eec(0);
                    return 0xe;
                  }
                }
              }
              if ((unaff_s3 + unaff_s4 * 0xe)[0xb] != 0) {
                FUN_00010f24((unaff_s3 + unaff_s4 * 0xe)[0xd]);
              }
              piVar2 = unaff_s3 + unaff_s4 * 0xe;
              FUN_00010f3a(piVar2[0xc]);
              iVar3 = FUN_00010f52(piVar2[0xc],&stack0x00000004,*(undefined2 *)(piVar2 + 5),0);
              iVar6 = piVar2[0xc];
              if (iVar3 != 0) {
                _LVL270(iVar6);
                piVar2[0xc] = 0;
                _L0(piVar2[0xd]);
                piVar2[0xd] = 0;
_L0:
                FUN_00010cd8(*unaff_s2,0,0,0);
                return 0xe;
              }
              goto _L0;
            }
            FUN_00010db8(piVar2[0xd]);
            piVar2[0xd] = 0;
          }
        }
      }
      else {
        if (cVar1 == '\x03') {
          iVar3 = FUN_00010dce(piVar2[8],&stack0x00000008);
          if (((iVar3 == 0) && (iVar3 = FUN_00010dde(piVar2[9],&stack0x00000010), iVar3 == 0)) &&
             (iVar3 = FUN_00010dee(piVar2[10],&stack0x00000018), iVar3 == 0)) {
            iVar3 = _L0(in_stack_00000008,in_stack_0000000c,in_stack_00000018,in_stack_0000001c,0,0,
                        in_stack_00000010,in_stack_00000014);
            goto _L0;
          }
        }
        else {
          if (cVar1 != '\x01') {
            FUN_00010e52(*unaff_s2,0,0,0);
            return 6;
          }
          iVar3 = FUN_00010e1c(piVar2[9],&stack0x00000010);
          if ((iVar3 == 0) && (iVar3 = FUN_00010e2c(piVar2[10],&stack0x00000018), iVar3 == 0)) {
            uVar4 = _L0(0,in_stack_00000018,in_stack_0000001c,0,0,in_stack_00000010,
                        in_stack_00000014);
            return uVar4;
          }
        }
      }
    }
_L0:
    FUN_00010c8c(*unaff_s2,0,0,0);
    unaff_s1 = 0x10;
  }
  return unaff_s1;
}



undefined4 _L0(void)

{
  _L0();
  return 4;
}



undefined4 _LVL220(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_s2;
  int *unaff_s3;
  
  iVar1 = _LVL220();
  *(int *)(unaff_s0 + 0x30) = iVar1;
  if (iVar1 == 0) {
    FUN_00010c8c(*unaff_s2,0,0,0);
    unaff_s1 = 0x10;
  }
  else {
    FUN_00010c9a();
    iVar1 = FUN_00010cb2(*(undefined4 *)(unaff_s0 + 0x30),&stack0x00000004,
                         *(undefined2 *)(unaff_s0 + 0x14),0);
    if (iVar1 == 0) {
      FUN_00010f86(*(undefined4 *)(unaff_s0 + 0x30),0);
      *(undefined *)(unaff_s0 + 0x38) = 2;
      uVar2 = *unaff_s2;
      *unaff_s3 = *unaff_s3 + 1;
      _L0(uVar2,0,0,0);
    }
    else {
      _LVL225(*(undefined4 *)(unaff_s0 + 0x30));
      *(undefined4 *)(unaff_s0 + 0x30) = 0;
      FUN_00010cd8(*unaff_s2,0,0,0);
      unaff_s1 = 0xe;
    }
  }
  return unaff_s1;
}



undefined4 FUN_00010c8c(void)

{
  FUN_00010c8c();
  return 0x10;
}



undefined4 FUN_00010c9a(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_s2;
  int *unaff_s3;
  
  FUN_00010c9a();
  iVar1 = FUN_00010cb2(*(undefined4 *)(unaff_s0 + 0x30),&stack0x00000004,
                       *(undefined2 *)(unaff_s0 + 0x14),0);
  if (iVar1 == 0) {
    FUN_00010f86(*(undefined4 *)(unaff_s0 + 0x30),0);
    *(undefined *)(unaff_s0 + 0x38) = 2;
    uVar2 = *unaff_s2;
    *unaff_s3 = *unaff_s3 + 1;
    _L0(uVar2,0,0,0);
  }
  else {
    _LVL225(*(undefined4 *)(unaff_s0 + 0x30));
    *(undefined4 *)(unaff_s0 + 0x30) = 0;
    FUN_00010cd8(*unaff_s2,0,0,0);
    unaff_s1 = 0xe;
  }
  return unaff_s1;
}



undefined4 FUN_00010cb2(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_s2;
  int *unaff_s3;
  
  iVar1 = FUN_00010cb2();
  if (iVar1 == 0) {
    FUN_00010f86(*(undefined4 *)(unaff_s0 + 0x30),0);
    *(undefined *)(unaff_s0 + 0x38) = 2;
    uVar2 = *unaff_s2;
    *unaff_s3 = *unaff_s3 + 1;
    _L0(uVar2,0,0,0);
  }
  else {
    _LVL225(*(undefined4 *)(unaff_s0 + 0x30));
    *(undefined4 *)(unaff_s0 + 0x30) = 0;
    FUN_00010cd8(*unaff_s2,0,0,0);
    unaff_s1 = 0xe;
  }
  return unaff_s1;
}



undefined4 _LVL225(void)

{
  int unaff_s0;
  undefined4 *unaff_s2;
  
  _LVL225();
  *(undefined4 *)(unaff_s0 + 0x30) = 0;
  FUN_00010cd8(*unaff_s2,0,0,0);
  return 0xe;
}



undefined4 FUN_00010cd8(void)

{
  FUN_00010cd8();
  return 0xe;
}



undefined4 _LVL229(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_s2;
  int *unaff_s3;
  
  iVar1 = _LVL229();
  *(int *)(unaff_s0 + 0x30) = iVar1;
  if (iVar1 != 0) {
    iVar1 = FUN_00010d02(0,0);
    uVar2 = *(undefined4 *)(unaff_s0 + 0x30);
    if (iVar1 == 0) {
      iVar1 = FUN_00010d26(uVar2,&stack0x00000004,*(undefined2 *)(unaff_s0 + 0x14));
      uVar2 = *(undefined4 *)(unaff_s0 + 0x30);
      if (iVar1 == 0) {
        FUN_00010d3e(uVar2,0);
        *(undefined *)(unaff_s0 + 0x38) = 3;
        uVar2 = *unaff_s2;
        *unaff_s3 = *unaff_s3 + 1;
        _L0(uVar2,0,0,0);
        return unaff_s1;
      }
    }
    FUN_00010d10(uVar2);
    *(undefined4 *)(unaff_s0 + 0x30) = 0;
  }
  FUN_00010c8c(*unaff_s2,0,0,0);
  return 0x10;
}



undefined4 FUN_00010d02(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_s2;
  int *unaff_s3;
  
  iVar1 = FUN_00010d02();
  uVar2 = *(undefined4 *)(unaff_s0 + 0x30);
  if (iVar1 == 0) {
    iVar1 = FUN_00010d26(uVar2,&stack0x00000004,*(undefined2 *)(unaff_s0 + 0x14));
    uVar2 = *(undefined4 *)(unaff_s0 + 0x30);
    if (iVar1 == 0) {
      FUN_00010d3e(uVar2,0);
      *(undefined *)(unaff_s0 + 0x38) = 3;
      uVar2 = *unaff_s2;
      *unaff_s3 = *unaff_s3 + 1;
      _L0(uVar2,0,0,0);
      return unaff_s1;
    }
  }
  FUN_00010d10(uVar2);
  *(undefined4 *)(unaff_s0 + 0x30) = 0;
  FUN_00010c8c(*unaff_s2,0,0,0);
  return 0x10;
}



undefined4 FUN_00010d10(void)

{
  int unaff_s0;
  undefined4 *unaff_s2;
  
  FUN_00010d10();
  *(undefined4 *)(unaff_s0 + 0x30) = 0;
  FUN_00010c8c(*unaff_s2,0,0,0);
  return 0x10;
}



undefined4 FUN_00010d26(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_s2;
  int *unaff_s3;
  
  iVar1 = FUN_00010d26();
  if (iVar1 == 0) {
    FUN_00010d3e(*(undefined4 *)(unaff_s0 + 0x30),0);
    *(undefined *)(unaff_s0 + 0x38) = 3;
    uVar2 = *unaff_s2;
    *unaff_s3 = *unaff_s3 + 1;
    _L0(uVar2,0,0,0);
  }
  else {
    FUN_00010d10(*(undefined4 *)(unaff_s0 + 0x30));
    *(undefined4 *)(unaff_s0 + 0x30) = 0;
    FUN_00010c8c(*unaff_s2,0,0,0);
    unaff_s1 = 0x10;
  }
  return unaff_s1;
}



void FUN_00010d3e(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 *unaff_s2;
  int *unaff_s3;
  
  FUN_00010d3e();
  *(undefined *)(unaff_s0 + 0x38) = 3;
  uVar1 = *unaff_s2;
  *unaff_s3 = *unaff_s3 + 1;
  _L0(uVar1,0,0,0);
  return;
}



void _L0(void)

{
  _L0();
  return;
}



undefined4 FUN_00010d7c(void)

{
  int unaff_s0;
  int *piVar1;
  undefined4 unaff_s1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  iVar2 = FUN_00010d7c();
  if (iVar2 != 0) {
_L0:
    FUN_00010c8c(*unaff_s2,0,0,0);
    return 0x10;
  }
  uVar3 = FUN_00010d8c(in_stack_00000018,in_stack_0000001c);
  *(undefined4 *)(unaff_s0 + 0x34) = uVar3;
  piVar1 = unaff_s3 + unaff_s4 * 0xe;
  if (piVar1[0xd] == 0) goto _L0;
  iVar2 = FUN_00010daa(0x2e);
  piVar1[0xc] = iVar2;
  if (iVar2 == 0) {
    FUN_00010db8(piVar1[0xd]);
    piVar1[0xd] = 0;
    goto _L0;
  }
  if (piVar1[7] == 0) {
    if (*(char *)((int)piVar1 + 0x19) != '\x01') goto _L0;
  }
  else {
    if (*(char *)((int)piVar1 + 0x19) != '\x01') {
      iVar2 = _L0();
      if (iVar2 == 0) {
        FUN_00010e94(0,0x1cc,0,0);
      }
      FUN_00010ea0(piVar1[0xd],2);
      iVar2 = FUN_00010eac(iVar2,piVar1[7]);
      if (iVar2 != 0) {
        FUN_00010eb8(piVar1[0xc]);
        piVar1[0xc] = 0;
        _L0(piVar1[0xd]);
        uVar3 = *unaff_s2;
        piVar1[0xd] = 0;
        FUN_00010edc(uVar3,0,0,0);
        FUN_00010eec(0);
        return 0xe;
      }
      goto _L0;
    }
  }
  FUN_00010f0c(unaff_s3[unaff_s4 * 0xe + 0xd],0);
_L0:
  if ((unaff_s3 + unaff_s4 * 0xe)[0xb] != 0) {
    FUN_00010f24((unaff_s3 + unaff_s4 * 0xe)[0xd]);
  }
  piVar1 = unaff_s3 + unaff_s4 * 0xe;
  FUN_00010f3a(piVar1[0xc]);
  iVar2 = FUN_00010f52(piVar1[0xc],&stack0x00000004,*(undefined2 *)(piVar1 + 5),0);
  if (iVar2 != 0) {
    _LVL270(piVar1[0xc]);
    piVar1[0xc] = 0;
    _L0(piVar1[0xd]);
    piVar1[0xd] = 0;
    FUN_00010cd8(*unaff_s2,0,0,0);
    return 0xe;
  }
  FUN_00010f86(piVar1[0xc],0);
  *(undefined *)(piVar1 + 0xe) = 2;
  uVar3 = *unaff_s2;
  *unaff_s3 = *unaff_s3 + 1;
  _L0(uVar3,0,0,0);
  return unaff_s1;
}



undefined4 FUN_00010d8c(void)

{
  int unaff_s0;
  int *piVar1;
  undefined4 unaff_s1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  
  uVar2 = FUN_00010d8c();
  *(undefined4 *)(unaff_s0 + 0x34) = uVar2;
  piVar1 = unaff_s3 + unaff_s4 * 0xe;
  if (piVar1[0xd] == 0) {
_L0:
    FUN_00010c8c(*unaff_s2,0,0,0);
    return 0x10;
  }
  iVar3 = FUN_00010daa(0x2e);
  piVar1[0xc] = iVar3;
  if (iVar3 == 0) {
    FUN_00010db8(piVar1[0xd]);
    piVar1[0xd] = 0;
    goto _L0;
  }
  if (piVar1[7] == 0) {
    if (*(char *)((int)piVar1 + 0x19) != '\x01') goto _L0;
  }
  else {
    if (*(char *)((int)piVar1 + 0x19) != '\x01') {
      iVar3 = _L0();
      if (iVar3 == 0) {
        FUN_00010e94(0,0x1cc,0,0);
      }
      FUN_00010ea0(piVar1[0xd],2);
      iVar3 = FUN_00010eac(iVar3,piVar1[7]);
      if (iVar3 != 0) {
        FUN_00010eb8(piVar1[0xc]);
        piVar1[0xc] = 0;
        _L0(piVar1[0xd]);
        uVar2 = *unaff_s2;
        piVar1[0xd] = 0;
        FUN_00010edc(uVar2,0,0,0);
        FUN_00010eec(0);
        return 0xe;
      }
      goto _L0;
    }
  }
  FUN_00010f0c(unaff_s3[unaff_s4 * 0xe + 0xd],0);
_L0:
  if ((unaff_s3 + unaff_s4 * 0xe)[0xb] != 0) {
    FUN_00010f24((unaff_s3 + unaff_s4 * 0xe)[0xd]);
  }
  piVar1 = unaff_s3 + unaff_s4 * 0xe;
  FUN_00010f3a(piVar1[0xc]);
  iVar3 = FUN_00010f52(piVar1[0xc],&stack0x00000004,*(undefined2 *)(piVar1 + 5),0);
  if (iVar3 != 0) {
    _LVL270(piVar1[0xc]);
    piVar1[0xc] = 0;
    _L0(piVar1[0xd]);
    piVar1[0xd] = 0;
    FUN_00010cd8(*unaff_s2,0,0,0);
    return 0xe;
  }
  FUN_00010f86(piVar1[0xc],0);
  *(undefined *)(piVar1 + 0xe) = 2;
  uVar2 = *unaff_s2;
  *unaff_s3 = *unaff_s3 + 1;
  _L0(uVar2,0,0,0);
  return unaff_s1;
}



undefined4 FUN_00010daa(void)

{
  int unaff_s0;
  int *piVar1;
  undefined4 unaff_s1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  
  iVar2 = FUN_00010daa();
  *(int *)(unaff_s0 + 0x30) = iVar2;
  if (iVar2 == 0) {
    FUN_00010db8(*(undefined4 *)(unaff_s0 + 0x34));
    *(undefined4 *)(unaff_s0 + 0x34) = 0;
    FUN_00010c8c(*unaff_s2,0,0,0);
    return 0x10;
  }
  if (*(int *)(unaff_s0 + 0x1c) == 0) {
    if (*(char *)(unaff_s0 + 0x19) != '\x01') goto _L0;
  }
  else {
    if (*(char *)(unaff_s0 + 0x19) != '\x01') {
      iVar2 = _L0();
      if (iVar2 == 0) {
        FUN_00010e94(0,0x1cc,0,0);
      }
      FUN_00010ea0(*(undefined4 *)(unaff_s0 + 0x34),2);
      iVar2 = FUN_00010eac(iVar2,*(undefined4 *)(unaff_s0 + 0x1c));
      if (iVar2 != 0) {
        FUN_00010eb8(*(undefined4 *)(unaff_s0 + 0x30));
        *(undefined4 *)(unaff_s0 + 0x30) = 0;
        _L0(*(undefined4 *)(unaff_s0 + 0x34));
        uVar3 = *unaff_s2;
        *(undefined4 *)(unaff_s0 + 0x34) = 0;
        FUN_00010edc(uVar3,0,0,0);
        FUN_00010eec(0);
        return 0xe;
      }
      goto _L0;
    }
  }
  FUN_00010f0c(unaff_s3[unaff_s4 * 0xe + 0xd],0);
_L0:
  if ((unaff_s3 + unaff_s4 * 0xe)[0xb] != 0) {
    FUN_00010f24((unaff_s3 + unaff_s4 * 0xe)[0xd]);
  }
  piVar1 = unaff_s3 + unaff_s4 * 0xe;
  FUN_00010f3a(piVar1[0xc]);
  iVar2 = FUN_00010f52(piVar1[0xc],&stack0x00000004,*(undefined2 *)(piVar1 + 5),0);
  if (iVar2 != 0) {
    _LVL270(piVar1[0xc]);
    piVar1[0xc] = 0;
    _L0(piVar1[0xd]);
    piVar1[0xd] = 0;
    FUN_00010cd8(*unaff_s2,0,0,0);
    return 0xe;
  }
  FUN_00010f86(piVar1[0xc],0);
  *(undefined *)(piVar1 + 0xe) = 2;
  uVar3 = *unaff_s2;
  *unaff_s3 = *unaff_s3 + 1;
  _L0(uVar3,0,0,0);
  return unaff_s1;
}



undefined4 FUN_00010db8(void)

{
  int unaff_s0;
  undefined4 *unaff_s2;
  
  FUN_00010db8();
  *(undefined4 *)(unaff_s0 + 0x34) = 0;
  FUN_00010c8c(*unaff_s2,0,0,0);
  return 0x10;
}



undefined4 FUN_00010dce(void)

{
  int *piVar1;
  int unaff_s0;
  undefined4 unaff_s1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  iVar2 = FUN_00010dce();
  if (((iVar2 != 0) ||
      (iVar2 = FUN_00010dde(*(undefined4 *)(unaff_s0 + 0x24),&stack0x00000010), iVar2 != 0)) ||
     (iVar2 = FUN_00010dee(*(undefined4 *)(unaff_s0 + 0x28),&stack0x00000018), iVar2 != 0)) {
_L0:
    FUN_00010c8c(*unaff_s2,0,0,0);
    return 0x10;
  }
  uVar3 = _L0(in_stack_00000008,in_stack_0000000c,in_stack_00000018,in_stack_0000001c,0,0,
              in_stack_00000010,in_stack_00000014);
  *(undefined4 *)(unaff_s0 + 0x34) = uVar3;
  piVar1 = unaff_s3 + unaff_s4 * 0xe;
  if (piVar1[0xd] == 0) goto _L0;
  iVar2 = FUN_00010daa(0x2e);
  piVar1[0xc] = iVar2;
  if (iVar2 == 0) {
    FUN_00010db8(piVar1[0xd]);
    piVar1[0xd] = 0;
    goto _L0;
  }
  if (piVar1[7] == 0) {
    if (*(char *)((int)piVar1 + 0x19) != '\x01') goto _L0;
  }
  else {
    if (*(char *)((int)piVar1 + 0x19) != '\x01') {
      iVar2 = _L0();
      if (iVar2 == 0) {
        FUN_00010e94(0,0x1cc,0,0);
      }
      FUN_00010ea0(piVar1[0xd],2);
      iVar2 = FUN_00010eac(iVar2,piVar1[7]);
      if (iVar2 != 0) {
        FUN_00010eb8(piVar1[0xc]);
        piVar1[0xc] = 0;
        _L0(piVar1[0xd]);
        uVar3 = *unaff_s2;
        piVar1[0xd] = 0;
        FUN_00010edc(uVar3,0,0,0);
        FUN_00010eec(0);
        return 0xe;
      }
      goto _L0;
    }
  }
  FUN_00010f0c(unaff_s3[unaff_s4 * 0xe + 0xd],0);
_L0:
  if ((unaff_s3 + unaff_s4 * 0xe)[0xb] != 0) {
    FUN_00010f24((unaff_s3 + unaff_s4 * 0xe)[0xd]);
  }
  piVar1 = unaff_s3 + unaff_s4 * 0xe;
  FUN_00010f3a(piVar1[0xc]);
  iVar2 = FUN_00010f52(piVar1[0xc],&stack0x00000004,*(undefined2 *)(piVar1 + 5),0);
  if (iVar2 != 0) {
    _LVL270(piVar1[0xc]);
    piVar1[0xc] = 0;
    _L0(piVar1[0xd]);
    piVar1[0xd] = 0;
    FUN_00010cd8(*unaff_s2,0,0,0);
    return 0xe;
  }
  FUN_00010f86(piVar1[0xc],0);
  *(undefined *)(piVar1 + 0xe) = 2;
  uVar3 = *unaff_s2;
  *unaff_s3 = *unaff_s3 + 1;
  _L0(uVar3,0,0,0);
  return unaff_s1;
}



undefined4 FUN_00010dde(void)

{
  int *piVar1;
  int unaff_s0;
  undefined4 unaff_s1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  iVar2 = FUN_00010dde();
  if ((iVar2 != 0) ||
     (iVar2 = FUN_00010dee(*(undefined4 *)(unaff_s0 + 0x28),&stack0x00000018), iVar2 != 0)) {
_L0:
    FUN_00010c8c(*unaff_s2,0,0,0);
    return 0x10;
  }
  uVar3 = _L0(in_stack_00000008,in_stack_0000000c,in_stack_00000018,in_stack_0000001c,0,0,
              in_stack_00000010,in_stack_00000014);
  *(undefined4 *)(unaff_s0 + 0x34) = uVar3;
  piVar1 = unaff_s3 + unaff_s4 * 0xe;
  if (piVar1[0xd] == 0) goto _L0;
  iVar2 = FUN_00010daa(0x2e);
  piVar1[0xc] = iVar2;
  if (iVar2 == 0) {
    FUN_00010db8(piVar1[0xd]);
    piVar1[0xd] = 0;
    goto _L0;
  }
  if (piVar1[7] == 0) {
    if (*(char *)((int)piVar1 + 0x19) != '\x01') goto _L0;
  }
  else {
    if (*(char *)((int)piVar1 + 0x19) != '\x01') {
      iVar2 = _L0();
      if (iVar2 == 0) {
        FUN_00010e94(0,0x1cc,0,0);
      }
      FUN_00010ea0(piVar1[0xd],2);
      iVar2 = FUN_00010eac(iVar2,piVar1[7]);
      if (iVar2 != 0) {
        FUN_00010eb8(piVar1[0xc]);
        piVar1[0xc] = 0;
        _L0(piVar1[0xd]);
        uVar3 = *unaff_s2;
        piVar1[0xd] = 0;
        FUN_00010edc(uVar3,0,0,0);
        FUN_00010eec(0);
        return 0xe;
      }
      goto _L0;
    }
  }
  FUN_00010f0c(unaff_s3[unaff_s4 * 0xe + 0xd],0);
_L0:
  if ((unaff_s3 + unaff_s4 * 0xe)[0xb] != 0) {
    FUN_00010f24((unaff_s3 + unaff_s4 * 0xe)[0xd]);
  }
  piVar1 = unaff_s3 + unaff_s4 * 0xe;
  FUN_00010f3a(piVar1[0xc]);
  iVar2 = FUN_00010f52(piVar1[0xc],&stack0x00000004,*(undefined2 *)(piVar1 + 5),0);
  if (iVar2 != 0) {
    _LVL270(piVar1[0xc]);
    piVar1[0xc] = 0;
    _L0(piVar1[0xd]);
    piVar1[0xd] = 0;
    FUN_00010cd8(*unaff_s2,0,0,0);
    return 0xe;
  }
  FUN_00010f86(piVar1[0xc],0);
  *(undefined *)(piVar1 + 0xe) = 2;
  uVar3 = *unaff_s2;
  *unaff_s3 = *unaff_s3 + 1;
  _L0(uVar3,0,0,0);
  return unaff_s1;
}



undefined4 FUN_00010dee(void)

{
  int *piVar1;
  int unaff_s0;
  undefined4 unaff_s1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  iVar2 = FUN_00010dee();
  if (iVar2 != 0) {
_L0:
    FUN_00010c8c(*unaff_s2,0,0,0);
    return 0x10;
  }
  uVar3 = _L0(in_stack_00000008,in_stack_0000000c,in_stack_00000018,in_stack_0000001c,0,0,
              in_stack_00000010,in_stack_00000014);
  *(undefined4 *)(unaff_s0 + 0x34) = uVar3;
  piVar1 = unaff_s3 + unaff_s4 * 0xe;
  if (piVar1[0xd] == 0) goto _L0;
  iVar2 = FUN_00010daa(0x2e);
  piVar1[0xc] = iVar2;
  if (iVar2 == 0) {
    FUN_00010db8(piVar1[0xd]);
    piVar1[0xd] = 0;
    goto _L0;
  }
  if (piVar1[7] == 0) {
    if (*(char *)((int)piVar1 + 0x19) != '\x01') goto _L0;
  }
  else {
    if (*(char *)((int)piVar1 + 0x19) != '\x01') {
      iVar2 = _L0();
      if (iVar2 == 0) {
        FUN_00010e94(0,0x1cc,0,0);
      }
      FUN_00010ea0(piVar1[0xd],2);
      iVar2 = FUN_00010eac(iVar2,piVar1[7]);
      if (iVar2 != 0) {
        FUN_00010eb8(piVar1[0xc]);
        piVar1[0xc] = 0;
        _L0(piVar1[0xd]);
        uVar3 = *unaff_s2;
        piVar1[0xd] = 0;
        FUN_00010edc(uVar3,0,0,0);
        FUN_00010eec(0);
        return 0xe;
      }
      goto _L0;
    }
  }
  FUN_00010f0c(unaff_s3[unaff_s4 * 0xe + 0xd],0);
_L0:
  if ((unaff_s3 + unaff_s4 * 0xe)[0xb] != 0) {
    FUN_00010f24((unaff_s3 + unaff_s4 * 0xe)[0xd]);
  }
  piVar1 = unaff_s3 + unaff_s4 * 0xe;
  FUN_00010f3a(piVar1[0xc]);
  iVar2 = FUN_00010f52(piVar1[0xc],&stack0x00000004,*(undefined2 *)(piVar1 + 5),0);
  if (iVar2 != 0) {
    _LVL270(piVar1[0xc]);
    piVar1[0xc] = 0;
    _L0(piVar1[0xd]);
    piVar1[0xd] = 0;
    FUN_00010cd8(*unaff_s2,0,0,0);
    return 0xe;
  }
  FUN_00010f86(piVar1[0xc],0);
  *(undefined *)(piVar1 + 0xe) = 2;
  uVar3 = *unaff_s2;
  *unaff_s3 = *unaff_s3 + 1;
  _L0(uVar3,0,0,0);
  return unaff_s1;
}



undefined4 _L0(void)

{
  int *piVar1;
  int unaff_s0;
  undefined4 unaff_s1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  
  uVar3 = _L0();
  *(undefined4 *)(unaff_s0 + 0x34) = uVar3;
  piVar1 = unaff_s3 + unaff_s4 * 0xe;
  if (piVar1[0xd] == 0) {
_L0:
    FUN_00010c8c(*unaff_s2,0,0,0);
    return 0x10;
  }
  iVar2 = FUN_00010daa(0x2e);
  piVar1[0xc] = iVar2;
  if (iVar2 == 0) {
    FUN_00010db8(piVar1[0xd]);
    piVar1[0xd] = 0;
    goto _L0;
  }
  if (piVar1[7] == 0) {
    if (*(char *)((int)piVar1 + 0x19) != '\x01') goto _L0;
  }
  else {
    if (*(char *)((int)piVar1 + 0x19) != '\x01') {
      iVar2 = _L0();
      if (iVar2 == 0) {
        FUN_00010e94(0,0x1cc,0,0);
      }
      FUN_00010ea0(piVar1[0xd],2);
      iVar2 = FUN_00010eac(iVar2,piVar1[7]);
      if (iVar2 != 0) {
        FUN_00010eb8(piVar1[0xc]);
        piVar1[0xc] = 0;
        _L0(piVar1[0xd]);
        uVar3 = *unaff_s2;
        piVar1[0xd] = 0;
        FUN_00010edc(uVar3,0,0,0);
        FUN_00010eec(0);
        return 0xe;
      }
      goto _L0;
    }
  }
  FUN_00010f0c(unaff_s3[unaff_s4 * 0xe + 0xd],0);
_L0:
  if ((unaff_s3 + unaff_s4 * 0xe)[0xb] != 0) {
    FUN_00010f24((unaff_s3 + unaff_s4 * 0xe)[0xd]);
  }
  piVar1 = unaff_s3 + unaff_s4 * 0xe;
  FUN_00010f3a(piVar1[0xc]);
  iVar2 = FUN_00010f52(piVar1[0xc],&stack0x00000004,*(undefined2 *)(piVar1 + 5),0);
  if (iVar2 != 0) {
    _LVL270(piVar1[0xc]);
    piVar1[0xc] = 0;
    _L0(piVar1[0xd]);
    piVar1[0xd] = 0;
    FUN_00010cd8(*unaff_s2,0,0,0);
    return 0xe;
  }
  FUN_00010f86(piVar1[0xc],0);
  *(undefined *)(piVar1 + 0xe) = 2;
  uVar3 = *unaff_s2;
  *unaff_s3 = *unaff_s3 + 1;
  _L0(uVar3,0,0,0);
  return unaff_s1;
}



undefined4 FUN_00010e1c(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_s2;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  iVar1 = FUN_00010e1c();
  if ((iVar1 == 0) &&
     (iVar1 = FUN_00010e2c(*(undefined4 *)(unaff_s0 + 0x28),&stack0x00000018), iVar1 == 0)) {
    uVar2 = _L0(0,in_stack_00000018,in_stack_0000001c,0,0,in_stack_00000010,in_stack_00000014);
    return uVar2;
  }
  FUN_00010c8c(*unaff_s2,0,0,0);
  return 0x10;
}



undefined4 FUN_00010e2c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_s2;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000018;
  undefined4 in_stack_0000001c;
  
  iVar1 = FUN_00010e2c();
  if (iVar1 == 0) {
    uVar2 = _L0(0,in_stack_00000018,in_stack_0000001c,0,0,in_stack_00000010,in_stack_00000014);
    return uVar2;
  }
  FUN_00010c8c(*unaff_s2,0,0,0);
  return 0x10;
}



undefined4 FUN_00010e52(void)

{
  FUN_00010e52();
  return 6;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int *piVar1;
  undefined4 unaff_s1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  
  iVar2 = _L0();
  if (iVar2 == 0) {
    FUN_00010e94(0,0x1cc,0,0);
  }
  FUN_00010ea0(*(undefined4 *)(unaff_s0 + 0x34),2);
  iVar2 = FUN_00010eac(iVar2,*(undefined4 *)(unaff_s0 + 0x1c));
  if (iVar2 == 0) {
    if ((unaff_s3 + unaff_s4 * 0xe)[0xb] != 0) {
      FUN_00010f24((unaff_s3 + unaff_s4 * 0xe)[0xd]);
    }
    piVar1 = unaff_s3 + unaff_s4 * 0xe;
    FUN_00010f3a(piVar1[0xc]);
    iVar2 = FUN_00010f52(piVar1[0xc],&stack0x00000004,*(undefined2 *)(piVar1 + 5),0);
    if (iVar2 == 0) {
      FUN_00010f86(piVar1[0xc],0);
      *(undefined *)(piVar1 + 0xe) = 2;
      uVar3 = *unaff_s2;
      *unaff_s3 = *unaff_s3 + 1;
      _L0(uVar3,0,0,0);
      return unaff_s1;
    }
    _LVL270(piVar1[0xc]);
    piVar1[0xc] = 0;
    _L0(piVar1[0xd]);
    piVar1[0xd] = 0;
    FUN_00010cd8(*unaff_s2,0,0,0);
  }
  else {
    FUN_00010eb8(*(undefined4 *)(unaff_s0 + 0x30));
    *(undefined4 *)(unaff_s0 + 0x30) = 0;
    _L0(*(undefined4 *)(unaff_s0 + 0x34));
    uVar3 = *unaff_s2;
    *(undefined4 *)(unaff_s0 + 0x34) = 0;
    FUN_00010edc(uVar3,0,0,0);
    FUN_00010eec(0);
  }
  return 0xe;
}



undefined4 FUN_00010e94(void)

{
  int unaff_s0;
  int *piVar1;
  undefined4 unaff_s1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  
  FUN_00010e94();
  FUN_00010ea0(*(undefined4 *)(unaff_s0 + 0x34),2);
  iVar2 = FUN_00010eac(*(undefined4 *)(unaff_s0 + 0x1c));
  if (iVar2 == 0) {
    if ((unaff_s3 + unaff_s4 * 0xe)[0xb] != 0) {
      FUN_00010f24((unaff_s3 + unaff_s4 * 0xe)[0xd]);
    }
    piVar1 = unaff_s3 + unaff_s4 * 0xe;
    FUN_00010f3a(piVar1[0xc]);
    iVar2 = FUN_00010f52(piVar1[0xc],&stack0x00000004,*(undefined2 *)(piVar1 + 5),0);
    if (iVar2 == 0) {
      FUN_00010f86(piVar1[0xc],0);
      *(undefined *)(piVar1 + 0xe) = 2;
      uVar3 = *unaff_s2;
      *unaff_s3 = *unaff_s3 + 1;
      _L0(uVar3,0,0,0);
      return unaff_s1;
    }
    _LVL270(piVar1[0xc]);
    piVar1[0xc] = 0;
    _L0(piVar1[0xd]);
    piVar1[0xd] = 0;
    FUN_00010cd8(*unaff_s2,0,0,0);
  }
  else {
    FUN_00010eb8(*(undefined4 *)(unaff_s0 + 0x30));
    *(undefined4 *)(unaff_s0 + 0x30) = 0;
    _L0(*(undefined4 *)(unaff_s0 + 0x34));
    uVar3 = *unaff_s2;
    *(undefined4 *)(unaff_s0 + 0x34) = 0;
    FUN_00010edc(uVar3,0,0,0);
    FUN_00010eec(0);
  }
  return 0xe;
}



undefined4 FUN_00010ea0(void)

{
  int unaff_s0;
  int *piVar1;
  undefined4 unaff_s1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  
  FUN_00010ea0();
  iVar2 = FUN_00010eac(*(undefined4 *)(unaff_s0 + 0x1c));
  if (iVar2 == 0) {
    if ((unaff_s3 + unaff_s4 * 0xe)[0xb] != 0) {
      FUN_00010f24((unaff_s3 + unaff_s4 * 0xe)[0xd]);
    }
    piVar1 = unaff_s3 + unaff_s4 * 0xe;
    FUN_00010f3a(piVar1[0xc]);
    iVar2 = FUN_00010f52(piVar1[0xc],&stack0x00000004,*(undefined2 *)(piVar1 + 5),0);
    if (iVar2 == 0) {
      FUN_00010f86(piVar1[0xc],0);
      *(undefined *)(piVar1 + 0xe) = 2;
      uVar3 = *unaff_s2;
      *unaff_s3 = *unaff_s3 + 1;
      _L0(uVar3,0,0,0);
      return unaff_s1;
    }
    _LVL270(piVar1[0xc]);
    piVar1[0xc] = 0;
    _L0(piVar1[0xd]);
    piVar1[0xd] = 0;
    FUN_00010cd8(*unaff_s2,0,0,0);
  }
  else {
    FUN_00010eb8(*(undefined4 *)(unaff_s0 + 0x30));
    *(undefined4 *)(unaff_s0 + 0x30) = 0;
    _L0(*(undefined4 *)(unaff_s0 + 0x34));
    uVar3 = *unaff_s2;
    *(undefined4 *)(unaff_s0 + 0x34) = 0;
    FUN_00010edc(uVar3,0,0,0);
    FUN_00010eec(0);
  }
  return 0xe;
}



undefined4 FUN_00010eac(void)

{
  int unaff_s0;
  int *piVar1;
  undefined4 unaff_s1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  
  iVar2 = FUN_00010eac();
  if (iVar2 == 0) {
    if ((unaff_s3 + unaff_s4 * 0xe)[0xb] != 0) {
      FUN_00010f24((unaff_s3 + unaff_s4 * 0xe)[0xd]);
    }
    piVar1 = unaff_s3 + unaff_s4 * 0xe;
    FUN_00010f3a(piVar1[0xc]);
    iVar2 = FUN_00010f52(piVar1[0xc],&stack0x00000004,*(undefined2 *)(piVar1 + 5),0);
    if (iVar2 == 0) {
      FUN_00010f86(piVar1[0xc],0);
      *(undefined *)(piVar1 + 0xe) = 2;
      uVar3 = *unaff_s2;
      *unaff_s3 = *unaff_s3 + 1;
      _L0(uVar3,0,0,0);
      return unaff_s1;
    }
    _LVL270(piVar1[0xc]);
    piVar1[0xc] = 0;
    _L0(piVar1[0xd]);
    piVar1[0xd] = 0;
    FUN_00010cd8(*unaff_s2,0,0,0);
  }
  else {
    FUN_00010eb8(*(undefined4 *)(unaff_s0 + 0x30));
    *(undefined4 *)(unaff_s0 + 0x30) = 0;
    _L0(*(undefined4 *)(unaff_s0 + 0x34));
    uVar3 = *unaff_s2;
    *(undefined4 *)(unaff_s0 + 0x34) = 0;
    FUN_00010edc(uVar3,0,0,0);
    FUN_00010eec(0);
  }
  return 0xe;
}



undefined4 FUN_00010eb8(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 *unaff_s2;
  
  FUN_00010eb8();
  *(undefined4 *)(unaff_s0 + 0x30) = 0;
  _L0(*(undefined4 *)(unaff_s0 + 0x34));
  uVar1 = *unaff_s2;
  *(undefined4 *)(unaff_s0 + 0x34) = 0;
  FUN_00010edc(uVar1,0,0,0);
  FUN_00010eec(0);
  return 0xe;
}



undefined4 _L0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 *unaff_s2;
  
  _L0();
  uVar1 = *unaff_s2;
  *(undefined4 *)(unaff_s0 + 0x34) = 0;
  FUN_00010edc(uVar1,0,0,0);
  FUN_00010eec(0);
  return 0xe;
}



undefined4 FUN_00010edc(void)

{
  FUN_00010edc();
  FUN_00010eec(0);
  return 0xe;
}



undefined4 FUN_00010eec(void)

{
  FUN_00010eec();
  return 0xe;
}



undefined4 FUN_00010f0c(void)

{
  int *piVar1;
  undefined4 unaff_s1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  
  FUN_00010f0c();
  if ((unaff_s3 + unaff_s4 * 0xe)[0xb] != 0) {
    FUN_00010f24((unaff_s3 + unaff_s4 * 0xe)[0xd]);
  }
  piVar1 = unaff_s3 + unaff_s4 * 0xe;
  FUN_00010f3a(piVar1[0xc]);
  iVar3 = FUN_00010f52(piVar1[0xc],&stack0x00000004,*(undefined2 *)(piVar1 + 5),0);
  if (iVar3 == 0) {
    FUN_00010f86(piVar1[0xc],0);
    *(undefined *)(piVar1 + 0xe) = 2;
    uVar2 = *unaff_s2;
    *unaff_s3 = *unaff_s3 + 1;
    _L0(uVar2,0,0,0);
  }
  else {
    _LVL270(piVar1[0xc]);
    piVar1[0xc] = 0;
    _L0(piVar1[0xd]);
    piVar1[0xd] = 0;
    FUN_00010cd8(*unaff_s2,0,0,0);
    unaff_s1 = 0xe;
  }
  return unaff_s1;
}



undefined4 FUN_00010f24(void)

{
  int *piVar1;
  undefined4 unaff_s1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  
  FUN_00010f24();
  piVar1 = unaff_s3 + unaff_s4 * 0xe;
  FUN_00010f3a(piVar1[0xc]);
  iVar3 = FUN_00010f52(piVar1[0xc],&stack0x00000004,*(undefined2 *)(piVar1 + 5),0);
  if (iVar3 == 0) {
    FUN_00010f86(piVar1[0xc],0);
    *(undefined *)(piVar1 + 0xe) = 2;
    uVar2 = *unaff_s2;
    *unaff_s3 = *unaff_s3 + 1;
    _L0(uVar2,0,0,0);
  }
  else {
    _LVL270(piVar1[0xc]);
    piVar1[0xc] = 0;
    _L0(piVar1[0xd]);
    piVar1[0xd] = 0;
    FUN_00010cd8(*unaff_s2,0,0,0);
    unaff_s1 = 0xe;
  }
  return unaff_s1;
}



undefined4 FUN_00010f3a(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  undefined4 uVar1;
  int iVar2;
  undefined4 *unaff_s2;
  int *unaff_s3;
  
  FUN_00010f3a();
  iVar2 = FUN_00010f52(*(undefined4 *)(unaff_s0 + 0x30),&stack0x00000004,
                       *(undefined2 *)(unaff_s0 + 0x14),0);
  if (iVar2 == 0) {
    FUN_00010f86(*(undefined4 *)(unaff_s0 + 0x30),0);
    *(undefined *)(unaff_s0 + 0x38) = 2;
    uVar1 = *unaff_s2;
    *unaff_s3 = *unaff_s3 + 1;
    _L0(uVar1,0,0,0);
  }
  else {
    _LVL270(*(undefined4 *)(unaff_s0 + 0x30));
    *(undefined4 *)(unaff_s0 + 0x30) = 0;
    _L0(*(undefined4 *)(unaff_s0 + 0x34));
    *(undefined4 *)(unaff_s0 + 0x34) = 0;
    FUN_00010cd8(*unaff_s2,0,0,0);
    unaff_s1 = 0xe;
  }
  return unaff_s1;
}



undefined4 FUN_00010f52(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  undefined4 uVar1;
  int iVar2;
  undefined4 *unaff_s2;
  int *unaff_s3;
  
  iVar2 = FUN_00010f52();
  if (iVar2 == 0) {
    FUN_00010f86(*(undefined4 *)(unaff_s0 + 0x30),0);
    *(undefined *)(unaff_s0 + 0x38) = 2;
    uVar1 = *unaff_s2;
    *unaff_s3 = *unaff_s3 + 1;
    _L0(uVar1,0,0,0);
  }
  else {
    _LVL270(*(undefined4 *)(unaff_s0 + 0x30));
    *(undefined4 *)(unaff_s0 + 0x30) = 0;
    _L0(*(undefined4 *)(unaff_s0 + 0x34));
    *(undefined4 *)(unaff_s0 + 0x34) = 0;
    FUN_00010cd8(*unaff_s2,0,0,0);
    unaff_s1 = 0xe;
  }
  return unaff_s1;
}



undefined4 _LVL270(void)

{
  int unaff_s0;
  undefined4 *unaff_s2;
  
  _LVL270();
  *(undefined4 *)(unaff_s0 + 0x30) = 0;
  _L0(*(undefined4 *)(unaff_s0 + 0x34));
  *(undefined4 *)(unaff_s0 + 0x34) = 0;
  FUN_00010cd8(*unaff_s2,0,0,0);
  return 0xe;
}



undefined4 _L0(void)

{
  int unaff_s0;
  undefined4 *unaff_s2;
  
  _L0();
  *(undefined4 *)(unaff_s0 + 0x34) = 0;
  FUN_00010cd8(*unaff_s2,0,0,0);
  return 0xe;
}



void FUN_00010f86(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 *unaff_s2;
  int *unaff_s3;
  
  FUN_00010f86();
  *(undefined *)(unaff_s0 + 0x38) = 2;
  uVar1 = *unaff_s2;
  *unaff_s3 = *unaff_s3 + 1;
  _L0(uVar1,0,0,0);
  return;
}



AT_ERROR_CODE bl_cipsendbuf(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  return AEC_OK;
}



AT_ERROR_CODE bl_cipclose(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)&para->u;
  if (4 < iVar2) {
    return AEC_PARA_ERROR;
  }
  iVar3 = iVar2 * 0x38;
  if (*(char *)(iVar3 + 0x38) == '\0') {
    return AEC_SOCKET_EXISTING;
  }
  FUN_00010fdc(0);
  FUN_00010fee(0,iVar2);
  FUN_00010ffa(0);
  FUN_0001100e(iRam00000000,0xffffffff);
  if (*(char *)(iVar3 + 0x38) == '\0') {
    FUN_000110b4(iRam00000000,0,0,0);
    return AEC_DISCONNECT;
  }
  cVar1 = *(char *)(iVar3 + 0x18);
  *(undefined *)(iVar3 + 0x38) = 0;
  if (cVar1 == '\x02') {
    FUN_0001102c(*(undefined4 *)(iVar3 + 0x30));
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x03') {
        FUN_0001108e(*(undefined4 *)(iVar3 + 0x30));
        *(undefined4 *)(iVar3 + 0x30) = 0;
        _L0(*(undefined4 *)(iVar3 + 0x34));
        *(undefined4 *)(iVar3 + 0x34) = 0;
      }
      goto _L0;
    }
    FUN_0001107c(*(undefined4 *)(iVar3 + 0x30));
  }
  *(undefined4 *)(iVar3 + 0x30) = 0;
_L0:
  iVar3 = iRam00000000;
  iRam00000000 = iRam00000000 + -1;
  *(undefined *)(iVar2 * 0x38 + 0x18) = 0;
  _L0(iVar3,0,0,0);
  return AEC_OK;
}



undefined4 FUN_00010fdc(void)

{
  char cVar1;
  undefined4 uVar2;
  int unaff_s0;
  int unaff_s1;
  int *unaff_s2;
  
  FUN_00010fdc();
  FUN_00010fee(0);
  FUN_00010ffa();
  FUN_0001100e(uRam00000000,0xffffffff);
  if (*(char *)(unaff_s0 + 0x38) == '\0') {
    FUN_000110b4(uRam00000000,0,0,0);
    return 0x12;
  }
  cVar1 = *(char *)(unaff_s0 + 0x18);
  *(undefined *)(unaff_s0 + 0x38) = 0;
  if (cVar1 == '\x02') {
    FUN_0001102c(*(undefined4 *)(unaff_s0 + 0x30));
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x03') {
        FUN_0001108e(*(undefined4 *)(unaff_s0 + 0x30));
        *(undefined4 *)(unaff_s0 + 0x30) = 0;
        _L0(*(undefined4 *)(unaff_s0 + 0x34));
        *(undefined4 *)(unaff_s0 + 0x34) = 0;
      }
      goto _L0;
    }
    FUN_0001107c(*(undefined4 *)(unaff_s0 + 0x30));
  }
  *(undefined4 *)(unaff_s0 + 0x30) = 0;
_L0:
  uVar2 = uRam00000000;
  *unaff_s2 = *unaff_s2 + -1;
  *(undefined *)(unaff_s2 + unaff_s1 * 0xe + 6) = 0;
  _L0(uVar2,0,0,0);
  return 0;
}



undefined4 FUN_00010fee(void)

{
  char cVar1;
  undefined4 uVar2;
  int unaff_s0;
  int unaff_s1;
  int *unaff_s2;
  
  FUN_00010fee();
  FUN_00010ffa();
  FUN_0001100e(uRam00000000,0xffffffff);
  if (*(char *)(unaff_s0 + 0x38) == '\0') {
    FUN_000110b4(uRam00000000,0,0,0);
    return 0x12;
  }
  cVar1 = *(char *)(unaff_s0 + 0x18);
  *(undefined *)(unaff_s0 + 0x38) = 0;
  if (cVar1 == '\x02') {
    FUN_0001102c(*(undefined4 *)(unaff_s0 + 0x30));
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x03') {
        FUN_0001108e(*(undefined4 *)(unaff_s0 + 0x30));
        *(undefined4 *)(unaff_s0 + 0x30) = 0;
        _L0(*(undefined4 *)(unaff_s0 + 0x34));
        *(undefined4 *)(unaff_s0 + 0x34) = 0;
      }
      goto _L0;
    }
    FUN_0001107c(*(undefined4 *)(unaff_s0 + 0x30));
  }
  *(undefined4 *)(unaff_s0 + 0x30) = 0;
_L0:
  uVar2 = uRam00000000;
  *unaff_s2 = *unaff_s2 + -1;
  *(undefined *)(unaff_s2 + unaff_s1 * 0xe + 6) = 0;
  _L0(uVar2,0,0,0);
  return 0;
}



undefined4 FUN_00010ffa(void)

{
  char cVar1;
  undefined4 uVar2;
  int unaff_s0;
  int unaff_s1;
  int *unaff_s2;
  
  FUN_00010ffa();
  FUN_0001100e(uRam00000000,0xffffffff);
  if (*(char *)(unaff_s0 + 0x38) == '\0') {
    FUN_000110b4(uRam00000000,0,0,0);
    return 0x12;
  }
  cVar1 = *(char *)(unaff_s0 + 0x18);
  *(undefined *)(unaff_s0 + 0x38) = 0;
  if (cVar1 == '\x02') {
    FUN_0001102c(*(undefined4 *)(unaff_s0 + 0x30));
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x03') {
        FUN_0001108e(*(undefined4 *)(unaff_s0 + 0x30));
        *(undefined4 *)(unaff_s0 + 0x30) = 0;
        _L0(*(undefined4 *)(unaff_s0 + 0x34));
        *(undefined4 *)(unaff_s0 + 0x34) = 0;
      }
      goto _L0;
    }
    FUN_0001107c(*(undefined4 *)(unaff_s0 + 0x30));
  }
  *(undefined4 *)(unaff_s0 + 0x30) = 0;
_L0:
  uVar2 = uRam00000000;
  *unaff_s2 = *unaff_s2 + -1;
  *(undefined *)(unaff_s2 + unaff_s1 * 0xe + 6) = 0;
  _L0(uVar2,0,0,0);
  return 0;
}



undefined4 FUN_0001100e(void)

{
  char cVar1;
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar2;
  int *unaff_s2;
  undefined4 *unaff_s3;
  undefined4 *unaff_s4;
  
  FUN_0001100e();
  if (*(char *)(unaff_s0 + 0x38) == '\0') {
    FUN_000110b4(*unaff_s3,0,0,0);
    return 0x12;
  }
  cVar1 = *(char *)(unaff_s0 + 0x18);
  *(undefined *)(unaff_s0 + 0x38) = 0;
  if (cVar1 == '\x02') {
    FUN_0001102c(*(undefined4 *)(unaff_s0 + 0x30));
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x03') {
        FUN_0001108e(*(undefined4 *)(unaff_s0 + 0x30));
        *(undefined4 *)(unaff_s0 + 0x30) = 0;
        _L0(*(undefined4 *)(unaff_s0 + 0x34));
        *(undefined4 *)(unaff_s0 + 0x34) = 0;
      }
      goto _L0;
    }
    FUN_0001107c(*(undefined4 *)(unaff_s0 + 0x30));
  }
  *(undefined4 *)(unaff_s0 + 0x30) = 0;
_L0:
  uVar2 = *unaff_s4;
  *unaff_s2 = *unaff_s2 + -1;
  *(undefined *)(unaff_s2 + unaff_s1 * 0xe + 6) = 0;
  _L0(uVar2,0,0,0);
  return 0;
}



undefined4 FUN_0001102c(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int *unaff_s2;
  undefined4 *unaff_s4;
  
  FUN_0001102c();
  *(undefined4 *)(unaff_s0 + 0x30) = 0;
  uVar1 = *unaff_s4;
  *unaff_s2 = *unaff_s2 + -1;
  *(undefined *)(unaff_s2 + unaff_s1 * 0xe + 6) = 0;
  _L0(uVar1,0,0,0);
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



undefined4 FUN_0001107c(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int *unaff_s2;
  undefined4 *unaff_s4;
  
  FUN_0001107c();
  *(undefined4 *)(unaff_s0 + 0x30) = 0;
  uVar1 = *unaff_s4;
  *unaff_s2 = *unaff_s2 + -1;
  *(undefined *)(unaff_s2 + unaff_s1 * 0xe + 6) = 0;
  _L0(uVar1,0,0,0);
  return 0;
}



undefined4 FUN_0001108e(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int *unaff_s2;
  undefined4 *unaff_s4;
  
  FUN_0001108e();
  *(undefined4 *)(unaff_s0 + 0x30) = 0;
  _L0(*(undefined4 *)(unaff_s0 + 0x34));
  *(undefined4 *)(unaff_s0 + 0x34) = 0;
  uVar1 = *unaff_s4;
  *unaff_s2 = *unaff_s2 + -1;
  *(undefined *)(unaff_s2 + unaff_s1 * 0xe + 6) = 0;
  _L0(uVar1,0,0,0);
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int *unaff_s2;
  undefined4 *unaff_s4;
  
  _L0();
  *(undefined4 *)(unaff_s0 + 0x34) = 0;
  uVar1 = *unaff_s4;
  *unaff_s2 = *unaff_s2 + -1;
  *(undefined *)(unaff_s2 + unaff_s1 * 0xe + 6) = 0;
  _L0(uVar1,0,0,0);
  return 0;
}



undefined4 FUN_000110b4(void)

{
  FUN_000110b4();
  return 0x12;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

AT_ERROR_CODE bl_tcpserver(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)&(para->u).field_0x4;
  if (*(int *)&(para->u).field_0x8 == 0) {
    if (iVar1 == 0) {
      if (uRam00000000 == 0) {
        return AEC_SOCKET_FAIL;
      }
      uRam00000000 = 0;
      if (_DAT_00000004 != 1) {
        uRam00000000 = 0;
        return AEC_OK;
      }
      _LVL312(_DAT_00000020);
      _DAT_00000020 = 0;
      return AEC_OK;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 3;
    if (iVar1 == 0) {
      return AEC_UNSUPPORTED;
    }
  }
  if (uRam00000000 != 0) {
    return AEC_SOCKET_FAIL;
  }
  uRam00000000 = *(uint *)&para->u & 0xffff;
  _DAT_00000004 = 1;
  _L0(0,0,0x28);
  if (uVar2 == 1) {
    _DAT_00000020 = FUN_0001113c(0);
    if (_DAT_00000020 == 0) {
      return AEC_NOT_ENOUGH_MEMORY;
    }
    iVar1 = FUN_00011156(0,uRam00000000 & 0xffff);
    if (iVar1 != 0) {
      _LVL304(_DAT_00000020);
      _DAT_00000020 = 0;
      return AEC_BIND_FAIL;
    }
    _DAT_00000020 = FUN_00011178(_DAT_00000020,5,0);
    if (_DAT_00000020 == 0) {
      return AEC_SOCKET_FAIL;
    }
    uRam00000000 = uVar2;
    _L0(0);
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  int unaff_s0;
  undefined2 *unaff_s1;
  int iVar1;
  int *unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  _L0();
  if (unaff_s3 == unaff_s4) {
    iVar1 = FUN_0001113c(0);
    *(int *)(unaff_s0 + 0x20) = iVar1;
    if (iVar1 == 0) {
      return 0x14;
    }
    iVar1 = FUN_00011156(0,*unaff_s1);
    if (iVar1 != 0) {
      _LVL304(*(undefined4 *)(unaff_s0 + 0x20));
      *(undefined4 *)(unaff_s0 + 0x20) = 0;
      return 0xf;
    }
    iVar1 = FUN_00011178(*(undefined4 *)(unaff_s0 + 0x20),5,0);
    *(int *)(unaff_s0 + 0x20) = iVar1;
    if (iVar1 == 0) {
      return 0x10;
    }
    *unaff_s2 = unaff_s3;
    _L0(0);
  }
  return 0;
}



undefined4 FUN_0001113c(void)

{
  int unaff_s0;
  undefined2 *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_s2;
  undefined4 unaff_s3;
  
  iVar1 = FUN_0001113c();
  *(int *)(unaff_s0 + 0x20) = iVar1;
  uVar2 = 0x14;
  if (iVar1 != 0) {
    iVar1 = FUN_00011156(0,*unaff_s1);
    if (iVar1 == 0) {
      iVar1 = FUN_00011178(*(undefined4 *)(unaff_s0 + 0x20),5,0);
      *(int *)(unaff_s0 + 0x20) = iVar1;
      if (iVar1 == 0) {
        uVar2 = 0x10;
      }
      else {
        *unaff_s2 = unaff_s3;
        _L0(0);
        uVar2 = 0;
      }
    }
    else {
      _LVL304(*(undefined4 *)(unaff_s0 + 0x20));
      uVar2 = 0xf;
      *(undefined4 *)(unaff_s0 + 0x20) = 0;
    }
  }
  return uVar2;
}



undefined4 FUN_00011156(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_s2;
  undefined4 unaff_s3;
  
  iVar1 = FUN_00011156();
  if (iVar1 == 0) {
    iVar1 = FUN_00011178(*(undefined4 *)(unaff_s0 + 0x20),5,0);
    *(int *)(unaff_s0 + 0x20) = iVar1;
    if (iVar1 == 0) {
      uVar2 = 0x10;
    }
    else {
      *unaff_s2 = unaff_s3;
      _L0(0);
      uVar2 = 0;
    }
  }
  else {
    _LVL304(*(undefined4 *)(unaff_s0 + 0x20));
    uVar2 = 0xf;
    *(undefined4 *)(unaff_s0 + 0x20) = 0;
  }
  return uVar2;
}



undefined4 _LVL304(void)

{
  int unaff_s0;
  
  _LVL304();
  *(undefined4 *)(unaff_s0 + 0x20) = 0;
  return 0xf;
}



undefined4 FUN_00011178(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_s2;
  undefined4 unaff_s3;
  
  iVar1 = FUN_00011178();
  *(int *)(unaff_s0 + 0x20) = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0x10;
  }
  else {
    *unaff_s2 = unaff_s3;
    _L0(0);
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



undefined4 _LVL312(void)

{
  int unaff_s0;
  
  _LVL312();
  *(undefined4 *)(unaff_s0 + 0x20) = 0;
  return 0;
}



AT_ERROR_CODE bl_cipsend(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  byte bVar1;
  AT_ERROR_CODE AVar2;
  undefined4 *puVar3;
  int iVar4;
  
  if (4 < *(int *)&para->u) {
    return AEC_DISCONNECT;
  }
  iVar4 = *(int *)&para->u * 0x38;
  if (*(char *)(iVar4 + 0x38) == '\x03') {
    uRam00000000 = *(undefined4 *)&(para->u).field_0x4;
    bVar1 = *(byte *)(iVar4 + 0x18);
    if ((bVar1 & 0xfd) == 1) {
      puVar3 = (undefined4 *)FUN_0001122e(8);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)&para->u;
        puVar3[1] = *(undefined4 *)&(para->u).field_0x8;
        _L0(0,puVar3);
        return AEC_OK;
      }
    }
    else {
      if (bVar1 != 2) {
        return AEC_UNSUPPORTED;
      }
      puVar3 = (undefined4 *)FUN_00011264(8);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *(undefined4 *)&para->u;
        puVar3[1] = *(undefined4 *)&(para->u).field_0x8;
        AVar2 = _L0(0,puVar3);
        return AVar2;
      }
    }
    AVar2 = AEC_NOT_ENOUGH_MEMORY;
  }
  else {
    FUN_00011202(0);
    AVar2 = AEC_CMD_FAIL;
  }
  return AVar2;
}



undefined4 FUN_00011202(void)

{
  FUN_00011202();
  return 2;
}



undefined4 FUN_0001122e(void)

{
  int unaff_s0;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_0001122e();
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0x14;
  }
  else {
    *puVar1 = *(undefined4 *)(unaff_s0 + 8);
    puVar1[1] = *(undefined4 *)(unaff_s0 + 0x10);
    _L0(0);
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



undefined4 FUN_00011264(void)

{
  int unaff_s0;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_00011264();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)(unaff_s0 + 8);
    puVar1[1] = *(undefined4 *)(unaff_s0 + 0x10);
    uVar2 = _L0(0);
    return uVar2;
  }
  return 0x14;
}



AT_ERROR_CODE bl_cipsslcconf_path(at_callback_para_t *para,at_callback_rsp_t *unused)

{
  int iVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  AT_ERROR_CODE AVar5;
  
  if (4 < *(int *)&para->u) {
    return AEC_OUT_OF_RANGE;
  }
  _L0(uRam00000000,0xffffffff);
  iVar1 = *(int *)&para->u;
  iVar3 = iVar1 * 0x38;
  AVar5 = *(AT_ERROR_CODE *)(iVar3 + 0x38);
  if (AVar5 != AEC_OK) {
    FUN_000112e2(uRam00000000,0,0,0);
    return AEC_IMPROPER_OPERATION;
  }
  iVar4 = *(int *)&(para->u).field_0x4;
  uVar2 = (undefined)iVar4;
  if (iVar4 == 1) {
    *(undefined *)(iVar3 + 0x19) = uVar2;
    if (*(int *)(iVar3 + 0x20) != 0) {
      _L0();
    }
    if (*(int *)(iVar1 * 0x38 + 0x24) != 0) {
      _L0();
    }
    if (*(int *)(iVar1 * 0x38 + 0x28) != 0) {
      _L0();
    }
    *(undefined4 *)(iVar1 * 0x38 + 0x20) = 0;
_L0:
    *(undefined4 *)(iVar1 * 0x38 + 0x24) = *(undefined4 *)&(para->u).field_0x10;
    *(undefined4 *)(iVar1 * 0x38 + 0x28) = *(undefined4 *)&(para->u).field_0xc;
_L0:
    FUN_00011396(uRam00000000,0,0,0);
  }
  else {
    if (iVar4 < 2) {
      if (iVar4 == 0) {
        *(undefined *)(iVar3 + 0x19) = 0;
        if (*(int *)(iVar3 + 0x20) != 0) {
          _L0();
        }
        if (*(int *)(iVar1 * 0x38 + 0x24) != 0) {
          _L0();
        }
        if (*(int *)(iVar1 * 0x38 + 0x28) != 0) {
          _L0();
        }
        *(undefined4 *)(iVar1 * 0x38 + 0x20) = 0;
_L0:
        *(undefined4 *)(iVar1 * 0x38 + 0x24) = 0;
        *(undefined4 *)(iVar1 * 0x38 + 0x28) = 0;
        goto _L0;
      }
    }
    else {
      if (iVar4 == 2) {
        *(undefined *)(iVar3 + 0x19) = uVar2;
        if (*(int *)(iVar3 + 0x20) != 0) {
          _L0();
        }
        if (*(int *)(iVar1 * 0x38 + 0x24) != 0) {
          _L0();
        }
        if (*(int *)(iVar1 * 0x38 + 0x28) != 0) {
          _L0();
        }
        *(undefined4 *)(iVar1 * 0x38 + 0x20) = *(undefined4 *)&(para->u).field_0x8;
        goto _L0;
      }
      if (iVar4 == 3) {
        *(undefined *)(iVar3 + 0x19) = uVar2;
        if (*(int *)(iVar3 + 0x20) != 0) {
          _L0();
        }
        if (*(int *)(iVar1 * 0x38 + 0x24) != 0) {
          _L0();
        }
        if (*(int *)(iVar1 * 0x38 + 0x28) != 0) {
          _L0();
        }
        *(undefined4 *)(iVar1 * 0x38 + 0x20) = *(undefined4 *)&(para->u).field_0x8;
        goto _L0;
      }
    }
    FUN_0001131c(uRam00000000,0,0,0);
    AVar5 = AEC_PARA_ERROR;
  }
  return AVar5;
}



char _L0(void)

{
  int unaff_s0;
  int iVar1;
  undefined uVar2;
  int iVar3;
  int iVar4;
  int unaff_s2;
  char cVar5;
  undefined4 *unaff_s5;
  
  _L0();
  iVar1 = *(int *)(unaff_s2 + 8);
  iVar4 = unaff_s0 + iVar1 * 0x38;
  cVar5 = *(char *)(iVar4 + 0x38);
  if (cVar5 != '\0') {
    FUN_000112e2(*unaff_s5,0,0,0);
    return '\x15';
  }
  iVar3 = *(int *)(unaff_s2 + 0xc);
  uVar2 = (undefined)iVar3;
  if (iVar3 == 1) {
    *(undefined *)(iVar4 + 0x19) = uVar2;
    if (*(int *)(iVar4 + 0x20) != 0) {
      _L0();
    }
    if (*(int *)(iVar1 * 0x38 + unaff_s0 + 0x24) != 0) {
      _L0();
    }
    if (*(int *)(iVar1 * 0x38 + unaff_s0 + 0x28) != 0) {
      _L0();
    }
    iVar1 = unaff_s0 + iVar1 * 0x38;
    *(undefined4 *)(iVar1 + 0x20) = 0;
_L0:
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(unaff_s2 + 0x18);
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(unaff_s2 + 0x14);
_L0:
    FUN_00011396(*unaff_s5,0,0,0);
  }
  else {
    if (iVar3 < 2) {
      if (iVar3 == 0) {
        *(undefined *)(iVar4 + 0x19) = 0;
        if (*(int *)(iVar4 + 0x20) != 0) {
          _L0();
        }
        if (*(int *)(iVar1 * 0x38 + unaff_s0 + 0x24) != 0) {
          _L0();
        }
        if (*(int *)(iVar1 * 0x38 + unaff_s0 + 0x28) != 0) {
          _L0();
        }
        iVar1 = unaff_s0 + iVar1 * 0x38;
        *(undefined4 *)(iVar1 + 0x20) = 0;
_L0:
        *(undefined4 *)(iVar1 + 0x24) = 0;
        *(undefined4 *)(iVar1 + 0x28) = 0;
        goto _L0;
      }
    }
    else {
      if (iVar3 == 2) {
        *(undefined *)(iVar4 + 0x19) = uVar2;
        if (*(int *)(iVar4 + 0x20) != 0) {
          _L0();
        }
        if (*(int *)(iVar1 * 0x38 + unaff_s0 + 0x24) != 0) {
          _L0();
        }
        if (*(int *)(iVar1 * 0x38 + unaff_s0 + 0x28) != 0) {
          _L0();
        }
        iVar1 = unaff_s0 + iVar1 * 0x38;
        *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(unaff_s2 + 0x10);
        goto _L0;
      }
      if (iVar3 == 3) {
        *(undefined *)(iVar4 + 0x19) = uVar2;
        if (*(int *)(iVar4 + 0x20) != 0) {
          _L0();
        }
        if (*(int *)(iVar1 * 0x38 + unaff_s0 + 0x24) != 0) {
          _L0();
        }
        if (*(int *)(iVar1 * 0x38 + unaff_s0 + 0x28) != 0) {
          _L0();
        }
        iVar1 = unaff_s0 + iVar1 * 0x38;
        *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(unaff_s2 + 0x10);
        goto _L0;
      }
    }
    FUN_0001131c(*unaff_s5,0,0,0);
    cVar5 = '\x04';
  }
  return cVar5;
}



undefined4 FUN_000112e2(void)

{
  FUN_000112e2();
  return 0x15;
}



undefined4 FUN_0001131c(void)

{
  FUN_0001131c();
  return 4;
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  int unaff_s2;
  undefined4 *unaff_s4;
  
  _L0();
  if (*(int *)(unaff_s1 * 0x38 + unaff_s0 + 0x24) != 0) {
    _L0();
  }
  if (*(int *)(unaff_s1 * 0x38 + unaff_s0 + 0x28) != 0) {
    _L0();
  }
  iVar1 = unaff_s0 + unaff_s1 * 0x38;
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(unaff_s2 + 0x10);
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(unaff_s2 + 0x18);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(unaff_s2 + 0x14);
  FUN_00011396(*unaff_s4,0,0,0);
  return;
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  int unaff_s2;
  undefined4 *unaff_s4;
  
  _L0();
  if (*(int *)(unaff_s1 * 0x38 + unaff_s0 + 0x28) != 0) {
    _L0();
  }
  iVar1 = unaff_s0 + unaff_s1 * 0x38;
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(unaff_s2 + 0x10);
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(unaff_s2 + 0x18);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(unaff_s2 + 0x14);
  FUN_00011396(*unaff_s4,0,0,0);
  return;
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  int unaff_s2;
  undefined4 *unaff_s4;
  
  _L0();
  iVar1 = unaff_s0 + unaff_s1 * 0x38;
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(unaff_s2 + 0x10);
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(unaff_s2 + 0x18);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(unaff_s2 + 0x14);
  FUN_00011396(*unaff_s4,0,0,0);
  return;
}



void FUN_00011396(void)

{
  FUN_00011396();
  return;
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  int unaff_s2;
  undefined4 *unaff_s4;
  
  _L0();
  if (*(int *)(unaff_s1 * 0x38 + unaff_s0 + 0x24) != 0) {
    _L0();
  }
  if (*(int *)(unaff_s1 * 0x38 + unaff_s0 + 0x28) != 0) {
    _L0();
  }
  iVar1 = unaff_s0 + unaff_s1 * 0x38;
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(unaff_s2 + 0x10);
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  FUN_00011396(*unaff_s4,0,0,0);
  return;
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  int unaff_s2;
  undefined4 *unaff_s4;
  
  _L0();
  if (*(int *)(unaff_s1 * 0x38 + unaff_s0 + 0x28) != 0) {
    _L0();
  }
  iVar1 = unaff_s0 + unaff_s1 * 0x38;
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(unaff_s2 + 0x10);
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  FUN_00011396(*unaff_s4,0,0,0);
  return;
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  int unaff_s2;
  undefined4 *unaff_s4;
  
  _L0();
  iVar1 = unaff_s0 + unaff_s1 * 0x38;
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(unaff_s2 + 0x10);
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  FUN_00011396(*unaff_s4,0,0,0);
  return;
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  int unaff_s2;
  undefined4 *unaff_s4;
  
  _L0();
  if (*(int *)(unaff_s1 * 0x38 + unaff_s0 + 0x24) != 0) {
    _L0();
  }
  if (*(int *)(unaff_s1 * 0x38 + unaff_s0 + 0x28) != 0) {
    _L0();
  }
  iVar1 = unaff_s0 + unaff_s1 * 0x38;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(unaff_s2 + 0x18);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(unaff_s2 + 0x14);
  FUN_00011396(*unaff_s4,0,0,0);
  return;
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  int unaff_s2;
  undefined4 *unaff_s4;
  
  _L0();
  if (*(int *)(unaff_s1 * 0x38 + unaff_s0 + 0x28) != 0) {
    _L0();
  }
  iVar1 = unaff_s0 + unaff_s1 * 0x38;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(unaff_s2 + 0x18);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(unaff_s2 + 0x14);
  FUN_00011396(*unaff_s4,0,0,0);
  return;
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  int unaff_s2;
  undefined4 *unaff_s4;
  
  _L0();
  iVar1 = unaff_s0 + unaff_s1 * 0x38;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(unaff_s2 + 0x18);
  *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(unaff_s2 + 0x14);
  FUN_00011396(*unaff_s4,0,0,0);
  return;
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  undefined4 *unaff_s4;
  
  _L0();
  if (*(int *)(unaff_s1 * 0x38 + unaff_s0 + 0x24) != 0) {
    _L0();
  }
  if (*(int *)(unaff_s1 * 0x38 + unaff_s0 + 0x28) != 0) {
    _L0();
  }
  iVar1 = unaff_s0 + unaff_s1 * 0x38;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  FUN_00011396(*unaff_s4,0,0,0);
  return;
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  undefined4 *unaff_s4;
  
  _L0();
  if (*(int *)(unaff_s1 * 0x38 + unaff_s0 + 0x28) != 0) {
    _L0();
  }
  iVar1 = unaff_s0 + unaff_s1 * 0x38;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  FUN_00011396(*unaff_s4,0,0,0);
  return;
}



void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s1;
  undefined4 *unaff_s4;
  
  _L0();
  iVar1 = unaff_s0 + unaff_s1 * 0x38;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  FUN_00011396(*unaff_s4,0,0,0);
  return;
}



AT_ERROR_CODE bl_cipsslcsni(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  AT_ERROR_CODE AVar5;
  int iVar6;
  
  AVar5 = AEC_OUT_OF_RANGE;
  if (*(int *)&para->u < 5) {
    _L0(uRam00000000,0xffffffff);
    iVar6 = *(int *)&para->u;
    iVar4 = iVar6 * 0x38;
    AVar5 = *(AT_ERROR_CODE *)(iVar4 + 0x38);
    if (AVar5 == AEC_OK) {
      iVar1 = &(para->u).field_0x4;
      iVar2 = FUN_00011518(iVar1);
      if (iVar2 == 0) {
        if (*(int *)(iVar4 + 0x1c) != 0) {
          _L0();
          *(undefined4 *)(iVar4 + 0x1c) = 0;
        }
      }
      else {
        iVar3 = _LVL377(iVar2 + 1);
        if (iVar3 == 0) {
          FUN_00011560(uRam00000000,0,0,0);
          return AEC_NOT_ENOUGH_MEMORY;
        }
        if (*(int *)(iVar4 + 0x1c) != 0) {
          _L0();
          *(undefined4 *)(iVar4 + 0x1c) = 0;
        }
        FUN_00011580(iVar3,iVar1);
        *(undefined *)(iVar2 + iVar3) = 0;
        *(int *)(iVar6 * 0x38 + 0x1c) = iVar3;
      }
      FUN_0001153e(uRam00000000,0,0,0);
    }
    else {
      FUN_000114f0(uRam00000000,0,0,0);
      AVar5 = AEC_IMPROPER_OPERATION;
    }
  }
  return AVar5;
}



char _L0(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_s2;
  undefined4 *unaff_s5;
  char cVar4;
  int iVar5;
  
  _L0();
  iVar5 = *(int *)(unaff_s0 + 8);
  iVar1 = unaff_s2 + iVar5 * 0x38;
  cVar4 = *(char *)(iVar1 + 0x38);
  if (cVar4 == '\0') {
    iVar2 = FUN_00011518(unaff_s0 + 0xc);
    if (iVar2 == 0) {
      if (*(int *)(iVar1 + 0x1c) != 0) {
        _L0();
        *(undefined4 *)(iVar1 + 0x1c) = 0;
      }
    }
    else {
      iVar3 = _LVL377(iVar2 + 1);
      if (iVar3 == 0) {
        FUN_00011560(*unaff_s5,0,0,0);
        return '\x14';
      }
      if (*(int *)(iVar1 + 0x1c) != 0) {
        _L0();
        *(undefined4 *)(iVar1 + 0x1c) = 0;
      }
      FUN_00011580(iVar3,unaff_s0 + 0xc);
      *(undefined *)(iVar2 + iVar3) = 0;
      *(int *)(unaff_s2 + iVar5 * 0x38 + 0x1c) = iVar3;
    }
    FUN_0001153e(*unaff_s5,0,0,0);
  }
  else {
    FUN_000114f0(*unaff_s5,0,0,0);
    cVar4 = '\x15';
  }
  return cVar4;
}



undefined4 FUN_000114f0(void)

{
  FUN_000114f0();
  return 0x15;
}



undefined4 FUN_00011518(void)

{
  int unaff_s1;
  int iVar1;
  int iVar2;
  int unaff_s2;
  undefined4 *unaff_s5;
  undefined4 unaff_s6;
  undefined4 *unaff_s7;
  int unaff_s8;
  
  iVar1 = FUN_00011518();
  if (iVar1 == 0) {
    if (*(int *)(unaff_s1 + 0x1c) != 0) {
      _L0();
      *(undefined4 *)(unaff_s1 + 0x1c) = 0;
    }
  }
  else {
    iVar2 = _LVL377(iVar1 + 1);
    if (iVar2 == 0) {
      FUN_00011560(*unaff_s5,0,0,0);
      return 0x14;
    }
    if (*(int *)(unaff_s1 + 0x1c) != 0) {
      _L0();
      *(undefined4 *)(unaff_s1 + 0x1c) = 0;
    }
    FUN_00011580(iVar2);
    *(undefined *)(iVar1 + iVar2) = 0;
    *(int *)(unaff_s2 + unaff_s8 * 0x38 + 0x1c) = iVar2;
  }
  FUN_0001153e(*unaff_s7,0,0,0);
  return unaff_s6;
}



void _L0(void)

{
  int unaff_s1;
  undefined4 *unaff_s7;
  
  _L0();
  *(undefined4 *)(unaff_s1 + 0x1c) = 0;
  FUN_0001153e(*unaff_s7,0,0,0);
  return;
}



void FUN_0001153e(void)

{
  FUN_0001153e();
  return;
}



undefined4 _LVL377(void)

{
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s3;
  undefined4 *unaff_s5;
  undefined4 unaff_s6;
  undefined4 *unaff_s7;
  int unaff_s8;
  
  iVar1 = _LVL377();
  if (iVar1 == 0) {
    FUN_00011560(*unaff_s5,0,0,0);
    unaff_s6 = 0x14;
  }
  else {
    if (*(int *)(unaff_s1 + 0x1c) != 0) {
      _L0();
      *(undefined4 *)(unaff_s1 + 0x1c) = 0;
    }
    FUN_00011580(iVar1);
    *(undefined *)(unaff_s3 + iVar1) = 0;
    *(int *)(unaff_s2 + unaff_s8 * 0x38 + 0x1c) = iVar1;
    FUN_0001153e(*unaff_s7,0,0,0);
  }
  return unaff_s6;
}



undefined4 FUN_00011560(void)

{
  FUN_00011560();
  return 0x14;
}



void _L0(void)

{
  int unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined4 *unaff_s7;
  int unaff_s8;
  
  _L0();
  *(undefined4 *)(unaff_s1 + 0x1c) = 0;
  FUN_00011580();
  *(undefined *)(unaff_s3 + unaff_s4) = 0;
  *(int *)(unaff_s2 + unaff_s8 * 0x38 + 0x1c) = unaff_s4;
  FUN_0001153e(*unaff_s7,0,0,0);
  return;
}



void FUN_00011580(void)

{
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  undefined4 *unaff_s7;
  int unaff_s8;
  
  FUN_00011580();
  *(undefined *)(unaff_s3 + unaff_s4) = 0;
  *(int *)(unaff_s2 + unaff_s8 * 0x38 + 0x1c) = unaff_s4;
  FUN_0001153e(*unaff_s7,0,0,0);
  return;
}



AT_ERROR_CODE bl_cipsslcalpn(at_callback_para_t *para,at_callback_rsp_t *unused)

{
  undefined4 uVar1;
  int iVar2;
  AT_ERROR_CODE AVar3;
  int iVar4;
  
  if (*(int *)&para->u < 5) {
    FUN_000115ea(uRam00000000,0xffffffff);
    iVar4 = *(int *)&para->u;
    iVar2 = iVar4 * 0x38;
    if (*(char *)(iVar2 + 0x38) == '\0') {
      if (*(int *)(iVar2 + 0x2c) != 0) {
        _L0();
      }
      uVar1 = uRam00000000;
      *(undefined4 *)(iVar4 * 0x38 + 0x2c) = *(undefined4 *)&(para->u).field_0x4;
      _L0(uVar1,0,0,0);
      return AEC_OK;
    }
    unused = (at_callback_rsp_t *)FUN_0001161e(uRam00000000,0,0,0);
    iVar2 = *(int *)&(para->u).field_0x4;
    AVar3 = AEC_IMPROPER_OPERATION;
  }
  else {
    iVar2 = *(int *)&(para->u).field_0x4;
    AVar3 = AEC_OUT_OF_RANGE;
  }
  if (iVar2 != 0) {
    _L0(unused);
    *(undefined4 *)&(para->u).field_0x4 = 0;
  }
  return AVar3;
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  *(undefined4 *)(unaff_s0 + 0xc) = 0;
  return;
}



char FUN_000115ea(void)

{
  int unaff_s0;
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 *unaff_s4;
  undefined4 *unaff_s5;
  
  FUN_000115ea();
  iVar4 = *(int *)(unaff_s0 + 8);
  iVar2 = iVar4 * 0x38;
  cVar3 = *(char *)(iVar2 + 0x38);
  if (cVar3 == '\0') {
    if (*(int *)(iVar2 + 0x2c) != 0) {
      _L0();
    }
    uVar1 = *unaff_s5;
    *(undefined4 *)(iVar4 * 0x38 + 0x2c) = *(undefined4 *)(unaff_s0 + 0xc);
    _L0(uVar1,0,0,0);
  }
  else {
    FUN_0001161e(*unaff_s4,0,0,0);
    cVar3 = '\x15';
    if (*(int *)(unaff_s0 + 0xc) != 0) {
      _L0();
      *(undefined4 *)(unaff_s0 + 0xc) = 0;
      cVar3 = '\x15';
    }
  }
  return cVar3;
}



undefined4 FUN_0001161e(void)

{
  int unaff_s0;
  
  FUN_0001161e();
  if (*(int *)(unaff_s0 + 0xc) != 0) {
    _L0();
    *(undefined4 *)(unaff_s0 + 0xc) = 0;
  }
  return 0x15;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int unaff_s3;
  undefined4 *unaff_s5;
  
  _L0();
  uVar1 = *unaff_s5;
  *(undefined4 *)(unaff_s3 * 0x38 + unaff_s1 + 0x2c) = *(undefined4 *)(unaff_s0 + 0xc);
  _L0(uVar1,0,0,0);
  return;
}



void _L0(void)

{
  _L0();
  return;
}


