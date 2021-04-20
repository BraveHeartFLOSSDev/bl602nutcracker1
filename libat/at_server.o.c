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

typedef struct file_ops file_ops, *Pfile_ops;

typedef struct inode_t inode_t, *Pinode_t;

typedef struct file_t file_t, *Pfile_t;

typedef int _ssize_t;

typedef _ssize_t ssize_t;

typedef uint size_t;

typedef struct pollfd pollfd, *Ppollfd;

typedef union inode_ops_t inode_ops_t, *Pinode_ops_t;

typedef uchar uint8_t;

typedef struct file_ops file_ops_t;

typedef struct fs_ops fs_ops, *Pfs_ops;

typedef long _off_t;

typedef _off_t __off_t;

typedef __off_t off_t;

typedef struct stat stat, *Pstat;

typedef struct aos_dir_t aos_dir_t, *Paos_dir_t;

typedef struct aos_dirent_t aos_dirent_t, *Paos_dirent_t;

typedef struct statfs statfs, *Pstatfs;

typedef struct fs_ops fs_ops_t;

typedef short __dev_t;

typedef __dev_t dev_t;

typedef ushort __ino_t;

typedef __ino_t ino_t;

typedef ulong __uint32_t;

typedef __uint32_t __mode_t;

typedef __mode_t mode_t;

typedef ushort __nlink_t;

typedef __nlink_t nlink_t;

typedef ushort __uid_t;

typedef __uid_t uid_t;

typedef ushort __gid_t;

typedef __gid_t gid_t;

typedef longlong __int_least64_t;

typedef __int_least64_t time_t;

typedef long __blksize_t;

typedef __blksize_t blksize_t;

typedef long __blkcnt_t;

typedef __blkcnt_t blkcnt_t;

struct pollfd {
};

struct file_ops {
    int (* open)(struct inode_t *, struct file_t *);
    int (* close)(struct file_t *);
    ssize_t (* read)(struct file_t *, void *, size_t);
    ssize_t (* write)(struct file_t *, void *, size_t);
    int (* ioctl)(struct file_t *, int, ulong);
    int (* poll)(struct file_t *, _Bool, void (* )(struct pollfd *, void *), struct pollfd *, void *);
    int (* sync)(struct file_t *);
};

struct stat {
    dev_t st_dev;
    ino_t st_ino;
    mode_t st_mode;
    nlink_t st_nlink;
    uid_t st_uid;
    gid_t st_gid;
    dev_t st_rdev;
    off_t st_size;
    undefined field_0x14;
    undefined field_0x15;
    undefined field_0x16;
    undefined field_0x17;
    time_t st_atime;
    long st_spare1;
    undefined field_0x24;
    undefined field_0x25;
    undefined field_0x26;
    undefined field_0x27;
    time_t st_mtime;
    long st_spare2;
    undefined field_0x34;
    undefined field_0x35;
    undefined field_0x36;
    undefined field_0x37;
    time_t st_ctime;
    long st_spare3;
    blksize_t st_blksize;
    blkcnt_t st_blocks;
    long st_spare4[2];
    undefined field_0x54;
    undefined field_0x55;
    undefined field_0x56;
    undefined field_0x57;
};

union inode_ops_t {
    file_ops_t * i_ops;
    fs_ops_t * i_fops;
};

struct aos_dir_t {
    int dd_vfs_fd;
    int dd_rsv;
};

struct aos_dirent_t { // Missing member d_name : char[1] at offset 0x5 [Unsupported interior flex array: char[1]]
    int d_ino;
    uint8_t d_type;
    undefined field_0x5;
    undefined field_0x6;
    undefined field_0x7;
};

struct file_t {
    struct inode_t * node;
    void * f_arg;
    size_t offset;
};

struct statfs {
    long f_type;
    long f_bsize;
    long f_blocks;
    long f_bfree;
    long f_bavail;
    long f_files;
    long f_ffree;
    long f_fsid;
    long f_namelen;
};

struct inode_t {
    union inode_ops_t ops;
    void * i_arg;
    char * i_name;
    int i_flags;
    uint8_t type;
    uint8_t refs;
    undefined field_0x12;
    undefined field_0x13;
};

struct fs_ops {
    int (* open)(struct file_t *, char *, int);
    int (* close)(struct file_t *);
    ssize_t (* read)(struct file_t *, char *, size_t);
    ssize_t (* write)(struct file_t *, char *, size_t);
    off_t (* lseek)(struct file_t *, off_t, int);
    int (* sync)(struct file_t *);
    int (* stat)(struct file_t *, char *, struct stat *);
    int (* unlink)(struct file_t *, char *);
    int (* rename)(struct file_t *, char *, char *);
    aos_dir_t * (* opendir)(struct file_t *, char *);
    aos_dirent_t * (* readdir)(struct file_t *, struct aos_dir_t *);
    int (* closedir)(struct file_t *, struct aos_dir_t *);
    int (* mkdir)(struct file_t *, char *);
    int (* rmdir)(struct file_t *, char *);
    void (* rewinddir)(struct file_t *, struct aos_dir_t *);
    long (* telldir)(struct file_t *, struct aos_dir_t *);
    void (* seekdir)(struct file_t *, struct aos_dir_t *, long);
    int (* ioctl)(struct file_t *, int, ulong);
    int (* statfs)(struct file_t *, char *, struct statfs *);
    int (* access)(struct file_t *, char *, int);
};

typedef struct tskTaskControlBlock tskTaskControlBlock, *PtskTaskControlBlock;

typedef struct tskTaskControlBlock * TaskHandle_t;

struct tskTaskControlBlock {
};

typedef union anon_union.conflict207 anon_union.conflict207, *Panon_union.conflict207;

typedef uint wint_t;

union anon_union.conflict207 {
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict207_for___value anon_union.conflict207_for___value, *Panon_union.conflict207_for___value;

union anon_union.conflict207_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflict207_for___value __value;
};

typedef long _fpos_t;

typedef struct _at_evt _at_evt, *P_at_evt;

typedef ulong uint32_t;

struct _at_evt {
    int evt_id;
    uint8_t ctx_buf[20];
    uint32_t ctx_size;
};

typedef struct QueueDefinition QueueDefinition, *PQueueDefinition;

typedef struct QueueDefinition * QueueHandle_t;

struct QueueDefinition {
};

typedef struct pbuf pbuf, *Ppbuf;

typedef ushort uint16_t;

typedef uint16_t u16_t;

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

typedef long int32_t;

typedef char int8_t;

typedef struct at_sever at_sever, *Pat_sever;

typedef struct at_sever at_sever_t;

typedef QueueHandle_t SemaphoreHandle_t;

struct at_sever {
    int wifi_mode;
    uint32_t uart_baud;
    int at_serial_fd;
    SemaphoreHandle_t at_serial_mtx;
    QueueHandle_t xQueue;
    uint8_t queue_buf[1024];
};

typedef enum at_evt_t {
    AT_ASYNC_WIFI_CONNECTED=1,
    AT_WIFI_DISCONNECT=5,
    AT_BLE_DISCONNECTED=8,
    AT_ASYNC_PSK_ERROR=3,
    AT_ASYNC_NO_AP_FOUND=4,
    AT_BLE_CONNECTED=7,
    AT_WIFI_IP_GET=9,
    AT_ASYNC_DATA_IN=2,
    AT_WIFI_PRVO_DUMP=6
} at_evt_t;

typedef struct ip4_addr ip4_addr, *Pip4_addr;

typedef uint32_t u32_t;

struct ip4_addr {
    u32_t addr;
};

typedef struct ip4_addr ip4_addr_t;

typedef enum UART_Parity_Type {
    UART_PARITY_ODD=1,
    UART_PARITY_EVEN=2,
    UART_PARITY_NONE=0
} UART_Parity_Type;

typedef enum anon_enum_8.conflict2486 {
    MEMP_MAX=15,
    MEMP_TCP_SEG=4,
    MEMP_NETCONN=7,
    UART_TXRX=2,
    MEMP_UDP_PCB=1,
    MEMP_RAW_PCB=0,
    MEMP_NETDB=12,
    MEMP_TCP_PCB_LISTEN=3,
    MEMP_SYS_TIMEOUT=11,
    MEMP_PBUF=13,
    UART_RX=1,
    MEMP_IGMP_GROUP=10,
    UART_TX=0,
    MEMP_TCPIP_MSG_API=8,
    MEMP_PBUF_POOL=14,
    MEMP_ALTCP_PCB=5,
    MEMP_NETBUF=6,
    MEMP_TCP_PCB=2,
    MEMP_TCPIP_MSG_INPKT=9
} anon_enum_8.conflict2486;

typedef enum UART_DataBits_Type {
    UART_DATABITS_5=0,
    UART_DATABITS_7=2,
    UART_DATABITS_6=1,
    UART_DATABITS_8=3
} UART_DataBits_Type;

typedef enum UART_ByteBitInverse_Type {
    UART_LSB_FIRST=0,
    UART_MSB_FIRST=1
} UART_ByteBitInverse_Type;

typedef enum UART_StopBits_Type {
    UART_STOPBITS_1=0,
    UART_STOPBITS_2=2,
    UART_STOPBITS_1_5=1
} UART_StopBits_Type;

typedef struct UART_CFG_Type UART_CFG_Type, *PUART_CFG_Type;

typedef enum BL_Fun_Type {
    DISABLE=0,
    ENABLE=1
} BL_Fun_Type;

