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

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictcc_for___value anon_union.conflictcc_for___value, *Panon_union.conflictcc_for___value;

typedef uint wint_t;

union anon_union.conflictcc_for___value { // DWARF DIE: cc
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: fe
    int __count;
    union anon_union.conflictcc_for___value __value;
};

typedef union anon_union.conflictcc anon_union.conflictcc, *Panon_union.conflictcc;

union anon_union.conflictcc { // DWARF DIE: cc
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

typedef ulong __uint32_t;

typedef __uint32_t uint32_t;

struct la_mem_format { // DWARF DIE: a48
    uint32_t word[4];
};

typedef struct mm_timer_env_tag mm_timer_env_tag, *Pmm_timer_env_tag;

typedef struct co_list co_list, *Pco_list;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr { // DWARF DIE: 125e
    struct co_list_hdr * next;
};

struct co_list { // DWARF DIE: 127f
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct mm_timer_env_tag { // DWARF DIE: 12f4
    struct co_list prog;
};

typedef struct mm_timer_tag mm_timer_tag, *Pmm_timer_tag;

struct mm_timer_tag { // DWARF DIE: 12b3
    struct co_list_hdr list_hdr;
    void (* cb)(void *);
    void * env;
    uint32_t time;
};

typedef uchar uint8;

typedef ushort UINT16;

typedef ulong UINT32;

typedef uchar UINT8;

typedef char SINT8;

typedef int BOOLEAN;

typedef ulong uint32;

typedef ushort uint16;

typedef enum anon_enum_8.conflictb2e {
    FAIL=1,
    FW_SUCCESS=0
} anon_enum_8.conflictb2e;

typedef long SINT32;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: a80
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct key_MgtMaterial_t key_MgtMaterial_t, *Pkey_MgtMaterial_t;

typedef union anon_union.conflict1707_for_keyEncypt anon_union.conflict1707_for_keyEncypt, *Panon_union.conflict1707_for_keyEncypt;

typedef struct key_Type_TKIP_t key_Type_TKIP_t, *Pkey_Type_TKIP_t;

typedef struct key_Type_AES_t key_Type_AES_t, *Pkey_Type_AES_t;

typedef struct key_Type_WEP_t key_Type_WEP_t, *Pkey_Type_WEP_t;

typedef struct key_Type_WAPI_t key_Type_WAPI_t, *Pkey_Type_WAPI_t;

typedef struct key_Type_AES_CMAC_t key_Type_AES_CMAC_t, *Pkey_Type_AES_CMAC_t;

struct key_Type_AES_CMAC_t { // DWARF DIE: 16ca
    UINT8 ipn[6];
    UINT8 reserved[2];
    UINT8 key[16];
};

struct key_Type_WAPI_t { // DWARF DIE: 1673
    UINT8 keyIndex;
    UINT8 isDefKey;
    UINT8 key[16];
    UINT8 mickey[16];
    UINT8 rxPN[16];
};

struct key_Type_WEP_t { // DWARF DIE: 1603
    UINT8 keyIndex;
    UINT8 isDefaultTx;
    UINT8 key[13];
};

struct key_Type_TKIP_t { // DWARF DIE: 15c6
    UINT8 key[16];
    UINT8 txMicKey[8];
    UINT8 rxMicKey[8];
};

struct key_Type_AES_t { // DWARF DIE: 1650
    UINT8 key[16];
};

union anon_union.conflict1707_for_keyEncypt { // DWARF DIE: 1707
    struct key_Type_TKIP_t TKIP;
    struct key_Type_AES_t AES1;
    struct key_Type_WEP_t WEP;
    struct key_Type_WAPI_t WAPI;
    struct key_Type_AES_CMAC_t iGTK;
};

struct key_MgtMaterial_t { // DWARF DIE: 174d
    UINT16 keyType;
    UINT16 keyInfo;
    UINT16 keyLen;
    union anon_union.conflict1707_for_keyEncypt keyEncypt;
};

typedef union anon_union.conflict1707 anon_union.conflict1707, *Panon_union.conflict1707;

union anon_union.conflict1707 { // DWARF DIE: 1707
    struct key_Type_TKIP_t TKIP;
    struct key_Type_AES_t AES1;
    struct key_Type_WEP_t WEP;
    struct key_Type_WAPI_t WAPI;
    struct key_Type_AES_CMAC_t iGTK;
};

typedef struct BufferDesc BufferDesc, *PBufferDesc;

typedef union anon_union.conflict1797_for_intf anon_union.conflict1797_for_intf, *Panon_union.conflict1797_for_intf;

typedef struct cm_ConnectionInfo cm_ConnectionInfo, *Pcm_ConnectionInfo;

struct cm_ConnectionInfo { // DWARF DIE: 17b9
};

union anon_union.conflict1797_for_intf { // DWARF DIE: 1797
    uint32 Interface;
    struct cm_ConnectionInfo * connPtr;
};

struct BufferDesc { // DWARF DIE: 17c4
    union anon_union.conflict1797_for_intf intf;
    uint16 DataLen;
    undefined field_0x6;
    undefined field_0x7;
    void * Buffer;
};

typedef struct BufferDesc BufferDesc_t;

typedef union anon_union.conflict1797 anon_union.conflict1797, *Panon_union.conflict1797;

union anon_union.conflict1797 { // DWARF DIE: 1797
    uint32 Interface;
    struct cm_ConnectionInfo * connPtr;
};

typedef struct KDE_t KDE_t, *PKDE_t;

struct KDE_t { // DWARF DIE: 147d
    UINT8 type;
    UINT8 length;
    UINT8 OUI[3];
    UINT8 dataType;
    UINT8 data[1];
};

typedef struct GTK_KDE_t GTK_KDE_t, *PGTK_KDE_t;

struct GTK_KDE_t { // DWARF DIE: 141e
    UINT8 KeyID:2;
    UINT8 Tx:1;
    UINT8 rsvd:5;
    UINT8 rsvd1;
    UINT8 GTK[1];
};

typedef struct Hdr_8021x_t Hdr_8021x_t, *PHdr_8021x_t;

typedef enum IEEEtypes_8021x_PacketType_e {
    IEEE_8021X_PACKET_TYPE_ASF_ALERT=4,
    IEEE_8021X_PACKET_TYPE_EAPOL_KEY=3,
    IEEE_8021X_PACKET_TYPE_EAPOL_LOGOFF=2,
    IEEE_8021X_PACKET_TYPE_EAPOL_START=1,
    IEEE_8021X_PACKET_TYPE_EAP_PACKET=0
} IEEEtypes_8021x_PacketType_e;

struct Hdr_8021x_t { // DWARF DIE: 131b
    UINT8 protocol_ver;
    enum IEEEtypes_8021x_PacketType_e pckt_type;
    UINT16 pckt_body_len;
};

typedef struct EAPOL_KeyMsg_t EAPOL_KeyMsg_t, *PEAPOL_KeyMsg_t;

typedef struct key_info_t key_info_t, *Pkey_info_t;

struct key_info_t { // DWARF DIE: 1358
    UINT16 KeyMIC:1;
    UINT16 Secure:1;
    UINT16 Error:1;
    UINT16 Request:1;
    UINT16 EncryptedKeyData:1;
    UINT16 Reserved:3;
    UINT16 KeyDescriptorVersion:3;
    UINT16 KeyType:1;
    UINT16 KeyIndex:2;
    UINT16 Install:1;
    UINT16 KeyAck:1;
};

struct EAPOL_KeyMsg_t { // DWARF DIE: 14d4
    struct Hdr_8021x_t hdr_8021x;
    UINT8 desc_type;
    struct key_info_t key_info;
    UINT16 key_length;
    UINT32 replay_cnt[2];
    UINT8 key_nonce[32];
    UINT8 EAPOL_key_IV[16];
    UINT8 key_RSC[8];
    UINT8 key_ID[8];
    UINT8 key_MIC[16];
    UINT16 key_material_len;
    UINT8 key_data[1];
};

typedef struct EAPOL_KeyMsg_Tx_t EAPOL_KeyMsg_Tx_t, *PEAPOL_KeyMsg_Tx_t;

typedef struct ether_hdr_t ether_hdr_t, *Pether_hdr_t;

typedef UINT8 IEEEtypes_Addr_t;

typedef IEEEtypes_Addr_t IEEEtypes_MacAddr_t[6];

struct ether_hdr_t { // DWARF DIE: 121e
    IEEEtypes_MacAddr_t da;
    IEEEtypes_MacAddr_t sa;
    UINT16 type;
};

struct EAPOL_KeyMsg_Tx_t { // DWARF DIE: 1596
    struct ether_hdr_t ethHdr;
    struct EAPOL_KeyMsg_t keyMsg;
};

typedef struct BL_ENDECRYPT_t BL_ENDECRYPT_t, *PBL_ENDECRYPT_t;

struct BL_ENDECRYPT_t { // DWARF DIE: 23a9
    UINT8 enDeAction;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    UINT8 * pData;
};

typedef struct RSNConfig_t RSNConfig_t, *PRSNConfig_t;

typedef struct SecurityMode_t SecurityMode_t, *PSecurityMode_t;

typedef struct Cipher_t Cipher_t, *PCipher_t;

typedef struct AkmSuite_t AkmSuite_t, *PAkmSuite_t;

typedef struct IEEEtypes_RSNCapability_t IEEEtypes_RSNCapability_t, *PIEEEtypes_RSNCapability_t;

typedef enum AkmType_e {
    AKM_1X=1,
    AKM_CCKM=99,
    AKM_FT_1X=3,
    AKM_FT_PSK=4,
    AKM_NONE=0,
    AKM_PSK=2,
    AKM_RSN_MAX=6,
    AKM_SHA256_1X=5,
    AKM_SHA256_PSK=6,
    AKM_SUITE_MAX=5,
    AKM_TDLS=7,
    AKM_WPA_MAX=2
} AkmType_e;

typedef enum AkmType_e AkmTypePacked_e;

struct AkmSuite_t { // DWARF DIE: 1a65
    UINT8 akmOui[3];
    AkmTypePacked_e akmType;
};

struct SecurityMode_t { // DWARF DIE: 1940
    UINT16 noRsn:1;
    UINT16 wepStatic:1;
    UINT16 wepDynamic:1;
    UINT16 wpa:1;
    UINT16 wpaNone:1;
    UINT16 wpa2:1;
    UINT16 cckm:1;
    UINT16 wapi:1;
    UINT16 wpa3:1;
    UINT16 rsvd:7;
};

struct Cipher_t { // DWARF DIE: 18da
    UINT8 wep40:1;
    UINT8 wep104:1;
    UINT8 tkip:1;
    UINT8 ccmp:1;
    UINT8 rsvd:4;
};

struct IEEEtypes_RSNCapability_t { // DWARF DIE: 1064
    UINT8 PreAuth:1;
    UINT8 NoPairwise:1;
    UINT8 PtksaReplayCtr:2;
    UINT8 GtksaReplayCtr:2;
    UINT8 MFPR:1;
    UINT8 MFPC:1;
    UINT8 Reserved_8:1;
    UINT8 PeerkeyEnabled:1;
    UINT8 SppAmsduCap:1;
    UINT8 SppAmsduReq:1;
    UINT8 PBAC:1;
    UINT8 Reserved_13_15:3;
};

struct RSNConfig_t { // DWARF DIE: 1ad2
    UINT8 RSNEnabled:1;
    UINT8 pmkidValid:1;
    UINT8 rsnCapValid:1;
    UINT8 grpMgmtCipherValid:1;
    UINT8 rsvd:4;
    struct SecurityMode_t wpaType;
    struct Cipher_t mcstCipher;
    struct Cipher_t ucstCipher;
    struct AkmSuite_t AKM;
    UINT8 PMKID[16];
    struct IEEEtypes_RSNCapability_t rsnCap;
    struct Cipher_t grpMgmtCipher;
};

typedef struct __locale_t __locale_t, *P__locale_t;

struct __locale_t { // DWARF DIE: 8db
};

typedef ushort __uint16_t;

typedef long __int32_t;

typedef uchar __uint8_t;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef __uint16_t uint16_t;

struct mac_addr { // DWARF DIE: 9a8
    uint16_t array[3];
};

typedef struct SecurityParams_t SecurityParams_t, *PSecurityParams_t;

struct SecurityParams_t { // DWARF DIE: 1a95
    struct SecurityMode_t wpaType;
    struct Cipher_t mcstCipher;
    struct Cipher_t ucstCipher;
};

typedef struct KeyData_t KeyData_t, *PKeyData_t;

struct KeyData_t { // DWARF DIE: 1805
    UINT8 Key[16];
    UINT8 RxMICKey[8];
    UINT8 TxMICKey[8];
    UINT32 TxIV32;
    UINT16 TxIV16;
    UINT16 KeyIndex;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8a6_for__new anon_union.conflict8a6_for__new, *Panon_union.conflict8a6_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict71a anon_struct.conflict71a, *Panon_struct.conflict71a;

typedef struct anon_struct.conflict85f anon_struct.conflict85f, *Panon_struct.conflict85f;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _rand48 { // DWARF DIE: 6d1
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct __tm { // DWARF DIE: 1c4
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

struct anon_struct.conflict71a { // DWARF DIE: 71a
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

struct anon_struct.conflict85f { // DWARF DIE: 85f
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict8a6_for__new { // DWARF DIE: 8a6
    struct anon_struct.conflict71a _reent;
    struct anon_struct.conflict85f _unused;
};

struct _on_exit_args { // DWARF DIE: 247
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 29c
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _Bigint { // DWARF DIE: 154
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 68c
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf { // DWARF DIE: 2fc
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 32a
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

struct _reent { // DWARF DIE: 496
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
    union anon_union.conflict8a6_for__new _new;
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

typedef union anon_union.conflict8a6 anon_union.conflict8a6, *Panon_union.conflict8a6;

union anon_union.conflict8a6 { // DWARF DIE: 8a6
    struct anon_struct.conflict71a _reent;
    struct anon_struct.conflict85f _unused;
};

typedef struct IEEEtypes_RSNElement_t IEEEtypes_RSNElement_t, *PIEEEtypes_RSNElement_t;

typedef enum IEEEtypes_ElementId_e {
    ELEM_ID_2040_BSS_COEXISTENCE=72,
    ELEM_ID_2040_BSS_INTOL_CHRPT=73,
    ELEM_ID_AID=-59,
    ELEM_ID_ANTENNA_INFO=64,
    ELEM_ID_AP_CHANNEL_REPORT=51,
    ELEM_ID_BSS_ACCESS_DELAY=63,
    ELEM_ID_BSS_AC_ACCESS_DELAY=68,
    ELEM_ID_BSS_AVAIL_ADM_CAP=67,
    ELEM_ID_BSS_LOAD=11,
    ELEM_ID_BSS_MAX_IDLE_PERIOD=90,
    ELEM_ID_CF_PARAM_SET=4,
    ELEM_ID_CHALLENGE_TEXT=16,
    ELEM_ID_CHANNEL_SWITCH_ANN=37,
    ELEM_ID_CHANNEL_USAGE=97,
    ELEM_ID_COLLOC_INTF_REPORT=96,
    ELEM_ID_COUNTRY=7,
    ELEM_ID_DIAG_REPORT=81,
    ELEM_ID_DIAG_REQUEST=80,
    ELEM_ID_DMS_REQUEST=99,
    ELEM_ID_DMS_RESPONSE=100,
    ELEM_ID_DSE_REGISTERED_LOC=58,
    ELEM_ID_DS_PARAM_SET=3,
    ELEM_ID_EDCA_PARAM_SET=12,
    ELEM_ID_ERP_INFO=42,
    ELEM_ID_EVENT_REPORT=79,
    ELEM_ID_EVENT_REQUEST=78,
    ELEM_ID_EXTENSION=-1,
    ELEM_ID_EXT_ASSOC_DELAY_INFO=1,
    ELEM_ID_EXT_CAPABILITIES=127,
    ELEM_ID_EXT_CHAN_SWITCH_ANN=60,
    ELEM_ID_EXT_ESTIMATED_SERVICE_PARAMS=11,
    ELEM_ID_EXT_EXTENDED_REQUEST=10,
    ELEM_ID_EXT_FILS_HLP_CONTAINER=5,
    ELEM_ID_EXT_FILS_IP_ADDR_ASSIGN=6,
    ELEM_ID_EXT_FILS_KEY_CONFIRM=3,
    ELEM_ID_EXT_FILS_NONCE=13,
    ELEM_ID_EXT_FILS_PUBLIC_KEY=12,
    ELEM_ID_EXT_FILS_REQ_PARAMS=2,
    ELEM_ID_EXT_FILS_SESSION=4,
    ELEM_ID_EXT_FILS_WRAPPED_DATA=8,
    ELEM_ID_EXT_FTM_SYNC_INFO=9,
    ELEM_ID_EXT_FUTURE_CHANNEL_GUIDANCE=14,
    ELEM_ID_EXT_HE_CAPABILITIES=35,
    ELEM_ID_EXT_HE_OPERATION=36,
    ELEM_ID_EXT_KEY_DELIVERY=7,
    ELEM_ID_EXT_OWE_DH_PARAM=32,
    ELEM_ID_EXT_PASSWORD_IDENTIFIER=33,
    ELEM_ID_EXT_SUPPORTED_RATES=50,
    ELEM_ID_FAST_BSS_TRANS=55,
    ELEM_ID_FH_PARAM_SET=2,
    ELEM_ID_FMS_DESCRIPTOR=86,
    ELEM_ID_FMS_REQUEST=87,
    ELEM_ID_FMS_RESPONSE=88,
    ELEM_ID_HOP_PARAM=8,
    ELEM_ID_HOP_TABLE=9,
    ELEM_ID_HT_CAPABILITY=45,
    ELEM_ID_HT_INFORMATION=61,
    ELEM_ID_IBSS_DFS=41,
    ELEM_ID_IBSS_PARAM_SET=6,
    ELEM_ID_LINK_ID=101,
    ELEM_ID_LOCATION_PARAM=82,
    ELEM_ID_MANAGEMENT_MIC=76,
    ELEM_ID_MBSSID_INDEX=85,
    ELEM_ID_MEASUREMENT_REQ=38,
    ELEM_ID_MEASUREMENT_RPT=39,
    ELEM_ID_MEAS_PILOT_TX_INFO=66,
    ELEM_ID_MOBILITY_DOMAIN=54,
    ELEM_ID_MULTI_BSSID=71,
    ELEM_ID_NEIGHBOR_REPORT=52,
    ELEM_ID_NONTRANS_BSSID_CAP=83,
    ELEM_ID_OBSS_SCAN_PARAM=74,
    ELEM_ID_POWER_CAPABILITY=33,
    ELEM_ID_POWER_CONSTRAINT=32,
    ELEM_ID_PTI_CONTROL=105,
    ELEM_ID_PU_BUFFER_STATUS=106,
    ELEM_ID_QOS_CAPABILITY=46,
    ELEM_ID_QOS_TRAFFIC_CAP=89,
    ELEM_ID_QUIET=40,
    ELEM_ID_RCPI=53,
    ELEM_ID_REQUEST=10,
    ELEM_ID_RIC_DATA=57,
    ELEM_ID_RIC_DESCRIPTOR=75,
    ELEM_ID_RRM_ENABLED_CAP=70,
    ELEM_ID_RSN=48,
    ELEM_ID_RSNI=65,
    ELEM_ID_SCHEDULE=15,
    ELEM_ID_SECONDARY_CHAN_OFFSET=62,
    ELEM_ID_SSID=0,
    ELEM_ID_SSID_LIST=84,
    ELEM_ID_SUPPORTED_CHANNELS=36,
    ELEM_ID_SUPPORTED_RATES=1,
    ELEM_ID_SUPPORTED_REGCLASS=59,
    ELEM_ID_TCLAS=14,
    ELEM_ID_TCLAS_PROCESS=44,
    ELEM_ID_TDLS_CS_TIMING=104,
    ELEM_ID_TFS_REQUEST=91,
    ELEM_ID_TFS_RESPONSE=92,
    ELEM_ID_TIM=5,
    ELEM_ID_TIMEOUT_INTERVAL=56,
    ELEM_ID_TIME_ZONE=98,
    ELEM_ID_TIM_BCAST_REQUEST=94,
    ELEM_ID_TIM_BCAST_RESPONSE=95,
    ELEM_ID_TPC_REPORT=35,
    ELEM_ID_TPC_REQUEST=34,
    ELEM_ID_TSPEC=13,
    ELEM_ID_TS_DELAY=43,
    ELEM_ID_VENDOR_SPECIFIC=-35,
    ELEM_ID_VHT_CAPABILITIES=-65,
    ELEM_ID_VHT_OPERATION=-64,
    ELEM_ID_VHT_OP_MODE_NOTIFICATION=-57,
    ELEM_ID_WAKEUP_SCHEDULE=102,
    ELEM_ID_WAPI=68,
    ELEM_ID_WIDE_BAND_CHAN_SW=-63,
    ELEM_ID_WNM_SLEEP_MODE=93,
    SUBELEM_ID_GTK=2,
    SUBELEM_ID_IGTK=4,
    SUBELEM_ID_PMK_R0_KEY_HOLDER_ID=3,
    SUBELEM_ID_PMK_R1_KEY_HOLDER_ID=1,
    SUBELEM_ID_REPORTED_FRAME_BODY=1,
    SUBELEM_ID_REPORTING_DETAIL=2
} IEEEtypes_ElementId_e;

typedef UINT8 IEEEtypes_Len_t;

struct IEEEtypes_RSNElement_t { // DWARF DIE: 1148
    enum IEEEtypes_ElementId_e ElementId;
    IEEEtypes_Len_t Len;
    UINT16 Ver;
    UINT8 GrpKeyCipher[4];
    UINT16 PwsKeyCnt;
    UINT8 PwsKeyCipherList[4];
    UINT16 AuthKeyCnt;
    UINT8 AuthKeyList[4];
    struct IEEEtypes_RSNCapability_t RsnCap;
    UINT16 PMKIDCnt;
    UINT8 PMKIDList[16];
    UINT8 GrpMgmtCipher[4];
};

typedef struct IEEEtypes_InfoElementHdr_t IEEEtypes_InfoElementHdr_t, *PIEEEtypes_InfoElementHdr_t;

struct IEEEtypes_InfoElementHdr_t { // DWARF DIE: f8a
    enum IEEEtypes_ElementId_e ElementId;
    IEEEtypes_Len_t Len;
};

typedef struct IEEEtypes_WPAElement_t IEEEtypes_WPAElement_t, *PIEEEtypes_WPAElement_t;

struct IEEEtypes_WPAElement_t { // DWARF DIE: fce
    enum IEEEtypes_ElementId_e ElementId;
    IEEEtypes_Len_t Len;
    UINT8 OuiType[4];
    UINT16 Ver;
    UINT8 GrpKeyCipher[4];
    UINT16 PwsKeyCnt;
    UINT8 PwsKeyCipherList[4];
    UINT16 AuthKeyCnt;
    UINT8 AuthKeyList[4];
};

typedef enum IEEEtypes_KDEDataType_e {
    KDE_DATA_TYPE_ERROR=8,
    KDE_DATA_TYPE_GTK=1,
    KDE_DATA_TYPE_IGTK=9,
    KDE_DATA_TYPE_LIFETIME=7,
    KDE_DATA_TYPE_MACADDR=3,
    KDE_DATA_TYPE_NONCE=6,
    KDE_DATA_TYPE_PMKID=4,
    KDE_DATA_TYPE_RESERVED=0,
    KDE_DATA_TYPE_RESERVED2=2,
    KDE_DATA_TYPE_SMK=5
} IEEEtypes_KDEDataType_e;

typedef struct apKeyMgmtInfoStaRom_t apKeyMgmtInfoStaRom_t, *PapKeyMgmtInfoStaRom_t;

typedef enum keyMgmtState_e {
    GRPMSG1_PENDING=5,
    GRP_REKEY_MSG1_PENDING=7,
    HSK_DUMMY_STATE=9,
    HSK_END=10,
    HSK_NOT_STARTED=0,
    MSG1_PENDING=1,
    MSG3_PENDING=3,
    WAITING_4_GRPMSG2=6,
    WAITING_4_GRP_REKEY_MSG2=8,
    WAITING_4_MSG2=2,
    WAITING_4_MSG4=4
} keyMgmtState_e;

struct apKeyMgmtInfoStaRom_t { // DWARF DIE: 22c2
    UINT16 staRsnCap;
    struct SecurityMode_t staSecType;
    struct Cipher_t staUcstCipher;
    UINT8 staAkmType;
    enum keyMgmtState_e keyMgmtState;
    undefined field_0x7;
};

typedef __int32_t int32_t;

typedef int32_t BaseType_t;

typedef struct MIC_Error_t MIC_Error_t, *PMIC_Error_t;

typedef enum MIC_Fail_State_e {
    FIRST_MIC_FAIL_IN_60_SEC=1,
    NO_MIC_FAILURE=0,
    SECOND_MIC_FAIL_IN_60_SEC=2
} MIC_Fail_State_e;

struct MIC_Error_t { // DWARF DIE: 1bc0
    enum MIC_Fail_State_e status;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    BOOLEAN MICCounterMeasureEnabled;
    UINT32 disableStaAsso;
};

typedef struct keyMgmtInfoSta_t keyMgmtInfoSta_t, *PkeyMgmtInfoSta_t;

typedef struct cipher_key_t cipher_key_t, *Pcipher_key_t;

typedef union ckd ckd, *Pckd;

typedef struct eapolHskData_t eapolHskData_t, *PeapolHskData_t;

struct eapolHskData_t { // DWARF DIE: 1869
    UINT8 ANonce[32];
    struct KeyData_t pwsKeyData;
};

union ckd { // DWARF DIE: 1899
    struct eapolHskData_t hskData;
};

struct cipher_key_t { // DWARF DIE: 18b3
    union ckd ckd;
};

struct keyMgmtInfoSta_t { // DWARF DIE: 1bfd
    UINT8 ANonce[32];
    UINT8 SNonce[32];
    UINT8 EAPOL_MIC_Key[16];
    UINT8 EAPOL_Encr_Key[16];
    UINT32 apCounterLo;
    UINT32 apCounterHi;
    UINT32 apCounterZeroDone;
    UINT32 staCounterLo;
    UINT32 staCounterHi;
    BOOLEAN RSNDataTrafficEnabled;
    BOOLEAN RSNSecured;
    BOOLEAN pwkHandshakeComplete;
    struct cipher_key_t * pRxDecryptKey;
    struct KeyData_t PWKey;
    struct KeyData_t GRKey;
    struct KeyData_t newPWKey;
    struct MIC_Error_t sta_MIC_Error;
    struct mm_timer_tag rsnTimer;
    struct cm_ConnectionInfo * connPtr;
    struct KeyData_t IGtk;
};

typedef __uint8_t uint8_t;

typedef struct Elf32_Rela Elf32_Rela, *PElf32_Rela;

struct Elf32_Rela {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
    dword r_addend; // a constant addend used to compute the relocatable field value
};

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




// WARNING: Variable defined which should be unmapped: inp_data
// DWARF DIE: 2c48

void GenerateGTK_internal(KeyData_t *grpKeyData,UINT8 *nonce,IEEEtypes_Addr_t *StaMacAddr)

{
  UINT8 prefix [20];
  UINT8 GTK [32];
  UINT8 grpMasterKey [32];
  UINT8 inp_data [38];
  
  _L0();
  if ((grpKeyData != (KeyData_t *)0x0) && (nonce != (UINT8 *)0x0)) {
    FUN_0001002e();
    FUN_0001003c();
    FUN_0001004e();
    FUN_0001005c();
    FUN_00010066();
    FUN_00010086();
    FUN_00010094();
    FUN_000100a4();
    FUN_000100b4();
  }
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  
  _L0();
  if ((unaff_s0 != 0) && (unaff_s1 != 0)) {
    FUN_0001002e();
    FUN_0001003c();
    FUN_0001004e();
    FUN_0001005c();
    FUN_00010066();
    FUN_00010086();
    FUN_00010094();
    FUN_000100a4();
    FUN_000100b4();
  }
  return;
}



void FUN_0001002e(void)

{
  FUN_0001002e();
  FUN_0001003c();
  FUN_0001004e();
  FUN_0001005c();
  FUN_00010066();
  FUN_00010086();
  FUN_00010094();
  FUN_000100a4();
  FUN_000100b4();
  return;
}



void FUN_0001003c(void)

{
  FUN_0001003c();
  FUN_0001004e();
  FUN_0001005c();
  FUN_00010066();
  FUN_00010086();
  FUN_00010094();
  FUN_000100a4();
  FUN_000100b4();
  return;
}



void FUN_0001004e(void)

{
  FUN_0001004e();
  FUN_0001005c();
  FUN_00010066();
  FUN_00010086();
  FUN_00010094();
  FUN_000100a4();
  FUN_000100b4();
  return;
}



void FUN_0001005c(void)

{
  FUN_0001005c();
  FUN_00010066();
  FUN_00010086();
  FUN_00010094();
  FUN_000100a4();
  FUN_000100b4();
  return;
}



void FUN_00010066(void)

{
  FUN_00010066();
  FUN_00010086();
  FUN_00010094();
  FUN_000100a4();
  FUN_000100b4();
  return;
}



void FUN_00010086(void)

{
  FUN_00010086();
  FUN_00010094();
  FUN_000100a4();
  FUN_000100b4();
  return;
}



void FUN_00010094(void)

{
  FUN_00010094();
  FUN_000100a4();
  FUN_000100b4();
  return;
}



void FUN_000100a4(void)

{
  FUN_000100a4();
  FUN_000100b4();
  return;
}



void FUN_000100b4(void)

{
  FUN_000100b4();
  return;
}



// DWARF DIE: 2bab

void PopulateKeyMsg(EAPOL_KeyMsg_Tx_t *tx_eapol_ptr,Cipher_t *Cipher,UINT16 Type,UINT32 *replay_cnt,
                   UINT8 *Nonce)

{
  byte bVar1;
  undefined2 in_register_00002032;
  int iVar2;
  undefined uVar3;
  byte bVar4;
  uint uVar5;
  
  uVar5 = CONCAT22(in_register_00002032,Type);
  if ((tx_eapol_ptr == (EAPOL_KeyMsg_Tx_t *)0x0) || (Cipher == (Cipher_t *)0x0)) {
    return;
  }
  if (((byte)*Cipher & 4) == 0) {
    if (((byte)*Cipher & 8) != 0) {
      *(undefined *)&(tx_eapol_ptr->keyMsg).key_length = 0;
      uVar3 = 0x10;
      goto _L0;
    }
  }
  else {
    *(undefined *)&(tx_eapol_ptr->keyMsg).key_length = 0;
    uVar3 = 0x20;
_L0:
    *(undefined *)((int)&(tx_eapol_ptr->keyMsg).key_length + 1) = uVar3;
  }
  bVar1 = *(byte *)&(tx_eapol_ptr->keyMsg).key_info.field_0x1;
  *(byte *)&(tx_eapol_ptr->keyMsg).key_info.field_0x1 = bVar1 | 0x80;
  if ((int)(uVar5 << 0x14) < 0) {
    *(byte *)&(tx_eapol_ptr->keyMsg).key_info.field_0x1 = bVar1 | 0x88;
    if ((Type & 0x80) == 0) goto _L0;
    bVar4 = *(byte *)&(tx_eapol_ptr->keyMsg).key_info;
    *(byte *)&(tx_eapol_ptr->keyMsg).key_info.field_0x1 = bVar1 | 200;
    bVar4 = bVar4 & 0xed | 1 | (byte)((uVar5 >> 0xf) << 1);
    bVar1 = (byte)((uVar5 >> 0xf) << 4);
  }
  else {
    bVar1 = (byte)((uVar5 >> 0xf) << 4);
    bVar4 = *(byte *)&(tx_eapol_ptr->keyMsg).key_info & 0xec | 3;
  }
  *(byte *)&(tx_eapol_ptr->keyMsg).key_info = bVar1 | bVar4;
_L0:
  uVar5 = *replay_cnt;
  iVar2 = uVar5 * 0x1000000 + (uVar5 >> 0x18) + (uVar5 & 0xff00) * 0x100 + (uVar5 >> 8 & 0xff00);
  *(char *)(tx_eapol_ptr->keyMsg).replay_cnt = (char)iVar2;
  *(char *)((int)(tx_eapol_ptr->keyMsg).replay_cnt + 1) = (char)((uint)iVar2 >> 8);
  *(char *)((int)(tx_eapol_ptr->keyMsg).replay_cnt + 2) = (char)((uint)iVar2 >> 0x10);
  *(char *)((int)(tx_eapol_ptr->keyMsg).replay_cnt + 3) = (char)((uint)iVar2 >> 0x18);
  uVar5 = replay_cnt[1];
  iVar2 = uVar5 * 0x1000000 + (uVar5 >> 0x18) + (uVar5 & 0xff00) * 0x100 + (uVar5 >> 8 & 0xff00);
  *(char *)((tx_eapol_ptr->keyMsg).replay_cnt + 1) = (char)iVar2;
  *(char *)((int)(tx_eapol_ptr->keyMsg).replay_cnt + 5) = (char)((uint)iVar2 >> 8);
  *(char *)((int)(tx_eapol_ptr->keyMsg).replay_cnt + 6) = (char)((uint)iVar2 >> 0x10);
  *(char *)((int)(tx_eapol_ptr->keyMsg).replay_cnt + 7) = (char)((uint)iVar2 >> 0x18);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 2a96

void prepareKDE(EAPOL_KeyMsg_Tx_t *tx_eapol_ptr,KeyData_t *grKey,Cipher_t *cipher)

{
  UINT8 UVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  UINT8 *pUVar5;
  UINT8 *pUVar6;
  
  if (tx_eapol_ptr != (EAPOL_KeyMsg_Tx_t *)0x0) {
    if ((grKey != (KeyData_t *)0x0) && (cipher != (Cipher_t *)0x0)) {
      pUVar5 = (tx_eapol_ptr->keyMsg).key_data + *(byte *)&(tx_eapol_ptr->keyMsg).key_material_len;
      *pUVar5 = -0x23;
      pUVar5[1] = '\x16';
      pUVar5[2] = URam00000000;
      UVar1 = URam00000002;
      pUVar5[3] = URam00000001;
      pUVar5[4] = UVar1;
      pUVar5[5] = '\x01';
      pUVar5[6] = pUVar5[6] & 0xfc | 1;
      _L0();
      pUVar6 = pUVar5 + 0x18;
      if (((byte)*cipher & 4) != 0) {
        pUVar5[1] = pUVar5[1] + '\x10';
        _L0();
        _LVL35();
        pUVar6 = pUVar5 + 0x28;
      }
      uVar2 = (tx_eapol_ptr->keyMsg).key_material_len + 2 + (uint)pUVar5[1];
      uVar3 = uVar2 & 0xffff;
      *(char *)&(tx_eapol_ptr->keyMsg).key_material_len = (char)(uVar2 * 0x10000 >> 0x10);
      *(char *)((int)&(tx_eapol_ptr->keyMsg).key_material_len + 1) = (char)(uVar3 >> 8);
      uVar2 = -uVar3 & 7;
      if (uVar2 != 0) {
        *pUVar6 = -0x23;
        _LVL40();
        iVar4 = uVar2 + (tx_eapol_ptr->keyMsg).key_material_len;
        *(char *)&(tx_eapol_ptr->keyMsg).key_material_len = (char)((uint)(iVar4 * 0x10000) >> 0x10);
        *(char *)((int)&(tx_eapol_ptr->keyMsg).key_material_len + 1) = (char)((uint)iVar4 >> 8);
      }
    }
    return;
  }
  return;
}



void _L0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int unaff_s1;
  undefined *puVar4;
  int unaff_s2;
  byte *unaff_s3;
  
  _L0();
  puVar4 = (undefined *)(unaff_s1 + 0x18);
  if ((*unaff_s3 & 4) != 0) {
    *(char *)(unaff_s1 + 1) = *(char *)(unaff_s1 + 1) + '\x10';
    _L0();
    _LVL35();
    puVar4 = (undefined *)(unaff_s1 + 0x28);
  }
  uVar1 = *(ushort *)(unaff_s2 + 0x6f) + 2 + (uint)*(byte *)(unaff_s1 + 1);
  uVar2 = uVar1 & 0xffff;
  *(char *)(unaff_s2 + 0x6f) = (char)(uVar1 * 0x10000 >> 0x10);
  *(char *)(unaff_s2 + 0x70) = (char)(uVar2 >> 8);
  uVar1 = -uVar2 & 7;
  if (uVar1 != 0) {
    *puVar4 = 0xdd;
    _LVL40();
    iVar3 = uVar1 + *(ushort *)(unaff_s2 + 0x6f);
    *(char *)(unaff_s2 + 0x6f) = (char)((uint)(iVar3 * 0x10000) >> 0x10);
    *(char *)(unaff_s2 + 0x70) = (char)((uint)iVar3 >> 8);
  }
  return;
}



void _L0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int unaff_s1;
  int unaff_s2;
  
  _L0();
  _LVL35();
  uVar1 = *(ushort *)(unaff_s2 + 0x6f) + 2 + (uint)*(byte *)(unaff_s1 + 1);
  uVar2 = uVar1 & 0xffff;
  *(char *)(unaff_s2 + 0x6f) = (char)(uVar1 * 0x10000 >> 0x10);
  *(char *)(unaff_s2 + 0x70) = (char)(uVar2 >> 8);
  uVar1 = -uVar2 & 7;
  if (uVar1 != 0) {
    *(undefined *)(unaff_s1 + 0x28) = 0xdd;
    _LVL40();
    iVar3 = uVar1 + *(ushort *)(unaff_s2 + 0x6f);
    *(char *)(unaff_s2 + 0x6f) = (char)((uint)(iVar3 * 0x10000) >> 0x10);
    *(char *)(unaff_s2 + 0x70) = (char)((uint)iVar3 >> 8);
  }
  return;
}



void _LVL35(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int unaff_s1;
  int unaff_s2;
  
  _LVL35();
  uVar1 = *(ushort *)(unaff_s2 + 0x6f) + 2 + (uint)*(byte *)(unaff_s1 + 1);
  uVar2 = uVar1 & 0xffff;
  *(char *)(unaff_s2 + 0x6f) = (char)(uVar1 * 0x10000 >> 0x10);
  *(char *)(unaff_s2 + 0x70) = (char)(uVar2 >> 8);
  uVar1 = -uVar2 & 7;
  if (uVar1 != 0) {
    *(undefined *)(unaff_s1 + 0x28) = 0xdd;
    _LVL40();
    iVar3 = uVar1 + *(ushort *)(unaff_s2 + 0x6f);
    *(char *)(unaff_s2 + 0x6f) = (char)((uint)(iVar3 * 0x10000) >> 0x10);
    *(char *)(unaff_s2 + 0x70) = (char)((uint)iVar3 >> 8);
  }
  return;
}



void _LVL40(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s2;
  
  _LVL40();
  iVar1 = unaff_s0 + (uint)*(ushort *)(unaff_s2 + 0x6f);
  *(char *)(unaff_s2 + 0x6f) = (char)((uint)(iVar1 * 0x10000) >> 0x10);
  *(char *)(unaff_s2 + 0x70) = (char)((uint)iVar1 >> 8);
  return;
}



// DWARF DIE: 2971

BOOLEAN Encrypt_keyData(EAPOL_KeyMsg_Tx_t *tx_eapol_ptr,UINT8 *EAPOL_Encr_Key,Cipher_t *cipher)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  UINT8 key [16];
  
  if (((tx_eapol_ptr != (EAPOL_KeyMsg_Tx_t *)0x0) && (EAPOL_Encr_Key != (UINT8 *)0x0)) &&
     (cipher != (Cipher_t *)0x0)) {
    if (((byte)*cipher & 8) == 0) {
      return (byte)*cipher >> 2 & 1;
    }
    iVar2 = _L0();
    if (iVar2 != 0) {
      bVar1 = FUN_0001033c();
      *(int *)(iVar2 + 8) = CONCAT31(extraout_var,bVar1);
      if (CONCAT31(extraout_var,bVar1) != 0) {
        _LVL57();
        FUN_00010374();
        iVar2 = (tx_eapol_ptr->keyMsg).key_material_len + 8;
        *(char *)&(tx_eapol_ptr->keyMsg).key_material_len = (char)((uint)(iVar2 * 0x10000) >> 0x10);
        *(char *)((int)&(tx_eapol_ptr->keyMsg).key_material_len + 1) = (char)((uint)iVar2 >> 8);
        FUN_0001039e();
        FUN_000103a8();
        FUN_000103b2();
        return 1;
      }
    }
    return 0;
  }
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  
  iVar2 = _L0();
  if (iVar2 != 0) {
    bVar1 = FUN_0001033c();
    *(int *)(iVar2 + 8) = CONCAT31(extraout_var,bVar1);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      _LVL57();
      FUN_00010374();
      iVar2 = *(ushort *)(unaff_s0 + 0x6f) + 8;
      *(char *)(unaff_s0 + 0x6f) = (char)((uint)(iVar2 * 0x10000) >> 0x10);
      *(char *)(unaff_s0 + 0x70) = (char)((uint)iVar2 >> 8);
      FUN_0001039e();
      FUN_000103a8();
      FUN_000103b2();
      return 1;
    }
  }
  return 0;
}



bool FUN_0001033c(void)

{
  int unaff_s0;
  int unaff_s1;
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  int extraout_a0;
  
  bVar1 = FUN_0001033c();
  extraout_a0 = CONCAT31(extraout_var,bVar1);
  *(int *)(unaff_s1 + 8) = extraout_a0;
  if (extraout_a0 != 0) {
    _LVL57();
    FUN_00010374();
    iVar2 = *(ushort *)(unaff_s0 + 0x6f) + 8;
    *(char *)(unaff_s0 + 0x6f) = (char)((uint)(iVar2 * 0x10000) >> 0x10);
    *(char *)(unaff_s0 + 0x70) = (char)((uint)iVar2 >> 8);
    FUN_0001039e();
    FUN_000103a8();
    FUN_000103b2();
  }
  return extraout_a0 != 0;
}



undefined4 _LVL57(void)

{
  int unaff_s0;
  int iVar1;
  
  _LVL57();
  FUN_00010374();
  iVar1 = *(ushort *)(unaff_s0 + 0x6f) + 8;
  *(char *)(unaff_s0 + 0x6f) = (char)((uint)(iVar1 * 0x10000) >> 0x10);
  *(char *)(unaff_s0 + 0x70) = (char)((uint)iVar1 >> 8);
  FUN_0001039e();
  FUN_000103a8();
  FUN_000103b2();
  return 1;
}



undefined4 FUN_00010374(void)

{
  int unaff_s0;
  int iVar1;
  
  FUN_00010374();
  iVar1 = *(ushort *)(unaff_s0 + 0x6f) + 8;
  *(char *)(unaff_s0 + 0x6f) = (char)((uint)(iVar1 * 0x10000) >> 0x10);
  *(char *)(unaff_s0 + 0x70) = (char)((uint)iVar1 >> 8);
  FUN_0001039e();
  FUN_000103a8();
  FUN_000103b2();
  return 1;
}



undefined4 FUN_0001039e(void)

{
  FUN_0001039e();
  FUN_000103a8();
  FUN_000103b2();
  return 1;
}



undefined4 FUN_000103a8(void)

{
  FUN_000103a8();
  FUN_000103b2();
  return 1;
}



undefined4 FUN_000103b2(void)

{
  FUN_000103b2();
  return 1;
}



// DWARF DIE: 280c

void KeyMgmtAp_DerivePTK(UINT8 *pPMK,IEEEtypes_MacAddr_t *da,IEEEtypes_MacAddr_t *sa,UINT8 *ANonce,
                        UINT8 *SNonce,UINT8 *EAPOL_MIC_Key,UINT8 *EAPOL_Encr_Key,KeyData_t *newPWKey
                        ,BOOLEAN use_kdf)

{
  UINT8 tmp [8];
  
  _L0();
  FUN_000103e6();
  FUN_000103f6();
  FUN_00010404();
  return;
}



void _L0(void)

{
  _L0();
  FUN_000103e6();
  FUN_000103f6();
  FUN_00010404();
  return;
}



void FUN_000103e6(void)

{
  FUN_000103e6();
  FUN_000103f6();
  FUN_00010404();
  return;
}



void FUN_000103f6(void)

{
  FUN_000103f6();
  FUN_00010404();
  return;
}



void FUN_00010404(void)

{
  FUN_00010404();
  return;
}



// DWARF DIE: 2e31

BOOLEAN KeyData_CopyWPAWP2(EAPOL_KeyMsg_Tx_t *pTxEAPOL,void *pIe)

{
  int iVar1;
  
  if (pIe != (void *)0x0) {
    iVar1 = *(byte *)((int)pIe + 1) + 2;
    *(char *)&(pTxEAPOL->keyMsg).key_material_len = (char)iVar1;
    *(char *)((int)&(pTxEAPOL->keyMsg).key_material_len + 1) = (char)((uint)iVar1 >> 8);
    _LVL77();
    return 1;
  }
  return 0;
}



undefined4 _LVL77(void)

{
  _LVL77();
  return 1;
}



// DWARF DIE: 2763

BOOLEAN KeyData_UpdateKeyMaterial
                  (EAPOL_KeyMsg_Tx_t *pTxEAPOL,SecurityMode_t *pSecType,void *pWPA,void *pWPA2)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  
  if (((*(byte *)pSecType & 0x18) != 0) || (uVar2 = 1, (*(byte *)pSecType & 0x20) != 0)) {
    bVar1 = _L87();
    uVar2 = (uint)(CONCAT31(extraout_var,bVar1) != 0);
  }
  return uVar2;
}



bool _L87(void)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = _L87();
  return CONCAT31(extraout_var,bVar1) != 0;
}



// DWARF DIE: 26f3

void ROM_InitGTK(KeyData_t *grpKeyData,UINT8 *nonce,IEEEtypes_Addr_t *StaMacAddr)

{
  grpKeyData->TxIV32 = 0;
  *(undefined4 *)&grpKeyData->TxIV16 = 0x10001;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 2608

int validate4WayHandshakeIe
              (SecurityMode_t secType,Cipher_t pwCipher,Cipher_t grpCipher,
              apKeyMgmtInfoStaRom_t *pKeyMgmtInfo,UINT8 akmType,UINT16 rsnCap,
              Cipher_t config_mcstCipher)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar2;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 in_register_00002039;
  
  bVar1 = _L0();
  if (((CONCAT31(extraout_var,bVar1) == 0) &&
      (bVar1 = FUN_000104c6(), CONCAT31(extraout_var_00,bVar1) == 0)) &&
     (bVar1 = FUN_000104d8(), CONCAT31(extraout_var_01,bVar1) == 0)) {
    uVar2 = (uint)((uint)pKeyMgmtInfo->staAkmType != CONCAT31(in_register_00002039,akmType));
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



bool _L0(void)

{
  int unaff_s0;
  uint unaff_s1;
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  
  bVar1 = _L0();
  if (((CONCAT31(extraout_var,bVar1) == 0) &&
      (bVar1 = FUN_000104c6(), CONCAT31(extraout_var_00,bVar1) == 0)) &&
     (bVar1 = FUN_000104d8(), CONCAT31(extraout_var_01,bVar1) == 0)) {
    bVar1 = *(byte *)(unaff_s0 + 5) != unaff_s1;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



bool FUN_000104c6(void)

{
  int unaff_s0;
  uint unaff_s1;
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  
  bVar1 = FUN_000104c6();
  if ((CONCAT31(extraout_var,bVar1) == 0) &&
     (bVar1 = FUN_000104d8(), CONCAT31(extraout_var_00,bVar1) == 0)) {
    bVar1 = *(byte *)(unaff_s0 + 5) != unaff_s1;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



bool FUN_000104d8(void)

{
  int unaff_s0;
  uint unaff_s1;
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = FUN_000104d8();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    bVar1 = *(byte *)(unaff_s0 + 5) != unaff_s1;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



// DWARF DIE: 255b

void InitKeyMgmtInfo(apKeyMgmtInfoStaRom_t *pKeyMgmtInfo,SecurityMode_t *secType,Cipher_t *pwCipher,
                    UINT16 staRsnCap,UINT8 akmType)

{
  pKeyMgmtInfo->keyMgmtState = MSG1_PENDING;
  _L0();
  FUN_0001051c();
  pKeyMgmtInfo->staAkmType = akmType;
  if ((*(byte *)secType & 0x20) != 0) {
    pKeyMgmtInfo->staRsnCap = staRsnCap;
  }
  return;
}



void _L0(void)

{
  undefined2 *unaff_s0;
  byte *unaff_s1;
  undefined in_stack_00000008;
  undefined2 in_stack_0000000c;
  
  _L0();
  FUN_0001051c();
  *(undefined *)((int)unaff_s0 + 5) = in_stack_00000008;
  if ((*unaff_s1 & 0x20) != 0) {
    *unaff_s0 = in_stack_0000000c;
  }
  return;
}



void FUN_0001051c(void)

{
  undefined2 *unaff_s0;
  byte *unaff_s1;
  undefined in_stack_00000008;
  undefined2 in_stack_0000000c;
  
  FUN_0001051c();
  *(undefined *)((int)unaff_s0 + 5) = in_stack_00000008;
  if ((*unaff_s1 & 0x20) != 0) {
    *unaff_s0 = in_stack_0000000c;
  }
  return;
}


