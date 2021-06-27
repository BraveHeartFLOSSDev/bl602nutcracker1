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

typedef int _ssize_t;

typedef union anon_union.conflict131 anon_union.conflict131, *Panon_union.conflict131;

typedef uint wint_t;

union anon_union.conflict131 { // DWARF DIE: 131
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict131_for___value anon_union.conflict131_for___value, *Panon_union.conflict131_for___value;

union anon_union.conflict131_for___value { // DWARF DIE: 131
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 163
    int __count;
    union anon_union.conflict131_for___value __value;
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct QueueDefinition QueueDefinition, *PQueueDefinition;

typedef struct QueueDefinition * QueueHandle_t;

struct QueueDefinition { // DWARF DIE: 144a
};

typedef struct pbuf pbuf, *Ppbuf;

typedef ushort uint16_t;

typedef uint16_t u16_t;

typedef uchar uint8_t;

typedef uint8_t u8_t;

struct pbuf { // DWARF DIE: b12
    struct pbuf * next;
    void * payload;
    u16_t tot_len;
    u16_t len;
    u8_t type_internal;
    u8_t flags;
    u8_t ref;
    u8_t if_idx;
};

typedef ulong uint32_t;

typedef long int32_t;

typedef char int8_t;

typedef struct altcp_pcb altcp_pcb, *Paltcp_pcb;

typedef int8_t s8_t;

typedef s8_t err_t;

typedef struct altcp_functions altcp_functions, *Paltcp_functions;

typedef err_t (* altcp_accept_fn)(void *, struct altcp_pcb *, err_t);

typedef err_t (* altcp_connected_fn)(void *, struct altcp_pcb *, err_t);

struct altcp_pcb { // DWARF DIE: 17c6
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

struct altcp_functions { // DWARF DIE: 1922
};

typedef struct altcp_allocator_s altcp_allocator_s, *Paltcp_allocator_s;

typedef struct altcp_allocator_s altcp_allocator_t;

struct altcp_allocator_s { // DWARF DIE: 1932
    altcp_pcb * (* alloc)(void *, u8_t);
    void * arg;
};

typedef struct ip4_addr ip4_addr, *Pip4_addr;

typedef uint32_t u32_t;

struct ip4_addr { // DWARF DIE: aba
    u32_t addr;
};

typedef struct ip4_addr ip4_addr_t;

typedef struct ip_globals ip_globals, *Pip_globals;

typedef struct netif netif, *Pnetif;

typedef enum netif_mac_filter_action {
    NETIF_ADD_MAC_FILTER=1,
    NETIF_DEL_MAC_FILTER=0
} netif_mac_filter_action;

typedef struct ip_hdr ip_hdr, *Pip_hdr;

typedef ip4_addr_t ip_addr_t;

typedef struct ip4_addr_packed ip4_addr_packed, *Pip4_addr_packed;

typedef struct ip4_addr_packed ip4_addr_p_t;

struct netif { // DWARF DIE: fde
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

struct ip4_addr_packed { // DWARF DIE: 1541
    u32_t addr;
};

struct ip_hdr { // DWARF DIE: 1568
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

struct ip_globals { // DWARF DIE: 15fd
    struct netif * current_netif;
    struct netif * current_input_netif;
    struct ip_hdr * current_ip4_header;
    u16_t current_ip_header_tot_len;
    undefined field_0xe;
    undefined field_0xf;
    ip_addr_t current_iphdr_src;
    ip_addr_t current_iphdr_dest;
};

typedef ulong __uint32_t;

typedef __uint32_t in_addr_t;

typedef struct at_status_t at_status_t, *Pat_status_t;

typedef char at_text_t;

typedef int at_di_t;

typedef uchar at_hex_t;

typedef uint at_hi_t;

typedef uchar at_ip_t[4];

struct at_status_t { // DWARF DIE: 1db2
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

typedef enum ehttpc_result {
    HTTPC_RESULT_ERR_CLOSED=4,
    HTTPC_RESULT_ERR_CONNECT=2,
    HTTPC_RESULT_ERR_CONTENT_LEN=9,
    HTTPC_RESULT_ERR_HOSTNAME=3,
    HTTPC_RESULT_ERR_MEM=7,
    HTTPC_RESULT_ERR_SVR_RESP=6,
    HTTPC_RESULT_ERR_TIMEOUT=5,
    HTTPC_RESULT_ERR_UNKNOWN=1,
    HTTPC_RESULT_LOCAL_ABORT=8,
    HTTPC_RESULT_OK=0
} ehttpc_result;

typedef struct _httpc_state _httpc_state, *P_httpc_state;

typedef struct _httpc_state httpc_state_t;

struct _httpc_state { // DWARF DIE: 2aa8
};

typedef struct _httpc_connection _httpc_connection, *P_httpc_connection;

typedef enum ehttpc_result httpc_result_t;

typedef struct _httpc_connection httpc_connection_t;

struct _httpc_connection { // DWARF DIE: 2b19
    ip_addr_t proxy_addr;
    u16_t proxy_port;
    u8_t use_proxy;
    u8_t req_type;
    u8_t * data;
    u8_t content_type;
    undefined field_0xd;
    undefined field_0xe;
    undefined field_0xf;
    altcp_allocator_t * altcp_allocator;
    void (* result_fn)(void *, httpc_result_t, u32_t, u32_t, err_t);
    err_t (* headers_done_fn)(httpc_state_t *, void *, struct pbuf *, u16_t, u32_t);
};

typedef enum anon_enum_8.conflicta39 {
    ERR_ABRT=-13,
    ERR_ALREADY=-9,
    ERR_ARG=-16,
    ERR_BUF=-2,
    ERR_CLSD=-15,
    ERR_CONN=-11,
    ERR_IF=-12,
    ERR_INPROGRESS=-5,
    ERR_ISCONN=-10,
    ERR_MEM=-1,
    ERR_OK=0,
    ERR_RST=-14,
    ERR_RTE=-4,
    ERR_TIMEOUT=-3,
    ERR_USE=-8,
    ERR_VAL=-6,
    ERR_WOULDBLOCK=-7,
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
} anon_enum_8.conflicta39;

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 93e
};

typedef u16_t mem_size_t;

typedef QueueHandle_t SemaphoreHandle_t;

typedef struct udp_pcb udp_pcb, *Pudp_pcb;

struct udp_pcb { // DWARF DIE: 16b8
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

typedef union anon_union.conflict14bc_for_un anon_union.conflict14bc_for_un, *Panon_union.conflict14bc_for_un;

union anon_union.conflict14bc_for_un { // DWARF DIE: 14bc
    u32_t u32_addr[4];
    u8_t u8_addr[16];
};

struct in6_addr { // DWARF DIE: 14fe
    union anon_union.conflict14bc_for_un un;
};

typedef union anon_union.conflict14bc anon_union.conflict14bc, *Panon_union.conflict14bc;

union anon_union.conflict14bc { // DWARF DIE: 14bc
    u32_t u32_addr[4];
    u8_t u8_addr[16];
};

typedef struct at_ip_para_t at_ip_para_t, *Pat_ip_para_t;

struct at_ip_para_t { // DWARF DIE: 21ea
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

typedef union anon_union.conflict278b_for_u anon_union.conflict278b_for_u, *Panon_union.conflict278b_for_u;

typedef struct anon_struct.conflict2484 anon_struct.conflict2484, *Panon_struct.conflict2484;

typedef struct anon_struct.conflict24ae anon_struct.conflict24ae, *Panon_struct.conflict24ae;

typedef struct anon_struct.conflict24c7 anon_struct.conflict24c7, *Panon_struct.conflict24c7;

typedef struct at_tcpserver_para_t at_tcpserver_para_t, *Pat_tcpserver_para_t;

typedef struct anon_struct.conflict24e0 anon_struct.conflict24e0, *Panon_struct.conflict24e0;

typedef struct anon_struct.conflict2507 anon_struct.conflict2507, *Panon_struct.conflict2507;

typedef struct anon_struct.conflict2566 anon_struct.conflict2566, *Panon_struct.conflict2566;

typedef struct anon_struct.conflict258d anon_struct.conflict258d, *Panon_struct.conflict258d;

typedef struct anon_struct.conflict25a6 anon_struct.conflict25a6, *Panon_struct.conflict25a6;

typedef struct anon_struct.conflict25dd anon_struct.conflict25dd, *Panon_struct.conflict25dd;

typedef struct anon_struct.conflict263c anon_struct.conflict263c, *Panon_struct.conflict263c;

typedef struct anon_struct.conflict2655 anon_struct.conflict2655, *Panon_struct.conflict2655;

typedef struct anon_struct.conflict267e anon_struct.conflict267e, *Panon_struct.conflict267e;

typedef struct anon_struct.conflict26c1 anon_struct.conflict26c1, *Panon_struct.conflict26c1;

typedef struct at_network_para_t at_network_para_t, *Pat_network_para_t;

typedef struct at_sendData_para_t at_sendData_para_t, *Pat_sendData_para_t;

typedef struct at_close_para_t at_close_para_t, *Pat_close_para_t;

typedef struct at_client_ssl_path_para_t at_client_ssl_path_para_t, *Pat_client_ssl_path_para_t;

typedef struct at_client_ssl_sni_t at_client_ssl_sni_t, *Pat_client_ssl_sni_t;

typedef struct at_client_ssl_alpn_t at_client_ssl_alpn_t, *Pat_client_ssl_alpn_t;

typedef struct at_ble_sync_mode_t at_ble_sync_mode_t, *Pat_ble_sync_mode_t;

typedef struct anon_struct.conflict26da anon_struct.conflict26da, *Panon_struct.conflict26da;

typedef struct anon_struct.conflict270e anon_struct.conflict270e, *Panon_struct.conflict270e;

typedef struct anon_struct.conflict2734 anon_struct.conflict2734, *Panon_struct.conflict2734;

typedef struct anon_struct.conflict275a anon_struct.conflict275a, *Panon_struct.conflict275a;

typedef struct anon_struct.conflict2772 anon_struct.conflict2772, *Panon_struct.conflict2772;

typedef int s32;

typedef uchar u8;

struct at_client_ssl_sni_t { // DWARF DIE: 22aa
    at_di_t linkId;
    at_text_t sni[256];
};

struct at_client_ssl_path_para_t { // DWARF DIE: 2247
    at_di_t linkId;
    at_di_t auth_mode;
    at_text_t * ca;
    at_text_t * key;
    at_text_t * cert;
};

struct anon_struct.conflict2734 { // DWARF DIE: 2734
    int ID;
    int data;
};

struct anon_struct.conflict2655 { // DWARF DIE: 2655
    char hostname[128];
};

struct at_sendData_para_t { // DWARF DIE: 2424
    at_di_t linkId;
    at_di_t bufferlen;
    at_text_t * buffer;
    at_text_t hostname[256];
    at_di_t port;
};

struct at_tcpserver_para_t { // DWARF DIE: 233f
    at_di_t port;
    at_di_t enable;
    at_di_t tls;
    at_di_t ca;
};

struct at_network_para_t { // DWARF DIE: 23b4
    at_di_t linkId;
    at_text_t type[4];
    at_text_t hostname[256];
    at_di_t port;
    at_di_t localport;
    at_di_t keepAlive;
};

struct anon_struct.conflict267e { // DWARF DIE: 267e
    char hostname[128];
    uint8_t type;
    uint8_t content_type;
    undefined field_0x82;
    undefined field_0x83;
    uint8_t * data;
};

struct anon_struct.conflict2484 { // DWARF DIE: 2484
    char hostname[256];
};

struct anon_struct.conflict25a6 { // DWARF DIE: 25a6
    char ssid[33];
    char pwd[33];
};

struct anon_struct.conflict2566 { // DWARF DIE: 2566
    uint32_t sleep_time;
    int weakup_pin;
};

struct anon_struct.conflict258d { // DWARF DIE: 258d
    int mode;
};

struct anon_struct.conflict24c7 { // DWARF DIE: 24c7
    s32 method;
};

struct at_close_para_t { // DWARF DIE: 2319
    at_di_t linkId;
};

struct anon_struct.conflict24ae { // DWARF DIE: 24ae
    s32 value;
};

struct anon_struct.conflict2772 { // DWARF DIE: 2772
    int apnum;
};

struct anon_struct.conflict263c { // DWARF DIE: 263c
    char hostname[33];
};

struct anon_struct.conflict270e { // DWARF DIE: 270e
    int ID;
    int mode;
};

struct anon_struct.conflict26da { // DWARF DIE: 26da
    int ID;
    int mode;
    int pull;
};

struct anon_struct.conflict24e0 { // DWARF DIE: 24e0
    s32 len;
    u8 * buf;
};

struct at_client_ssl_alpn_t { // DWARF DIE: 22df
    at_di_t linkId;
    at_text_t * * alpn;
};

struct at_ble_sync_mode_t { // DWARF DIE: 238e
    int mode;
};

struct anon_struct.conflict275a { // DWARF DIE: 275a
    int ID;
};

struct anon_struct.conflict26c1 { // DWARF DIE: 26c1
    at_ip_t setdnsip;
};

struct anon_struct.conflict2507 { // DWARF DIE: 2507
    int uartId;
    int uartBaud;
    int dataBit;
    int parity;
    int stopBit;
    int hwfc;
};

struct anon_struct.conflict25dd { // DWARF DIE: 25dd
    char ssid[64];
    char psk[64];
    int chl;
    int ecn;
    int max_conn;
    int hidden;
};

union anon_union.conflict278b_for_u { // DWARF DIE: 278b
    struct anon_struct.conflict2484 ping;
    struct anon_struct.conflict24ae wifi;
    struct anon_struct.conflict24c7 scan;
    struct at_tcpserver_para_t tcp_server;
    struct anon_struct.conflict24e0 mode;
    struct anon_struct.conflict2507 uart;
    struct anon_struct.conflict2566 sleep;
    struct anon_struct.conflict258d wifiMode;
    struct anon_struct.conflict25a6 joinParam;
    struct at_ip_para_t at_ip_para;
    struct anon_struct.conflict25dd apcfgParam;
    struct anon_struct.conflict263c iphostname;
    struct anon_struct.conflict2655 dns_parse;
    struct anon_struct.conflict267e http_req;
    struct anon_struct.conflict26c1 set_dns;
    struct at_network_para_t net_param;
    struct at_sendData_para_t send_param;
    struct at_close_para_t close_id;
    struct at_client_ssl_path_para_t client_ssl_path_cfg;
    struct at_client_ssl_sni_t client_ssl_sni_cfg;
    struct at_client_ssl_alpn_t client_ssl_alpn_cfg;
    struct at_ble_sync_mode_t ble_sync_mode;
    struct anon_struct.conflict26da setgpio_para;
    struct anon_struct.conflict270e setiodir_para;
    struct anon_struct.conflict2734 writeiodata_para;
    struct anon_struct.conflict275a readiodata_para;
    struct anon_struct.conflict2772 deleteap_para;
};

struct at_callback_para_t { // DWARF DIE: 28f6
    struct at_config_t * cfg;
    struct at_status_t * sts;
    union anon_union.conflict278b_for_u u;
};

struct at_config_t { // DWARF DIE: 19c5
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

typedef union anon_union.conflict278b anon_union.conflict278b, *Panon_union.conflict278b;

union anon_union.conflict278b { // DWARF DIE: 278b
    struct anon_struct.conflict2484 ping;
    struct anon_struct.conflict24ae wifi;
    struct anon_struct.conflict24c7 scan;
    struct at_tcpserver_para_t tcp_server;
    struct anon_struct.conflict24e0 mode;
    struct anon_struct.conflict2507 uart;
    struct anon_struct.conflict2566 sleep;
    struct anon_struct.conflict258d wifiMode;
    struct anon_struct.conflict25a6 joinParam;
    struct at_ip_para_t at_ip_para;
    struct anon_struct.conflict25dd apcfgParam;
    struct anon_struct.conflict263c iphostname;
    struct anon_struct.conflict2655 dns_parse;
    struct anon_struct.conflict267e http_req;
    struct anon_struct.conflict26c1 set_dns;
    struct at_network_para_t net_param;
    struct at_sendData_para_t send_param;
    struct at_close_para_t close_id;
    struct at_client_ssl_path_para_t client_ssl_path_cfg;
    struct at_client_ssl_sni_t client_ssl_sni_cfg;
    struct at_client_ssl_alpn_t client_ssl_alpn_cfg;
    struct at_ble_sync_mode_t ble_sync_mode;
    struct anon_struct.conflict26da setgpio_para;
    struct anon_struct.conflict270e setiodir_para;
    struct anon_struct.conflict2734 writeiodata_para;
    struct anon_struct.conflict275a readiodata_para;
    struct anon_struct.conflict2772 deleteap_para;
};

typedef struct at_callback_rsp_t at_callback_rsp_t, *Pat_callback_rsp_t;

struct at_callback_rsp_t { // DWARF DIE: 2943
    u8 status;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    s32 type;
    void * vptr;
    s32 vsize;
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

struct at_callback_t { // DWARF DIE: 2993
    AT_ERROR_CODE (* handle_cb)(enum AT_CALLBACK_CMD, struct at_callback_para_t *, struct at_callback_rsp_t *);
    s32 (* dump_cb)(u8 *, s32);
};

typedef struct memp memp, *Pmemp;

struct memp { // DWARF DIE: c09
    struct memp * next;
};

typedef struct memp_desc memp_desc, *Pmemp_desc;

typedef struct stats_mem stats_mem, *Pstats_mem;

struct stats_mem { // DWARF DIE: c7e
    u16_t err;
    mem_size_t avail;
    mem_size_t used;
    mem_size_t max;
    u16_t illegal;
};

struct memp_desc { // DWARF DIE: c2a
    struct stats_mem * stats;
    u16_t size;
    u16_t num;
    u8_t * base;
    struct memp * * tab;
};

typedef struct callback_handler_t callback_handler_t, *Pcallback_handler_t;

struct callback_handler_t { // DWARF DIE: 2bae
    s32 cmd;
    AT_ERROR_CODE (* handler)(struct at_callback_para_t *, struct at_callback_rsp_t *);
};

typedef enum wlan_mode {
    WIFI_AP_STA_MODE=3,
    WIFI_DISABLE=0,
    WIFI_SOFTAP_MODE=2,
    WIFI_STATION_MODE=1
} wlan_mode;

typedef uint u32;

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

struct _rand48 { // DWARF DIE: 734
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue { // DWARF DIE: 6ef
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct anon_struct.conflict8c2 { // DWARF DIE: 8c2
    uchar * _nextf[30];
    uint _nmalloc[30];
};

struct __tm { // DWARF DIE: 227
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

struct anon_struct.conflict77d { // DWARF DIE: 77d
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

union anon_union.conflict909_for__new { // DWARF DIE: 909
    struct anon_struct.conflict77d _reent;
    struct anon_struct.conflict8c2 _unused;
};

struct __sbuf { // DWARF DIE: 35f
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 38d
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

struct _on_exit_args { // DWARF DIE: 2aa
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 2ff
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _reent { // DWARF DIE: 4f9
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

struct _Bigint { // DWARF DIE: 1b7
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

typedef union anon_union.conflict909 anon_union.conflict909, *Panon_union.conflict909;

union anon_union.conflict909 { // DWARF DIE: 909
    struct anon_struct.conflict77d _reent;
    struct anon_struct.conflict8c2 _unused;
};

typedef void (* lwip_cyclic_timer_handler)(void);

typedef struct lwip_cyclic_timer lwip_cyclic_timer, *Plwip_cyclic_timer;

struct lwip_cyclic_timer { // DWARF DIE: 1467
    u32_t interval_ms;
    lwip_cyclic_timer_handler handler;
};

typedef struct stats_proto stats_proto, *Pstats_proto;

struct stats_proto { // DWARF DIE: d0b
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

struct stats_syselem { // DWARF DIE: e78
    u16_t used;
    u16_t max;
    u16_t err;
};

struct stats_sys { // DWARF DIE: ead
    struct stats_syselem sem;
    struct stats_syselem mutex;
    struct stats_syselem mbox;
};

typedef struct stats_ stats_, *Pstats_;

typedef struct stats_igmp stats_igmp, *Pstats_igmp;

struct stats_igmp { // DWARF DIE: db4
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

struct stats_ { // DWARF DIE: ee2
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

typedef uint32_t UBaseType_t;

typedef uint32_t TickType_t;

typedef int32_t BaseType_t;

typedef struct wifi_mgmr_sta_connect_ind_stat_info wifi_mgmr_sta_connect_ind_stat_info, *Pwifi_mgmr_sta_connect_ind_stat_info;

struct wifi_mgmr_sta_connect_ind_stat_info { // DWARF DIE: 12ae
    uint16_t status_code;
    uint8_t type_ind;
    char ssid[32];
    char psk[65];
    char pmk[64];
    uint8_t bssid[6];
    uint16_t chan_freq;
    uint8_t chan_band;
    undefined field_0xad;
};

typedef struct wifi_mgmr_ap_item wifi_mgmr_ap_item, *Pwifi_mgmr_ap_item;

struct wifi_mgmr_ap_item { // DWARF DIE: 1209
    char ssid[32];
    char ssid_tail[1];
    undefined field_0x21;
    undefined field_0x22;
    undefined field_0x23;
    uint32_t ssid_len;
    uint8_t bssid[6];
    uint8_t channel;
    uint8_t auth;
    int8_t rssi;
    undefined field_0x31;
    undefined field_0x32;
    undefined field_0x33;
};

typedef enum WIFI_STATE_ENUM_LIST {
    WIFI_STATE_CONNECTED_IP_GETTING=3,
    WIFI_STATE_CONNECTED_IP_GOT=4,
    WIFI_STATE_CONNECTING=2,
    WIFI_STATE_DISCONNECT=5,
    WIFI_STATE_IDLE=1,
    WIFI_STATE_IFDOWN=6,
    WIFI_STATE_NO_AP_FOUND=9,
    WIFI_STATE_PSK_ERROR=8,
    WIFI_STATE_SNIFFER=7,
    WIFI_STATE_UNKNOWN=0,
    WIFI_STATE_WITH_AP_CONNECTED_IP_GETTING=19,
    WIFI_STATE_WITH_AP_CONNECTED_IP_GOT=20,
    WIFI_STATE_WITH_AP_CONNECTING=18,
    WIFI_STATE_WITH_AP_DISCONNECT=21,
    WIFI_STATE_WITH_AP_IDLE=17
} WIFI_STATE_ENUM_LIST;

typedef void * wifi_interface_t;

typedef struct wifi_mgmr_sta_connect_ind_stat_info wifi_mgmr_sta_connect_ind_stat_info_t;

typedef struct wifi_sta_basic_info wifi_sta_basic_info, *Pwifi_sta_basic_info;

struct wifi_sta_basic_info { // DWARF DIE: 1350
    uint8_t sta_idx;
    uint8_t is_used;
    uint8_t sta_mac[6];
    uint32_t tsfhi;
    uint32_t tsflo;
    int rssi;
    uint8_t data_rate;
    undefined field_0x15;
    undefined field_0x16;
    undefined field_0x17;
};

typedef struct wifi_mgmr_ap_item wifi_mgmr_ap_item_t;

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




// DWARF DIE: 347b

AT_ERROR_CODE cipsta_ip_get(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  ip4_addr_t ip;
  ip4_addr_t gw;
  ip4_addr_t mask;
  ip4_addr_t dns1;
  ip4_addr_t dns2;
  char ip_str [20];
  char gw_str [20];
  char mask_str [20];
  char dns1_str [20];
  char dns2_str [20];
  
  _L0();
  FUN_00010020();
  FUN_0001002c();
  FUN_00010036();
  FUN_00010042();
  FUN_0001004c();
  FUN_00010058();
  FUN_00010064();
  FUN_0001006e();
  FUN_0001007a();
  FUN_00010084();
  FUN_00010090();
  FUN_000100a0();
  FUN_000100ba();
  FUN_000100c6();
  return AEC_OK;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010020();
  FUN_0001002c();
  FUN_00010036();
  FUN_00010042();
  FUN_0001004c();
  FUN_00010058();
  FUN_00010064();
  FUN_0001006e();
  FUN_0001007a();
  FUN_00010084();
  FUN_00010090();
  FUN_000100a0();
  FUN_000100ba();
  FUN_000100c6();
  return 0;
}



undefined4 FUN_00010020(void)

{
  FUN_00010020();
  FUN_0001002c();
  FUN_00010036();
  FUN_00010042();
  FUN_0001004c();
  FUN_00010058();
  FUN_00010064();
  FUN_0001006e();
  FUN_0001007a();
  FUN_00010084();
  FUN_00010090();
  FUN_000100a0();
  FUN_000100ba();
  FUN_000100c6();
  return 0;
}



undefined4 FUN_0001002c(void)

{
  FUN_0001002c();
  FUN_00010036();
  FUN_00010042();
  FUN_0001004c();
  FUN_00010058();
  FUN_00010064();
  FUN_0001006e();
  FUN_0001007a();
  FUN_00010084();
  FUN_00010090();
  FUN_000100a0();
  FUN_000100ba();
  FUN_000100c6();
  return 0;
}



undefined4 FUN_00010036(void)

{
  FUN_00010036();
  FUN_00010042();
  FUN_0001004c();
  FUN_00010058();
  FUN_00010064();
  FUN_0001006e();
  FUN_0001007a();
  FUN_00010084();
  FUN_00010090();
  FUN_000100a0();
  FUN_000100ba();
  FUN_000100c6();
  return 0;
}



undefined4 FUN_00010042(void)

{
  FUN_00010042();
  FUN_0001004c();
  FUN_00010058();
  FUN_00010064();
  FUN_0001006e();
  FUN_0001007a();
  FUN_00010084();
  FUN_00010090();
  FUN_000100a0();
  FUN_000100ba();
  FUN_000100c6();
  return 0;
}



undefined4 FUN_0001004c(void)

{
  FUN_0001004c();
  FUN_00010058();
  FUN_00010064();
  FUN_0001006e();
  FUN_0001007a();
  FUN_00010084();
  FUN_00010090();
  FUN_000100a0();
  FUN_000100ba();
  FUN_000100c6();
  return 0;
}



undefined4 FUN_00010058(void)

{
  FUN_00010058();
  FUN_00010064();
  FUN_0001006e();
  FUN_0001007a();
  FUN_00010084();
  FUN_00010090();
  FUN_000100a0();
  FUN_000100ba();
  FUN_000100c6();
  return 0;
}



undefined4 FUN_00010064(void)

{
  FUN_00010064();
  FUN_0001006e();
  FUN_0001007a();
  FUN_00010084();
  FUN_00010090();
  FUN_000100a0();
  FUN_000100ba();
  FUN_000100c6();
  return 0;
}



undefined4 FUN_0001006e(void)

{
  FUN_0001006e();
  FUN_0001007a();
  FUN_00010084();
  FUN_00010090();
  FUN_000100a0();
  FUN_000100ba();
  FUN_000100c6();
  return 0;
}



undefined4 FUN_0001007a(void)

{
  FUN_0001007a();
  FUN_00010084();
  FUN_00010090();
  FUN_000100a0();
  FUN_000100ba();
  FUN_000100c6();
  return 0;
}



undefined4 FUN_00010084(void)

{
  FUN_00010084();
  FUN_00010090();
  FUN_000100a0();
  FUN_000100ba();
  FUN_000100c6();
  return 0;
}



undefined4 FUN_00010090(void)

{
  FUN_00010090();
  FUN_000100a0();
  FUN_000100ba();
  FUN_000100c6();
  return 0;
}



undefined4 FUN_000100a0(void)

{
  FUN_000100a0();
  FUN_000100ba();
  FUN_000100c6();
  return 0;
}



undefined4 FUN_000100ba(void)

{
  FUN_000100ba();
  FUN_000100c6();
  return 0;
}



undefined4 FUN_000100c6(void)

{
  FUN_000100c6();
  return 0;
}



// DWARF DIE: 407f

AT_ERROR_CODE version(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  _L0();
  FUN_00010106();
  FUN_00010112();
  FUN_0001011e();
  FUN_0001012e();
  FUN_0001013a();
  FUN_00010146();
  FUN_00010166();
  FUN_00010172();
  return AEC_OK;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010106();
  FUN_00010112();
  FUN_0001011e();
  FUN_0001012e();
  FUN_0001013a();
  FUN_00010146();
  FUN_00010166();
  FUN_00010172();
  return 0;
}



undefined4 FUN_00010106(void)

{
  FUN_00010106();
  FUN_00010112();
  FUN_0001011e();
  FUN_0001012e();
  FUN_0001013a();
  FUN_00010146();
  FUN_00010166();
  FUN_00010172();
  return 0;
}



undefined4 FUN_00010112(void)

{
  FUN_00010112();
  FUN_0001011e();
  FUN_0001012e();
  FUN_0001013a();
  FUN_00010146();
  FUN_00010166();
  FUN_00010172();
  return 0;
}



undefined4 FUN_0001011e(void)

{
  FUN_0001011e();
  FUN_0001012e();
  FUN_0001013a();
  FUN_00010146();
  FUN_00010166();
  FUN_00010172();
  return 0;
}



undefined4 FUN_0001012e(void)

{
  FUN_0001012e();
  FUN_0001013a();
  FUN_00010146();
  FUN_00010166();
  FUN_00010172();
  return 0;
}



undefined4 FUN_0001013a(void)

{
  FUN_0001013a();
  FUN_00010146();
  FUN_00010166();
  FUN_00010172();
  return 0;
}



undefined4 FUN_00010146(void)

{
  FUN_00010146();
  FUN_00010166();
  FUN_00010172();
  return 0;
}



undefined4 FUN_00010166(void)

{
  FUN_00010166();
  FUN_00010172();
  return 0;
}



undefined4 FUN_00010172(void)

{
  FUN_00010172();
  return 0;
}



// WARNING: Variable defined which should be unmapped: addr_str
// DWARF DIE: 314d

AT_ERROR_CODE cipsta_ip(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  uint32_t ip;
  uint32_t mask;
  uint32_t gw;
  uint32_t dns1;
  uint32_t dns2;
  char addr_str [20];
  
  _L0();
  FUN_000101b6();
  FUN_000101d8();
  FUN_000101e2();
  FUN_000101f4();
  FUN_000101fe();
  FUN_0001020e();
  if (*(int *)&(para->u).field_0x8 != 0) {
    FUN_00010230();
    FUN_0001023a();
    FUN_0001024c();
    FUN_00010256();
    FUN_00010262();
  }
  if (*(int *)&(para->u).field_0x4 != 0) {
    FUN_00010284();
    FUN_0001028e();
    FUN_000102a0();
    FUN_000102aa();
    FUN_000102b6();
  }
  if (*(int *)&(para->u).field_0xc != 0) {
    FUN_000102d8();
    FUN_000102e2();
    FUN_000102f4();
    FUN_000102fe();
    FUN_0001030a();
  }
  if (*(int *)&(para->u).field_0x10 != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return AEC_OK;
}



undefined4 _L0(void)

{
  int unaff_s0;
  undefined4 uStack00000008;
  
  _L0();
  FUN_000101b6();
  FUN_000101d8();
  uStack00000008 = FUN_000101e2();
  FUN_000101f4();
  FUN_000101fe();
  FUN_0001020e();
  if (*(int *)(unaff_s0 + 0x10) != 0) {
    FUN_00010230();
    FUN_0001023a();
    FUN_0001024c();
    FUN_00010256();
    FUN_00010262();
  }
  if (*(int *)(unaff_s0 + 0xc) != 0) {
    FUN_00010284();
    FUN_0001028e();
    FUN_000102a0();
    FUN_000102aa();
    FUN_000102b6();
  }
  if (*(int *)(unaff_s0 + 0x14) != 0) {
    FUN_000102d8();
    FUN_000102e2();
    FUN_000102f4();
    FUN_000102fe();
    FUN_0001030a();
  }
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_000101b6(void)

{
  int unaff_s0;
  undefined4 uStack00000008;
  
  FUN_000101b6();
  FUN_000101d8();
  uStack00000008 = FUN_000101e2();
  FUN_000101f4();
  FUN_000101fe();
  FUN_0001020e();
  if (*(int *)(unaff_s0 + 0x10) != 0) {
    FUN_00010230();
    FUN_0001023a();
    FUN_0001024c();
    FUN_00010256();
    FUN_00010262();
  }
  if (*(int *)(unaff_s0 + 0xc) != 0) {
    FUN_00010284();
    FUN_0001028e();
    FUN_000102a0();
    FUN_000102aa();
    FUN_000102b6();
  }
  if (*(int *)(unaff_s0 + 0x14) != 0) {
    FUN_000102d8();
    FUN_000102e2();
    FUN_000102f4();
    FUN_000102fe();
    FUN_0001030a();
  }
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_000101d8(void)

{
  int unaff_s0;
  undefined4 uStack00000008;
  
  FUN_000101d8();
  uStack00000008 = FUN_000101e2();
  FUN_000101f4();
  FUN_000101fe();
  FUN_0001020e();
  if (*(int *)(unaff_s0 + 0x10) != 0) {
    FUN_00010230();
    FUN_0001023a();
    FUN_0001024c();
    FUN_00010256();
    FUN_00010262();
  }
  if (*(int *)(unaff_s0 + 0xc) != 0) {
    FUN_00010284();
    FUN_0001028e();
    FUN_000102a0();
    FUN_000102aa();
    FUN_000102b6();
  }
  if (*(int *)(unaff_s0 + 0x14) != 0) {
    FUN_000102d8();
    FUN_000102e2();
    FUN_000102f4();
    FUN_000102fe();
    FUN_0001030a();
  }
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_000101e2(void)

{
  int unaff_s0;
  undefined4 uStack00000008;
  
  uStack00000008 = FUN_000101e2();
  FUN_000101f4();
  FUN_000101fe();
  FUN_0001020e();
  if (*(int *)(unaff_s0 + 0x10) != 0) {
    FUN_00010230();
    FUN_0001023a();
    FUN_0001024c();
    FUN_00010256();
    FUN_00010262();
  }
  if (*(int *)(unaff_s0 + 0xc) != 0) {
    FUN_00010284();
    FUN_0001028e();
    FUN_000102a0();
    FUN_000102aa();
    FUN_000102b6();
  }
  if (*(int *)(unaff_s0 + 0x14) != 0) {
    FUN_000102d8();
    FUN_000102e2();
    FUN_000102f4();
    FUN_000102fe();
    FUN_0001030a();
  }
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_000101f4(void)

{
  int unaff_s0;
  
  FUN_000101f4();
  FUN_000101fe();
  FUN_0001020e();
  if (*(int *)(unaff_s0 + 0x10) != 0) {
    FUN_00010230();
    FUN_0001023a();
    FUN_0001024c();
    FUN_00010256();
    FUN_00010262();
  }
  if (*(int *)(unaff_s0 + 0xc) != 0) {
    FUN_00010284();
    FUN_0001028e();
    FUN_000102a0();
    FUN_000102aa();
    FUN_000102b6();
  }
  if (*(int *)(unaff_s0 + 0x14) != 0) {
    FUN_000102d8();
    FUN_000102e2();
    FUN_000102f4();
    FUN_000102fe();
    FUN_0001030a();
  }
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_000101fe(void)

{
  int unaff_s0;
  
  FUN_000101fe();
  FUN_0001020e();
  if (*(int *)(unaff_s0 + 0x10) != 0) {
    FUN_00010230();
    FUN_0001023a();
    FUN_0001024c();
    FUN_00010256();
    FUN_00010262();
  }
  if (*(int *)(unaff_s0 + 0xc) != 0) {
    FUN_00010284();
    FUN_0001028e();
    FUN_000102a0();
    FUN_000102aa();
    FUN_000102b6();
  }
  if (*(int *)(unaff_s0 + 0x14) != 0) {
    FUN_000102d8();
    FUN_000102e2();
    FUN_000102f4();
    FUN_000102fe();
    FUN_0001030a();
  }
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_0001020e(void)

{
  int unaff_s0;
  
  FUN_0001020e();
  if (*(int *)(unaff_s0 + 0x10) != 0) {
    FUN_00010230();
    FUN_0001023a();
    FUN_0001024c();
    FUN_00010256();
    FUN_00010262();
  }
  if (*(int *)(unaff_s0 + 0xc) != 0) {
    FUN_00010284();
    FUN_0001028e();
    FUN_000102a0();
    FUN_000102aa();
    FUN_000102b6();
  }
  if (*(int *)(unaff_s0 + 0x14) != 0) {
    FUN_000102d8();
    FUN_000102e2();
    FUN_000102f4();
    FUN_000102fe();
    FUN_0001030a();
  }
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_00010230(void)

{
  int unaff_s0;
  undefined4 uStack0000000c;
  
  FUN_00010230();
  uStack0000000c = FUN_0001023a();
  FUN_0001024c();
  FUN_00010256();
  FUN_00010262();
  if (*(int *)(unaff_s0 + 0xc) != 0) {
    FUN_00010284();
    FUN_0001028e();
    FUN_000102a0();
    FUN_000102aa();
    FUN_000102b6();
  }
  if (*(int *)(unaff_s0 + 0x14) != 0) {
    FUN_000102d8();
    FUN_000102e2();
    FUN_000102f4();
    FUN_000102fe();
    FUN_0001030a();
  }
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_0001023a(void)

{
  int unaff_s0;
  undefined4 uStack0000000c;
  
  uStack0000000c = FUN_0001023a();
  FUN_0001024c();
  FUN_00010256();
  FUN_00010262();
  if (*(int *)(unaff_s0 + 0xc) != 0) {
    FUN_00010284();
    FUN_0001028e();
    FUN_000102a0();
    FUN_000102aa();
    FUN_000102b6();
  }
  if (*(int *)(unaff_s0 + 0x14) != 0) {
    FUN_000102d8();
    FUN_000102e2();
    FUN_000102f4();
    FUN_000102fe();
    FUN_0001030a();
  }
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_0001024c(void)

{
  int unaff_s0;
  
  FUN_0001024c();
  FUN_00010256();
  FUN_00010262();
  if (*(int *)(unaff_s0 + 0xc) != 0) {
    FUN_00010284();
    FUN_0001028e();
    FUN_000102a0();
    FUN_000102aa();
    FUN_000102b6();
  }
  if (*(int *)(unaff_s0 + 0x14) != 0) {
    FUN_000102d8();
    FUN_000102e2();
    FUN_000102f4();
    FUN_000102fe();
    FUN_0001030a();
  }
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_00010256(void)

{
  int unaff_s0;
  
  FUN_00010256();
  FUN_00010262();
  if (*(int *)(unaff_s0 + 0xc) != 0) {
    FUN_00010284();
    FUN_0001028e();
    FUN_000102a0();
    FUN_000102aa();
    FUN_000102b6();
  }
  if (*(int *)(unaff_s0 + 0x14) != 0) {
    FUN_000102d8();
    FUN_000102e2();
    FUN_000102f4();
    FUN_000102fe();
    FUN_0001030a();
  }
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_00010262(void)

{
  int unaff_s0;
  
  FUN_00010262();
  if (*(int *)(unaff_s0 + 0xc) != 0) {
    FUN_00010284();
    FUN_0001028e();
    FUN_000102a0();
    FUN_000102aa();
    FUN_000102b6();
  }
  if (*(int *)(unaff_s0 + 0x14) != 0) {
    FUN_000102d8();
    FUN_000102e2();
    FUN_000102f4();
    FUN_000102fe();
    FUN_0001030a();
  }
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_00010284(void)

{
  int unaff_s0;
  undefined4 uStack00000010;
  
  FUN_00010284();
  uStack00000010 = FUN_0001028e();
  FUN_000102a0();
  FUN_000102aa();
  FUN_000102b6();
  if (*(int *)(unaff_s0 + 0x14) != 0) {
    FUN_000102d8();
    FUN_000102e2();
    FUN_000102f4();
    FUN_000102fe();
    FUN_0001030a();
  }
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_0001028e(void)

{
  int unaff_s0;
  undefined4 uStack00000010;
  
  uStack00000010 = FUN_0001028e();
  FUN_000102a0();
  FUN_000102aa();
  FUN_000102b6();
  if (*(int *)(unaff_s0 + 0x14) != 0) {
    FUN_000102d8();
    FUN_000102e2();
    FUN_000102f4();
    FUN_000102fe();
    FUN_0001030a();
  }
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_000102a0(void)

{
  int unaff_s0;
  
  FUN_000102a0();
  FUN_000102aa();
  FUN_000102b6();
  if (*(int *)(unaff_s0 + 0x14) != 0) {
    FUN_000102d8();
    FUN_000102e2();
    FUN_000102f4();
    FUN_000102fe();
    FUN_0001030a();
  }
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_000102aa(void)

{
  int unaff_s0;
  
  FUN_000102aa();
  FUN_000102b6();
  if (*(int *)(unaff_s0 + 0x14) != 0) {
    FUN_000102d8();
    FUN_000102e2();
    FUN_000102f4();
    FUN_000102fe();
    FUN_0001030a();
  }
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_000102b6(void)

{
  int unaff_s0;
  
  FUN_000102b6();
  if (*(int *)(unaff_s0 + 0x14) != 0) {
    FUN_000102d8();
    FUN_000102e2();
    FUN_000102f4();
    FUN_000102fe();
    FUN_0001030a();
  }
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_000102d8(void)

{
  int unaff_s0;
  undefined4 uStack00000014;
  
  FUN_000102d8();
  uStack00000014 = FUN_000102e2();
  FUN_000102f4();
  FUN_000102fe();
  FUN_0001030a();
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_000102e2(void)

{
  int unaff_s0;
  undefined4 uStack00000014;
  
  uStack00000014 = FUN_000102e2();
  FUN_000102f4();
  FUN_000102fe();
  FUN_0001030a();
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_000102f4(void)

{
  int unaff_s0;
  
  FUN_000102f4();
  FUN_000102fe();
  FUN_0001030a();
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_000102fe(void)

{
  int unaff_s0;
  
  FUN_000102fe();
  FUN_0001030a();
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_0001030a(void)

{
  int unaff_s0;
  
  FUN_0001030a();
  if (*(int *)(unaff_s0 + 0x18) != 0) {
    FUN_0001032c();
    FUN_00010336();
    FUN_00010348();
    FUN_00010352();
    FUN_0001035e();
  }
  FUN_00010370();
  return 0;
}



undefined4 FUN_0001032c(void)

{
  undefined4 uStack00000018;
  
  FUN_0001032c();
  uStack00000018 = FUN_00010336();
  FUN_00010348();
  FUN_00010352();
  FUN_0001035e();
  FUN_00010370();
  return 0;
}



undefined4 FUN_00010336(void)

{
  undefined4 uStack00000018;
  
  uStack00000018 = FUN_00010336();
  FUN_00010348();
  FUN_00010352();
  FUN_0001035e();
  FUN_00010370();
  return 0;
}



undefined4 FUN_00010348(void)

{
  FUN_00010348();
  FUN_00010352();
  FUN_0001035e();
  FUN_00010370();
  return 0;
}



undefined4 FUN_00010352(void)

{
  FUN_00010352();
  FUN_0001035e();
  FUN_00010370();
  return 0;
}



undefined4 FUN_0001035e(void)

{
  FUN_0001035e();
  FUN_00010370();
  return 0;
}



undefined4 FUN_00010370(void)

{
  FUN_00010370();
  return 0;
}



// WARNING: Variable defined which should be unmapped: ip_addr
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2d11

AT_ERROR_CODE http_url_req(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  AT_ERROR_CODE AVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  in_addr_t ip_addr;
  
  if (iRam00000000 == 0) {
    iRam00000000 = _LVL63(_DAT_00000014,_DAT_00000018);
  }
  iVar2 = FUN_000103c0(_DAT_00000014,_DAT_00000018);
  AVar1 = AEC_CMD_FAIL;
  if (iVar2 != 0) {
    FUN_000103dc();
    DAT_00000007 = *(undefined *)&(para->u).field_0x80;
    DAT_0000000c = *(undefined *)&(para->u).field_0x81;
    _DAT_00000008 = *(undefined4 *)&(para->u).field_0x84;
    DAT_00000006 = 0;
    _DAT_00000014 = 0;
    _DAT_00000018 = 0;
    iVar3 = _L0();
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    FUN_0001043c();
    *(undefined *)((iVar3 - (int)&para->u) + iVar2) = 0;
    puVar4 = (undefined *)FUN_00010458();
    if (puVar4 != (undefined *)0x0) {
      *puVar4 = 0;
      _LVL76();
    }
    iVar2 = FUN_00010478();
    if (iVar2 == -1) {
      FUN_00010506();
    }
    else {
      FUN_000104a8();
    }
    iVar2 = FUN_000104ba();
    if (iVar2 == 1) {
      FUN_00010512();
      AVar1 = AEC_OK;
    }
    else {
      FUN_000104cc();
      iRam00000000 = 0;
      _L0();
      AVar1 = AEC_NETWORK_ERROR;
    }
  }
  return AVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _LVL63(undefined4 uRam00000014,undefined4 uRam00000018)

{
  int unaff_s0;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *unaff_s2;
  int iStack0000000c;
  
  uVar1 = _LVL63(uRam00000014,uRam00000018);
  *unaff_s2 = uVar1;
  iVar2 = FUN_000103c0(uRam00000014,uRam00000018);
  uVar1 = 2;
  if (iVar2 != 0) {
    FUN_000103dc();
    DAT_00000007 = *(undefined *)(unaff_s0 + 0x88);
    DAT_0000000c = *(undefined *)(unaff_s0 + 0x89);
    _DAT_00000008 = *(undefined4 *)(unaff_s0 + 0x8c);
    DAT_00000006 = 0;
    uRam00000014 = 0;
    uRam00000018 = 0;
    iVar3 = _L0();
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    FUN_0001043c();
    *(undefined *)((iVar3 - (unaff_s0 + 8)) + iVar2) = 0;
    puVar4 = (undefined *)FUN_00010458();
    if (puVar4 != (undefined *)0x0) {
      *puVar4 = 0;
      _LVL76();
    }
    iStack0000000c = FUN_00010478();
    if (iStack0000000c == -1) {
      FUN_00010506();
    }
    else {
      FUN_000104a8();
    }
    iVar2 = FUN_000104ba();
    if (iVar2 == 1) {
      FUN_00010512();
      uVar1 = 0;
    }
    else {
      FUN_000104cc();
      *unaff_s2 = 0;
      _L0();
      uVar1 = 0x13;
    }
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000103c0(undefined4 uRam00000014,undefined4 uRam00000018)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *unaff_s2;
  int iStack0000000c;
  
  iVar1 = FUN_000103c0(uRam00000014,uRam00000018);
  uVar2 = 2;
  if (iVar1 != 0) {
    FUN_000103dc();
    DAT_00000007 = *(undefined *)(unaff_s0 + 0x88);
    DAT_0000000c = *(undefined *)(unaff_s0 + 0x89);
    _DAT_00000008 = *(undefined4 *)(unaff_s0 + 0x8c);
    DAT_00000006 = 0;
    uRam00000014 = 0;
    uRam00000018 = 0;
    iVar3 = _L0();
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    FUN_0001043c();
    *(undefined *)((iVar3 - (unaff_s0 + 8)) + iVar1) = 0;
    puVar4 = (undefined *)FUN_00010458();
    if (puVar4 != (undefined *)0x0) {
      *puVar4 = 0;
      _LVL76();
    }
    iStack0000000c = FUN_00010478();
    if (iStack0000000c == -1) {
      FUN_00010506();
    }
    else {
      FUN_000104a8();
    }
    iVar1 = FUN_000104ba();
    if (iVar1 == 1) {
      FUN_00010512();
      uVar2 = 0;
    }
    else {
      FUN_000104cc();
      *unaff_s2 = 0;
      _L0();
      uVar2 = 0x13;
    }
  }
  return uVar2;
}



undefined4 FUN_000103dc(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 *unaff_s2;
  int unaff_s5;
  int iStack0000000c;
  
  FUN_000103dc();
  *(undefined *)(unaff_s5 + 7) = *(undefined *)(unaff_s0 + 0x88);
  *(undefined *)(unaff_s5 + 0xc) = *(undefined *)(unaff_s0 + 0x89);
  uVar3 = *(undefined4 *)(unaff_s0 + 0x8c);
  *(undefined *)(unaff_s5 + 6) = 0;
  *(undefined4 *)(unaff_s5 + 8) = uVar3;
  *(undefined4 *)(unaff_s5 + 0x14) = 0;
  *(undefined4 *)(unaff_s5 + 0x18) = 0;
  iVar1 = _L0();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  FUN_0001043c();
  *(undefined *)((iVar1 - (unaff_s0 + 8)) + unaff_s1) = 0;
  puVar2 = (undefined *)FUN_00010458();
  if (puVar2 != (undefined *)0x0) {
    *puVar2 = 0;
    _LVL76();
  }
  iStack0000000c = FUN_00010478();
  if (iStack0000000c == -1) {
    FUN_00010506();
  }
  else {
    FUN_000104a8();
  }
  iVar1 = FUN_000104ba();
  if (iVar1 == 1) {
    FUN_00010512();
    uVar3 = 0;
  }
  else {
    FUN_000104cc();
    *unaff_s2 = 0;
    _L0();
    uVar3 = 0x13;
  }
  return uVar3;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 *unaff_s2;
  int unaff_s6;
  int iStack0000000c;
  
  iVar1 = _L0();
  if (iVar1 == 0) {
    iVar1 = unaff_s6;
  }
  FUN_0001043c();
  *(undefined *)((iVar1 - unaff_s0) + unaff_s1) = 0;
  puVar2 = (undefined *)FUN_00010458();
  if (puVar2 != (undefined *)0x0) {
    *puVar2 = 0;
    _LVL76();
  }
  iStack0000000c = FUN_00010478();
  if (iStack0000000c == -1) {
    FUN_00010506();
  }
  else {
    FUN_000104a8();
  }
  iVar1 = FUN_000104ba();
  if (iVar1 == 1) {
    FUN_00010512();
    uVar3 = 0;
  }
  else {
    FUN_000104cc();
    *unaff_s2 = 0;
    _L0();
    uVar3 = 0x13;
  }
  return uVar3;
}



undefined4 FUN_0001043c(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_s2;
  int unaff_s3;
  int iStack0000000c;
  
  FUN_0001043c();
  *(undefined *)((unaff_s3 - unaff_s0) + unaff_s1) = 0;
  puVar1 = (undefined *)FUN_00010458();
  if (puVar1 != (undefined *)0x0) {
    *puVar1 = 0;
    _LVL76();
  }
  iStack0000000c = FUN_00010478();
  if (iStack0000000c == -1) {
    FUN_00010506();
  }
  else {
    FUN_000104a8();
  }
  iVar2 = FUN_000104ba();
  if (iVar2 == 1) {
    FUN_00010512();
    uVar3 = 0;
  }
  else {
    FUN_000104cc();
    *unaff_s2 = 0;
    _L0();
    uVar3 = 0x13;
  }
  return uVar3;
}



undefined4 FUN_00010458(void)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *unaff_s2;
  int iStack0000000c;
  
  puVar1 = (undefined *)FUN_00010458();
  if (puVar1 != (undefined *)0x0) {
    *puVar1 = 0;
    _LVL76();
  }
  iStack0000000c = FUN_00010478();
  if (iStack0000000c == -1) {
    FUN_00010506();
  }
  else {
    FUN_000104a8();
  }
  iVar2 = FUN_000104ba();
  if (iVar2 == 1) {
    FUN_00010512();
    uVar3 = 0;
  }
  else {
    FUN_000104cc();
    *unaff_s2 = 0;
    _L0();
    uVar3 = 0x13;
  }
  return uVar3;
}



undefined4 _LVL76(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_s2;
  int iStack0000000c;
  
  _LVL76();
  iStack0000000c = FUN_00010478();
  if (iStack0000000c == -1) {
    FUN_00010506();
  }
  else {
    FUN_000104a8();
  }
  iVar1 = FUN_000104ba();
  if (iVar1 == 1) {
    FUN_00010512();
    uVar2 = 0;
  }
  else {
    FUN_000104cc();
    *unaff_s2 = 0;
    _L0();
    uVar2 = 0x13;
  }
  return uVar2;
}



undefined4 FUN_00010478(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_s2;
  int iStack0000000c;
  
  iStack0000000c = FUN_00010478();
  if (iStack0000000c == -1) {
    FUN_00010506();
  }
  else {
    FUN_000104a8();
  }
  iVar1 = FUN_000104ba();
  if (iVar1 == 1) {
    FUN_00010512();
    uVar2 = 0;
  }
  else {
    FUN_000104cc();
    *unaff_s2 = 0;
    _L0();
    uVar2 = 0x13;
  }
  return uVar2;
}



undefined4 FUN_000104a8(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_s2;
  
  FUN_000104a8();
  iVar1 = FUN_000104ba();
  if (iVar1 == 1) {
    FUN_00010512();
    uVar2 = 0;
  }
  else {
    FUN_000104cc();
    *unaff_s2 = 0;
    _L0();
    uVar2 = 0x13;
  }
  return uVar2;
}



undefined4 FUN_000104ba(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_s2;
  
  iVar1 = FUN_000104ba();
  if (iVar1 == 1) {
    FUN_00010512();
    uVar2 = 0;
  }
  else {
    FUN_000104cc();
    *unaff_s2 = 0;
    _L0();
    uVar2 = 0x13;
  }
  return uVar2;
}



undefined4 FUN_000104cc(void)

{
  undefined4 *unaff_s2;
  
  FUN_000104cc();
  *unaff_s2 = 0;
  _L0();
  return 0x13;
}



undefined4 _L0(void)

{
  _L0();
  return 0x13;
}



undefined4 FUN_00010506(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *unaff_s2;
  
  FUN_00010506();
  iVar1 = FUN_000104ba();
  if (iVar1 == 1) {
    FUN_00010512();
    uVar2 = 0;
  }
  else {
    FUN_000104cc();
    *unaff_s2 = 0;
    _L0();
    uVar2 = 0x13;
  }
  return uVar2;
}



undefined4 FUN_00010512(void)

{
  FUN_00010512();
  return 0;
}



// DWARF DIE: 2f59

err_t cb_altcp_recv_fn(void *arg,altcp_pcb *conn,pbuf *p,err_t err)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = uRam00000000 + 1;
  uVar2 = uRam00000000 & 0x3f;
  uRam00000000 = iVar1;
  if (uVar2 == 0) {
    FUN_0001054c();
  }
  FUN_0001055a();
  if (arg != (void *)0x0) {
    if ((*(int *)((int)arg + 8) == 0) && (p->tot_len != 0)) {
      _L0();
    }
    else {
      uVar2 = _L0();
      if (*(uint *)((int)arg + 0xc) < uVar2) {
        FUN_000105b6();
      }
      else {
        if (*(int *)((int)arg + 8) != 0) {
          FUN_000105a4();
        }
      }
    }
  }
  FUN_0001057a();
  return '\0';
}



undefined4 FUN_0001054c(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  
  FUN_0001054c();
  FUN_0001055a();
  if (unaff_s1 != 0) {
    if ((*(int *)(unaff_s1 + 8) == 0) && (*(short *)(unaff_s0 + 8) != 0)) {
      _L0();
    }
    else {
      uVar1 = _L0();
      if (*(uint *)(unaff_s1 + 0xc) < uVar1) {
        FUN_000105b6();
      }
      else {
        if (*(int *)(unaff_s1 + 8) != 0) {
          FUN_000105a4();
        }
      }
    }
  }
  FUN_0001057a();
  return 0;
}



undefined4 FUN_0001055a(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  
  FUN_0001055a();
  if (unaff_s1 != 0) {
    if ((*(int *)(unaff_s1 + 8) == 0) && (*(short *)(unaff_s0 + 8) != 0)) {
      _L0();
    }
    else {
      uVar1 = _L0();
      if (*(uint *)(unaff_s1 + 0xc) < uVar1) {
        FUN_000105b6();
      }
      else {
        if (*(int *)(unaff_s1 + 8) != 0) {
          FUN_000105a4();
        }
      }
    }
  }
  FUN_0001057a();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_0001057a();
  return 0;
}



undefined4 FUN_0001057a(void)

{
  FUN_0001057a();
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s1;
  uint uVar1;
  
  uVar1 = _L0();
  if (*(uint *)(unaff_s1 + 0xc) < uVar1) {
    FUN_000105b6();
  }
  else {
    if (*(int *)(unaff_s1 + 8) != 0) {
      FUN_000105a4();
    }
  }
  FUN_0001057a();
  return 0;
}



undefined4 FUN_000105a4(void)

{
  FUN_000105a4();
  FUN_0001057a();
  return 0;
}



undefined4 FUN_000105b6(void)

{
  FUN_000105b6();
  FUN_0001057a();
  return 0;
}



// DWARF DIE: 30a9

void cb_httpc_result(void *arg,httpc_result_t httpc_result,u32_t rx_content_len,u32_t srv_res,
                    err_t err)

{
  _L0();
  if (iRam00000000 == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  if (iRam00000000 == 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Variable defined which should be unmapped: sta_info
// DWARF DIE: 37be

AT_ERROR_CODE ap_sta_get(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  uint uVar1;
  uint8_t connected;
  ip4_addr_t ip;
  ip4_addr_t gw;
  ip4_addr_t mask;
  uint8_t mac [6];
  byte bStack38;
  byte bStack37;
  wifi_sta_basic_info sta_info;
  
  _L0();
  FUN_0001061e();
  FUN_00010628();
  FUN_00010638();
  FUN_00010642();
  FUN_00010676();
  FUN_00010682();
  uVar1 = 0;
  while (false) {
    FUN_000106aa(mac + 4,uVar1);
    if (mac[5] != '\0') {
      FUN_000106bc();
      FUN_000106e8((uint)mac[4],(uint)bStack38,(uint)bStack37,(uint)sta_info.sta_idx,
                   (uint)sta_info.is_used,(uint)sta_info.sta_mac[0],(uint)sta_info.sta_mac[1]);
      FUN_000106f4();
    }
    uVar1 = uVar1 + 1 & 0xff;
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  uint uVar1;
  uint uStack00000000;
  byte in_stack_00000013;
  byte in_stack_00000025;
  byte in_stack_00000028;
  char in_stack_00000029;
  byte in_stack_0000002a;
  byte in_stack_0000002b;
  byte in_stack_0000002c;
  byte in_stack_0000002d;
  byte in_stack_0000002e;
  byte in_stack_0000002f;
  uint in_stack_00000038;
  
  _L0();
  FUN_0001061e();
  FUN_00010628();
  FUN_00010638();
  FUN_00010642();
  uStack00000000 = (uint)in_stack_00000025;
  FUN_00010676();
  FUN_00010682();
  for (uVar1 = 0; uVar1 < in_stack_00000013; uVar1 = uVar1 + 1 & 0xff) {
    FUN_000106aa(&stack0x00000028,uVar1);
    if (in_stack_00000029 != '\0') {
      FUN_000106bc();
      uStack00000000 = in_stack_00000038;
      FUN_000106e8((uint)in_stack_00000028,(uint)in_stack_0000002a,(uint)in_stack_0000002b,
                   (uint)in_stack_0000002c,(uint)in_stack_0000002d,(uint)in_stack_0000002e,
                   (uint)in_stack_0000002f);
      FUN_000106f4();
    }
  }
  return 0;
}



undefined4 FUN_0001061e(void)

{
  uint uVar1;
  uint uStack00000000;
  byte in_stack_00000013;
  byte in_stack_00000025;
  byte in_stack_00000028;
  char in_stack_00000029;
  byte in_stack_0000002a;
  byte in_stack_0000002b;
  byte in_stack_0000002c;
  byte in_stack_0000002d;
  byte in_stack_0000002e;
  byte in_stack_0000002f;
  uint in_stack_00000038;
  
  FUN_0001061e();
  FUN_00010628();
  FUN_00010638();
  FUN_00010642();
  uStack00000000 = (uint)in_stack_00000025;
  FUN_00010676();
  FUN_00010682();
  for (uVar1 = 0; uVar1 < in_stack_00000013; uVar1 = uVar1 + 1 & 0xff) {
    FUN_000106aa(&stack0x00000028,uVar1);
    if (in_stack_00000029 != '\0') {
      FUN_000106bc();
      uStack00000000 = in_stack_00000038;
      FUN_000106e8((uint)in_stack_00000028,(uint)in_stack_0000002a,(uint)in_stack_0000002b,
                   (uint)in_stack_0000002c,(uint)in_stack_0000002d,(uint)in_stack_0000002e,
                   (uint)in_stack_0000002f);
      FUN_000106f4();
    }
  }
  return 0;
}



undefined4 FUN_00010628(void)

{
  uint uVar1;
  uint uStack00000000;
  byte in_stack_00000013;
  byte in_stack_00000025;
  byte in_stack_00000028;
  char in_stack_00000029;
  byte in_stack_0000002a;
  byte in_stack_0000002b;
  byte in_stack_0000002c;
  byte in_stack_0000002d;
  byte in_stack_0000002e;
  byte in_stack_0000002f;
  uint in_stack_00000038;
  
  FUN_00010628();
  FUN_00010638();
  FUN_00010642();
  uStack00000000 = (uint)in_stack_00000025;
  FUN_00010676();
  FUN_00010682();
  for (uVar1 = 0; uVar1 < in_stack_00000013; uVar1 = uVar1 + 1 & 0xff) {
    FUN_000106aa(&stack0x00000028,uVar1);
    if (in_stack_00000029 != '\0') {
      FUN_000106bc();
      uStack00000000 = in_stack_00000038;
      FUN_000106e8((uint)in_stack_00000028,(uint)in_stack_0000002a,(uint)in_stack_0000002b,
                   (uint)in_stack_0000002c,(uint)in_stack_0000002d,(uint)in_stack_0000002e,
                   (uint)in_stack_0000002f);
      FUN_000106f4();
    }
  }
  return 0;
}



undefined4 FUN_00010638(void)

{
  uint uVar1;
  uint uStack00000000;
  byte in_stack_00000013;
  byte in_stack_00000025;
  byte in_stack_00000028;
  char in_stack_00000029;
  byte in_stack_0000002a;
  byte in_stack_0000002b;
  byte in_stack_0000002c;
  byte in_stack_0000002d;
  byte in_stack_0000002e;
  byte in_stack_0000002f;
  uint in_stack_00000038;
  
  FUN_00010638();
  FUN_00010642();
  uStack00000000 = (uint)in_stack_00000025;
  FUN_00010676();
  FUN_00010682();
  for (uVar1 = 0; uVar1 < in_stack_00000013; uVar1 = uVar1 + 1 & 0xff) {
    FUN_000106aa(&stack0x00000028,uVar1);
    if (in_stack_00000029 != '\0') {
      FUN_000106bc();
      uStack00000000 = in_stack_00000038;
      FUN_000106e8((uint)in_stack_00000028,(uint)in_stack_0000002a,(uint)in_stack_0000002b,
                   (uint)in_stack_0000002c,(uint)in_stack_0000002d,(uint)in_stack_0000002e,
                   (uint)in_stack_0000002f);
      FUN_000106f4();
    }
  }
  return 0;
}



undefined4 FUN_00010642(void)

{
  uint uVar1;
  uint uStack00000000;
  byte in_stack_00000013;
  byte in_stack_00000025;
  byte in_stack_00000028;
  char in_stack_00000029;
  byte in_stack_0000002a;
  byte in_stack_0000002b;
  byte in_stack_0000002c;
  byte in_stack_0000002d;
  byte in_stack_0000002e;
  byte in_stack_0000002f;
  uint in_stack_00000038;
  
  FUN_00010642();
  uStack00000000 = (uint)in_stack_00000025;
  FUN_00010676();
  FUN_00010682();
  for (uVar1 = 0; uVar1 < in_stack_00000013; uVar1 = uVar1 + 1 & 0xff) {
    FUN_000106aa(&stack0x00000028,uVar1);
    if (in_stack_00000029 != '\0') {
      FUN_000106bc();
      uStack00000000 = in_stack_00000038;
      FUN_000106e8((uint)in_stack_00000028,(uint)in_stack_0000002a,(uint)in_stack_0000002b,
                   (uint)in_stack_0000002c,(uint)in_stack_0000002d,(uint)in_stack_0000002e,
                   (uint)in_stack_0000002f);
      FUN_000106f4();
    }
  }
  return 0;
}



undefined4 FUN_00010676(void)

{
  uint uVar1;
  byte in_stack_00000013;
  byte in_stack_00000028;
  char in_stack_00000029;
  byte in_stack_0000002a;
  byte in_stack_0000002b;
  byte in_stack_0000002c;
  byte in_stack_0000002d;
  byte in_stack_0000002e;
  byte in_stack_0000002f;
  
  FUN_00010676();
  FUN_00010682();
  for (uVar1 = 0; uVar1 < in_stack_00000013; uVar1 = uVar1 + 1 & 0xff) {
    FUN_000106aa(&stack0x00000028,uVar1);
    if (in_stack_00000029 != '\0') {
      FUN_000106bc();
      FUN_000106e8((uint)in_stack_00000028,(uint)in_stack_0000002a,(uint)in_stack_0000002b,
                   (uint)in_stack_0000002c,(uint)in_stack_0000002d,(uint)in_stack_0000002e,
                   (uint)in_stack_0000002f);
      FUN_000106f4();
    }
  }
  return 0;
}



undefined4 FUN_00010682(void)

{
  uint uVar1;
  byte in_stack_00000013;
  byte in_stack_00000028;
  char in_stack_00000029;
  byte in_stack_0000002a;
  byte in_stack_0000002b;
  byte in_stack_0000002c;
  byte in_stack_0000002d;
  byte in_stack_0000002e;
  byte in_stack_0000002f;
  
  FUN_00010682();
  for (uVar1 = 0; uVar1 < in_stack_00000013; uVar1 = uVar1 + 1 & 0xff) {
    FUN_000106aa(&stack0x00000028,uVar1);
    if (in_stack_00000029 != '\0') {
      FUN_000106bc();
      FUN_000106e8((uint)in_stack_00000028,(uint)in_stack_0000002a,(uint)in_stack_0000002b,
                   (uint)in_stack_0000002c,(uint)in_stack_0000002d,(uint)in_stack_0000002e,
                   (uint)in_stack_0000002f);
      FUN_000106f4();
    }
  }
  return 0;
}



undefined4 FUN_000106aa(undefined *param_1,uint param_2)

{
  uint unaff_s0;
  byte in_stack_00000013;
  byte in_stack_00000028;
  char in_stack_00000029;
  byte in_stack_0000002a;
  byte in_stack_0000002b;
  byte in_stack_0000002c;
  byte in_stack_0000002d;
  byte in_stack_0000002e;
  byte in_stack_0000002f;
  
  while( true ) {
    FUN_000106aa(param_1,param_2);
    if (in_stack_00000029 != '\0') {
      FUN_000106bc();
      FUN_000106e8((uint)in_stack_00000028,(uint)in_stack_0000002a,(uint)in_stack_0000002b,
                   (uint)in_stack_0000002c,(uint)in_stack_0000002d,(uint)in_stack_0000002e,
                   (uint)in_stack_0000002f);
      FUN_000106f4();
    }
    unaff_s0 = unaff_s0 + 1 & 0xff;
    if (in_stack_00000013 <= unaff_s0) break;
    param_1 = &stack0x00000028;
    param_2 = unaff_s0;
  }
  return 0;
}



undefined4 FUN_000106bc(void)

{
  uint unaff_s0;
  byte in_stack_00000013;
  byte in_stack_00000028;
  char in_stack_00000029;
  byte in_stack_0000002a;
  byte in_stack_0000002b;
  byte in_stack_0000002c;
  byte in_stack_0000002d;
  byte in_stack_0000002e;
  byte in_stack_0000002f;
  
  do {
    FUN_000106bc();
    FUN_000106e8((uint)in_stack_00000028,(uint)in_stack_0000002a,(uint)in_stack_0000002b,
                 (uint)in_stack_0000002c,(uint)in_stack_0000002d,(uint)in_stack_0000002e,
                 (uint)in_stack_0000002f);
    FUN_000106f4();
    do {
      unaff_s0 = unaff_s0 + 1 & 0xff;
      if (in_stack_00000013 <= unaff_s0) {
        return 0;
      }
      FUN_000106aa(&stack0x00000028,unaff_s0);
    } while (in_stack_00000029 == '\0');
  } while( true );
}



undefined4
FUN_000106e8(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
            uint param_7)

{
  uint unaff_s0;
  byte in_stack_00000013;
  byte in_stack_00000028;
  char in_stack_00000029;
  byte in_stack_0000002a;
  byte in_stack_0000002b;
  byte in_stack_0000002c;
  byte in_stack_0000002d;
  byte in_stack_0000002e;
  byte in_stack_0000002f;
  
  do {
    FUN_000106e8(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    FUN_000106f4();
    do {
      unaff_s0 = unaff_s0 + 1 & 0xff;
      if (in_stack_00000013 <= unaff_s0) {
        return 0;
      }
      FUN_000106aa(&stack0x00000028,unaff_s0);
    } while (in_stack_00000029 == '\0');
    FUN_000106bc();
    param_7 = (uint)in_stack_0000002f;
    param_6 = (uint)in_stack_0000002e;
    param_4 = (uint)in_stack_0000002c;
    param_5 = (uint)in_stack_0000002d;
    param_3 = (uint)in_stack_0000002b;
    param_2 = (uint)in_stack_0000002a;
    param_1 = (uint)in_stack_00000028;
  } while( true );
}



undefined4 FUN_000106f4(void)

{
  uint unaff_s0;
  byte in_stack_00000013;
  byte in_stack_00000028;
  char in_stack_00000029;
  byte in_stack_0000002a;
  byte in_stack_0000002b;
  byte in_stack_0000002c;
  byte in_stack_0000002d;
  byte in_stack_0000002e;
  byte in_stack_0000002f;
  
  do {
    FUN_000106f4();
    do {
      unaff_s0 = unaff_s0 + 1 & 0xff;
      if (in_stack_00000013 <= unaff_s0) {
        return 0;
      }
      FUN_000106aa(&stack0x00000028,unaff_s0);
    } while (in_stack_00000029 == '\0');
    FUN_000106bc();
    FUN_000106e8((uint)in_stack_00000028,(uint)in_stack_0000002a,(uint)in_stack_0000002b,
                 (uint)in_stack_0000002c,(uint)in_stack_0000002d,(uint)in_stack_0000002e,
                 (uint)in_stack_0000002f);
  } while( true );
}



// DWARF DIE: 3d55

AT_ERROR_CODE cwmode_cur_get(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  _L0();
  return AEC_OK;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 3f6d

AT_ERROR_CODE uart_get(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  _L0();
  FUN_0001074c();
  FUN_00010760();
  FUN_00010774();
  FUN_00010788();
  return AEC_OK;
}



undefined4 _L0(void)

{
  _L0();
  FUN_0001074c();
  FUN_00010760();
  FUN_00010774();
  FUN_00010788();
  return 0;
}



undefined4 FUN_0001074c(void)

{
  FUN_0001074c();
  FUN_00010760();
  FUN_00010774();
  FUN_00010788();
  return 0;
}



undefined4 FUN_00010760(void)

{
  FUN_00010760();
  FUN_00010774();
  FUN_00010788();
  return 0;
}



undefined4 FUN_00010774(void)

{
  FUN_00010774();
  FUN_00010788();
  return 0;
}



undefined4 FUN_00010788(void)

{
  FUN_00010788();
  return 0;
}



// DWARF DIE: 3970

AT_ERROR_CODE cwqap(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  _L0();
  FUN_000107aa();
  FUN_000107b4();
  return AEC_OK;
}



undefined4 _L0(void)

{
  _L0();
  FUN_000107aa();
  FUN_000107b4();
  return 0;
}



undefined4 FUN_000107aa(void)

{
  FUN_000107aa();
  FUN_000107b4();
  return 0;
}



undefined4 FUN_000107b4(void)

{
  FUN_000107b4();
  return 0;
}



// DWARF DIE: 39db

AT_ERROR_CODE cwjap_info(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  int iStack208;
  int state;
  ip4_addr_t ip;
  ip4_addr_t gw;
  ip4_addr_t mask;
  wifi_mgmr_sta_connect_ind_stat_info_t info;
  
  _L0();
  _L0();
  if (iStack208 - 3U < 2) {
    FUN_000107f6();
    FUN_00010804();
  }
  FUN_00010816();
  FUN_00010826();
  FUN_00010854();
  FUN_00010876();
  FUN_00010882();
  return AEC_OK;
}



undefined4 _L0(void)

{
  undefined4 uStack00000000;
  uint uStack00000018;
  uint uStack0000001c;
  uint uStack00000020;
  uint uStack00000024;
  uint uStack00000028;
  uint uStack0000002c;
  int in_stack_00000030;
  undefined4 uStack00000034;
  undefined4 uStack00000038;
  undefined4 uStack0000003c;
  byte in_stack_000000e4;
  byte in_stack_000000e5;
  byte in_stack_000000e6;
  byte in_stack_000000e7;
  byte in_stack_000000e8;
  byte in_stack_000000e9;
  
  _L0();
  uStack00000034 = 0;
  uStack00000038 = 0;
  uStack0000003c = 0;
  _L0();
  if (in_stack_00000030 - 3U < 2) {
    FUN_000107f6();
    FUN_00010804();
  }
  FUN_00010816();
  FUN_00010826();
  uStack0000002c = (uint)in_stack_000000e4;
  uStack00000028 = (uint)in_stack_000000e5;
  uStack00000024 = (uint)in_stack_000000e6;
  uStack00000020 = (uint)in_stack_000000e7;
  uStack0000001c = (uint)in_stack_000000e8;
  uStack00000018 = (uint)in_stack_000000e9;
  uStack00000000 = FUN_00010854();
  FUN_00010876();
  FUN_00010882();
  return 0;
}



undefined4 _L0(void)

{
  undefined4 uStack00000000;
  uint uStack00000018;
  uint uStack0000001c;
  uint uStack00000020;
  uint uStack00000024;
  uint uStack00000028;
  uint uStack0000002c;
  int in_stack_00000030;
  byte in_stack_000000e4;
  byte in_stack_000000e5;
  byte in_stack_000000e6;
  byte in_stack_000000e7;
  byte in_stack_000000e8;
  byte in_stack_000000e9;
  
  _L0();
  if (in_stack_00000030 - 3U < 2) {
    FUN_000107f6();
    FUN_00010804();
  }
  FUN_00010816();
  FUN_00010826();
  uStack0000002c = (uint)in_stack_000000e4;
  uStack00000028 = (uint)in_stack_000000e5;
  uStack00000024 = (uint)in_stack_000000e6;
  uStack00000020 = (uint)in_stack_000000e7;
  uStack0000001c = (uint)in_stack_000000e8;
  uStack00000018 = (uint)in_stack_000000e9;
  uStack00000000 = FUN_00010854();
  FUN_00010876();
  FUN_00010882();
  return 0;
}



undefined4 FUN_000107f6(void)

{
  undefined4 uStack00000000;
  uint uStack00000018;
  uint uStack0000001c;
  uint uStack00000020;
  uint uStack00000024;
  uint uStack00000028;
  uint uStack0000002c;
  byte in_stack_000000e4;
  byte in_stack_000000e5;
  byte in_stack_000000e6;
  byte in_stack_000000e7;
  byte in_stack_000000e8;
  byte in_stack_000000e9;
  
  FUN_000107f6();
  FUN_00010804();
  FUN_00010816();
  FUN_00010826();
  uStack0000002c = (uint)in_stack_000000e4;
  uStack00000028 = (uint)in_stack_000000e5;
  uStack00000024 = (uint)in_stack_000000e6;
  uStack00000020 = (uint)in_stack_000000e7;
  uStack0000001c = (uint)in_stack_000000e8;
  uStack00000018 = (uint)in_stack_000000e9;
  uStack00000000 = FUN_00010854();
  FUN_00010876();
  FUN_00010882();
  return 0;
}



undefined4 FUN_00010804(void)

{
  undefined4 uStack00000000;
  uint uStack00000018;
  uint uStack0000001c;
  uint uStack00000020;
  uint uStack00000024;
  uint uStack00000028;
  uint uStack0000002c;
  byte in_stack_000000e4;
  byte in_stack_000000e5;
  byte in_stack_000000e6;
  byte in_stack_000000e7;
  byte in_stack_000000e8;
  byte in_stack_000000e9;
  
  FUN_00010804();
  FUN_00010816();
  FUN_00010826();
  uStack0000002c = (uint)in_stack_000000e4;
  uStack00000028 = (uint)in_stack_000000e5;
  uStack00000024 = (uint)in_stack_000000e6;
  uStack00000020 = (uint)in_stack_000000e7;
  uStack0000001c = (uint)in_stack_000000e8;
  uStack00000018 = (uint)in_stack_000000e9;
  uStack00000000 = FUN_00010854();
  FUN_00010876();
  FUN_00010882();
  return 0;
}



undefined4 FUN_00010816(void)

{
  undefined4 uStack00000000;
  uint uStack00000018;
  uint uStack0000001c;
  uint uStack00000020;
  uint uStack00000024;
  uint uStack00000028;
  uint uStack0000002c;
  byte in_stack_000000e4;
  byte in_stack_000000e5;
  byte in_stack_000000e6;
  byte in_stack_000000e7;
  byte in_stack_000000e8;
  byte in_stack_000000e9;
  
  FUN_00010816();
  FUN_00010826();
  uStack0000002c = (uint)in_stack_000000e4;
  uStack00000028 = (uint)in_stack_000000e5;
  uStack00000024 = (uint)in_stack_000000e6;
  uStack00000020 = (uint)in_stack_000000e7;
  uStack0000001c = (uint)in_stack_000000e8;
  uStack00000018 = (uint)in_stack_000000e9;
  uStack00000000 = FUN_00010854();
  FUN_00010876();
  FUN_00010882();
  return 0;
}



undefined4 FUN_00010826(void)

{
  undefined4 uStack00000000;
  uint uStack00000018;
  uint uStack0000001c;
  uint uStack00000020;
  uint uStack00000024;
  uint uStack00000028;
  uint uStack0000002c;
  byte in_stack_000000e4;
  byte in_stack_000000e5;
  byte in_stack_000000e6;
  byte in_stack_000000e7;
  byte in_stack_000000e8;
  byte in_stack_000000e9;
  
  FUN_00010826();
  uStack0000002c = (uint)in_stack_000000e4;
  uStack00000028 = (uint)in_stack_000000e5;
  uStack00000024 = (uint)in_stack_000000e6;
  uStack00000020 = (uint)in_stack_000000e7;
  uStack0000001c = (uint)in_stack_000000e8;
  uStack00000018 = (uint)in_stack_000000e9;
  uStack00000000 = FUN_00010854();
  FUN_00010876();
  FUN_00010882();
  return 0;
}



undefined4 FUN_00010854(void)

{
  undefined4 uStack00000000;
  
  uStack00000000 = FUN_00010854();
  FUN_00010876();
  FUN_00010882();
  return 0;
}



undefined4 FUN_00010876(void)

{
  FUN_00010876();
  FUN_00010882();
  return 0;
}



undefined4 FUN_00010882(void)

{
  FUN_00010882();
  return 0;
}



// DWARF DIE: 3e09

AT_ERROR_CODE deep_sleep(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  AT_ERROR_CODE AVar1;
  uint8_t weakup_pin;
  
  AVar1 = AEC_CMD_FAIL;
  if ((byte)(*(char *)&(para->u).field_0x4 - 7U) < 2) {
    FUN_000108ba();
    FUN_000108ca();
    FUN_000108da();
    FUN_000108e6();
    FUN_000108f2();
    _LVL166();
    FUN_0001090e();
    FUN_0001091e();
    FUN_0001092a();
    AVar1 = AEC_NO_RESPONSE;
  }
  return AVar1;
}



undefined4 FUN_000108ba(void)

{
  FUN_000108ba();
  FUN_000108ca();
  FUN_000108da();
  FUN_000108e6();
  FUN_000108f2();
  _LVL166();
  FUN_0001090e();
  FUN_0001091e();
  FUN_0001092a();
  return 0x1b;
}



undefined4 FUN_000108ca(void)

{
  FUN_000108ca();
  FUN_000108da();
  FUN_000108e6();
  FUN_000108f2();
  _LVL166();
  FUN_0001090e();
  FUN_0001091e();
  FUN_0001092a();
  return 0x1b;
}



undefined4 FUN_000108da(void)

{
  FUN_000108da();
  FUN_000108e6();
  FUN_000108f2();
  _LVL166();
  FUN_0001090e();
  FUN_0001091e();
  FUN_0001092a();
  return 0x1b;
}



undefined4 FUN_000108e6(void)

{
  FUN_000108e6();
  FUN_000108f2();
  _LVL166();
  FUN_0001090e();
  FUN_0001091e();
  FUN_0001092a();
  return 0x1b;
}



undefined4 FUN_000108f2(void)

{
  FUN_000108f2();
  _LVL166();
  FUN_0001090e();
  FUN_0001091e();
  FUN_0001092a();
  return 0x1b;
}



undefined4 _LVL166(void)

{
  _LVL166();
  FUN_0001090e();
  FUN_0001091e();
  FUN_0001092a();
  return 0x1b;
}



undefined4 FUN_0001090e(void)

{
  FUN_0001090e();
  FUN_0001091e();
  FUN_0001092a();
  return 0x1b;
}



undefined4 FUN_0001091e(void)

{
  FUN_0001091e();
  FUN_0001092a();
  return 0x1b;
}



undefined4 FUN_0001092a(void)

{
  FUN_0001092a();
  return 0x1b;
}



// DWARF DIE: 4038

AT_ERROR_CODE restory(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  _L0();
  return AEC_OK;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// WARNING: Could not reconcile some variable overlaps
// DWARF DIE: 41ac

AT_ERROR_CODE scan(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint8_t opt;
  int iStack72;
  uint32_t cnt;
  wifi_mgmr_ap_item_t *ap_ary;
  
  iVar1 = _L0();
  iVar2 = FUN_00010994();
  if (iVar2 == 0) {
    FUN_000109dc();
    piVar3 = (int *)FUN_000109f0();
    iVar8 = 0;
    if (piVar3 == (int *)0x0) {
      FUN_00010a06();
    }
    else {
      for (; iVar8 < iStack72; iVar8 += 1) {
        piVar3[iVar8] = iVar8;
      }
      if (iVar1 != 0) {
        piVar5 = piVar3;
        for (iVar8 = 1; piVar7 = piVar5 + 1, iVar8 < iStack72; iVar8 += 1) {
          iVar10 = *piVar7;
          iVar6 = iVar10 * 0x34;
          if (*(char *)(*piVar5 * 0x34 + 0x30) < *(char *)(iVar6 + 0x30)) {
            iVar9 = iVar8 + -1;
            piVar5 = piVar7;
            do {
              if (*(char *)(iVar6 + 0x30) <= *(char *)(piVar5[-1] * 0x34 + 0x30)) break;
              *piVar5 = piVar5[-1];
              iVar9 += -1;
              piVar5 = piVar5 + -1;
            } while (iVar9 != -1);
            piVar3[iVar9 + 1] = iVar10;
          }
          piVar5 = piVar7;
        }
      }
      _L0();
      FUN_00010a52();
      FUN_00010a62();
      FUN_00010a6e();
      for (; iVar2 < iStack72; iVar2 += 1) {
        iVar8 = FUN_00010b28(*piVar3 * 0x34);
        if (iVar8 != 0) {
          FUN_00010b38(iVar2);
          if (iVar1 != 0) {
            FUN_00010b50(*piVar3 * 0x34);
            iVar8 = *piVar3 * 0x34;
            FUN_00010b80((uint)*(byte *)(iVar8 + 0x28),(uint)*(byte *)(iVar8 + 0x29),
                         (uint)*(byte *)(iVar8 + 0x2a),(uint)*(byte *)(iVar8 + 0x2b),
                         (uint)*(byte *)(iVar8 + 0x2c),(uint)*(byte *)(iVar8 + 0x2d));
            FUN_00010b9c((uint)*(byte *)(*piVar3 * 0x34 + 0x2e));
            FUN_00010bb8((int)*(char *)(*piVar3 * 0x34 + 0x30));
            uVar4 = FUN_00010bd0((uint)*(byte *)(*piVar3 * 0x34 + 0x2f));
            FUN_00010bde(uVar4);
          }
          FUN_00010bea();
          FUN_00010bf4(5);
        }
        piVar3 = piVar3 + 1;
      }
      _L0();
      FUN_00010abe();
    }
    if (false) {
      _L0();
    }
  }
  else {
    FUN_000109aa();
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte in_stack_00000017;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  iVar1 = _L0();
  if (iVar1 != 0) {
    in_stack_00000017 = 0xff;
  }
  iVar1 = FUN_00010994();
  if (iVar1 == 0) {
    FUN_000109dc();
    piVar2 = (int *)FUN_000109f0();
    iVar7 = 0;
    if (piVar2 == (int *)0x0) {
      FUN_00010a06();
    }
    else {
      for (; iVar7 < in_stack_00000018; iVar7 += 1) {
        piVar2[iVar7] = iVar7;
      }
      if ((in_stack_00000017 >> 5 & 1) != 0) {
        piVar4 = piVar2;
        for (iVar7 = 1; piVar6 = piVar4 + 1, iVar7 < in_stack_00000018; iVar7 += 1) {
          iVar9 = *piVar6;
          iVar5 = iVar9 * 0x34 + in_stack_0000001c;
          if (*(char *)(*piVar4 * 0x34 + in_stack_0000001c + 0x30) < *(char *)(iVar5 + 0x30)) {
            iVar8 = iVar7 + -1;
            piVar4 = piVar6;
            do {
              if (*(char *)(iVar5 + 0x30) <= *(char *)(piVar4[-1] * 0x34 + in_stack_0000001c + 0x30)
                 ) break;
              *piVar4 = piVar4[-1];
              iVar8 += -1;
              piVar4 = piVar4 + -1;
            } while (iVar8 != -1);
            piVar2[iVar8 + 1] = iVar9;
          }
          piVar4 = piVar6;
        }
      }
      _L0();
      FUN_00010a52();
      FUN_00010a62();
      FUN_00010a6e();
      for (; iVar1 < in_stack_00000018; iVar1 += 1) {
        iVar7 = FUN_00010b28(*piVar2 * 0x34 + in_stack_0000001c);
        if (iVar7 != 0) {
          FUN_00010b38(iVar1);
          if ((in_stack_00000017 >> 1 & 1) != 0) {
            FUN_00010b50(*piVar2 * 0x34 + in_stack_0000001c);
          }
          if ((in_stack_00000017 >> 3 & 1) != 0) {
            iVar7 = *piVar2 * 0x34 + in_stack_0000001c;
            FUN_00010b80((uint)*(byte *)(iVar7 + 0x28),(uint)*(byte *)(iVar7 + 0x29),
                         (uint)*(byte *)(iVar7 + 0x2a),(uint)*(byte *)(iVar7 + 0x2b),
                         (uint)*(byte *)(iVar7 + 0x2c),(uint)*(byte *)(iVar7 + 0x2d));
          }
          if ((in_stack_00000017 >> 4 & 1) != 0) {
            FUN_00010b9c((uint)*(byte *)(*piVar2 * 0x34 + in_stack_0000001c + 0x2e));
          }
          if ((in_stack_00000017 >> 2 & 1) != 0) {
            FUN_00010bb8((int)*(char *)(*piVar2 * 0x34 + in_stack_0000001c + 0x30));
          }
          if ((in_stack_00000017 & 1) != 0) {
            uVar3 = FUN_00010bd0((uint)*(byte *)(*piVar2 * 0x34 + in_stack_0000001c + 0x2f));
            FUN_00010bde(uVar3);
          }
          FUN_00010bea();
          FUN_00010bf4(5);
        }
        piVar2 = piVar2 + 1;
      }
      _L0();
      FUN_00010abe();
    }
    if (in_stack_0000001c != 0) {
      _L0();
    }
  }
  else {
    FUN_000109aa();
  }
  return 0;
}



undefined4 FUN_00010994(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte in_stack_00000017;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  iVar1 = FUN_00010994();
  if (iVar1 == 0) {
    FUN_000109dc();
    piVar2 = (int *)FUN_000109f0();
    iVar7 = 0;
    if (piVar2 == (int *)0x0) {
      FUN_00010a06();
    }
    else {
      for (; iVar7 < in_stack_00000018; iVar7 += 1) {
        piVar2[iVar7] = iVar7;
      }
      if ((in_stack_00000017 >> 5 & 1) != 0) {
        piVar4 = piVar2;
        for (iVar7 = 1; piVar6 = piVar4 + 1, iVar7 < in_stack_00000018; iVar7 += 1) {
          iVar9 = *piVar6;
          iVar5 = iVar9 * 0x34 + in_stack_0000001c;
          if (*(char *)(*piVar4 * 0x34 + in_stack_0000001c + 0x30) < *(char *)(iVar5 + 0x30)) {
            iVar8 = iVar7 + -1;
            piVar4 = piVar6;
            do {
              if (*(char *)(iVar5 + 0x30) <= *(char *)(piVar4[-1] * 0x34 + in_stack_0000001c + 0x30)
                 ) break;
              *piVar4 = piVar4[-1];
              iVar8 += -1;
              piVar4 = piVar4 + -1;
            } while (iVar8 != -1);
            piVar2[iVar8 + 1] = iVar9;
          }
          piVar4 = piVar6;
        }
      }
      _L0();
      FUN_00010a52();
      FUN_00010a62();
      FUN_00010a6e();
      for (; iVar1 < in_stack_00000018; iVar1 += 1) {
        iVar7 = FUN_00010b28(*piVar2 * 0x34 + in_stack_0000001c);
        if (iVar7 != 0) {
          FUN_00010b38(iVar1);
          if ((in_stack_00000017 >> 1 & 1) != 0) {
            FUN_00010b50(*piVar2 * 0x34 + in_stack_0000001c);
          }
          if ((in_stack_00000017 >> 3 & 1) != 0) {
            iVar7 = *piVar2 * 0x34 + in_stack_0000001c;
            FUN_00010b80((uint)*(byte *)(iVar7 + 0x28),(uint)*(byte *)(iVar7 + 0x29),
                         (uint)*(byte *)(iVar7 + 0x2a),(uint)*(byte *)(iVar7 + 0x2b),
                         (uint)*(byte *)(iVar7 + 0x2c),(uint)*(byte *)(iVar7 + 0x2d));
          }
          if ((in_stack_00000017 >> 4 & 1) != 0) {
            FUN_00010b9c((uint)*(byte *)(*piVar2 * 0x34 + in_stack_0000001c + 0x2e));
          }
          if ((in_stack_00000017 >> 2 & 1) != 0) {
            FUN_00010bb8((int)*(char *)(*piVar2 * 0x34 + in_stack_0000001c + 0x30));
          }
          if ((in_stack_00000017 & 1) != 0) {
            uVar3 = FUN_00010bd0((uint)*(byte *)(*piVar2 * 0x34 + in_stack_0000001c + 0x2f));
            FUN_00010bde(uVar3);
          }
          FUN_00010bea();
          FUN_00010bf4(5);
        }
        piVar2 = piVar2 + 1;
      }
      _L0();
      FUN_00010abe();
    }
    if (in_stack_0000001c != 0) {
      _L0();
    }
  }
  else {
    FUN_000109aa();
  }
  return 0;
}



undefined4 FUN_000109aa(void)

{
  FUN_000109aa();
  return 0;
}



undefined4 FUN_000109dc(void)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int unaff_s4;
  byte in_stack_00000017;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  FUN_000109dc();
  piVar1 = (int *)FUN_000109f0();
  iVar6 = 0;
  if (piVar1 == (int *)0x0) {
    FUN_00010a06();
  }
  else {
    for (; iVar6 < in_stack_00000018; iVar6 += 1) {
      piVar1[iVar6] = iVar6;
    }
    if ((in_stack_00000017 >> 5 & 1) != 0) {
      piVar3 = piVar1;
      for (iVar6 = 1; piVar5 = piVar3 + 1, iVar6 < in_stack_00000018; iVar6 += 1) {
        iVar8 = *piVar5;
        iVar4 = iVar8 * 0x34 + in_stack_0000001c;
        if (*(char *)(*piVar3 * 0x34 + in_stack_0000001c + 0x30) < *(char *)(iVar4 + 0x30)) {
          iVar7 = iVar6 + -1;
          piVar3 = piVar5;
          do {
            if (*(char *)(iVar4 + 0x30) <= *(char *)(piVar3[-1] * 0x34 + in_stack_0000001c + 0x30))
            break;
            *piVar3 = piVar3[-1];
            iVar7 += -1;
            piVar3 = piVar3 + -1;
          } while (iVar7 != -1);
          piVar1[iVar7 + 1] = iVar8;
        }
        piVar3 = piVar5;
      }
    }
    _L0();
    FUN_00010a52();
    FUN_00010a62();
    FUN_00010a6e();
    for (; unaff_s4 < in_stack_00000018; unaff_s4 += 1) {
      iVar6 = FUN_00010b28(*piVar1 * 0x34 + in_stack_0000001c);
      if (iVar6 != 0) {
        FUN_00010b38(unaff_s4);
        if ((in_stack_00000017 >> 1 & 1) != 0) {
          FUN_00010b50(*piVar1 * 0x34 + in_stack_0000001c);
        }
        if ((in_stack_00000017 >> 3 & 1) != 0) {
          iVar6 = *piVar1 * 0x34 + in_stack_0000001c;
          FUN_00010b80((uint)*(byte *)(iVar6 + 0x28),(uint)*(byte *)(iVar6 + 0x29),
                       (uint)*(byte *)(iVar6 + 0x2a),(uint)*(byte *)(iVar6 + 0x2b),
                       (uint)*(byte *)(iVar6 + 0x2c),(uint)*(byte *)(iVar6 + 0x2d));
        }
        if ((in_stack_00000017 >> 4 & 1) != 0) {
          FUN_00010b9c((uint)*(byte *)(*piVar1 * 0x34 + in_stack_0000001c + 0x2e));
        }
        if ((in_stack_00000017 >> 2 & 1) != 0) {
          FUN_00010bb8((int)*(char *)(*piVar1 * 0x34 + in_stack_0000001c + 0x30));
        }
        if ((in_stack_00000017 & 1) != 0) {
          uVar2 = FUN_00010bd0((uint)*(byte *)(*piVar1 * 0x34 + in_stack_0000001c + 0x2f));
          FUN_00010bde(uVar2);
        }
        FUN_00010bea();
        FUN_00010bf4(5);
      }
      piVar1 = piVar1 + 1;
    }
    _L0();
    FUN_00010abe();
  }
  if (in_stack_0000001c != 0) {
    _L0();
  }
  return 0;
}



undefined4 FUN_000109f0(void)

{
  int unaff_s0;
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint unaff_s2;
  int unaff_s4;
  int unaff_s7;
  int in_stack_0000001c;
  
  piVar1 = (int *)FUN_000109f0();
  iVar6 = 0;
  if (piVar1 == (int *)0x0) {
    FUN_00010a06();
  }
  else {
    for (; iVar6 < unaff_s7; iVar6 += 1) {
      piVar1[iVar6] = iVar6;
    }
    if ((unaff_s2 >> 5 & 1) != 0) {
      piVar3 = piVar1;
      for (iVar6 = 1; piVar5 = piVar3 + 1, iVar6 < unaff_s7; iVar6 += 1) {
        iVar8 = *piVar5;
        iVar4 = iVar8 * 0x34 + unaff_s0;
        if (*(char *)(*piVar3 * 0x34 + unaff_s0 + 0x30) < *(char *)(iVar4 + 0x30)) {
          iVar7 = iVar6 + -1;
          piVar3 = piVar5;
          do {
            if (*(char *)(iVar4 + 0x30) <= *(char *)(piVar3[-1] * 0x34 + unaff_s0 + 0x30)) break;
            *piVar3 = piVar3[-1];
            iVar7 += -1;
            piVar3 = piVar3 + -1;
          } while (iVar7 != -1);
          piVar1[iVar7 + 1] = iVar8;
        }
        piVar3 = piVar5;
      }
    }
    _L0();
    FUN_00010a52();
    FUN_00010a62();
    FUN_00010a6e();
    for (; unaff_s4 < unaff_s7; unaff_s4 += 1) {
      iVar6 = FUN_00010b28(*piVar1 * 0x34 + unaff_s0);
      if (iVar6 != 0) {
        FUN_00010b38(unaff_s4);
        if ((unaff_s2 >> 1 & 1) != 0) {
          FUN_00010b50(*piVar1 * 0x34 + unaff_s0);
        }
        if ((unaff_s2 >> 3 & 1) != 0) {
          iVar6 = *piVar1 * 0x34 + unaff_s0;
          FUN_00010b80((uint)*(byte *)(iVar6 + 0x28),(uint)*(byte *)(iVar6 + 0x29),
                       (uint)*(byte *)(iVar6 + 0x2a),(uint)*(byte *)(iVar6 + 0x2b),
                       (uint)*(byte *)(iVar6 + 0x2c),(uint)*(byte *)(iVar6 + 0x2d));
        }
        if ((unaff_s2 >> 4 & 1) != 0) {
          FUN_00010b9c((uint)*(byte *)(*piVar1 * 0x34 + unaff_s0 + 0x2e));
        }
        if ((unaff_s2 >> 2 & 1) != 0) {
          FUN_00010bb8((int)*(char *)(*piVar1 * 0x34 + unaff_s0 + 0x30));
        }
        if ((unaff_s2 & 1) != 0) {
          uVar2 = FUN_00010bd0((uint)*(byte *)(*piVar1 * 0x34 + unaff_s0 + 0x2f));
          FUN_00010bde(uVar2);
        }
        FUN_00010bea();
        FUN_00010bf4(5);
      }
      piVar1 = piVar1 + 1;
    }
    _L0();
    FUN_00010abe();
  }
  if (in_stack_0000001c != 0) {
    _L0();
  }
  return 0;
}



undefined4 FUN_00010a06(void)

{
  int in_stack_0000001c;
  
  FUN_00010a06();
  if (in_stack_0000001c != 0) {
    _L0();
  }
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  uint unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  int unaff_s7;
  uint uStack00000000;
  uint uStack00000004;
  uint uStack00000008;
  uint uStack0000000c;
  int in_stack_0000001c;
  
  _L0();
  FUN_00010a52();
  FUN_00010a62();
  FUN_00010a6e();
  uStack00000000 = unaff_s2 >> 1 & 1;
  uStack00000004 = unaff_s2 >> 3 & 1;
  uStack00000008 = unaff_s2 >> 4 & 1;
  uStack0000000c = unaff_s2 >> 2 & 1;
  for (; unaff_s4 < unaff_s7; unaff_s4 += 1) {
    iVar1 = FUN_00010b28(*unaff_s3 * 0x34 + unaff_s0);
    if (iVar1 != 0) {
      FUN_00010b38(unaff_s4);
      if (uStack00000000 != 0) {
        FUN_00010b50(*unaff_s3 * 0x34 + unaff_s0);
      }
      if (uStack00000004 != 0) {
        iVar1 = *unaff_s3 * 0x34 + unaff_s0;
        FUN_00010b80((uint)*(byte *)(iVar1 + 0x28),(uint)*(byte *)(iVar1 + 0x29),
                     (uint)*(byte *)(iVar1 + 0x2a),(uint)*(byte *)(iVar1 + 0x2b),
                     (uint)*(byte *)(iVar1 + 0x2c),(uint)*(byte *)(iVar1 + 0x2d));
      }
      if (uStack00000008 != 0) {
        FUN_00010b9c((uint)*(byte *)(*unaff_s3 * 0x34 + unaff_s0 + 0x2e));
      }
      if (uStack0000000c != 0) {
        FUN_00010bb8((int)*(char *)(*unaff_s3 * 0x34 + unaff_s0 + 0x30));
      }
      if ((unaff_s2 & 1) != 0) {
        uVar2 = FUN_00010bd0((uint)*(byte *)(*unaff_s3 * 0x34 + unaff_s0 + 0x2f));
        FUN_00010bde(uVar2);
      }
      FUN_00010bea();
      FUN_00010bf4(5);
    }
    unaff_s3 = unaff_s3 + 1;
  }
  _L0();
  FUN_00010abe();
  if (in_stack_0000001c != 0) {
    _L0();
  }
  return 0;
}



undefined4 FUN_00010a52(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  uint unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  int unaff_s7;
  uint uStack00000000;
  uint uStack00000004;
  uint uStack00000008;
  uint uStack0000000c;
  int in_stack_0000001c;
  
  FUN_00010a52();
  FUN_00010a62();
  FUN_00010a6e();
  uStack00000000 = unaff_s2 >> 1 & 1;
  uStack00000004 = unaff_s2 >> 3 & 1;
  uStack00000008 = unaff_s2 >> 4 & 1;
  uStack0000000c = unaff_s2 >> 2 & 1;
  for (; unaff_s4 < unaff_s7; unaff_s4 += 1) {
    iVar1 = FUN_00010b28(*unaff_s3 * 0x34 + unaff_s0);
    if (iVar1 != 0) {
      FUN_00010b38(unaff_s4);
      if (uStack00000000 != 0) {
        FUN_00010b50(*unaff_s3 * 0x34 + unaff_s0);
      }
      if (uStack00000004 != 0) {
        iVar1 = *unaff_s3 * 0x34 + unaff_s0;
        FUN_00010b80((uint)*(byte *)(iVar1 + 0x28),(uint)*(byte *)(iVar1 + 0x29),
                     (uint)*(byte *)(iVar1 + 0x2a),(uint)*(byte *)(iVar1 + 0x2b),
                     (uint)*(byte *)(iVar1 + 0x2c),(uint)*(byte *)(iVar1 + 0x2d));
      }
      if (uStack00000008 != 0) {
        FUN_00010b9c((uint)*(byte *)(*unaff_s3 * 0x34 + unaff_s0 + 0x2e));
      }
      if (uStack0000000c != 0) {
        FUN_00010bb8((int)*(char *)(*unaff_s3 * 0x34 + unaff_s0 + 0x30));
      }
      if ((unaff_s2 & 1) != 0) {
        uVar2 = FUN_00010bd0((uint)*(byte *)(*unaff_s3 * 0x34 + unaff_s0 + 0x2f));
        FUN_00010bde(uVar2);
      }
      FUN_00010bea();
      FUN_00010bf4(5);
    }
    unaff_s3 = unaff_s3 + 1;
  }
  _L0();
  FUN_00010abe();
  if (in_stack_0000001c != 0) {
    _L0();
  }
  return 0;
}



undefined4 FUN_00010a62(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  uint unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  int unaff_s7;
  uint uStack00000000;
  uint uStack00000004;
  uint uStack00000008;
  uint uStack0000000c;
  int in_stack_0000001c;
  
  FUN_00010a62();
  FUN_00010a6e();
  uStack00000000 = unaff_s2 >> 1 & 1;
  uStack00000004 = unaff_s2 >> 3 & 1;
  uStack00000008 = unaff_s2 >> 4 & 1;
  uStack0000000c = unaff_s2 >> 2 & 1;
  for (; unaff_s4 < unaff_s7; unaff_s4 += 1) {
    iVar1 = FUN_00010b28(*unaff_s3 * 0x34 + unaff_s0);
    if (iVar1 != 0) {
      FUN_00010b38(unaff_s4);
      if (uStack00000000 != 0) {
        FUN_00010b50(*unaff_s3 * 0x34 + unaff_s0);
      }
      if (uStack00000004 != 0) {
        iVar1 = *unaff_s3 * 0x34 + unaff_s0;
        FUN_00010b80((uint)*(byte *)(iVar1 + 0x28),(uint)*(byte *)(iVar1 + 0x29),
                     (uint)*(byte *)(iVar1 + 0x2a),(uint)*(byte *)(iVar1 + 0x2b),
                     (uint)*(byte *)(iVar1 + 0x2c),(uint)*(byte *)(iVar1 + 0x2d));
      }
      if (uStack00000008 != 0) {
        FUN_00010b9c((uint)*(byte *)(*unaff_s3 * 0x34 + unaff_s0 + 0x2e));
      }
      if (uStack0000000c != 0) {
        FUN_00010bb8((int)*(char *)(*unaff_s3 * 0x34 + unaff_s0 + 0x30));
      }
      if ((unaff_s2 & 1) != 0) {
        uVar2 = FUN_00010bd0((uint)*(byte *)(*unaff_s3 * 0x34 + unaff_s0 + 0x2f));
        FUN_00010bde(uVar2);
      }
      FUN_00010bea();
      FUN_00010bf4(5);
    }
    unaff_s3 = unaff_s3 + 1;
  }
  _L0();
  FUN_00010abe();
  if (in_stack_0000001c != 0) {
    _L0();
  }
  return 0;
}



undefined4 FUN_00010a6e(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  uint unaff_s2;
  int *unaff_s3;
  int unaff_s4;
  int unaff_s7;
  uint uStack00000000;
  uint uStack00000004;
  uint uStack00000008;
  uint uStack0000000c;
  int in_stack_0000001c;
  
  FUN_00010a6e();
  uStack00000000 = unaff_s2 >> 1 & 1;
  uStack00000004 = unaff_s2 >> 3 & 1;
  uStack00000008 = unaff_s2 >> 4 & 1;
  uStack0000000c = unaff_s2 >> 2 & 1;
  for (; unaff_s4 < unaff_s7; unaff_s4 += 1) {
    iVar1 = FUN_00010b28(*unaff_s3 * 0x34 + unaff_s0);
    if (iVar1 != 0) {
      FUN_00010b38(unaff_s4);
      if (uStack00000000 != 0) {
        FUN_00010b50(*unaff_s3 * 0x34 + unaff_s0);
      }
      if (uStack00000004 != 0) {
        iVar1 = *unaff_s3 * 0x34 + unaff_s0;
        FUN_00010b80((uint)*(byte *)(iVar1 + 0x28),(uint)*(byte *)(iVar1 + 0x29),
                     (uint)*(byte *)(iVar1 + 0x2a),(uint)*(byte *)(iVar1 + 0x2b),
                     (uint)*(byte *)(iVar1 + 0x2c),(uint)*(byte *)(iVar1 + 0x2d));
      }
      if (uStack00000008 != 0) {
        FUN_00010b9c((uint)*(byte *)(*unaff_s3 * 0x34 + unaff_s0 + 0x2e));
      }
      if (uStack0000000c != 0) {
        FUN_00010bb8((int)*(char *)(*unaff_s3 * 0x34 + unaff_s0 + 0x30));
      }
      if ((unaff_s2 & 1) != 0) {
        uVar2 = FUN_00010bd0((uint)*(byte *)(*unaff_s3 * 0x34 + unaff_s0 + 0x2f));
        FUN_00010bde(uVar2);
      }
      FUN_00010bea();
      FUN_00010bf4(5);
    }
    unaff_s3 = unaff_s3 + 1;
  }
  _L0();
  FUN_00010abe();
  if (in_stack_0000001c != 0) {
    _L0();
  }
  return 0;
}



undefined4 _L0(void)

{
  int in_stack_0000001c;
  
  _L0();
  FUN_00010abe();
  if (in_stack_0000001c != 0) {
    _L0();
  }
  return 0;
}



undefined4 FUN_00010abe(void)

{
  int in_stack_0000001c;
  
  FUN_00010abe();
  if (in_stack_0000001c != 0) {
    _L0();
  }
  return 0;
}



undefined4 FUN_00010b28(int param_1)

{
  int unaff_s0;
  int *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  int in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_0000001c;
  
  while( true ) {
    iVar1 = FUN_00010b28(param_1);
    if (iVar1 != 0) {
      FUN_00010b38(unaff_s4);
      if (in_stack_00000000 != 0) {
        FUN_00010b50(unaff_s5 * *unaff_s1 + unaff_s0);
      }
      if (in_stack_00000004 != 0) {
        iVar1 = unaff_s5 * *unaff_s1 + unaff_s0;
        FUN_00010b80((uint)*(byte *)(iVar1 + 0x28),(uint)*(byte *)(iVar1 + 0x29),
                     (uint)*(byte *)(iVar1 + 0x2a),(uint)*(byte *)(iVar1 + 0x2b),
                     (uint)*(byte *)(iVar1 + 0x2c),(uint)*(byte *)(iVar1 + 0x2d));
      }
      if (in_stack_00000008 != 0) {
        FUN_00010b9c((uint)*(byte *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x2e));
      }
      if (in_stack_0000000c != 0) {
        FUN_00010bb8((int)*(char *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x30));
      }
      if (unaff_s2 != 0) {
        uVar2 = FUN_00010bd0((uint)*(byte *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x2f));
        FUN_00010bde(uVar2);
      }
      FUN_00010bea();
      FUN_00010bf4(5);
    }
    unaff_s4 += 1;
    unaff_s1 = unaff_s1 + 1;
    if (unaff_s7 <= unaff_s4) break;
    param_1 = unaff_s5 * *unaff_s1 + unaff_s0;
  }
  _L0();
  FUN_00010abe();
  if (in_stack_0000001c != 0) {
    _L0();
  }
  return 0;
}



undefined4 FUN_00010b38(int param_1)

{
  int unaff_s0;
  int *unaff_s1;
  undefined4 uVar1;
  int iVar2;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  int in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_0000001c;
  
  do {
    FUN_00010b38(param_1);
    if (in_stack_00000000 != 0) {
      FUN_00010b50(unaff_s5 * *unaff_s1 + unaff_s0);
    }
    if (in_stack_00000004 != 0) {
      iVar2 = unaff_s5 * *unaff_s1 + unaff_s0;
      FUN_00010b80((uint)*(byte *)(iVar2 + 0x28),(uint)*(byte *)(iVar2 + 0x29),
                   (uint)*(byte *)(iVar2 + 0x2a),(uint)*(byte *)(iVar2 + 0x2b),
                   (uint)*(byte *)(iVar2 + 0x2c),(uint)*(byte *)(iVar2 + 0x2d));
    }
    if (in_stack_00000008 != 0) {
      FUN_00010b9c((uint)*(byte *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x2e));
    }
    if (in_stack_0000000c != 0) {
      FUN_00010bb8((int)*(char *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x30));
    }
    if (unaff_s2 != 0) {
      uVar1 = FUN_00010bd0((uint)*(byte *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x2f));
      FUN_00010bde(uVar1);
    }
    FUN_00010bea();
    FUN_00010bf4(5);
    param_1 = unaff_s4;
    do {
      param_1 += 1;
      unaff_s1 = unaff_s1 + 1;
      if (unaff_s7 <= param_1) {
        _L0();
        FUN_00010abe();
        if (in_stack_0000001c != 0) {
          _L0();
        }
        return 0;
      }
      iVar2 = FUN_00010b28(unaff_s5 * *unaff_s1 + unaff_s0);
      unaff_s4 = param_1;
    } while (iVar2 == 0);
  } while( true );
}



undefined4 FUN_00010b50(int param_1)

{
  int unaff_s0;
  int *unaff_s1;
  undefined4 uVar1;
  int iVar2;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  int in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_0000001c;
  
  do {
    FUN_00010b50(param_1);
    do {
      if (in_stack_00000004 != 0) {
        iVar2 = unaff_s5 * *unaff_s1 + unaff_s0;
        FUN_00010b80((uint)*(byte *)(iVar2 + 0x28),(uint)*(byte *)(iVar2 + 0x29),
                     (uint)*(byte *)(iVar2 + 0x2a),(uint)*(byte *)(iVar2 + 0x2b),
                     (uint)*(byte *)(iVar2 + 0x2c),(uint)*(byte *)(iVar2 + 0x2d));
      }
      if (in_stack_00000008 != 0) {
        FUN_00010b9c((uint)*(byte *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x2e));
      }
      if (in_stack_0000000c != 0) {
        FUN_00010bb8((int)*(char *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x30));
      }
      if (unaff_s2 != 0) {
        uVar1 = FUN_00010bd0((uint)*(byte *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x2f));
        FUN_00010bde(uVar1);
      }
      FUN_00010bea();
      FUN_00010bf4(5);
      do {
        unaff_s4 += 1;
        unaff_s1 = unaff_s1 + 1;
        if (unaff_s7 <= unaff_s4) {
          _L0();
          FUN_00010abe();
          if (in_stack_0000001c != 0) {
            _L0();
          }
          return 0;
        }
        iVar2 = FUN_00010b28(unaff_s5 * *unaff_s1 + unaff_s0);
      } while (iVar2 == 0);
      FUN_00010b38(unaff_s4);
    } while (in_stack_00000000 == 0);
    param_1 = unaff_s5 * *unaff_s1 + unaff_s0;
  } while( true );
}



undefined4
FUN_00010b80(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  int unaff_s0;
  int *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  int in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_0000001c;
  
  do {
    FUN_00010b80(param_1,param_2,param_3,param_4,param_5,param_6);
    do {
      if (in_stack_00000008 != 0) {
        FUN_00010b9c((uint)*(byte *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x2e));
      }
      if (in_stack_0000000c != 0) {
        FUN_00010bb8((int)*(char *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x30));
      }
      if (unaff_s2 != 0) {
        uVar2 = FUN_00010bd0((uint)*(byte *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x2f));
        FUN_00010bde(uVar2);
      }
      FUN_00010bea();
      FUN_00010bf4(5);
      do {
        unaff_s4 += 1;
        unaff_s1 = unaff_s1 + 1;
        if (unaff_s7 <= unaff_s4) {
          _L0();
          FUN_00010abe();
          if (in_stack_0000001c != 0) {
            _L0();
          }
          return 0;
        }
        iVar1 = FUN_00010b28(unaff_s5 * *unaff_s1 + unaff_s0);
      } while (iVar1 == 0);
      FUN_00010b38(unaff_s4);
      if (in_stack_00000000 != 0) {
        FUN_00010b50(unaff_s5 * *unaff_s1 + unaff_s0);
      }
    } while (in_stack_00000004 == 0);
    iVar1 = unaff_s5 * *unaff_s1 + unaff_s0;
    param_6 = (uint)*(byte *)(iVar1 + 0x2d);
    param_5 = (uint)*(byte *)(iVar1 + 0x2c);
    param_4 = (uint)*(byte *)(iVar1 + 0x2b);
    param_3 = (uint)*(byte *)(iVar1 + 0x2a);
    param_2 = (uint)*(byte *)(iVar1 + 0x29);
    param_1 = (uint)*(byte *)(iVar1 + 0x28);
  } while( true );
}



undefined4 FUN_00010b9c(uint param_1)

{
  int unaff_s0;
  int *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  int in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_0000001c;
  
  do {
    FUN_00010b9c(param_1);
    do {
      if (in_stack_0000000c != 0) {
        FUN_00010bb8((int)*(char *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x30));
      }
      if (unaff_s2 != 0) {
        uVar2 = FUN_00010bd0((uint)*(byte *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x2f));
        FUN_00010bde(uVar2);
      }
      FUN_00010bea();
      FUN_00010bf4(5);
      do {
        unaff_s4 += 1;
        unaff_s1 = unaff_s1 + 1;
        if (unaff_s7 <= unaff_s4) {
          _L0();
          FUN_00010abe();
          if (in_stack_0000001c != 0) {
            _L0();
          }
          return 0;
        }
        iVar1 = FUN_00010b28(unaff_s5 * *unaff_s1 + unaff_s0);
      } while (iVar1 == 0);
      FUN_00010b38(unaff_s4);
      if (in_stack_00000000 != 0) {
        FUN_00010b50(unaff_s5 * *unaff_s1 + unaff_s0);
      }
      if (in_stack_00000004 != 0) {
        iVar1 = unaff_s5 * *unaff_s1 + unaff_s0;
        FUN_00010b80((uint)*(byte *)(iVar1 + 0x28),(uint)*(byte *)(iVar1 + 0x29),
                     (uint)*(byte *)(iVar1 + 0x2a),(uint)*(byte *)(iVar1 + 0x2b),
                     (uint)*(byte *)(iVar1 + 0x2c),(uint)*(byte *)(iVar1 + 0x2d));
      }
    } while (in_stack_00000008 == 0);
    param_1 = (uint)*(byte *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x2e);
  } while( true );
}



undefined4 FUN_00010bb8(int param_1)

{
  int unaff_s0;
  int *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  int in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_0000001c;
  
  do {
    FUN_00010bb8(param_1);
    do {
      if (unaff_s2 != 0) {
        uVar2 = FUN_00010bd0((uint)*(byte *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x2f));
        FUN_00010bde(uVar2);
      }
      FUN_00010bea();
      FUN_00010bf4(5);
      do {
        unaff_s4 += 1;
        unaff_s1 = unaff_s1 + 1;
        if (unaff_s7 <= unaff_s4) {
          _L0();
          FUN_00010abe();
          if (in_stack_0000001c != 0) {
            _L0();
          }
          return 0;
        }
        iVar1 = FUN_00010b28(unaff_s5 * *unaff_s1 + unaff_s0);
      } while (iVar1 == 0);
      FUN_00010b38(unaff_s4);
      if (in_stack_00000000 != 0) {
        FUN_00010b50(unaff_s5 * *unaff_s1 + unaff_s0);
      }
      if (in_stack_00000004 != 0) {
        iVar1 = unaff_s5 * *unaff_s1 + unaff_s0;
        FUN_00010b80((uint)*(byte *)(iVar1 + 0x28),(uint)*(byte *)(iVar1 + 0x29),
                     (uint)*(byte *)(iVar1 + 0x2a),(uint)*(byte *)(iVar1 + 0x2b),
                     (uint)*(byte *)(iVar1 + 0x2c),(uint)*(byte *)(iVar1 + 0x2d));
      }
      if (in_stack_00000008 != 0) {
        FUN_00010b9c((uint)*(byte *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x2e));
      }
    } while (in_stack_0000000c == 0);
    param_1 = (int)*(char *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x30);
  } while( true );
}



undefined4 FUN_00010bd0(uint param_1)

{
  int unaff_s0;
  int *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  int in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_0000001c;
  
  do {
    uVar2 = FUN_00010bd0(param_1);
    FUN_00010bde(uVar2);
    do {
      FUN_00010bea();
      FUN_00010bf4(5);
      do {
        unaff_s4 += 1;
        unaff_s1 = unaff_s1 + 1;
        if (unaff_s7 <= unaff_s4) {
          _L0();
          FUN_00010abe();
          if (in_stack_0000001c != 0) {
            _L0();
          }
          return 0;
        }
        iVar1 = FUN_00010b28(unaff_s5 * *unaff_s1 + unaff_s0);
      } while (iVar1 == 0);
      FUN_00010b38(unaff_s4);
      if (in_stack_00000000 != 0) {
        FUN_00010b50(unaff_s5 * *unaff_s1 + unaff_s0);
      }
      if (in_stack_00000004 != 0) {
        iVar1 = unaff_s5 * *unaff_s1 + unaff_s0;
        FUN_00010b80((uint)*(byte *)(iVar1 + 0x28),(uint)*(byte *)(iVar1 + 0x29),
                     (uint)*(byte *)(iVar1 + 0x2a),(uint)*(byte *)(iVar1 + 0x2b),
                     (uint)*(byte *)(iVar1 + 0x2c),(uint)*(byte *)(iVar1 + 0x2d));
      }
      if (in_stack_00000008 != 0) {
        FUN_00010b9c((uint)*(byte *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x2e));
      }
      if (in_stack_0000000c != 0) {
        FUN_00010bb8((int)*(char *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x30));
      }
    } while (unaff_s2 == 0);
    param_1 = (uint)*(byte *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x2f);
  } while( true );
}



undefined4 FUN_00010bde(undefined4 param_1)

{
  int unaff_s0;
  int *unaff_s1;
  int iVar1;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  int in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_0000001c;
  
  do {
    FUN_00010bde(param_1);
    do {
      FUN_00010bea();
      FUN_00010bf4(5);
      do {
        unaff_s4 += 1;
        unaff_s1 = unaff_s1 + 1;
        if (unaff_s7 <= unaff_s4) {
          _L0();
          FUN_00010abe();
          if (in_stack_0000001c != 0) {
            _L0();
          }
          return 0;
        }
        iVar1 = FUN_00010b28(unaff_s5 * *unaff_s1 + unaff_s0);
      } while (iVar1 == 0);
      FUN_00010b38(unaff_s4);
      if (in_stack_00000000 != 0) {
        FUN_00010b50(unaff_s5 * *unaff_s1 + unaff_s0);
      }
      if (in_stack_00000004 != 0) {
        iVar1 = unaff_s5 * *unaff_s1 + unaff_s0;
        FUN_00010b80((uint)*(byte *)(iVar1 + 0x28),(uint)*(byte *)(iVar1 + 0x29),
                     (uint)*(byte *)(iVar1 + 0x2a),(uint)*(byte *)(iVar1 + 0x2b),
                     (uint)*(byte *)(iVar1 + 0x2c),(uint)*(byte *)(iVar1 + 0x2d));
      }
      if (in_stack_00000008 != 0) {
        FUN_00010b9c((uint)*(byte *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x2e));
      }
      if (in_stack_0000000c != 0) {
        FUN_00010bb8((int)*(char *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x30));
      }
    } while (unaff_s2 == 0);
    param_1 = FUN_00010bd0((uint)*(byte *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x2f));
  } while( true );
}



undefined4 FUN_00010bea(void)

{
  int unaff_s0;
  int *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  int in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_0000001c;
  
  do {
    FUN_00010bea();
    FUN_00010bf4(5);
    do {
      unaff_s4 += 1;
      unaff_s1 = unaff_s1 + 1;
      if (unaff_s7 <= unaff_s4) {
        _L0();
        FUN_00010abe();
        if (in_stack_0000001c != 0) {
          _L0();
        }
        return 0;
      }
      iVar1 = FUN_00010b28(unaff_s5 * *unaff_s1 + unaff_s0);
    } while (iVar1 == 0);
    FUN_00010b38(unaff_s4);
    if (in_stack_00000000 != 0) {
      FUN_00010b50(unaff_s5 * *unaff_s1 + unaff_s0);
    }
    if (in_stack_00000004 != 0) {
      iVar1 = unaff_s5 * *unaff_s1 + unaff_s0;
      FUN_00010b80((uint)*(byte *)(iVar1 + 0x28),(uint)*(byte *)(iVar1 + 0x29),
                   (uint)*(byte *)(iVar1 + 0x2a),(uint)*(byte *)(iVar1 + 0x2b),
                   (uint)*(byte *)(iVar1 + 0x2c),(uint)*(byte *)(iVar1 + 0x2d));
    }
    if (in_stack_00000008 != 0) {
      FUN_00010b9c((uint)*(byte *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x2e));
    }
    if (in_stack_0000000c != 0) {
      FUN_00010bb8((int)*(char *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x30));
    }
    if (unaff_s2 != 0) {
      uVar2 = FUN_00010bd0((uint)*(byte *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x2f));
      FUN_00010bde(uVar2);
    }
  } while( true );
}



undefined4 FUN_00010bf4(undefined4 param_1)

{
  int unaff_s0;
  int *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int unaff_s2;
  int unaff_s4;
  int unaff_s5;
  int unaff_s7;
  int in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_0000001c;
  
  do {
    FUN_00010bf4(param_1);
    do {
      unaff_s4 += 1;
      unaff_s1 = unaff_s1 + 1;
      if (unaff_s7 <= unaff_s4) {
        _L0();
        FUN_00010abe();
        if (in_stack_0000001c != 0) {
          _L0();
        }
        return 0;
      }
      iVar1 = FUN_00010b28(unaff_s5 * *unaff_s1 + unaff_s0);
    } while (iVar1 == 0);
    FUN_00010b38(unaff_s4);
    if (in_stack_00000000 != 0) {
      FUN_00010b50(unaff_s5 * *unaff_s1 + unaff_s0);
    }
    if (in_stack_00000004 != 0) {
      iVar1 = unaff_s5 * *unaff_s1 + unaff_s0;
      FUN_00010b80((uint)*(byte *)(iVar1 + 0x28),(uint)*(byte *)(iVar1 + 0x29),
                   (uint)*(byte *)(iVar1 + 0x2a),(uint)*(byte *)(iVar1 + 0x2b),
                   (uint)*(byte *)(iVar1 + 0x2c),(uint)*(byte *)(iVar1 + 0x2d));
    }
    if (in_stack_00000008 != 0) {
      FUN_00010b9c((uint)*(byte *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x2e));
    }
    if (in_stack_0000000c != 0) {
      FUN_00010bb8((int)*(char *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x30));
    }
    if (unaff_s2 != 0) {
      uVar2 = FUN_00010bd0((uint)*(byte *)(*unaff_s1 * unaff_s5 + unaff_s0 + 0x2f));
      FUN_00010bde(uVar2);
    }
    FUN_00010bea();
    param_1 = 5;
  } while( true );
}



// DWARF DIE: 4547

AT_ERROR_CODE reset(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  _L0();
  FUN_00010c20();
  FUN_00010c2c();
  FUN_00010c36();
  _L0();
  return AEC_OK;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010c20();
  FUN_00010c2c();
  FUN_00010c36();
  _L0();
  return 0;
}



undefined4 FUN_00010c20(void)

{
  FUN_00010c20();
  FUN_00010c2c();
  FUN_00010c36();
  _L0();
  return 0;
}



undefined4 FUN_00010c2c(void)

{
  FUN_00010c2c();
  FUN_00010c36();
  _L0();
  return 0;
}



undefined4 FUN_00010c36(void)

{
  FUN_00010c36();
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 46d1

AT_ERROR_CODE ble_sync(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  int iVar1;
  
  iVar1 = *(int *)&para->u;
  if (((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) {
    _LVL233();
  }
  return AEC_OK;
}



undefined4 _LVL233(void)

{
  _LVL233();
  return 0;
}



// DWARF DIE: 472a

err_t cb_httpc_headers_done_fn
                (httpc_state_t *connection,void *arg,pbuf *hdr,u16_t hdr_len,u32_t content_len)

{
  _L0();
  FUN_00010caa();
  if ((arg != (void *)0x0) && (*(int *)((int)arg + 8) == 0)) {
    FUN_00010cc0();
    FUN_00010cd2();
  }
  return '\0';
}



undefined4 _L0(void)

{
  int unaff_s1;
  
  _L0();
  FUN_00010caa();
  if ((unaff_s1 != 0) && (*(int *)(unaff_s1 + 8) == 0)) {
    FUN_00010cc0();
    FUN_00010cd2();
  }
  return 0;
}



undefined4 FUN_00010caa(void)

{
  int unaff_s1;
  
  FUN_00010caa();
  if ((unaff_s1 != 0) && (*(int *)(unaff_s1 + 8) == 0)) {
    FUN_00010cc0();
    FUN_00010cd2();
  }
  return 0;
}



undefined4 FUN_00010cc0(void)

{
  FUN_00010cc0();
  FUN_00010cd2();
  return 0;
}



undefined4 FUN_00010cd2(void)

{
  FUN_00010cd2();
  return 0;
}



// DWARF DIE: 4818

AT_ERROR_CODE __wifimode_set(int mode)

{
  _L0();
  if (mode == 0) {
    _L0();
    FUN_00010d14();
    FUN_00010d1e();
    FUN_00010d28();
  }
  else {
    if (mode == 1) {
      FUN_00010d42();
      FUN_00010d4c();
      uRam00000000 = _L0();
    }
    else {
      if (mode != 2) {
        FUN_00010da6();
        return AEC_CMD_ERROR;
      }
      _L0();
      FUN_00010d78();
      FUN_00010d82();
      FUN_00010d8c();
      uRam00000000 = _L0();
    }
  }
  return AEC_OK;
}



undefined4 _L0(void)

{
  int unaff_s0;
  
  _L0();
  if (unaff_s0 == 0) {
    _L0();
    FUN_00010d14();
    FUN_00010d1e();
    FUN_00010d28();
  }
  else {
    if (unaff_s0 == 1) {
      FUN_00010d42();
      FUN_00010d4c();
      uRam00000000 = _L0();
    }
    else {
      if (unaff_s0 != 2) {
        FUN_00010da6();
        return 3;
      }
      _L0();
      FUN_00010d78();
      FUN_00010d82();
      FUN_00010d8c();
      uRam00000000 = _L0();
    }
  }
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010d14();
  FUN_00010d1e();
  FUN_00010d28();
  return 0;
}



undefined4 FUN_00010d14(void)

{
  FUN_00010d14();
  FUN_00010d1e();
  FUN_00010d28();
  return 0;
}



undefined4 FUN_00010d1e(void)

{
  FUN_00010d1e();
  FUN_00010d28();
  return 0;
}



undefined4 FUN_00010d28(void)

{
  FUN_00010d28();
  return 0;
}



undefined4 FUN_00010d42(void)

{
  FUN_00010d42();
  FUN_00010d4c();
  uRam00000000 = _L0();
  return 0;
}



undefined4 FUN_00010d4c(void)

{
  FUN_00010d4c();
  uRam00000000 = _L0();
  return 0;
}



undefined4 _L0(void)

{
  uRam00000000 = _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010d78();
  FUN_00010d82();
  FUN_00010d8c();
  uRam00000000 = _L0();
  return 0;
}



undefined4 FUN_00010d78(void)

{
  FUN_00010d78();
  FUN_00010d82();
  FUN_00010d8c();
  uRam00000000 = _L0();
  return 0;
}



undefined4 FUN_00010d82(void)

{
  FUN_00010d82();
  FUN_00010d8c();
  uRam00000000 = _L0();
  return 0;
}



undefined4 FUN_00010d8c(void)

{
  FUN_00010d8c();
  uRam00000000 = _L0();
  return 0;
}



undefined4 _L0(void)

{
  uRam00000000 = _L0();
  return 0;
}



undefined4 FUN_00010da6(void)

{
  FUN_00010da6();
  return 3;
}



// WARNING: Variable defined which should be unmapped: wifiMode
// DWARF DIE: 36d0

AT_ERROR_CODE set_apcfg(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  AT_ERROR_CODE AVar1;
  int iStack20;
  int wifiMode;
  
  _L0();
  if (iStack20 - 2U < 2) {
    _L0();
    FUN_00010dea();
    FUN_00010e02();
    FUN_00010e22();
    FUN_00010e34();
    AVar1 = AEC_OK;
  }
  else {
    AVar1 = AEC_CMD_FAIL;
  }
  return AVar1;
}



undefined4 _L0(void)

{
  undefined4 uVar1;
  int in_stack_0000000c;
  
  _L0();
  if (in_stack_0000000c - 2U < 2) {
    _L0();
    FUN_00010dea();
    FUN_00010e02();
    FUN_00010e22();
    FUN_00010e34();
    uVar1 = 0;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010dea();
  FUN_00010e02();
  FUN_00010e22();
  FUN_00010e34();
  return 0;
}



undefined4 FUN_00010dea(void)

{
  FUN_00010dea();
  FUN_00010e02();
  FUN_00010e22();
  FUN_00010e34();
  return 0;
}



undefined4 FUN_00010e02(void)

{
  FUN_00010e02();
  FUN_00010e22();
  FUN_00010e34();
  return 0;
}



undefined4 FUN_00010e22(void)

{
  FUN_00010e22();
  FUN_00010e34();
  return 0;
}



undefined4 FUN_00010e34(void)

{
  FUN_00010e34();
  return 0;
}



// DWARF DIE: 3b7d

AT_ERROR_CODE cwjap_cur(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  AT_ERROR_CODE AVar1;
  uint uStack40;
  int wifiMode;
  int auto_conn;
  
  _L0();
  if ((uStack40 & 0xfffffffd) == 1) {
    _L0();
    FUN_00010e92();
    FUN_00010ea8();
    FUN_00010eb6();
    FUN_00010ec6();
    FUN_00010ed4();
    FUN_00010ee4();
    if (para == (at_callback_para_t *)0xfffffff8) {
      FUN_00010ef6();
      AVar1 = AEC_CMD_ERROR;
    }
    else {
      FUN_00010f22();
      FUN_00010f34();
      if (true) {
        _L0();
      }
      else {
        _L0();
      }
      FUN_00010f52();
      FUN_00010f64();
      AVar1 = AEC_OK;
    }
  }
  else {
    AVar1 = AEC_CMD_FAIL;
  }
  return AVar1;
}



undefined4 _L0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  uint in_stack_00000008;
  int in_stack_0000000c;
  
  _L0();
  if ((in_stack_00000008 & 0xfffffffd) == 1) {
    _L0();
    FUN_00010e92();
    FUN_00010ea8();
    FUN_00010eb6();
    FUN_00010ec6();
    FUN_00010ed4();
    FUN_00010ee4();
    if (unaff_s0 == -8) {
      FUN_00010ef6();
      uVar1 = 3;
    }
    else {
      FUN_00010f22();
      FUN_00010f34();
      if (in_stack_0000000c == 0) {
        _L0();
      }
      else {
        _L0();
      }
      FUN_00010f52();
      FUN_00010f64();
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



undefined4 _L0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  int in_stack_0000000c;
  
  _L0();
  FUN_00010e92();
  FUN_00010ea8();
  FUN_00010eb6();
  FUN_00010ec6();
  FUN_00010ed4();
  FUN_00010ee4();
  if (unaff_s0 == -8) {
    FUN_00010ef6();
    uVar1 = 3;
  }
  else {
    FUN_00010f22();
    FUN_00010f34();
    if (in_stack_0000000c == 0) {
      _L0();
    }
    else {
      _L0();
    }
    FUN_00010f52();
    FUN_00010f64();
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_00010e92(void)

{
  int unaff_s0;
  undefined4 uVar1;
  int in_stack_0000000c;
  
  FUN_00010e92();
  FUN_00010ea8();
  FUN_00010eb6();
  FUN_00010ec6();
  FUN_00010ed4();
  FUN_00010ee4();
  if (unaff_s0 == -8) {
    FUN_00010ef6();
    uVar1 = 3;
  }
  else {
    FUN_00010f22();
    FUN_00010f34();
    if (in_stack_0000000c == 0) {
      _L0();
    }
    else {
      _L0();
    }
    FUN_00010f52();
    FUN_00010f64();
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_00010ea8(void)

{
  int unaff_s0;
  undefined4 uVar1;
  int in_stack_0000000c;
  
  FUN_00010ea8();
  FUN_00010eb6();
  FUN_00010ec6();
  FUN_00010ed4();
  FUN_00010ee4();
  if (unaff_s0 == -8) {
    FUN_00010ef6();
    uVar1 = 3;
  }
  else {
    FUN_00010f22();
    FUN_00010f34();
    if (in_stack_0000000c == 0) {
      _L0();
    }
    else {
      _L0();
    }
    FUN_00010f52();
    FUN_00010f64();
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_00010eb6(void)

{
  int unaff_s1;
  undefined4 uVar1;
  int in_stack_0000000c;
  
  FUN_00010eb6();
  FUN_00010ec6();
  FUN_00010ed4();
  FUN_00010ee4();
  if (unaff_s1 == 0) {
    FUN_00010ef6();
    uVar1 = 3;
  }
  else {
    FUN_00010f22();
    FUN_00010f34();
    if (in_stack_0000000c == 0) {
      _L0();
    }
    else {
      _L0();
    }
    FUN_00010f52();
    FUN_00010f64();
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_00010ec6(void)

{
  int unaff_s1;
  undefined4 uVar1;
  int in_stack_0000000c;
  
  FUN_00010ec6();
  FUN_00010ed4();
  FUN_00010ee4();
  if (unaff_s1 == 0) {
    FUN_00010ef6();
    uVar1 = 3;
  }
  else {
    FUN_00010f22();
    FUN_00010f34();
    if (in_stack_0000000c == 0) {
      _L0();
    }
    else {
      _L0();
    }
    FUN_00010f52();
    FUN_00010f64();
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_00010ed4(void)

{
  int unaff_s1;
  undefined4 uVar1;
  int in_stack_0000000c;
  
  FUN_00010ed4();
  FUN_00010ee4();
  if (unaff_s1 == 0) {
    FUN_00010ef6();
    uVar1 = 3;
  }
  else {
    FUN_00010f22();
    FUN_00010f34();
    if (in_stack_0000000c == 0) {
      _L0();
    }
    else {
      _L0();
    }
    FUN_00010f52();
    FUN_00010f64();
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_00010ee4(void)

{
  int unaff_s1;
  undefined4 uVar1;
  int in_stack_0000000c;
  
  FUN_00010ee4();
  if (unaff_s1 == 0) {
    FUN_00010ef6();
    uVar1 = 3;
  }
  else {
    FUN_00010f22();
    FUN_00010f34();
    if (in_stack_0000000c == 0) {
      _L0();
    }
    else {
      _L0();
    }
    FUN_00010f52();
    FUN_00010f64();
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_00010ef6(void)

{
  FUN_00010ef6();
  return 3;
}



undefined4 FUN_00010f22(void)

{
  int in_stack_0000000c;
  
  FUN_00010f22();
  FUN_00010f34();
  if (in_stack_0000000c == 0) {
    _L0();
  }
  else {
    _L0();
  }
  FUN_00010f52();
  FUN_00010f64();
  return 0;
}



undefined4 FUN_00010f34(void)

{
  int in_stack_0000000c;
  
  FUN_00010f34();
  if (in_stack_0000000c == 0) {
    _L0();
  }
  else {
    _L0();
  }
  FUN_00010f52();
  FUN_00010f64();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010f52();
  FUN_00010f64();
  return 0;
}



undefined4 FUN_00010f52(void)

{
  FUN_00010f52();
  FUN_00010f64();
  return 0;
}



undefined4 FUN_00010f64(void)

{
  FUN_00010f64();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010f52();
  FUN_00010f64();
  return 0;
}



// DWARF DIE: 4949

AT_ERROR_CODE cwmode_cur(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  AT_ERROR_CODE AVar1;
  AT_ERROR_CODE extraout_a0;
  int iStack20;
  int now_mode;
  
  if (*(uint *)&para->u < 3) {
    _LVL311();
    AVar1 = AEC_OK;
    if (*(int *)&para->u != iStack20) {
      FUN_00010fd0();
      FUN_00010fda();
      AVar1 = extraout_a0;
    }
  }
  else {
    FUN_00010f96();
    AVar1 = AEC_CMD_ERROR;
  }
  return AVar1;
}



undefined4 FUN_00010f96(void)

{
  FUN_00010f96();
  return 3;
}



undefined4 _LVL311(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 extraout_a0;
  int in_stack_0000000c;
  
  _LVL311();
  uVar1 = 0;
  if (*(int *)(unaff_s0 + 8) != in_stack_0000000c) {
    FUN_00010fd0();
    FUN_00010fda();
    uVar1 = extraout_a0;
  }
  return uVar1;
}



void FUN_00010fd0(void)

{
  FUN_00010fd0();
  FUN_00010fda();
  return;
}



void FUN_00010fda(void)

{
  FUN_00010fda();
  return;
}



// DWARF DIE: 4a04

AT_ERROR_CODE uart_set(at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  AT_ERROR_CODE AVar1;
  int iVar2;
  
  FUN_00010ff6();
  iVar2 = FUN_00011010();
  if (iVar2 == 0) {
    FUN_00011026();
    FUN_0001103a();
    FUN_0001104e();
    FUN_00011062();
    FUN_00011076();
    AVar1 = AEC_OK;
  }
  else {
    AVar1 = AEC_PARA_ERROR;
  }
  return AVar1;
}



undefined4 FUN_00010ff6(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00010ff6();
  iVar1 = FUN_00011010();
  if (iVar1 == 0) {
    FUN_00011026();
    FUN_0001103a();
    FUN_0001104e();
    FUN_00011062();
    FUN_00011076();
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}



undefined4 FUN_00011010(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00011010();
  if (iVar1 == 0) {
    FUN_00011026();
    FUN_0001103a();
    FUN_0001104e();
    FUN_00011062();
    FUN_00011076();
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}



undefined4 FUN_00011026(void)

{
  FUN_00011026();
  FUN_0001103a();
  FUN_0001104e();
  FUN_00011062();
  FUN_00011076();
  return 0;
}



undefined4 FUN_0001103a(void)

{
  FUN_0001103a();
  FUN_0001104e();
  FUN_00011062();
  FUN_00011076();
  return 0;
}



undefined4 FUN_0001104e(void)

{
  FUN_0001104e();
  FUN_00011062();
  FUN_00011076();
  return 0;
}



undefined4 FUN_00011062(void)

{
  FUN_00011062();
  FUN_00011076();
  return 0;
}



undefined4 FUN_00011076(void)

{
  FUN_00011076();
  return 0;
}



// DWARF DIE: 46ba

u32 at_get_errorcode(void)

{
  return 0;
}



// DWARF DIE: 4666

int at_cmd_impl_init(void)

{
  bool bVar1;
  int iVar2;
  
  iRam00000000 = _L0();
  iVar2 = FUN_000110ac();
  bVar1 = iRam00000000 != 0;
  iRam00000000 = iVar2;
  if (bVar1) {
    if (iVar2 != 0) {
      return 0;
    }
    FUN_000110ca();
  }
  if (iRam00000000 != 0) {
    _L0();
  }
  return -1;
}



undefined4 _L0(void)

{
  int *unaff_s0;
  int iVar1;
  
  iVar1 = _L0();
  *unaff_s0 = iVar1;
  iRam00000000 = FUN_000110ac();
  if (*unaff_s0 != 0) {
    if (iRam00000000 != 0) {
      return 0;
    }
    FUN_000110ca();
  }
  if (iRam00000000 != 0) {
    _L0();
  }
  return 0xffffffff;
}



undefined4 FUN_000110ac(void)

{
  int *unaff_s0;
  
  iRam00000000 = FUN_000110ac();
  if (*unaff_s0 != 0) {
    if (iRam00000000 != 0) {
      return 0;
    }
    FUN_000110ca();
  }
  if (iRam00000000 != 0) {
    _L0();
  }
  return 0xffffffff;
}



undefined4 FUN_000110ca(void)

{
  int *unaff_s0;
  
  FUN_000110ca();
  if (*unaff_s0 != 0) {
    _L0();
  }
  return 0xffffffff;
}



void _L0(void)

{
  _L0();
  return;
}



// DWARF DIE: 45f4

AT_ERROR_CODE callback(AT_CALLBACK_CMD cmd,at_callback_para_t *para,at_callback_rsp_t *rsp)

{
  code *UNRECOVERED_JUMPTABLE;
  AT_ERROR_CODE AVar1;
  undefined3 in_register_00002029;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)0x0;
  iVar3 = 0;
  while (CONCAT31(in_register_00002029,cmd) != *piVar2) {
    iVar3 += 1;
    piVar2 = piVar2 + 2;
    if (iVar3 == 0x1b) {
      return AEC_UNSUPPORTED;
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(iVar3 * 8 + 4);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    // WARNING: Could not recover jumptable at 0x00011116. Too many branches
                    // WARNING: Treating indirect jump as call
    AVar1 = (*UNRECOVERED_JUMPTABLE)(para,rsp);
    return AVar1;
  }
  return AEC_UNDEFINED;
}