struct UART_CFG_Type {
    uint32_t uartClk;
    uint32_t baudRate;
    enum UART_DataBits_Type dataBits;
    enum UART_StopBits_Type stopBits;
    enum UART_Parity_Type parity;
    enum BL_Fun_Type ctsFlowControl;
    enum BL_Fun_Type rxDeglitch;
    enum BL_Fun_Type rtsSoftwareControl;
    enum UART_ByteBitInverse_Type byteBitInverse;
    undefined field_0xf;
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

typedef int8_t s8_t;

typedef s8_t err_t;

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t {
};

typedef u16_t mem_size_t;

typedef struct at_ip_para_t at_ip_para_t, *Pat_ip_para_t;

struct at_ip_para_t {
    at_ip_t ip;
    at_ip_t getway;
    at_ip_t netmask;
    at_ip_t dns1;
    at_ip_t dns2;
};

typedef struct anon_struct.conflict1e52 anon_struct.conflict1e52, *Panon_struct.conflict1e52;

struct anon_struct.conflict1e52 {
    uint32_t sleep_time;
    int weakup_pin;
};

typedef struct anon_struct.conflict1f51 anon_struct.conflict1f51, *Panon_struct.conflict1f51;

struct anon_struct.conflict1f51 {
    char hostname[128];
};

typedef struct at_serial_para_t at_serial_para_t, *Pat_serial_para_t;

typedef uint u32;

struct at_serial_para_t {
    u32 baudrate;
    u32 dataBit;
    u32 parity;
    u32 stopBit;
    u32 hwfc;
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

typedef struct anon_struct.conflict1dcc anon_struct.conflict1dcc, *Panon_struct.conflict1dcc;

typedef int s32;

typedef uchar u8;

struct anon_struct.conflict1dcc {
    s32 len;
    u8 * buf;
};

typedef struct at_callback_para_t at_callback_para_t, *Pat_callback_para_t;

typedef struct at_config_t at_config_t, *Pat_config_t;

typedef union anon_union.conflict2087_for_u anon_union.conflict2087_for_u, *Panon_union.conflict2087_for_u;

typedef struct anon_struct.conflict1d70 anon_struct.conflict1d70, *Panon_struct.conflict1d70;

typedef struct anon_struct.conflict1d9a anon_struct.conflict1d9a, *Panon_struct.conflict1d9a;

typedef struct at_tcpserver_para_t at_tcpserver_para_t, *Pat_tcpserver_para_t;

typedef struct anon_struct.conflict1df3 anon_struct.conflict1df3, *Panon_struct.conflict1df3;

typedef struct anon_struct.conflict1e92 anon_struct.conflict1e92, *Panon_struct.conflict1e92;

typedef struct anon_struct.conflict1ec9 anon_struct.conflict1ec9, *Panon_struct.conflict1ec9;

typedef struct anon_struct.conflict1f38 anon_struct.conflict1f38, *Panon_struct.conflict1f38;

typedef struct anon_struct.conflict1f7a anon_struct.conflict1f7a, *Panon_struct.conflict1f7a;

typedef struct anon_struct.conflict1fbd anon_struct.conflict1fbd, *Panon_struct.conflict1fbd;

typedef struct at_network_para_t at_network_para_t, *Pat_network_para_t;

typedef struct at_sendData_para_t at_sendData_para_t, *Pat_sendData_para_t;

typedef struct at_close_para_t at_close_para_t, *Pat_close_para_t;

typedef struct at_client_ssl_path_para_t at_client_ssl_path_para_t, *Pat_client_ssl_path_para_t;

typedef struct at_client_ssl_sni_t at_client_ssl_sni_t, *Pat_client_ssl_sni_t;

typedef struct at_client_ssl_alpn_t at_client_ssl_alpn_t, *Pat_client_ssl_alpn_t;

typedef struct at_ble_sync_mode_t at_ble_sync_mode_t, *Pat_ble_sync_mode_t;

typedef struct anon_struct.conflict1fd6 anon_struct.conflict1fd6, *Panon_struct.conflict1fd6;

typedef struct anon_struct.conflict200a anon_struct.conflict200a, *Panon_struct.conflict200a;

struct anon_struct.conflict1fbd {
    at_ip_t setdnsip;
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

struct anon_struct.conflict1f38 {
    char hostname[33];
};

struct anon_struct.conflict1fd6 {
    int ID;
    int mode;
    int pull;
};

struct at_sendData_para_t {
    at_di_t linkId;
    at_di_t bufferlen;
    at_text_t * buffer;
    at_text_t hostname[256];
    at_di_t port;
};

struct anon_struct.conflict200a {
    int ID;
    int mode;
};

struct anon_struct.conflict1d70 {
    char hostname[256];
};

struct anon_struct.conflict1ec9 {
    char ssid[64];
    char psk[64];
    int chl;
    int ecn;
    int max_conn;
    int hidden;
};

struct at_close_para_t {
    at_di_t linkId;
};

struct anon_struct.conflict1d9a {
    s32 value;
};

struct anon_struct.conflict1df3 {
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

struct at_network_para_t {
    at_di_t linkId;
    at_text_t type[4];
    at_text_t hostname[256];
    at_di_t port;
    at_di_t localport;
    at_di_t keepAlive;
};

struct anon_struct.conflict1f7a {
    char hostname[128];
    uint8_t type;
    uint8_t content_type;
    undefined field_0x82;
    undefined field_0x83;
    uint8_t * data;
};

struct at_ble_sync_mode_t {
    int mode;
};

struct anon_struct.conflict1e92 {
    char ssid[33];
    char pwd[33];
};

union anon_union.conflict2087_for_u {
    struct anon_struct.conflict1d70 ping;
    struct anon_struct.conflict1d9a wifi;
    struct anon_struct.conflict1d9a scan;
    struct at_tcpserver_para_t tcp_server;
    struct anon_struct.conflict1dcc mode;
    struct anon_struct.conflict1df3 uart;
    struct anon_struct.conflict1e52 sleep;
    struct anon_struct.conflict1d9a wifiMode;
    struct anon_struct.conflict1e92 joinParam;
    struct at_ip_para_t at_ip_para;
    struct anon_struct.conflict1ec9 apcfgParam;
    struct anon_struct.conflict1f38 iphostname;
    struct anon_struct.conflict1f51 dns_parse;
    struct anon_struct.conflict1f7a http_req;
    struct anon_struct.conflict1fbd set_dns;
    struct at_network_para_t net_param;
    struct at_sendData_para_t send_param;
    struct at_close_para_t close_id;
    struct at_client_ssl_path_para_t client_ssl_path_cfg;
    struct at_client_ssl_sni_t client_ssl_sni_cfg;
    struct at_client_ssl_alpn_t client_ssl_alpn_cfg;
    struct at_ble_sync_mode_t ble_sync_mode;
    struct anon_struct.conflict1fd6 setgpio_para;
    struct anon_struct.conflict200a setiodir_para;
    struct anon_struct.conflict200a writeiodata_para;
    struct anon_struct.conflict1d9a readiodata_para;
    struct anon_struct.conflict1d9a deleteap_para;
};

struct at_callback_para_t {
    struct at_config_t * cfg;
    struct at_status_t * sts;
    union anon_union.conflict2087_for_u u;
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

typedef union anon_union.conflict2087 anon_union.conflict2087, *Panon_union.conflict2087;

union anon_union.conflict2087 {
    struct anon_struct.conflict1d70 ping;
    struct anon_struct.conflict1d9a wifi;
    struct anon_struct.conflict1d9a scan;
    struct at_tcpserver_para_t tcp_server;
    struct anon_struct.conflict1dcc mode;
    struct anon_struct.conflict1df3 uart;
    struct anon_struct.conflict1e52 sleep;
    struct anon_struct.conflict1d9a wifiMode;
    struct anon_struct.conflict1e92 joinParam;
    struct at_ip_para_t at_ip_para;
    struct anon_struct.conflict1ec9 apcfgParam;
    struct anon_struct.conflict1f38 iphostname;
    struct anon_struct.conflict1f51 dns_parse;
    struct anon_struct.conflict1f7a http_req;
    struct anon_struct.conflict1fbd set_dns;
    struct at_network_para_t net_param;
    struct at_sendData_para_t send_param;
    struct at_close_para_t close_id;
    struct at_client_ssl_path_para_t client_ssl_path_cfg;
    struct at_client_ssl_sni_t client_ssl_sni_cfg;
    struct at_client_ssl_alpn_t client_ssl_alpn_cfg;
    struct at_ble_sync_mode_t ble_sync_mode;
    struct anon_struct.conflict1fd6 setgpio_para;
    struct anon_struct.conflict200a setiodir_para;
    struct anon_struct.conflict200a writeiodata_para;
    struct anon_struct.conflict1d9a readiodata_para;
    struct anon_struct.conflict1d9a deleteap_para;
};

typedef void * __gnuc_va_list;

typedef __gnuc_va_list va_list;

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

typedef struct netif netif, *Pnetif;

typedef enum netif_mac_filter_action {
    NETIF_DEL_MAC_FILTER=0,
    NETIF_ADD_MAC_FILTER=1
} netif_mac_filter_action;

typedef ip4_addr_t ip_addr_t;

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

typedef union anon_union.conflict9d9_for__new anon_union.conflict9d9_for__new, *Panon_union.conflict9d9_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict84d anon_struct.conflict84d, *Panon_struct.conflict84d;

typedef struct anon_struct.conflict992 anon_struct.conflict992, *Panon_struct.conflict992;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _Bigint {
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

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

struct anon_struct.conflict84d {
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

struct anon_struct.conflict992 {
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict9d9_for__new {
    struct anon_struct.conflict84d _reent;
    struct anon_struct.conflict992 _unused;
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
    union anon_union.conflict9d9_for__new _new;
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

typedef union anon_union.conflict9d9 anon_union.conflict9d9, *Panon_union.conflict9d9;

union anon_union.conflict9d9 {
    struct anon_struct.conflict84d _reent;
    struct anon_struct.conflict992 _unused;
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

typedef int32_t BaseType_t;

typedef uint32_t TickType_t;

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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int at_serial_write(uchar *buf,int len)

{
  if (_DAT_00000008 < 0) {
    _L0(0);
    return 0;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int at_serial_read(uchar *buf,int size)

{
  if (_DAT_00000008 < 0) {
    _L0(0);
    return 0;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



void at_cmd_exec(void *param)

{
  _L0();
  FUN_00010080(0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  FUN_00010080(0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010080(void)

{
  FUN_00010080();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Variable defined which should be unmapped: cfg_tmp
// WARNING: Could not reconcile some variable overlaps

int at_serial_cfg_set(uint32_t baud,uint8_t data_bit,uint8_t stop_bit,uint8_t parity,uint8_t hwfc)

{
  undefined3 in_register_00002035;
  undefined3 in_register_00002039;
  int iVar1;
  undefined4 uStack32;
  UART_CFG_Type cfg_tmp;
  
  iVar1 = CONCAT31(in_register_00002039,hwfc);
  _L0(&uStack32,0,0x10);
  uStack32 = 40000000;
  cfg_tmp.baudRate._0_1_ = data_bit - 5;
  if ((((byte)cfg_tmp.baudRate < 4) &&
      (cfg_tmp.baudRate._1_1_ = stop_bit - 1, cfg_tmp.baudRate._1_1_ < 3)) &&
     (CONCAT31(in_register_00002035,parity) < 3)) {
    if (iVar1 == 1) {
      cfg_tmp.baudRate._3_1_ = 1;
    }
    else {
      if (iVar1 != 0) {
        if (iVar1 != 2) {
          if (iVar1 != 3) {
            return 4;
          }
          cfg_tmp.baudRate._3_1_ = 1;
        }
        cfg_tmp.stopBits = UART_STOPBITS_1_5;
      }
    }
    cfg_tmp.uartClk = baud;
    cfg_tmp.baudRate._2_1_ = parity;
    FUN_0001011e(1,2);
    FUN_0001012a(1,&uStack32);
    FUN_00010136(1,1);
    FUN_00010142(1,2);
    return 0;
  }
  return 4;
}



undefined4 _L0(void)

{
  char unaff_s0;
  char unaff_s1;
  int in_stack_00000008;
  uint in_stack_0000000c;
  undefined4 uStack00000010;
  byte bStack00000018;
  byte bStack00000019;
  undefined uStack0000001a;
  undefined in_stack_0000001b;
  undefined in_stack_0000001d;
  
  _L0();
  bStack00000018 = unaff_s1 - 5;
  uStack00000010 = 40000000;
  if (((bStack00000018 < 4) && (bStack00000019 = unaff_s0 - 1, bStack00000019 < 3)) &&
     (in_stack_0000000c < 3)) {
    uStack0000001a = (undefined)in_stack_0000000c;
    if (in_stack_00000008 == 1) {
      in_stack_0000001b = 1;
    }
    else {
      if (in_stack_00000008 != 0) {
        if (in_stack_00000008 != 2) {
          if (in_stack_00000008 != 3) {
            return 4;
          }
          in_stack_0000001b = 1;
        }
        in_stack_0000001d = 1;
      }
    }
    FUN_0001011e(1,2);
    FUN_0001012a(1,&stack0x00000010);
    FUN_00010136(1,1);
    FUN_00010142(1,2);
    return 0;
  }
  return 4;
}



undefined4 FUN_0001011e(void)

{
  FUN_0001011e();
  FUN_0001012a(1,&stack0x00000010);
  FUN_00010136(1,1);
  FUN_00010142(1,2);
  return 0;
}



undefined4 FUN_0001012a(void)

{
  FUN_0001012a();
  FUN_00010136(1,1);
  FUN_00010142(1,2);
  return 0;
}



undefined4 FUN_00010136(void)

{
  FUN_00010136();
  FUN_00010142(1,2);
  return 0;
}



undefined4 FUN_00010142(void)

{
  FUN_00010142();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int at_serial_open(void)

{
  _DAT_00000008 = _L0(0,0);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  _DAT_00000008 = _L0();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int at_serial_close(void)

{
  _L0(_DAT_00000008);
  _DAT_00000008 = 0xffffffff;
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  
  _L0();
  *(undefined4 *)(unaff_s0 + 8) = 0xffffffff;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int at_serial_lock(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _L0(_DAT_0000000c,0xffffffff);
  iVar2 = 0;
  if (iVar1 != 1) {
    FUN_000101c0(0);
    iVar2 = -1;
  }
  return iVar2;
}



undefined4 _L0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _L0();
  uVar2 = 0;
  if (iVar1 != 1) {
    FUN_000101c0(0);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



undefined4 FUN_000101c0(void)

{
  FUN_000101c0();
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int at_serial_unlock(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _L0(_DAT_0000000c);
  iVar2 = 0;
  if (iVar1 != 1) {
    FUN_000101f6(0);
    iVar2 = -1;
  }
  return iVar2;
}



undefined4 _L0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _L0();
  uVar2 = 0;
  if (iVar1 != 1) {
    FUN_000101f6(0);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



undefined4 FUN_000101f6(void)

{
  FUN_000101f6();
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int at_data_output(char *buf,int size)

{
  int iVar1;
  
  iVar1 = _L0(_DAT_0000000c,0xffffffff);
  if (iVar1 == 1) {
    iVar1 = (*_DAT_00000004)(buf,size,_DAT_00000004);
    FUN_00010262(_DAT_0000000c);
  }
  else {
    FUN_00010238(0);
    iVar1 = -1;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = _L0();
  if (iVar2 == 1) {
    uVar1 = (*_DAT_00000004)(_DAT_00000004);
    FUN_00010262(*(undefined4 *)(unaff_s0 + 0xc));
  }
  else {
    FUN_00010238(0);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



undefined4 FUN_00010238(void)

{
  FUN_00010238();
  return 0xffffffff;
}



void FUN_00010262(void)

{
  FUN_00010262();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int at_key_value_set(char *key,void *p_value)

{
  int iVar1;
  undefined auStack84 [4];
  char buf [65];
  
  _L0(auStack84,0,0x41);
  iVar1 = FUN_00010292(key,0);
  if (iVar1 == 0) {
                    // WARNING: Load size is inaccurate
    uRam00000000 = (uint)*p_value;
_L0:
                    // WARNING: Load size is inaccurate
    p_value = (void *)(uint)*p_value;
  }
  else {
    iVar1 = FUN_000102c0(key,0);
    if ((iVar1 != 0) && (iVar1 = FUN_000102ea(key,0), iVar1 != 0)) {
      iVar1 = FUN_000102fe(key,0);
      if (iVar1 == 0) {
                    // WARNING: Load size is inaccurate
        FUN_00010316(auStack84,0,*p_value);
                    // WARNING: Load size is inaccurate
        if (*p_value == '\0') {
          _L0();
        }
        else {
          _L0();
        }
        goto _L0;
      }
      iVar1 = FUN_00010358(key,0);
      if (iVar1 == 0) {
                    // WARNING: Load size is inaccurate
        FUN_0001036e(auStack84,0,*p_value);
                    // WARNING: Load size is inaccurate
        _DAT_00000004 = *p_value;
                    // WARNING: Load size is inaccurate
        FUN_00010388(_DAT_00000008,3,*p_value);
        goto _L0;
      }
      iVar1 = FUN_0001039c(key,0);
      if ((((iVar1 != 0) && (iVar1 = FUN_000103b0(key,0), iVar1 != 0)) &&
          (iVar1 = FUN_000103c4(key,0), iVar1 != 0)) &&
         ((iVar1 = FUN_000103da(key,0), iVar1 != 0 && (iVar1 = FUN_000103f0(key,0), iVar1 != 0))))
      goto _L0;
    }
  }
  FUN_000102d6(auStack84,0,p_value);
_L0:
  FUN_00010330(key,auStack84);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  undefined4 *unaff_s1;
  int iVar1;
  
  _L0();
  iVar1 = FUN_00010292(0);
  if (iVar1 == 0) {
    uRam00000000 = (uint)*(byte *)unaff_s1;
  }
  else {
    iVar1 = FUN_000102c0(0);
    if ((iVar1 != 0) && (iVar1 = FUN_000102ea(0), iVar1 != 0)) {
      iVar1 = FUN_000102fe(0);
      if (iVar1 == 0) {
        FUN_00010316(&stack0x0000000c,0,*(byte *)unaff_s1);
        if (*(byte *)unaff_s1 == 0) {
          _L0();
        }
        else {
          _L0();
        }
        goto _L0;
      }
      iVar1 = FUN_00010358(0);
      if (iVar1 == 0) {
        FUN_0001036e(&stack0x0000000c,0,*unaff_s1);
        _DAT_00000004 = *unaff_s1;
        FUN_00010388(_DAT_00000008,3,*unaff_s1);
        goto _L0;
      }
      iVar1 = FUN_0001039c(0);
      if ((((iVar1 != 0) && (iVar1 = FUN_000103b0(0), iVar1 != 0)) &&
          (iVar1 = FUN_000103c4(0), iVar1 != 0)) && (iVar1 = FUN_000103da(0), iVar1 != 0)) {
        FUN_000103f0(0);
      }
    }
  }
  FUN_000102d6(&stack0x0000000c,0);
_L0:
  FUN_00010330(&stack0x0000000c);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010292(void)

{
  undefined4 *unaff_s1;
  int iVar1;
  
  iVar1 = FUN_00010292();
  if (iVar1 == 0) {
    uRam00000000 = (uint)*(byte *)unaff_s1;
  }
  else {
    iVar1 = FUN_000102c0(0);
    if ((iVar1 != 0) && (iVar1 = FUN_000102ea(0), iVar1 != 0)) {
      iVar1 = FUN_000102fe(0);
      if (iVar1 == 0) {
        FUN_00010316(&stack0x0000000c,0,*(byte *)unaff_s1);
        if (*(byte *)unaff_s1 == 0) {
          _L0();
        }
        else {
          _L0();
        }
        goto _L0;
      }
      iVar1 = FUN_00010358(0);
      if (iVar1 == 0) {
        FUN_0001036e(&stack0x0000000c,0,*unaff_s1);
        _DAT_00000004 = *unaff_s1;
        FUN_00010388(_DAT_00000008,3,*unaff_s1);
        goto _L0;
      }
      iVar1 = FUN_0001039c(0);
      if ((((iVar1 != 0) && (iVar1 = FUN_000103b0(0), iVar1 != 0)) &&
          (iVar1 = FUN_000103c4(0), iVar1 != 0)) && (iVar1 = FUN_000103da(0), iVar1 != 0)) {
        FUN_000103f0(0);
      }
    }
  }
  FUN_000102d6(&stack0x0000000c,0);
_L0:
  FUN_00010330(&stack0x0000000c);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000102c0(void)

{
  undefined4 *unaff_s1;
  int iVar1;
  
  iVar1 = FUN_000102c0();
  if ((iVar1 != 0) && (iVar1 = FUN_000102ea(0), iVar1 != 0)) {
    iVar1 = FUN_000102fe(0);
    if (iVar1 == 0) {
      FUN_00010316(&stack0x0000000c,0,*(char *)unaff_s1);
      if (*(char *)unaff_s1 == '\0') {
        _L0();
      }
      else {
        _L0();
      }
      goto _L0;
    }
    iVar1 = FUN_00010358(0);
    if (iVar1 == 0) {
      FUN_0001036e(&stack0x0000000c,0,*unaff_s1);
      _DAT_00000004 = *unaff_s1;
      FUN_00010388(_DAT_00000008,3,*unaff_s1);
      goto _L0;
    }
    iVar1 = FUN_0001039c(0);
    if ((((iVar1 != 0) && (iVar1 = FUN_000103b0(0), iVar1 != 0)) &&
        (iVar1 = FUN_000103c4(0), iVar1 != 0)) && (iVar1 = FUN_000103da(0), iVar1 != 0)) {
      FUN_000103f0(0);
    }
  }
  FUN_000102d6(&stack0x0000000c,0);
_L0:
  FUN_00010330(&stack0x0000000c);
  return 0;
}



undefined4 FUN_000102d6(void)

{
  FUN_000102d6();
  FUN_00010330(&stack0x0000000c);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000102ea(void)

{
  undefined4 *unaff_s1;
  int iVar1;
  
  iVar1 = FUN_000102ea();
  if (iVar1 != 0) {
    iVar1 = FUN_000102fe(0);
    if (iVar1 == 0) {
      FUN_00010316(&stack0x0000000c,0,*(char *)unaff_s1);
      if (*(char *)unaff_s1 == '\0') {
        _L0();
      }
      else {
        _L0();
      }
      goto _L0;
    }
    iVar1 = FUN_00010358(0);
    if (iVar1 == 0) {
      FUN_0001036e(&stack0x0000000c,0,*unaff_s1);
      _DAT_00000004 = *unaff_s1;
      FUN_00010388(_DAT_00000008,3,*unaff_s1);
      goto _L0;
    }
    iVar1 = FUN_0001039c(0);
    if ((((iVar1 != 0) && (iVar1 = FUN_000103b0(0), iVar1 != 0)) &&
        (iVar1 = FUN_000103c4(0), iVar1 != 0)) && (iVar1 = FUN_000103da(0), iVar1 != 0)) {
      FUN_000103f0(0);
    }
  }
  FUN_000102d6(&stack0x0000000c,0);
_L0:
  FUN_00010330(&stack0x0000000c);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000102fe(void)

{
  undefined4 *unaff_s1;
  int iVar1;
  
  iVar1 = FUN_000102fe();
  if (iVar1 == 0) {
    FUN_00010316(&stack0x0000000c,0,*(char *)unaff_s1);
    if (*(char *)unaff_s1 == '\0') {
      _L0();
    }
    else {
      _L0();
    }
  }
  else {
    iVar1 = FUN_00010358(0);
    if (iVar1 == 0) {
      FUN_0001036e(&stack0x0000000c,0,*unaff_s1);
      _DAT_00000004 = *unaff_s1;
      FUN_00010388(_DAT_00000008,3,*unaff_s1);
    }
    else {
      iVar1 = FUN_0001039c(0);
      if ((((iVar1 != 0) && (iVar1 = FUN_000103b0(0), iVar1 != 0)) &&
          (iVar1 = FUN_000103c4(0), iVar1 != 0)) && (iVar1 = FUN_000103da(0), iVar1 != 0)) {
        FUN_000103f0(0);
      }
      FUN_000102d6(&stack0x0000000c,0);
    }
  }
  FUN_00010330(&stack0x0000000c);
  return 0;
}



undefined4 FUN_00010316(void)

{
  char *unaff_s1;
  
  FUN_00010316();
  if (*unaff_s1 == '\0') {
    _L0();
  }
  else {
    _L0();
  }
  FUN_00010330(&stack0x0000000c);
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010330(&stack0x0000000c);
  return 0;
}



undefined4 FUN_00010330(void)

{
  FUN_00010330();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00010330(&stack0x0000000c);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010358(void)

{
  undefined4 *unaff_s1;
  int iVar1;
  
  iVar1 = FUN_00010358();
  if (iVar1 == 0) {
    FUN_0001036e(&stack0x0000000c,0,*unaff_s1);
    _DAT_00000004 = *unaff_s1;
    FUN_00010388(_DAT_00000008,3,*unaff_s1);
  }
  else {
    iVar1 = FUN_0001039c(0);
    if ((((iVar1 != 0) && (iVar1 = FUN_000103b0(0), iVar1 != 0)) &&
        (iVar1 = FUN_000103c4(0), iVar1 != 0)) && (iVar1 = FUN_000103da(0), iVar1 != 0)) {
      FUN_000103f0(0);
    }
    FUN_000102d6(&stack0x0000000c,0);
  }
  FUN_00010330(&stack0x0000000c);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0001036e(void)

{
  undefined4 *unaff_s1;
  
  FUN_0001036e();
  _DAT_00000004 = *unaff_s1;
  FUN_00010388(_DAT_00000008,3,*unaff_s1);
  FUN_00010330(&stack0x0000000c);
  return 0;
}



undefined4 FUN_00010388(void)

{
  FUN_00010388();
  FUN_00010330(&stack0x0000000c);
  return 0;
}



undefined4 FUN_0001039c(void)

{
  int iVar1;
  
  iVar1 = FUN_0001039c();
  if ((((iVar1 != 0) && (iVar1 = FUN_000103b0(0), iVar1 != 0)) &&
      (iVar1 = FUN_000103c4(0), iVar1 != 0)) && (iVar1 = FUN_000103da(0), iVar1 != 0)) {
    FUN_000103f0(0);
  }
  FUN_000102d6(&stack0x0000000c,0);
  FUN_00010330(&stack0x0000000c);
  return 0;
}



undefined4 FUN_000103b0(void)

{
  int iVar1;
  
  iVar1 = FUN_000103b0();
  if (((iVar1 != 0) && (iVar1 = FUN_000103c4(0), iVar1 != 0)) &&
     (iVar1 = FUN_000103da(0), iVar1 != 0)) {
    FUN_000103f0(0);
  }
  FUN_000102d6(&stack0x0000000c,0);
  FUN_00010330(&stack0x0000000c);
  return 0;
}



undefined4 FUN_000103c4(void)

{
  int iVar1;
  
  iVar1 = FUN_000103c4();
  if ((iVar1 != 0) && (iVar1 = FUN_000103da(0), iVar1 != 0)) {
    FUN_000103f0(0);
  }
  FUN_000102d6(&stack0x0000000c,0);
  FUN_00010330(&stack0x0000000c);
  return 0;
}



undefined4 FUN_000103da(void)

{
  int iVar1;
  
  iVar1 = FUN_000103da();
  if (iVar1 != 0) {
    FUN_000103f0(0);
  }
  FUN_000102d6(&stack0x0000000c,0);
  FUN_00010330(&stack0x0000000c);
  return 0;
}



undefined4 FUN_000103f0(void)

{
  FUN_000103f0();
  FUN_000102d6(&stack0x0000000c,0);
  FUN_00010330(&stack0x0000000c);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int at_key_value_get(char *key,void *p_value)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (p_value == (void *)0x0) {
    return -1;
  }
  iVar1 = _L0();
  if (iVar1 == 0) {
    iVar1 = _LVL72(key,0);
    if (iVar1 == 0) {
      *(char *)p_value = (char)uRam00000000;
      return 0;
    }
    iVar1 = FUN_0001044a(key,0);
    if (iVar1 == 0) {
      *(undefined *)p_value = 0;
      return 0;
    }
    iVar1 = FUN_00010464(key,0);
    uVar3 = _DAT_00000004;
    if (iVar1 != 0) {
      iVar1 = FUN_00010484(key,0);
      uVar3 = 8;
      if (iVar1 != 0) {
        iVar1 = FUN_0001049a(key,0);
        if (iVar1 != 0) {
          iVar1 = FUN_000104b2(key,0);
          if ((iVar1 != 0) && (iVar1 = FUN_000104ce(key,0), iVar1 != 0)) {
            return -1;
          }
          *(undefined4 *)p_value = 0;
          goto _L0;
        }
        uVar3 = 1;
      }
    }
    *(undefined4 *)p_value = uVar3;
  }
  else {
    iVar2 = _LVL84(key,0);
    if (((((iVar2 == 0) || (iVar2 = FUN_00010512(key,0), iVar2 == 0)) ||
         (iVar2 = FUN_00010526(key,0), iVar2 == 0)) ||
        ((iVar2 = FUN_0001053a(key,0), iVar2 == 0 || (iVar2 = FUN_0001054e(key,0), iVar2 == 0)))) ||
       ((iVar2 = FUN_00010562(key,0), iVar2 == 0 || (iVar2 = FUN_00010576(key,0), iVar2 == 0)))) {
      FUN_000104fe(p_value,iVar1);
    }
    else {
      uVar3 = FUN_00010582(iVar1);
      *(undefined4 *)p_value = uVar3;
    }
_L0:
    iVar1 = 0;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _L0(void)

{
  undefined4 *unaff_s1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = _L0();
  if (iVar1 == 0) {
    iVar1 = _LVL72(0);
    if (iVar1 == 0) {
      *(char *)unaff_s1 = (char)uRam00000000;
      return 0;
    }
    iVar1 = FUN_0001044a(0);
    if (iVar1 == 0) {
      *(undefined *)unaff_s1 = 0;
      return 0;
    }
    iVar1 = FUN_00010464(0);
    uVar3 = _DAT_00000004;
    if (iVar1 != 0) {
      iVar1 = FUN_00010484(0);
      uVar3 = 8;
      if (iVar1 != 0) {
        iVar1 = FUN_0001049a(0);
        if (iVar1 != 0) {
          iVar1 = FUN_000104b2(0);
          if ((iVar1 != 0) && (iVar1 = FUN_000104ce(0), iVar1 != 0)) {
            return -1;
          }
          *unaff_s1 = 0;
          goto _L0;
        }
        uVar3 = 1;
      }
    }
    *unaff_s1 = uVar3;
  }
  else {
    iVar2 = _LVL84(0);
    if (((((iVar2 == 0) || (iVar2 = FUN_00010512(0), iVar2 == 0)) ||
         (iVar2 = FUN_00010526(0), iVar2 == 0)) ||
        ((iVar2 = FUN_0001053a(0), iVar2 == 0 || (iVar2 = FUN_0001054e(0), iVar2 == 0)))) ||
       ((iVar2 = FUN_00010562(0), iVar2 == 0 || (iVar2 = FUN_00010576(0), iVar2 == 0)))) {
      FUN_000104fe(iVar1);
    }
    else {
      uVar3 = FUN_00010582(iVar1);
      *unaff_s1 = uVar3;
    }
_L0:
    iVar1 = 0;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _LVL72(void)

{
  undefined4 *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _LVL72();
  if (iVar1 == 0) {
    *(char *)unaff_s1 = (char)uRam00000000;
  }
  else {
    iVar1 = FUN_0001044a(0);
    if (iVar1 == 0) {
      *(undefined *)unaff_s1 = 0;
    }
    else {
      iVar1 = FUN_00010464(0);
      uVar2 = _DAT_00000004;
      if (iVar1 != 0) {
        iVar1 = FUN_00010484(0);
        uVar2 = 8;
        if (iVar1 != 0) {
          iVar1 = FUN_0001049a(0);
          if (iVar1 != 0) {
            iVar1 = FUN_000104b2(0);
            if ((iVar1 != 0) && (iVar1 = FUN_000104ce(0), iVar1 != 0)) {
              return -1;
            }
            *unaff_s1 = 0;
            return 0;
          }
          uVar2 = 1;
        }
      }
      *unaff_s1 = uVar2;
    }
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_0001044a(void)

{
  undefined4 *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001044a();
  if (iVar1 == 0) {
    *(undefined *)unaff_s1 = 0;
  }
  else {
    iVar1 = FUN_00010464(0);
    uVar2 = _DAT_00000004;
    if (iVar1 != 0) {
      iVar1 = FUN_00010484(0);
      uVar2 = 8;
      if (iVar1 != 0) {
        iVar1 = FUN_0001049a(0);
        if (iVar1 != 0) {
          iVar1 = FUN_000104b2(0);
          if ((iVar1 != 0) && (iVar1 = FUN_000104ce(0), iVar1 != 0)) {
            return -1;
          }
          *unaff_s1 = 0;
          return 0;
        }
        uVar2 = 1;
      }
    }
    *unaff_s1 = uVar2;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_00010464(void)

{
  undefined4 *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00010464();
  uVar2 = _DAT_00000004;
  if (iVar1 != 0) {
    iVar1 = FUN_00010484(0);
    uVar2 = 8;
    if (iVar1 != 0) {
      iVar1 = FUN_0001049a(0);
      if (iVar1 != 0) {
        iVar1 = FUN_000104b2(0);
        if ((iVar1 != 0) && (iVar1 = FUN_000104ce(0), iVar1 != 0)) {
          return -1;
        }
        *unaff_s1 = 0;
        return 0;
      }
      uVar2 = 1;
    }
  }
  *unaff_s1 = uVar2;
  return iVar1;
}



int FUN_00010484(void)

{
  undefined4 *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00010484();
  uVar2 = 8;
  if (iVar1 != 0) {
    iVar1 = FUN_0001049a(0);
    if (iVar1 != 0) {
      iVar1 = FUN_000104b2(0);
      if ((iVar1 != 0) && (iVar1 = FUN_000104ce(0), iVar1 != 0)) {
        return -1;
      }
      *unaff_s1 = 0;
      return 0;
    }
    uVar2 = 1;
  }
  *unaff_s1 = uVar2;
  return iVar1;
}



int FUN_0001049a(void)

{
  undefined4 *unaff_s1;
  int iVar1;
  
  iVar1 = FUN_0001049a();
  if (iVar1 == 0) {
    *unaff_s1 = 1;
  }
  else {
    iVar1 = FUN_000104b2(0);
    if ((iVar1 == 0) || (iVar1 = FUN_000104ce(0), iVar1 == 0)) {
      *unaff_s1 = 0;
      iVar1 = 0;
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}



undefined4 FUN_000104b2(void)

{
  undefined4 *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000104b2();
  if ((iVar1 == 0) || (iVar1 = FUN_000104ce(0), iVar1 == 0)) {
    *unaff_s1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



undefined4 FUN_000104ce(void)

{
  undefined4 *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_000104ce();
  if (iVar1 == 0) {
    *unaff_s1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



undefined4 _LVL84(void)

{
  undefined4 *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _LVL84();
  if ((((iVar1 == 0) || (iVar1 = FUN_00010512(0), iVar1 == 0)) ||
      (iVar1 = FUN_00010526(0), iVar1 == 0)) ||
     (((iVar1 = FUN_0001053a(0), iVar1 == 0 || (iVar1 = FUN_0001054e(0), iVar1 == 0)) ||
      ((iVar1 = FUN_00010562(0), iVar1 == 0 || (iVar1 = FUN_00010576(0), iVar1 == 0)))))) {
    FUN_000104fe();
  }
  else {
    uVar2 = FUN_00010582();
    *unaff_s1 = uVar2;
  }
  return 0;
}



undefined4 FUN_000104fe(void)

{
  FUN_000104fe();
  return 0;
}



undefined4 FUN_00010512(void)

{
  undefined4 *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00010512();
  if ((((iVar1 == 0) || (iVar1 = FUN_00010526(0), iVar1 == 0)) ||
      (iVar1 = FUN_0001053a(0), iVar1 == 0)) ||
     (((iVar1 = FUN_0001054e(0), iVar1 == 0 || (iVar1 = FUN_00010562(0), iVar1 == 0)) ||
      (iVar1 = FUN_00010576(0), iVar1 == 0)))) {
    FUN_000104fe();
  }
  else {
    uVar2 = FUN_00010582();
    *unaff_s1 = uVar2;
  }
  return 0;
}



undefined4 FUN_00010526(void)

{
  undefined4 *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00010526();
  if ((((iVar1 == 0) || (iVar1 = FUN_0001053a(0), iVar1 == 0)) ||
      (iVar1 = FUN_0001054e(0), iVar1 == 0)) ||
     ((iVar1 = FUN_00010562(0), iVar1 == 0 || (iVar1 = FUN_00010576(0), iVar1 == 0)))) {
    FUN_000104fe();
  }
  else {
    uVar2 = FUN_00010582();
    *unaff_s1 = uVar2;
  }
  return 0;
}



undefined4 FUN_0001053a(void)

{
  undefined4 *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001053a();
  if ((((iVar1 == 0) || (iVar1 = FUN_0001054e(0), iVar1 == 0)) ||
      (iVar1 = FUN_00010562(0), iVar1 == 0)) || (iVar1 = FUN_00010576(0), iVar1 == 0)) {
    FUN_000104fe();
  }
  else {
    uVar2 = FUN_00010582();
    *unaff_s1 = uVar2;
  }
  return 0;
}



undefined4 FUN_0001054e(void)

{
  undefined4 *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0001054e();
  if (((iVar1 == 0) || (iVar1 = FUN_00010562(0), iVar1 == 0)) ||
     (iVar1 = FUN_00010576(0), iVar1 == 0)) {
    FUN_000104fe();
  }
  else {
    uVar2 = FUN_00010582();
    *unaff_s1 = uVar2;
  }
  return 0;
}



undefined4 FUN_00010562(void)

{
  undefined4 *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00010562();
  if ((iVar1 == 0) || (iVar1 = FUN_00010576(0), iVar1 == 0)) {
    FUN_000104fe();
  }
  else {
    uVar2 = FUN_00010582();
    *unaff_s1 = uVar2;
  }
  return 0;
}



undefined4 FUN_00010576(void)

{
  undefined4 *unaff_s1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00010576();
  if (iVar1 == 0) {
    FUN_000104fe();
  }
  else {
    uVar2 = FUN_00010582();
    *unaff_s1 = uVar2;
  }
  return 0;
}



undefined4 FUN_00010582(void)

{
  undefined4 *unaff_s1;
  undefined4 uVar1;
  
  uVar1 = FUN_00010582();
  *unaff_s1 = uVar1;
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

s32 at_dump_noend(char *format,...)

{
  s32 sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_a1;
  undefined4 in_a2;
  undefined4 in_a3;
  undefined4 in_a4;
  undefined4 in_a5;
  undefined4 in_a6;
  undefined4 in_a7;
  va_list vp;
  undefined4 uStack28;
  undefined4 uStack24;
  undefined4 uStack20;
  undefined4 uStack16;
  undefined4 uStack12;
  undefined4 uStack8;
  undefined4 uStack4;
  
  uStack28 = in_a1;
  uStack24 = in_a2;
  uStack20 = in_a3;
  uStack16 = in_a4;
  uStack12 = in_a5;
  uStack8 = in_a6;
  uStack4 = in_a7;
  iVar2 = _L0(_DAT_0000000c,0xffffffff);
  if (iVar2 == 1) {
    iVar2 = _L0(0,0,format,&uStack28);
    iVar3 = FUN_00010602(iVar2 + 10);
    if (iVar3 == 0) {
      sVar1 = _L0(0);
      return sVar1;
    }
    uVar4 = FUN_0001061e(iVar2 + 10,format,&uStack28);
    sVar1 = (*_DAT_00000004)(iVar3,uVar4,_DAT_00000004);
    FUN_00010638(_DAT_0000000c);
    FUN_00010642(iVar3);
  }
  else {
    _L0(0);
    sVar1 = -1;
  }
  return sVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  int iVar2;
  int iStack0000000c;
  undefined *puStack0000001c;
  
  iVar2 = _L0();
  if (iVar2 == 1) {
    puStack0000001c = &stack0x00000044;
    iStack0000000c = _L0(0,0,&stack0x00000044);
    iStack0000000c = iStack0000000c + 10;
    iVar2 = FUN_00010602(iStack0000000c);
    if (iVar2 == 0) {
      uVar1 = _L0(0);
      return uVar1;
    }
    uVar1 = FUN_0001061e(iStack0000000c,&stack0x00000044);
    uVar1 = (*_DAT_00000004)(iVar2,uVar1,_DAT_00000004);
    FUN_00010638(*(undefined4 *)(unaff_s0 + 0xc));
    FUN_00010642(iVar2);
  }
  else {
    _L0(0);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



undefined4 _L0(void)

{
  _L0();
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  int iStack0000000c;
  
  iStack0000000c = _L0();
  iStack0000000c = iStack0000000c + 10;
  iVar1 = FUN_00010602(iStack0000000c);
  if (iVar1 == 0) {
    uVar2 = _L0(0);
    return uVar2;
  }
  uVar2 = FUN_0001061e(iStack0000000c);
  uVar2 = (*_DAT_00000004)(iVar1,uVar2,_DAT_00000004);
  FUN_00010638(*(undefined4 *)(unaff_s0 + 0xc));
  FUN_00010642(iVar1);
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00010602(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  undefined4 in_stack_0000000c;
  
  iVar1 = FUN_00010602();
  if (iVar1 == 0) {
    uVar2 = _L0(0);
    return uVar2;
  }
  uVar2 = FUN_0001061e(in_stack_0000000c);
  uVar2 = (*_DAT_00000004)(iVar1,uVar2,_DAT_00000004);
  FUN_00010638(*(undefined4 *)(unaff_s0 + 0xc));
  FUN_00010642(iVar1);
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0001061e(void)

{
  int unaff_s0;
  undefined4 uVar1;
  
  uVar1 = FUN_0001061e();
  uVar1 = (*_DAT_00000004)(uVar1,_DAT_00000004);
  FUN_00010638(*(undefined4 *)(unaff_s0 + 0xc));
  FUN_00010642();
  return uVar1;
}



void FUN_00010638(void)

{
  FUN_00010638();
  FUN_00010642();
  return;
}



void FUN_00010642(void)

{
  FUN_00010642();
  return;
}



// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void at_async_event(void *param)

{
  code *UNRECOVERED_JUMPTABLE;
  ip4_addr_t ip;
  ip4_addr_t gw;
  ip4_addr_t mask;
  ip4_addr_t dns1;
  ip4_addr_t dns2;
  char ip_str [20];
  char gw_str [20];
  char mask_str [20];
  _at_evt ev;
  char dns1_str [20];
  char dns2_str [20];
  
  do {
    FUN_0001069a(_DAT_00000010,mask_str + 0x10,0xffffffff);
  } while (8 < mask_str._16_4_ - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((mask_str._16_4_ - 1U) * 4);
                    // WARNING: Could not emulate address calculation at 0x000106ae
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_0001069a(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int unaff_s1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  uint unaff_s8;
  int in_stack_0000005c;
  
  while( true ) {
    FUN_0001069a(param_1,param_2,param_3);
    if (in_stack_0000005c - 1U <= unaff_s8) break;
    param_1 = *(undefined4 *)(unaff_s1 + 0x10);
    param_3 = 0xffffffff;
    param_2 = (undefined4 *)&stack0x0000005c;
  }
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_000106b6(void)

{
  int unaff_s1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  
  FUN_000106b6();
  _L0(0);
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void _L0(void)

{
  int unaff_s1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  
  _L0();
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_000106d4(void)

{
  FUN_000106d4();
  _L0(0);
  return;
}



void FUN_000106ea(void)

{
  FUN_000106ea();
  _L0(0);
  return;
}



void FUN_00010700(void)

{
  FUN_00010700();
  _L0(0);
  return;
}



void FUN_00010716(void)

{
  FUN_00010716();
  _L0(0);
  return;
}



void _L0(void)

{
  int unaff_s1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int unaff_s8;
  int in_stack_0000005c;
  undefined4 in_stack_00000060;
  
  _L0();
  FUN_00010742(&stack0x0000009c,0,0x41);
  FUN_00010750(&stack0x00000078);
  FUN_0001075e(&stack0x0000009c);
  if (unaff_s8 == 4) {
    _L0();
    FUN_00010786(0,&stack0x00000078,&stack0x0000009c,in_stack_00000060);
  }
  else {
    _L0();
    FUN_000107b0(0,&stack0x00000078,&stack0x0000009c);
  }
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_00010742(void)

{
  int unaff_s1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int unaff_s8;
  int in_stack_0000005c;
  undefined4 in_stack_00000060;
  
  FUN_00010742();
  FUN_00010750(&stack0x00000078);
  FUN_0001075e(&stack0x0000009c);
  if (unaff_s8 == 4) {
    _L0();
    FUN_00010786(0,&stack0x00000078,&stack0x0000009c,in_stack_00000060);
  }
  else {
    _L0();
    FUN_000107b0(0,&stack0x00000078,&stack0x0000009c);
  }
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_00010750(void)

{
  int unaff_s1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int unaff_s8;
  int in_stack_0000005c;
  undefined4 in_stack_00000060;
  
  FUN_00010750();
  FUN_0001075e(&stack0x0000009c);
  if (unaff_s8 == 4) {
    _L0();
    FUN_00010786(0,&stack0x00000078,&stack0x0000009c,in_stack_00000060);
  }
  else {
    _L0();
    FUN_000107b0(0,&stack0x00000078,&stack0x0000009c);
  }
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_0001075e(void)

{
  int unaff_s1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int unaff_s8;
  int in_stack_0000005c;
  undefined4 in_stack_00000060;
  
  FUN_0001075e();
  if (unaff_s8 == 4) {
    _L0();
    FUN_00010786(0,&stack0x00000078,&stack0x0000009c,in_stack_00000060);
  }
  else {
    _L0();
    FUN_000107b0(0,&stack0x00000078,&stack0x0000009c);
  }
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void _L0(void)

{
  int unaff_s1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  undefined4 in_stack_00000060;
  
  _L0();
  FUN_00010786(0,&stack0x00000078,&stack0x0000009c,in_stack_00000060);
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_00010786(void)

{
  int unaff_s1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  
  FUN_00010786();
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_00010792(void)

{
  int unaff_s1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void _L0(void)

{
  int unaff_s1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  
  _L0();
  FUN_000107b0(0,&stack0x00000078,&stack0x0000009c);
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_000107b0(void)

{
  int unaff_s1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  
  FUN_000107b0();
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_000107c6(void)

{
  int unaff_s1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  undefined in_stack_00000060;
  undefined in_stack_00000061;
  undefined in_stack_00000062;
  undefined in_stack_00000063;
  undefined in_stack_00000064;
  undefined in_stack_00000065;
  
  FUN_000107c6();
  FUN_000107ea(in_stack_00000065,in_stack_00000064,in_stack_00000063,in_stack_00000062,
               in_stack_00000061,in_stack_00000060);
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_000107ea(void)

{
  int unaff_s1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  
  FUN_000107ea();
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_000107f8(void)

{
  FUN_000107f8();
  _L0();
  return;
}



void _L0(void)

{
  int unaff_s1;
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  
  _L0();
  uVar1 = FUN_00010820(&stack0x0000000c);
  FUN_0001082c(&stack0x00000020,uVar1);
  uVar1 = FUN_00010836(&stack0x00000010);
  FUN_00010842(&stack0x00000034,uVar1);
  uVar1 = FUN_0001084c(&stack0x00000014);
  FUN_00010858(&stack0x00000048,uVar1);
  FUN_00010864(&stack0x00000018,&stack0x0000001c);
  uVar1 = FUN_0001086e(&stack0x00000018);
  FUN_0001087a(&stack0x00000078,uVar1);
  uVar1 = FUN_00010884(&stack0x0000001c);
  FUN_00010890(&stack0x0000009c,uVar1);
  FUN_0001089c();
  FUN_000108b2(&stack0x00000020,&stack0x00000034,&stack0x00000048,&stack0x00000078,&stack0x0000009c)
  ;
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_00010820(void)

{
  int unaff_s1;
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  
  uVar1 = FUN_00010820();
  FUN_0001082c(&stack0x00000020,uVar1);
  uVar1 = FUN_00010836(&stack0x00000010);
  FUN_00010842(&stack0x00000034,uVar1);
  uVar1 = FUN_0001084c(&stack0x00000014);
  FUN_00010858(&stack0x00000048,uVar1);
  FUN_00010864(&stack0x00000018,&stack0x0000001c);
  uVar1 = FUN_0001086e(&stack0x00000018);
  FUN_0001087a(&stack0x00000078,uVar1);
  uVar1 = FUN_00010884(&stack0x0000001c);
  FUN_00010890(&stack0x0000009c,uVar1);
  FUN_0001089c();
  FUN_000108b2(&stack0x00000020,&stack0x00000034,&stack0x00000048,&stack0x00000078,&stack0x0000009c)
  ;
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_0001082c(void)

{
  int unaff_s1;
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  
  FUN_0001082c();
  uVar1 = FUN_00010836(&stack0x00000010);
  FUN_00010842(&stack0x00000034,uVar1);
  uVar1 = FUN_0001084c(&stack0x00000014);
  FUN_00010858(&stack0x00000048,uVar1);
  FUN_00010864(&stack0x00000018,&stack0x0000001c);
  uVar1 = FUN_0001086e(&stack0x00000018);
  FUN_0001087a(&stack0x00000078,uVar1);
  uVar1 = FUN_00010884(&stack0x0000001c);
  FUN_00010890(&stack0x0000009c,uVar1);
  FUN_0001089c();
  FUN_000108b2(&stack0x00000020,&stack0x00000034,&stack0x00000048,&stack0x00000078,&stack0x0000009c)
  ;
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_00010836(void)

{
  int unaff_s1;
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  
  uVar1 = FUN_00010836();
  FUN_00010842(&stack0x00000034,uVar1);
  uVar1 = FUN_0001084c(&stack0x00000014);
  FUN_00010858(&stack0x00000048,uVar1);
  FUN_00010864(&stack0x00000018,&stack0x0000001c);
  uVar1 = FUN_0001086e(&stack0x00000018);
  FUN_0001087a(&stack0x00000078,uVar1);
  uVar1 = FUN_00010884(&stack0x0000001c);
  FUN_00010890(&stack0x0000009c,uVar1);
  FUN_0001089c();
  FUN_000108b2(&stack0x00000020,&stack0x00000034,&stack0x00000048,&stack0x00000078,&stack0x0000009c)
  ;
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_00010842(void)

{
  int unaff_s1;
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  
  FUN_00010842();
  uVar1 = FUN_0001084c(&stack0x00000014);
  FUN_00010858(&stack0x00000048,uVar1);
  FUN_00010864(&stack0x00000018,&stack0x0000001c);
  uVar1 = FUN_0001086e(&stack0x00000018);
  FUN_0001087a(&stack0x00000078,uVar1);
  uVar1 = FUN_00010884(&stack0x0000001c);
  FUN_00010890(&stack0x0000009c,uVar1);
  FUN_0001089c();
  FUN_000108b2(&stack0x00000020,&stack0x00000034,&stack0x00000048,&stack0x00000078,&stack0x0000009c)
  ;
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_0001084c(void)

{
  int unaff_s1;
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  
  uVar1 = FUN_0001084c();
  FUN_00010858(&stack0x00000048,uVar1);
  FUN_00010864(&stack0x00000018,&stack0x0000001c);
  uVar1 = FUN_0001086e(&stack0x00000018);
  FUN_0001087a(&stack0x00000078,uVar1);
  uVar1 = FUN_00010884(&stack0x0000001c);
  FUN_00010890(&stack0x0000009c,uVar1);
  FUN_0001089c();
  FUN_000108b2(&stack0x00000020,&stack0x00000034,&stack0x00000048,&stack0x00000078,&stack0x0000009c)
  ;
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_00010858(void)

{
  int unaff_s1;
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  
  FUN_00010858();
  FUN_00010864(&stack0x00000018,&stack0x0000001c);
  uVar1 = FUN_0001086e(&stack0x00000018);
  FUN_0001087a(&stack0x00000078,uVar1);
  uVar1 = FUN_00010884(&stack0x0000001c);
  FUN_00010890(&stack0x0000009c,uVar1);
  FUN_0001089c();
  FUN_000108b2(&stack0x00000020,&stack0x00000034,&stack0x00000048,&stack0x00000078,&stack0x0000009c)
  ;
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_00010864(void)

{
  int unaff_s1;
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  
  FUN_00010864();
  uVar1 = FUN_0001086e(&stack0x00000018);
  FUN_0001087a(&stack0x00000078,uVar1);
  uVar1 = FUN_00010884(&stack0x0000001c);
  FUN_00010890(&stack0x0000009c,uVar1);
  FUN_0001089c();
  FUN_000108b2(&stack0x00000020,&stack0x00000034,&stack0x00000048,&stack0x00000078,&stack0x0000009c)
  ;
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_0001086e(void)

{
  int unaff_s1;
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  
  uVar1 = FUN_0001086e();
  FUN_0001087a(&stack0x00000078,uVar1);
  uVar1 = FUN_00010884(&stack0x0000001c);
  FUN_00010890(&stack0x0000009c,uVar1);
  FUN_0001089c();
  FUN_000108b2(&stack0x00000020,&stack0x00000034,&stack0x00000048,&stack0x00000078,&stack0x0000009c)
  ;
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_0001087a(void)

{
  int unaff_s1;
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  
  FUN_0001087a();
  uVar1 = FUN_00010884(&stack0x0000001c);
  FUN_00010890(&stack0x0000009c,uVar1);
  FUN_0001089c();
  FUN_000108b2(&stack0x00000020,&stack0x00000034,&stack0x00000048,&stack0x00000078,&stack0x0000009c)
  ;
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_00010884(void)

{
  int unaff_s1;
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  
  uVar1 = FUN_00010884();
  FUN_00010890(&stack0x0000009c,uVar1);
  FUN_0001089c();
  FUN_000108b2(&stack0x00000020,&stack0x00000034,&stack0x00000048,&stack0x00000078,&stack0x0000009c)
  ;
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_00010890(void)

{
  int unaff_s1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  
  FUN_00010890();
  FUN_0001089c();
  FUN_000108b2(&stack0x00000020,&stack0x00000034,&stack0x00000048,&stack0x00000078,&stack0x0000009c)
  ;
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_0001089c(void)

{
  int unaff_s1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  
  FUN_0001089c();
  FUN_000108b2(&stack0x00000020,&stack0x00000034,&stack0x00000048,&stack0x00000078,&stack0x0000009c)
  ;
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void FUN_000108b2(void)

{
  int unaff_s1;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s2;
  int in_stack_0000005c;
  
  FUN_000108b2();
  FUN_00010792();
  do {
    FUN_0001069a(*(undefined4 *)(unaff_s1 + 0x10),&stack0x0000005c,0xffffffff);
  } while (8 < in_stack_0000005c - 1U);
  UNRECOVERED_JUMPTABLE = *(code **)((in_stack_0000005c - 1U) * 4 + unaff_s2);
                    // WARNING: Could not recover jumptable at 0x000106b0. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
  return;
}



void at_cmd_init(void)

{
  int iVar1;
  undefined4 uStack24;
  at_callback_t at_cb;
  
  _L0(0x14,0x400,0);
  uStack24 = 0;
  at_cb.handle_cb =
       (
        anon_subr_AT_ERROR_CODE_AT_CALLBACK_CMD_at_callback_para_t_ptr_at_callback_rsp_t_ptr_for_handle_cb
        *)0x0;
  _L0(&uStack24);
  iVar1 = _L0();
  if (iVar1 != 0) {
    FUN_00010930(0);
    _L0();
  }
  return;
}



void _L0(void)

{
  int iVar1;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  _L0();
  uStack00000008 = 0;
  uStack0000000c = 0;
  _L0(&stack0x00000008);
  iVar1 = _L0();
  if (iVar1 != 0) {
    FUN_00010930(0);
    _L0();
  }
  return;
}



void _L0(void)

{
  int iVar1;
  
  _L0();
  iVar1 = _L0();
  if (iVar1 != 0) {
    FUN_00010930(0);
    _L0();
  }
  return;
}



void _L0(void)

{
  int iVar1;
  
  iVar1 = _L0();
  if (iVar1 != 0) {
    FUN_00010930(0);
    _L0();
  }
  return;
}



void FUN_00010930(void)

{
  FUN_00010930();
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// WARNING: Variable defined which should be unmapped: echo
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int at_server_init(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined uStack28;
  undefined uStack27;
  undefined uStack26;
  undefined uStack25;
  uint8_t data_bit;
  uint8_t stop_bit;
  uint8_t parity;
  uint8_t hwfc;
  TaskHandle_t async_handle;
  int echo;
  
  uStack28 = 8;
  uStack27 = 1;
  async_handle = (TaskHandle_t)0x0;
  uStack26 = 0;
  uStack25 = 0;
  _L0(0,0,0x414);
  _L0();
  if (_DAT_00000008 < 0) {
    FUN_00010996(0);
  }
  else {
    FUN_000109b8(0,&async_handle);
    _DAT_000000e0 = async_handle;
    iVar1 = _L0(0);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = _L0();
    }
    uRam00000000 = uVar2;
    iVar1 = _L0(0);
    if (iVar1 == 0) {
      _DAT_00000004 = 0x1c200;
    }
    else {
      _DAT_00000004 = _L0();
    }
    FUN_00010a14(0,&uStack28);
    FUN_00010a28(0,&uStack27);
    FUN_00010a3c(0,&uStack26);
    FUN_00010a50(0,&uStack25);
    iVar1 = FUN_00010a6a(_DAT_00000004,uStack28,uStack27,uStack26,uStack25);
    if (iVar1 != 0) {
      return 4;
    }
    _DAT_0000000c = FUN_00010a7a(4);
    if (_DAT_0000000c == 0) {
      FUN_00010a8e(0);
    }
    else {
      _DAT_00000010 = FUN_00010ab0(4,0x1c,0);
      if (_DAT_00000010 == 0) {
        FUN_00010ac4(0);
      }
      else {
        _L0();
        iVar1 = FUN_00010afa(0,0,0x100,0,3,&data_bit);
        if (iVar1 == 1) {
          iVar1 = FUN_00010b40(0,0,0x600,0,0,0);
          if (iVar1 == 1) {
            FUN_00010b70(0);
            return 0;
          }
          FUN_00010b54(0);
          FUN_00010b5e(_data_bit);
        }
        else {
          FUN_00010b12(0);
        }
        FUN_00010b1c(_DAT_00000010);
      }
      FUN_00010ace(_DAT_0000000c);
    }
    FUN_00010a98(_DAT_00000008);
  }
  return -1;
}



undefined4 _L0(undefined4 uRam000000e0)

{
  undefined4 *unaff_s0;
  int iVar1;
  undefined4 uVar2;
  undefined in_stack_00000004;
  undefined in_stack_00000005;
  undefined in_stack_00000006;
  undefined in_stack_00000007;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  _L0();
  _L0();
  if ((int)unaff_s0[2] < 0) {
    FUN_00010996(0);
  }
  else {
    FUN_000109b8(0,&stack0x0000000c);
    uRam000000e0 = in_stack_0000000c;
    iVar1 = _L0(0);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = _L0();
    }
    *unaff_s0 = uVar2;
    iVar1 = _L0(0);
    if (iVar1 == 0) {
      uVar2 = 0x1c200;
    }
    else {
      uVar2 = _L0();
    }
    unaff_s0[1] = uVar2;
    FUN_00010a14(0,&stack0x00000004);
    FUN_00010a28(0,&stack0x00000005);
    FUN_00010a3c(0,&stack0x00000006);
    FUN_00010a50(0,&stack0x00000007);
    iVar1 = FUN_00010a6a(unaff_s0[1],in_stack_00000004,in_stack_00000005,in_stack_00000006,
                         in_stack_00000007);
    if (iVar1 != 0) {
      return 4;
    }
    iVar1 = FUN_00010a7a(4);
    unaff_s0[3] = iVar1;
    if (iVar1 == 0) {
      FUN_00010a8e(0);
    }
    else {
      iVar1 = FUN_00010ab0(4,0x1c,0);
      unaff_s0[4] = iVar1;
      if (iVar1 == 0) {
        FUN_00010ac4(0);
      }
      else {
        _L0();
        iVar1 = FUN_00010afa(0,0,0x100,0,3,&stack0x00000008);
        if (iVar1 == 1) {
          iVar1 = FUN_00010b40(0,0,0x600,0,0,0);
          if (iVar1 == 1) {
            FUN_00010b70(0);
            return 0;
          }
          FUN_00010b54(0);
          FUN_00010b5e(in_stack_00000008);
        }
        else {
          FUN_00010b12(0);
        }
        FUN_00010b1c(unaff_s0[4]);
      }
      FUN_00010ace(unaff_s0[3]);
    }
    FUN_00010a98(unaff_s0[2]);
  }
  return 0xffffffff;
}



undefined4 _L0(undefined4 uRam000000e0)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined in_stack_00000004;
  undefined in_stack_00000005;
  undefined in_stack_00000006;
  undefined in_stack_00000007;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  _L0();
  if (*(int *)(unaff_s1 + 8) < 0) {
    FUN_00010996(0);
  }
  else {
    FUN_000109b8(0,&stack0x0000000c);
    uRam000000e0 = in_stack_0000000c;
    iVar1 = _L0(0);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = _L0();
    }
    *unaff_s0 = uVar2;
    iVar1 = _L0(0);
    if (iVar1 == 0) {
      uVar2 = 0x1c200;
    }
    else {
      uVar2 = _L0();
    }
    unaff_s0[1] = uVar2;
    FUN_00010a14(0,&stack0x00000004);
    FUN_00010a28(0,&stack0x00000005);
    FUN_00010a3c(0,&stack0x00000006);
    FUN_00010a50(0,&stack0x00000007);
    iVar1 = FUN_00010a6a(unaff_s0[1],in_stack_00000004,in_stack_00000005,in_stack_00000006,
                         in_stack_00000007);
    if (iVar1 != 0) {
      return 4;
    }
    iVar1 = FUN_00010a7a(4);
    unaff_s0[3] = iVar1;
    if (iVar1 == 0) {
      FUN_00010a8e(0);
    }
    else {
      iVar1 = FUN_00010ab0(4,0x1c,0);
      unaff_s0[4] = iVar1;
      if (iVar1 == 0) {
        FUN_00010ac4(0);
      }
      else {
        _L0();
        iVar1 = FUN_00010afa(0,0,0x100,0,3,&stack0x00000008);
        if (iVar1 == 1) {
          iVar1 = FUN_00010b40(0,0,0x600,0,0,0);
          if (iVar1 == 1) {
            FUN_00010b70(0);
            return 0;
          }
          FUN_00010b54(0);
          FUN_00010b5e(in_stack_00000008);
        }
        else {
          FUN_00010b12(0);
        }
        FUN_00010b1c(unaff_s0[4]);
      }
      FUN_00010ace(unaff_s0[3]);
    }
    FUN_00010a98(unaff_s0[2]);
  }
  return 0xffffffff;
}



undefined4 FUN_00010996(void)

{
  FUN_00010996();
  return 0xffffffff;
}



undefined4 FUN_000109b8(undefined4 uRam000000e0)

{
  undefined4 *unaff_s0;
  int iVar1;
  undefined4 uVar2;
  undefined in_stack_00000004;
  undefined in_stack_00000005;
  undefined in_stack_00000006;
  undefined in_stack_00000007;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_000109b8();
  uRam000000e0 = in_stack_0000000c;
  iVar1 = _L0(0);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = _L0();
  }
  *unaff_s0 = uVar2;
  iVar1 = _L0(0);
  if (iVar1 == 0) {
    uVar2 = 0x1c200;
  }
  else {
    uVar2 = _L0();
  }
  unaff_s0[1] = uVar2;
  FUN_00010a14(0,&stack0x00000004);
  FUN_00010a28(0,&stack0x00000005);
  FUN_00010a3c(0,&stack0x00000006);
  FUN_00010a50(0,&stack0x00000007);
  iVar1 = FUN_00010a6a(unaff_s0[1],in_stack_00000004,in_stack_00000005,in_stack_00000006,
                       in_stack_00000007);
  if (iVar1 == 0) {
    iVar1 = FUN_00010a7a(4);
    unaff_s0[3] = iVar1;
    if (iVar1 == 0) {
      FUN_00010a8e(0);
    }
    else {
      iVar1 = FUN_00010ab0(4,0x1c,0);
      unaff_s0[4] = iVar1;
      if (iVar1 == 0) {
        FUN_00010ac4(0);
      }
      else {
        _L0();
        iVar1 = FUN_00010afa(0,0,0x100,0,3,&stack0x00000008);
        if (iVar1 == 1) {
          iVar1 = FUN_00010b40(0,0,0x600,0,0,0);
          if (iVar1 == 1) {
            FUN_00010b70(0);
            return 0;
          }
          FUN_00010b54(0);
          FUN_00010b5e(in_stack_00000008);
        }
        else {
          FUN_00010b12(0);
        }
        FUN_00010b1c(unaff_s0[4]);
      }
      FUN_00010ace(unaff_s0[3]);
    }
    FUN_00010a98(unaff_s0[2]);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}



undefined4 _L0(void)

{
  undefined4 *unaff_s0;
  int iVar1;
  undefined4 uVar2;
  undefined in_stack_00000004;
  undefined in_stack_00000005;
  undefined in_stack_00000006;
  undefined in_stack_00000007;
  undefined4 in_stack_00000008;
  
  iVar1 = _L0();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = _L0();
  }
  *unaff_s0 = uVar2;
  iVar1 = _L0(0);
  if (iVar1 == 0) {
    uVar2 = 0x1c200;
  }
  else {
    uVar2 = _L0();
  }
  unaff_s0[1] = uVar2;
  FUN_00010a14(0,&stack0x00000004);
  FUN_00010a28(0,&stack0x00000005);
  FUN_00010a3c(0,&stack0x00000006);
  FUN_00010a50(0,&stack0x00000007);
  iVar1 = FUN_00010a6a(unaff_s0[1],in_stack_00000004,in_stack_00000005,in_stack_00000006,
                       in_stack_00000007);
  if (iVar1 == 0) {
    iVar1 = FUN_00010a7a(4);
    unaff_s0[3] = iVar1;
    if (iVar1 == 0) {
      FUN_00010a8e(0);
    }
    else {
      iVar1 = FUN_00010ab0(4,0x1c,0);
      unaff_s0[4] = iVar1;
      if (iVar1 == 0) {
        FUN_00010ac4(0);
      }
      else {
        _L0();
        iVar1 = FUN_00010afa(0,0,0x100,0,3,&stack0x00000008);
        if (iVar1 == 1) {
          iVar1 = FUN_00010b40(0,0,0x600,0,0,0);
          if (iVar1 == 1) {
            FUN_00010b70(0);
            return 0;
          }
          FUN_00010b54(0);
          FUN_00010b5e(in_stack_00000008);
        }
        else {
          FUN_00010b12(0);
        }
        FUN_00010b1c(unaff_s0[4]);
      }
      FUN_00010ace(unaff_s0[3]);
    }
    FUN_00010a98(unaff_s0[2]);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}



undefined4 _L0(void)

{
  undefined4 *unaff_s0;
  undefined4 uVar1;
  int iVar2;
  undefined in_stack_00000004;
  undefined in_stack_00000005;
  undefined in_stack_00000006;
  undefined in_stack_00000007;
  undefined4 in_stack_00000008;
  
  uVar1 = _L0();
  *unaff_s0 = uVar1;
  iVar2 = _L0(0);
  if (iVar2 == 0) {
    uVar1 = 0x1c200;
  }
  else {
    uVar1 = _L0();
  }
  unaff_s0[1] = uVar1;
  FUN_00010a14(0,&stack0x00000004);
  FUN_00010a28(0,&stack0x00000005);
  FUN_00010a3c(0,&stack0x00000006);
  FUN_00010a50(0,&stack0x00000007);
  iVar2 = FUN_00010a6a(unaff_s0[1],in_stack_00000004,in_stack_00000005,in_stack_00000006,
                       in_stack_00000007);
  if (iVar2 == 0) {
    iVar2 = FUN_00010a7a(4);
    unaff_s0[3] = iVar2;
    if (iVar2 == 0) {
      FUN_00010a8e(0);
    }
    else {
      iVar2 = FUN_00010ab0(4,0x1c,0);
      unaff_s0[4] = iVar2;
      if (iVar2 == 0) {
        FUN_00010ac4(0);
      }
      else {
        _L0();
        iVar2 = FUN_00010afa(0,0,0x100,0,3,&stack0x00000008);
        if (iVar2 == 1) {
          iVar2 = FUN_00010b40(0,0,0x600,0,0,0);
          if (iVar2 == 1) {
            FUN_00010b70(0);
            return 0;
          }
          FUN_00010b54(0);
          FUN_00010b5e(in_stack_00000008);
        }
        else {
          FUN_00010b12(0);
        }
        FUN_00010b1c(unaff_s0[4]);
      }
      FUN_00010ace(unaff_s0[3]);
    }
    FUN_00010a98(unaff_s0[2]);
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int iVar1;
  undefined4 uVar2;
  undefined in_stack_00000004;
  undefined in_stack_00000005;
  undefined in_stack_00000006;
  undefined in_stack_00000007;
  undefined4 in_stack_00000008;
  
  iVar1 = _L0();
  if (iVar1 == 0) {
    uVar2 = 0x1c200;
  }
  else {
    uVar2 = _L0();
  }
  *(undefined4 *)(unaff_s0 + 4) = uVar2;
  FUN_00010a14(0,&stack0x00000004);
  FUN_00010a28(0,&stack0x00000005);
  FUN_00010a3c(0,&stack0x00000006);
  FUN_00010a50(0,&stack0x00000007);
  iVar1 = FUN_00010a6a(*(undefined4 *)(unaff_s0 + 4),in_stack_00000004,in_stack_00000005,
                       in_stack_00000006,in_stack_00000007);
  if (iVar1 == 0) {
    iVar1 = FUN_00010a7a(4);
    *(int *)(unaff_s0 + 0xc) = iVar1;
    if (iVar1 == 0) {
      FUN_00010a8e(0);
    }
    else {
      iVar1 = FUN_00010ab0(4,0x1c,0);
      *(int *)(unaff_s0 + 0x10) = iVar1;
      if (iVar1 == 0) {
        FUN_00010ac4(0);
      }
      else {
        _L0();
        iVar1 = FUN_00010afa(0,0,0x100,0,3,&stack0x00000008);
        if (iVar1 == 1) {
          iVar1 = FUN_00010b40(0,0,0x600,0,0,0);
          if (iVar1 == 1) {
            FUN_00010b70(0);
            return 0;
          }
          FUN_00010b54(0);
          FUN_00010b5e(in_stack_00000008);
        }
        else {
          FUN_00010b12(0);
        }
        FUN_00010b1c(*(undefined4 *)(unaff_s0 + 0x10));
      }
      FUN_00010ace(*(undefined4 *)(unaff_s0 + 0xc));
    }
    FUN_00010a98(*(undefined4 *)(unaff_s0 + 8));
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}



undefined4 _L0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  int iVar2;
  undefined in_stack_00000004;
  undefined in_stack_00000005;
  undefined in_stack_00000006;
  undefined in_stack_00000007;
  undefined4 in_stack_00000008;
  
  uVar1 = _L0();
  *(undefined4 *)(unaff_s0 + 4) = uVar1;
  FUN_00010a14(0,&stack0x00000004);
  FUN_00010a28(0,&stack0x00000005);
  FUN_00010a3c(0,&stack0x00000006);
  FUN_00010a50(0,&stack0x00000007);
  iVar2 = FUN_00010a6a(*(undefined4 *)(unaff_s0 + 4),in_stack_00000004,in_stack_00000005,
                       in_stack_00000006,in_stack_00000007);
  if (iVar2 == 0) {
    iVar2 = FUN_00010a7a(4);
    *(int *)(unaff_s0 + 0xc) = iVar2;
    if (iVar2 == 0) {
      FUN_00010a8e(0);
    }
    else {
      iVar2 = FUN_00010ab0(4,0x1c,0);
      *(int *)(unaff_s0 + 0x10) = iVar2;
      if (iVar2 == 0) {
        FUN_00010ac4(0);
      }
      else {
        _L0();
        iVar2 = FUN_00010afa(0,0,0x100,0,3,&stack0x00000008);
        if (iVar2 == 1) {
          iVar2 = FUN_00010b40(0,0,0x600,0,0,0);
          if (iVar2 == 1) {
            FUN_00010b70(0);
            return 0;
          }
          FUN_00010b54(0);
          FUN_00010b5e(in_stack_00000008);
        }
        else {
          FUN_00010b12(0);
        }
        FUN_00010b1c(*(undefined4 *)(unaff_s0 + 0x10));
      }
      FUN_00010ace(*(undefined4 *)(unaff_s0 + 0xc));
    }
    FUN_00010a98(*(undefined4 *)(unaff_s0 + 8));
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 FUN_00010a14(void)

{
  int unaff_s0;
  undefined4 uVar1;
  int iVar2;
  undefined in_stack_00000004;
  undefined in_stack_00000005;
  undefined in_stack_00000006;
  undefined in_stack_00000007;
  undefined4 in_stack_00000008;
  
  FUN_00010a14();
  FUN_00010a28(0,&stack0x00000005);
  FUN_00010a3c(0,&stack0x00000006);
  FUN_00010a50(0,&stack0x00000007);
  iVar2 = FUN_00010a6a(*(undefined4 *)(unaff_s0 + 4),in_stack_00000004,in_stack_00000005,
                       in_stack_00000006,in_stack_00000007);
  if (iVar2 == 0) {
    iVar2 = FUN_00010a7a(4);
    *(int *)(unaff_s0 + 0xc) = iVar2;
    if (iVar2 == 0) {
      FUN_00010a8e(0);
    }
    else {
      iVar2 = FUN_00010ab0(4,0x1c,0);
      *(int *)(unaff_s0 + 0x10) = iVar2;
      if (iVar2 == 0) {
        FUN_00010ac4(0);
      }
      else {
        _L0();
        iVar2 = FUN_00010afa(0,0,0x100,0,3,&stack0x00000008);
        if (iVar2 == 1) {
          iVar2 = FUN_00010b40(0,0,0x600,0,0,0);
          if (iVar2 == 1) {
            FUN_00010b70(0);
            return 0;
          }
          FUN_00010b54(0);
          FUN_00010b5e(in_stack_00000008);
        }
        else {
          FUN_00010b12(0);
        }
        FUN_00010b1c(*(undefined4 *)(unaff_s0 + 0x10));
      }
      FUN_00010ace(*(undefined4 *)(unaff_s0 + 0xc));
    }
    FUN_00010a98(*(undefined4 *)(unaff_s0 + 8));
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 FUN_00010a28(void)

{
  int unaff_s0;
  undefined4 uVar1;
  int iVar2;
  undefined in_stack_00000004;
  undefined in_stack_00000005;
  undefined in_stack_00000006;
  undefined in_stack_00000007;
  undefined4 in_stack_00000008;
  
  FUN_00010a28();
  FUN_00010a3c(0,&stack0x00000006);
  FUN_00010a50(0,&stack0x00000007);
  iVar2 = FUN_00010a6a(*(undefined4 *)(unaff_s0 + 4),in_stack_00000004,in_stack_00000005,
                       in_stack_00000006,in_stack_00000007);
  if (iVar2 == 0) {
    iVar2 = FUN_00010a7a(4);
    *(int *)(unaff_s0 + 0xc) = iVar2;
    if (iVar2 == 0) {
      FUN_00010a8e(0);
    }
    else {
      iVar2 = FUN_00010ab0(4,0x1c,0);
      *(int *)(unaff_s0 + 0x10) = iVar2;
      if (iVar2 == 0) {
        FUN_00010ac4(0);
      }
      else {
        _L0();
        iVar2 = FUN_00010afa(0,0,0x100,0,3,&stack0x00000008);
        if (iVar2 == 1) {
          iVar2 = FUN_00010b40(0,0,0x600,0,0,0);
          if (iVar2 == 1) {
            FUN_00010b70(0);
            return 0;
          }
          FUN_00010b54(0);
          FUN_00010b5e(in_stack_00000008);
        }
        else {
          FUN_00010b12(0);
        }
        FUN_00010b1c(*(undefined4 *)(unaff_s0 + 0x10));
      }
      FUN_00010ace(*(undefined4 *)(unaff_s0 + 0xc));
    }
    FUN_00010a98(*(undefined4 *)(unaff_s0 + 8));
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 FUN_00010a3c(void)

{
  int unaff_s0;
  undefined4 uVar1;
  int iVar2;
  undefined in_stack_00000004;
  undefined in_stack_00000005;
  undefined in_stack_00000006;
  undefined in_stack_00000007;
  undefined4 in_stack_00000008;
  
  FUN_00010a3c();
  FUN_00010a50(0,&stack0x00000007);
  iVar2 = FUN_00010a6a(*(undefined4 *)(unaff_s0 + 4),in_stack_00000004,in_stack_00000005,
                       in_stack_00000006,in_stack_00000007);
  if (iVar2 == 0) {
    iVar2 = FUN_00010a7a(4);
    *(int *)(unaff_s0 + 0xc) = iVar2;
    if (iVar2 == 0) {
      FUN_00010a8e(0);
    }
    else {
      iVar2 = FUN_00010ab0(4,0x1c,0);
      *(int *)(unaff_s0 + 0x10) = iVar2;
      if (iVar2 == 0) {
        FUN_00010ac4(0);
      }
      else {
        _L0();
        iVar2 = FUN_00010afa(0,0,0x100,0,3,&stack0x00000008);
        if (iVar2 == 1) {
          iVar2 = FUN_00010b40(0,0,0x600,0,0,0);
          if (iVar2 == 1) {
            FUN_00010b70(0);
            return 0;
          }
          FUN_00010b54(0);
          FUN_00010b5e(in_stack_00000008);
        }
        else {
          FUN_00010b12(0);
        }
        FUN_00010b1c(*(undefined4 *)(unaff_s0 + 0x10));
      }
      FUN_00010ace(*(undefined4 *)(unaff_s0 + 0xc));
    }
    FUN_00010a98(*(undefined4 *)(unaff_s0 + 8));
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 FUN_00010a50(void)

{
  int unaff_s0;
  undefined4 uVar1;
  int iVar2;
  undefined in_stack_00000004;
  undefined in_stack_00000005;
  undefined in_stack_00000006;
  undefined in_stack_00000007;
  undefined4 in_stack_00000008;
  
  FUN_00010a50();
  iVar2 = FUN_00010a6a(*(undefined4 *)(unaff_s0 + 4),in_stack_00000004,in_stack_00000005,
                       in_stack_00000006,in_stack_00000007);
  if (iVar2 == 0) {
    iVar2 = FUN_00010a7a(4);
    *(int *)(unaff_s0 + 0xc) = iVar2;
    if (iVar2 == 0) {
      FUN_00010a8e(0);
    }
    else {
      iVar2 = FUN_00010ab0(4,0x1c,0);
      *(int *)(unaff_s0 + 0x10) = iVar2;
      if (iVar2 == 0) {
        FUN_00010ac4(0);
      }
      else {
        _L0();
        iVar2 = FUN_00010afa(0,0,0x100,0,3,&stack0x00000008);
        if (iVar2 == 1) {
          iVar2 = FUN_00010b40(0,0,0x600,0,0,0);
          if (iVar2 == 1) {
            FUN_00010b70(0);
            return 0;
          }
          FUN_00010b54(0);
          FUN_00010b5e(in_stack_00000008);
        }
        else {
          FUN_00010b12(0);
        }
        FUN_00010b1c(*(undefined4 *)(unaff_s0 + 0x10));
      }
      FUN_00010ace(*(undefined4 *)(unaff_s0 + 0xc));
    }
    FUN_00010a98(*(undefined4 *)(unaff_s0 + 8));
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 FUN_00010a6a(void)

{
  int unaff_s0;
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_00000008;
  
  iVar2 = FUN_00010a6a();
  if (iVar2 == 0) {
    iVar2 = FUN_00010a7a(4);
    *(int *)(unaff_s0 + 0xc) = iVar2;
    if (iVar2 == 0) {
      FUN_00010a8e(0);
    }
    else {
      iVar2 = FUN_00010ab0(4,0x1c,0);
      *(int *)(unaff_s0 + 0x10) = iVar2;
      if (iVar2 == 0) {
        FUN_00010ac4(0);
      }
      else {
        _L0();
        iVar2 = FUN_00010afa(0,0,0x100,0,3,&stack0x00000008);
        if (iVar2 == 1) {
          iVar2 = FUN_00010b40(0,0,0x600,0,0,0);
          if (iVar2 == 1) {
            FUN_00010b70(0);
            return 0;
          }
          FUN_00010b54(0);
          FUN_00010b5e(in_stack_00000008);
        }
        else {
          FUN_00010b12(0);
        }
        FUN_00010b1c(*(undefined4 *)(unaff_s0 + 0x10));
      }
      FUN_00010ace(*(undefined4 *)(unaff_s0 + 0xc));
    }
    FUN_00010a98(*(undefined4 *)(unaff_s0 + 8));
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}



undefined4 FUN_00010a7a(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  int iVar1;
  undefined4 in_stack_00000008;
  
  iVar1 = FUN_00010a7a();
  *(int *)(unaff_s0 + 0xc) = iVar1;
  if (iVar1 == 0) {
    FUN_00010a8e(0);
  }
  else {
    iVar1 = FUN_00010ab0(4,0x1c,0);
    *(int *)(unaff_s0 + 0x10) = iVar1;
    if (iVar1 == 0) {
      FUN_00010ac4(0);
    }
    else {
      _L0();
      iVar1 = FUN_00010afa(0,0,0x100,0,3,&stack0x00000008);
      if (iVar1 == 1) {
        iVar1 = FUN_00010b40(0,0,0x600,0,0,0);
        if (iVar1 == 1) {
          FUN_00010b70(0);
          return unaff_s1;
        }
        FUN_00010b54(0);
        FUN_00010b5e(in_stack_00000008);
      }
      else {
        FUN_00010b12(0);
      }
      FUN_00010b1c(*(undefined4 *)(unaff_s0 + 0x10));
    }
    FUN_00010ace(*(undefined4 *)(unaff_s0 + 0xc));
  }
  FUN_00010a98(*(undefined4 *)(unaff_s0 + 8));
  return 0xffffffff;
}



undefined4 FUN_00010a8e(void)

{
  int unaff_s0;
  
  FUN_00010a8e();
  FUN_00010a98(*(undefined4 *)(unaff_s0 + 8));
  return 0xffffffff;
}



undefined4 FUN_00010a98(void)

{
  FUN_00010a98();
  return 0xffffffff;
}



undefined4 FUN_00010ab0(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  int iVar1;
  undefined4 in_stack_00000008;
  
  iVar1 = FUN_00010ab0();
  *(int *)(unaff_s0 + 0x10) = iVar1;
  if (iVar1 == 0) {
    FUN_00010ac4(0);
  }
  else {
    _L0();
    iVar1 = FUN_00010afa(0,0,0x100,0,3,&stack0x00000008);
    if (iVar1 == 1) {
      iVar1 = FUN_00010b40(0,0,0x600,0,0,0);
      if (iVar1 == 1) {
        FUN_00010b70(0);
        return unaff_s1;
      }
      FUN_00010b54(0);
      FUN_00010b5e(in_stack_00000008);
    }
    else {
      FUN_00010b12(0);
    }
    FUN_00010b1c(*(undefined4 *)(unaff_s0 + 0x10));
  }
  FUN_00010ace(*(undefined4 *)(unaff_s0 + 0xc));
  FUN_00010a98(*(undefined4 *)(unaff_s0 + 8));
  return 0xffffffff;
}



undefined4 FUN_00010ac4(void)

{
  int unaff_s0;
  
  FUN_00010ac4();
  FUN_00010ace(*(undefined4 *)(unaff_s0 + 0xc));
  FUN_00010a98(*(undefined4 *)(unaff_s0 + 8));
  return 0xffffffff;
}



undefined4 FUN_00010ace(void)

{
  int unaff_s0;
  
  FUN_00010ace();
  FUN_00010a98(*(undefined4 *)(unaff_s0 + 8));
  return 0xffffffff;
}



undefined4 _L0(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  int iVar1;
  undefined4 in_stack_00000008;
  
  _L0();
  iVar1 = FUN_00010afa(0,0,0x100,0,3,&stack0x00000008);
  if (iVar1 == 1) {
    iVar1 = FUN_00010b40(0,0,0x600,0,0,0);
    if (iVar1 == 1) {
      FUN_00010b70(0);
      return unaff_s1;
    }
    FUN_00010b54(0);
    FUN_00010b5e(in_stack_00000008);
  }
  else {
    FUN_00010b12(0);
  }
  FUN_00010b1c(*(undefined4 *)(unaff_s0 + 0x10));
  FUN_00010ace(*(undefined4 *)(unaff_s0 + 0xc));
  FUN_00010a98(*(undefined4 *)(unaff_s0 + 8));
  return 0xffffffff;
}



undefined4 FUN_00010afa(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  int iVar1;
  undefined4 in_stack_00000008;
  
  iVar1 = FUN_00010afa();
  if (iVar1 == 1) {
    iVar1 = FUN_00010b40(0,0,0x600,0,0,0);
    if (iVar1 == 1) {
      FUN_00010b70(0);
      return unaff_s1;
    }
    FUN_00010b54(0);
    FUN_00010b5e(in_stack_00000008);
  }
  else {
    FUN_00010b12(0);
  }
  FUN_00010b1c(*(undefined4 *)(unaff_s0 + 0x10));
  FUN_00010ace(*(undefined4 *)(unaff_s0 + 0xc));
  FUN_00010a98(*(undefined4 *)(unaff_s0 + 8));
  return 0xffffffff;
}



undefined4 FUN_00010b12(void)

{
  int unaff_s0;
  
  FUN_00010b12();
  FUN_00010b1c(*(undefined4 *)(unaff_s0 + 0x10));
  FUN_00010ace(*(undefined4 *)(unaff_s0 + 0xc));
  FUN_00010a98(*(undefined4 *)(unaff_s0 + 8));
  return 0xffffffff;
}



undefined4 FUN_00010b1c(void)

{
  int unaff_s0;
  
  FUN_00010b1c();
  FUN_00010ace(*(undefined4 *)(unaff_s0 + 0xc));
  FUN_00010a98(*(undefined4 *)(unaff_s0 + 8));
  return 0xffffffff;
}



undefined4 FUN_00010b40(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  int iVar1;
  int unaff_s2;
  undefined4 in_stack_00000008;
  
  iVar1 = FUN_00010b40();
  if (iVar1 == unaff_s2) {
    FUN_00010b70(0);
  }
  else {
    FUN_00010b54(0);
    FUN_00010b5e(in_stack_00000008);
    FUN_00010b1c(*(undefined4 *)(unaff_s0 + 0x10));
    FUN_00010ace(*(undefined4 *)(unaff_s0 + 0xc));
    FUN_00010a98(*(undefined4 *)(unaff_s0 + 8));
    unaff_s1 = 0xffffffff;
  }
  return unaff_s1;
}



undefined4 FUN_00010b54(void)

{
  int unaff_s0;
  undefined4 in_stack_00000008;
  
  FUN_00010b54();
  FUN_00010b5e(in_stack_00000008);
  FUN_00010b1c(*(undefined4 *)(unaff_s0 + 0x10));
  FUN_00010ace(*(undefined4 *)(unaff_s0 + 0xc));
  FUN_00010a98(*(undefined4 *)(unaff_s0 + 8));
  return 0xffffffff;
}



undefined4 FUN_00010b5e(void)

{
  int unaff_s0;
  
  FUN_00010b5e();
  FUN_00010b1c(*(undefined4 *)(unaff_s0 + 0x10));
  FUN_00010ace(*(undefined4 *)(unaff_s0 + 0xc));
  FUN_00010a98(*(undefined4 *)(unaff_s0 + 8));
  return 0xffffffff;
}



void FUN_00010b70(void)

{
  FUN_00010b70();
  return;
}



// WARNING: Variable defined which should be unmapped: ev
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int at_server_notify_with_ctx(at_evt_t event,void *p_ctx,uint32_t ctx_size)

{
  undefined3 in_register_00002029;
  int iVar1;
  undefined4 uStack44;
  _at_evt ev;
  
  uStack44 = CONCAT31(in_register_00002029,event);
  _L0(&uStack44,0,0x1c);
  iVar1 = -1;
  if (ctx_size < 0x15) {
    ev.ctx_buf._16_4_ = ctx_size;
    _L0(&ev,p_ctx,ctx_size);
    iVar1 = FUN_00010bc4(_DAT_00000010,&uStack44,0xffffffff,0);
  }
  return iVar1;
}



undefined4 _L0(undefined4 uRam00000010)

{
  uint unaff_s0;
  undefined4 uVar1;
  
  _L0();
  uVar1 = 0xffffffff;
  if (unaff_s0 < 0x15) {
    _L0(&stack0x00000008);
    uVar1 = FUN_00010bc4(uRam00000010,&stack0x00000004,0xffffffff,0);
  }
  return uVar1;
}



void _L0(undefined4 uRam00000010)

{
  _L0();
  FUN_00010bc4(uRam00000010,&stack0x00000004,0xffffffff,0);
  return;
}



void FUN_00010bc4(void)

{
  FUN_00010bc4();
  return;
}



int at_server_notify(at_evt_t event)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void at_uart_reinit(at_serial_para_t *at_para)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}


