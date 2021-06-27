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

typedef ushort __uint16_t;

typedef long __int32_t;

typedef ulong __uint32_t;

typedef uchar __uint8_t;

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

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

typedef __uint32_t uint32_t;

struct la_mem_format { // DWARF DIE: a5b
    uint32_t word[4];
};

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef __uint16_t uint16_t;

struct mac_addr { // DWARF DIE: 9bb
    uint16_t array[3];
};

typedef uchar uint8;

typedef int sint32;

typedef ulong uint32;

typedef ushort uint16;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag { // DWARF DIE: a93
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct sae_data sae_data, *Psae_data;

typedef enum sae_state {
    SAE_ACCEPTED=3,
    SAE_COMMITTED=1,
    SAE_CONFIRMED=2,
    SAE_NOTHING=0
} sae_state;

typedef struct crypto_bignum crypto_bignum, *Pcrypto_bignum;

typedef struct sae_temporary_data sae_temporary_data, *Psae_temporary_data;

typedef struct crypto_ec_point crypto_ec_point, *Pcrypto_ec_point;

typedef struct crypto_ec crypto_ec, *Pcrypto_ec;

typedef struct dh_group dh_group, *Pdh_group;

typedef struct wpabuf wpabuf, *Pwpabuf;

typedef uint size_t;

struct crypto_ec_point { // DWARF DIE: f1e
};

struct wpabuf { // DWARF DIE: f4f
    size_t size;
    size_t used;
    uint8 * ext_data;
};

struct sae_data { // DWARF DIE: fba
    enum sae_state state;
    undefined field_0x1;
    uint16 send_confirm;
    uint8 pmk[32];
    uint8 pmkid[16];
    struct crypto_bignum * peer_commit_scalar;
    sint32 group;
    uint32 sync;
    uint16 rc;
    undefined field_0x42;
    undefined field_0x43;
    struct sae_temporary_data * tmp;
};

struct crypto_ec { // DWARF DIE: f2e
};

struct crypto_bignum { // DWARF DIE: f0e
};

struct dh_group { // DWARF DIE: f39
};

struct sae_temporary_data { // DWARF DIE: e08
    uint8 kck[32];
    struct crypto_bignum * own_commit_scalar;
    struct crypto_bignum * own_commit_element_ffc;
    struct crypto_ec_point * own_commit_element_ecc;
    struct crypto_bignum * peer_commit_element_ffc;
    struct crypto_ec_point * peer_commit_element_ecc;
    struct crypto_ec_point * pwe_ecc;
    struct crypto_bignum * pwe_ffc;
    struct crypto_bignum * sae_rand;
    struct crypto_ec * ec;
    sint32 prime_len;
    struct dh_group * dh;
    struct crypto_bignum * prime;
    struct crypto_bignum * order;
    struct crypto_bignum * prime_buf;
    struct crypto_bignum * order_buf;
    struct wpabuf * anti_clogging_token;
    char * pw_id;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

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

struct _rand48 { // DWARF DIE: 6dd
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
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

struct anon_struct.conflict86b { // DWARF DIE: 86b
    uchar * _nextf[30];
    uint _nmalloc[30];
};

struct _Bigint { // DWARF DIE: 160
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
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

struct __locale_t { // DWARF DIE: 8e7
};

typedef union anon_union.conflict8b2 anon_union.conflict8b2, *Panon_union.conflict8b2;

union anon_union.conflict8b2 { // DWARF DIE: 8b2
    struct anon_struct.conflict726 _reent;
    struct anon_struct.conflict86b _unused;
};

typedef enum anon_enum_8.conflictb28 {
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
} anon_enum_8.conflictb28;

typedef __int32_t int32_t;

typedef int32_t BaseType_t;

typedef __uint8_t uint8_t;

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




// DWARF DIE: 3532

void buf_shift_right(uint8 *buf,size_t len,size_t bits)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = buf + len;
  while (pbVar1 = pbVar2 + -1, buf != pbVar1) {
    *pbVar1 = pbVar2[-2] << (8 - bits & 0x1f) | (byte)((int)(uint)*pbVar1 >> (bits & 0x1f));
    pbVar2 = pbVar1;
  }
  *buf = (uint8)((int)(uint)*buf >> (bits & 0x1f));
  return;
}



// DWARF DIE: 1d7b

sint32 sae_is_password_id_elem(uint8 *pos,uint8 *end)

{
  uint uVar1;
  
  if ((int)(end + -(int)pos) < 3) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0;
    if (((*pos == -1) && (pos[1] != 0)) && ((int)(uint)pos[1] < (int)(end + -(int)pos + -1))) {
      uVar1 = (uint)(pos[2] == '!');
    }
  }
  return uVar1;
}



// DWARF DIE: 3b58

void sae_cn_confirm(uint8 *sc,crypto_bignum *scalar1,uint8 *element1,size_t element1_len,
                   crypto_bignum *scalar2,uint8 *element2,size_t element2_len,uint8 *confirm,
                   sae_data *sae)

{
  _L0();
  _L0();
  _L0();
  return;
}



void _L0(void)

{
  int *unaff_s0;
  undefined *puStack00000024;
  undefined4 uStack00000030;
  undefined4 uStack00000038;
  
  _L0();
  uStack00000030 = *(undefined4 *)(*unaff_s0 + 0x44);
  puStack00000024 = &stack0x00000240;
  _L0();
  uStack00000038 = *(undefined4 *)(*unaff_s0 + 0x44);
  _L0();
  return;
}



void _L0(void)

{
  int *unaff_s0;
  undefined4 uStack00000038;
  
  _L0();
  uStack00000038 = *(undefined4 *)(*unaff_s0 + 0x44);
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// DWARF DIE: 1280

sint32 sae_cn_confirm_ffc(sae_data *sae,uint8 *sc,crypto_bignum *scalar1,crypto_bignum *element1,
                         crypto_bignum *scalar2,crypto_bignum *element2,uint8 *confirm)

{
  int iVar1;
  sint32 sVar2;
  uint8 element_b1 [512];
  uint8 element_b2 [512];
  
  iVar1 = _L0();
  if (iVar1 < 0) {
    _L0();
    sVar2 = -1;
  }
  else {
    iVar1 = FUN_00010180();
    if (iVar1 < 0) {
      sVar2 = _L0();
      return sVar2;
    }
    FUN_000101b0();
    sVar2 = 0;
  }
  return sVar2;
}



undefined4 _L0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _L0();
  if (iVar1 < 0) {
    _L0();
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_00010180();
    if (iVar1 < 0) {
      uVar2 = _L0();
      return uVar2;
    }
    FUN_000101b0();
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 _L0(void)

{
  _L0();
  return 0xffffffff;
}



undefined4 FUN_00010180(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00010180();
  if (iVar1 < 0) {
    uVar2 = _L0();
    return uVar2;
  }
  FUN_000101b0();
  return 0;
}



undefined4 FUN_000101b0(void)

{
  FUN_000101b0();
  return 0;
}



// DWARF DIE: 13d5

sint32 sae_cn_confirm_ecc(sae_data *sae,uint8 *sc,crypto_bignum *scalar1,crypto_ec_point *element1,
                         crypto_bignum *scalar2,crypto_ec_point *element2,uint8 *confirm)

{
  int iVar1;
  sint32 sVar2;
  uint8 element_b1 [132];
  uint8 element_b2 [132];
  
  iVar1 = _L0();
  if ((iVar1 < 0) || (iVar1 = FUN_0001023a(), iVar1 < 0)) {
    FUN_00010206();
    sVar2 = -1;
  }
  else {
    FUN_00010262();
    sVar2 = 0;
  }
  return sVar2;
}



undefined4 _L0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = _L0();
  if ((iVar1 < 0) || (iVar1 = FUN_0001023a(), iVar1 < 0)) {
    FUN_00010206();
    uVar2 = 0xffffffff;
  }
  else {
    FUN_00010262();
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_00010206(void)

{
  FUN_00010206();
  return 0xffffffff;
}



undefined4 FUN_0001023a(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0001023a();
  if (iVar2 < 0) {
    FUN_00010206();
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00010262();
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 FUN_00010262(void)

{
  FUN_00010262();
  return 0;
}



// DWARF DIE: 3c4c

crypto_bignum * sae_get_rand(sae_data *sae)

{
  uint uVar1;
  crypto_bignum *pcVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = FUN_00010294();
  if ((uint)((int)(uVar1 + 7) / 8) < 0x201) {
    iVar4 = 0x66;
    while (iVar4 += -1, iVar4 != 0) {
      FUN_000102ee();
      if ((uVar1 & 7) != 0) {
        FUN_00010300();
      }
      pcVar2 = (crypto_bignum *)FUN_0001030c();
      if (pcVar2 == (crypto_bignum *)0x0) {
        return (crypto_bignum *)0x0;
      }
      iVar3 = _L0();
      if (((iVar3 == 0) && (iVar3 = FUN_00010332((int)pcVar2), iVar3 == 0)) &&
         (iVar3 = FUN_00010344((int)pcVar2,*(undefined4 *)(*(int *)sae + 0x50)), iVar3 < 0)) {
        FUN_00010356();
        return pcVar2;
      }
      FUN_00010326((int)pcVar2,0);
    }
  }
  return (crypto_bignum *)0x0;
}



int FUN_00010294(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *unaff_s5;
  
  uVar1 = FUN_00010294();
  if ((uint)((int)(uVar1 + 7) / 8) < 0x201) {
    iVar4 = 0x66;
    while (iVar4 += -1, iVar4 != 0) {
      FUN_000102ee();
      if ((uVar1 & 7) != 0) {
        FUN_00010300();
      }
      iVar2 = FUN_0001030c();
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = _L0();
      if (((iVar3 == 0) && (iVar3 = FUN_00010332(iVar2), iVar3 == 0)) &&
         (iVar3 = FUN_00010344(iVar2,*(undefined4 *)(*unaff_s5 + 0x50)), iVar3 < 0)) {
        FUN_00010356();
        return iVar2;
      }
      FUN_00010326(iVar2,0);
    }
  }
  return 0;
}



int FUN_000102ee(void)

{
  int iVar1;
  int iVar2;
  int unaff_s3;
  int unaff_s4;
  int *unaff_s5;
  
  while( true ) {
    FUN_000102ee();
    if (unaff_s3 != 0) {
      FUN_00010300();
    }
    iVar1 = FUN_0001030c();
    if (iVar1 == 0) break;
    iVar2 = _L0();
    if (((iVar2 == 0) && (iVar2 = FUN_00010332(iVar1), iVar2 == 0)) &&
       (iVar2 = FUN_00010344(iVar1,*(undefined4 *)(*unaff_s5 + 0x50)), iVar2 < 0)) {
      FUN_00010356();
      return iVar1;
    }
    FUN_00010326(iVar1,0);
    unaff_s4 += -1;
    if (unaff_s4 == 0) {
      return 0;
    }
  }
  return 0;
}



int FUN_00010300(void)

{
  int iVar1;
  int iVar2;
  int unaff_s3;
  int unaff_s4;
  int *unaff_s5;
  
  do {
    FUN_00010300();
    do {
      iVar1 = FUN_0001030c();
      if (iVar1 == 0) {
        return 0;
      }
      iVar2 = _L0();
      if (((iVar2 == 0) && (iVar2 = FUN_00010332(iVar1), iVar2 == 0)) &&
         (iVar2 = FUN_00010344(iVar1,*(undefined4 *)(*unaff_s5 + 0x50)), iVar2 < 0)) {
        FUN_00010356();
        return iVar1;
      }
      FUN_00010326(iVar1,0);
      unaff_s4 += -1;
      if (unaff_s4 == 0) {
        return 0;
      }
      FUN_000102ee();
    } while (unaff_s3 == 0);
  } while( true );
}



int FUN_0001030c(void)

{
  int iVar1;
  int iVar2;
  int unaff_s3;
  int unaff_s4;
  int *unaff_s5;
  
  while( true ) {
    iVar1 = FUN_0001030c();
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = _L0();
    if (((iVar2 == 0) && (iVar2 = FUN_00010332(iVar1), iVar2 == 0)) &&
       (iVar2 = FUN_00010344(iVar1,*(undefined4 *)(*unaff_s5 + 0x50)), iVar2 < 0)) break;
    FUN_00010326(iVar1,0);
    unaff_s4 += -1;
    if (unaff_s4 == 0) {
      return 0;
    }
    FUN_000102ee();
    if (unaff_s3 != 0) {
      FUN_00010300();
    }
  }
  FUN_00010356();
  return iVar1;
}



int _L0(void)

{
  int unaff_s1;
  int iVar1;
  int unaff_s3;
  int unaff_s4;
  int *unaff_s5;
  
  do {
    iVar1 = _L0();
    if (((iVar1 == 0) && (iVar1 = FUN_00010332(unaff_s1), iVar1 == 0)) &&
       (iVar1 = FUN_00010344(unaff_s1,*(undefined4 *)(*unaff_s5 + 0x50)), iVar1 < 0)) {
      FUN_00010356();
      return unaff_s1;
    }
    FUN_00010326(unaff_s1,0);
    unaff_s4 += -1;
    if (unaff_s4 == 0) {
      return 0;
    }
    FUN_000102ee();
    if (unaff_s3 != 0) {
      FUN_00010300();
    }
    unaff_s1 = FUN_0001030c();
  } while (unaff_s1 != 0);
  return 0;
}



int FUN_00010326(int param_1,undefined4 param_2)

{
  int iVar1;
  int unaff_s3;
  int unaff_s4;
  int *unaff_s5;
  
  while( true ) {
    FUN_00010326(param_1,param_2);
    unaff_s4 += -1;
    if (unaff_s4 == 0) {
      return 0;
    }
    FUN_000102ee();
    if (unaff_s3 != 0) {
      FUN_00010300();
    }
    param_1 = FUN_0001030c();
    if (param_1 == 0) break;
    iVar1 = _L0();
    if (((iVar1 == 0) && (iVar1 = FUN_00010332(param_1), iVar1 == 0)) &&
       (iVar1 = FUN_00010344(param_1,*(undefined4 *)(*unaff_s5 + 0x50)), iVar1 < 0)) {
      FUN_00010356();
      return param_1;
    }
    param_2 = 0;
  }
  return 0;
}



int FUN_00010332(int param_1)

{
  int unaff_s1;
  int iVar1;
  int unaff_s3;
  int unaff_s4;
  int *unaff_s5;
  
  do {
    iVar1 = FUN_00010332(param_1);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_00010344(unaff_s1,*(undefined4 *)(*unaff_s5 + 0x50)), iVar1 < 0)) {
      FUN_00010356();
      return unaff_s1;
    }
    do {
      FUN_00010326(unaff_s1,0);
      unaff_s4 += -1;
      if (unaff_s4 == 0) {
        return 0;
      }
      FUN_000102ee();
      if (unaff_s3 != 0) {
        FUN_00010300();
      }
      unaff_s1 = FUN_0001030c();
      if (unaff_s1 == 0) {
        return 0;
      }
      iVar1 = _L0();
      param_1 = unaff_s1;
    } while (iVar1 != 0);
  } while( true );
}



int FUN_00010344(int param_1,undefined4 param_2)

{
  int unaff_s1;
  int iVar1;
  int unaff_s3;
  int unaff_s4;
  int *unaff_s5;
  
  do {
    iVar1 = FUN_00010344(param_1,param_2);
    if (iVar1 < 0) {
      FUN_00010356();
      return unaff_s1;
    }
    do {
      FUN_00010326(unaff_s1,0);
      unaff_s4 += -1;
      if (unaff_s4 == 0) {
        return 0;
      }
      FUN_000102ee();
      if (unaff_s3 != 0) {
        FUN_00010300();
      }
      unaff_s1 = FUN_0001030c();
      if (unaff_s1 == 0) {
        return 0;
      }
      iVar1 = _L0();
    } while ((iVar1 != 0) || (iVar1 = FUN_00010332(unaff_s1), iVar1 != 0));
    param_2 = *(undefined4 *)(*unaff_s5 + 0x50);
    param_1 = unaff_s1;
  } while( true );
}



void FUN_00010356(void)

{
  FUN_00010356();
  return;
}



// DWARF DIE: 3d5f

int sha256_prf_bits(uint8 *key,char *label,uint8 *data,size_t data_len,uint8 *buf,
                   size_t buf_len_bits,size_t key_len)

{
  uint uVar1;
  uint uVar2;
  short sVar3;
  short asStack120 [2];
  undefined2 auStack116 [2];
  short *psStack112;
  char *pcStack108;
  uint8 *puStack104;
  undefined2 *puStack100;
  undefined4 uStack96;
  undefined4 uStack92;
  size_t sStack88;
  undefined4 uStack84;
  
  psStack112 = asStack120;
  uStack96 = 2;
  pcStack108 = label;
  uStack92 = _L0();
  puStack100 = auStack116;
  uStack84 = 2;
  uVar2 = buf_len_bits + 7 >> 3;
  auStack116[0] = (undefined2)buf_len_bits;
  uVar1 = 0;
  puStack104 = data;
  sStack88 = data_len;
  sVar3 = 1;
  do {
    if (uVar2 <= uVar1) {
_L0:
      if ((buf_len_bits & 7) != 0) {
        buf[uVar1 - 1] = (byte)(0xff << (8 - (buf_len_bits & 7) & 0x1f)) & buf[uVar1 - 1];
      }
      FUN_0001043a();
      return 0;
    }
    asStack120[0] = sVar3;
    if (uVar2 - uVar1 < 0x20) {
      FUN_000103fc();
      FUN_0001040a();
      uVar1 = uVar2;
      goto _L0;
    }
    _L0(0x20,4,(undefined *)&psStack112,(undefined *)&uStack96,(int)(buf + uVar1));
    uVar1 += 0x20;
    sVar3 = sVar3 + 1;
  } while( true );
}



undefined4 _L0(void)

{
  uint uVar1;
  byte *pbVar2;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint uVar3;
  undefined2 uStack0000001c;
  undefined *puStack0000002c;
  undefined4 uStack00000034;
  
  uStack00000034 = _L0();
  puStack0000002c = &stack0x0000001c;
  uVar3 = unaff_s3 >> 3;
  uStack0000001c = (undefined2)unaff_s1;
  uVar1 = 0;
  do {
    if (uVar3 <= uVar1) {
_L0:
      if ((unaff_s1 & 7) != 0) {
        pbVar2 = (byte *)((uVar1 - 1) + unaff_s2);
        *pbVar2 = (byte)(0xff << (8 - (unaff_s1 & 7) & 0x1f)) & *pbVar2;
      }
      FUN_0001043a();
      return 0;
    }
    if (uVar3 - uVar1 < 0x20) {
      FUN_000103fc();
      FUN_0001040a();
      uVar1 = uVar3;
      goto _L0;
    }
    _L0(0x20,4,&stack0x00000020,&stack0x00000030,unaff_s2 + uVar1);
    uVar1 += 0x20;
  } while( true );
}



undefined4
_L0(undefined4 param_1,undefined4 param_2,undefined *param_3,undefined *param_4,int param_5)

{
  uint unaff_s0;
  byte *pbVar1;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s8;
  
  do {
    _L0(param_1,param_2,param_3,param_4,param_5);
    unaff_s0 += 0x20;
    if (unaff_s3 <= unaff_s0) {
_L0:
      if ((unaff_s1 & 7) != 0) {
        pbVar1 = (byte *)((unaff_s0 - 1) + unaff_s2);
        *pbVar1 = (byte)(0xff << (8 - (unaff_s1 & 7) & 0x1f)) & *pbVar1;
      }
      FUN_0001043a();
      return 0;
    }
    param_5 = unaff_s2 + unaff_s0;
    if (unaff_s3 - unaff_s0 <= unaff_s8) {
      FUN_000103fc();
      FUN_0001040a();
      unaff_s0 = unaff_s3;
      goto _L0;
    }
    param_4 = &stack0x00000030;
    param_3 = &stack0x00000020;
    param_2 = 4;
    param_1 = 0x20;
  } while( true );
}



undefined4 FUN_000103fc(void)

{
  byte *pbVar1;
  uint unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  FUN_000103fc();
  FUN_0001040a();
  if ((unaff_s1 & 7) != 0) {
    pbVar1 = (byte *)(unaff_s3 + -1 + unaff_s2);
    *pbVar1 = (byte)(0xff << (8 - (unaff_s1 & 7) & 0x1f)) & *pbVar1;
  }
  FUN_0001043a();
  return 0;
}



undefined4 FUN_0001040a(void)

{
  byte *pbVar1;
  uint unaff_s1;
  int unaff_s2;
  int unaff_s3;
  
  FUN_0001040a();
  if ((unaff_s1 & 7) != 0) {
    pbVar1 = (byte *)(unaff_s3 + -1 + unaff_s2);
    *pbVar1 = (byte)(0xff << (8 - (unaff_s1 & 7) & 0x1f)) & *pbVar1;
  }
  FUN_0001043a();
  return 0;
}



undefined4 FUN_0001043a(void)

{
  FUN_0001043a();
  return 0;
}



// WARNING: Could not reconcile some variable overlaps
// DWARF DIE: 2978

sint32 sae_derive_pwe_ecc(sae_data *sae,uint8 *addr1,uint8 *addr2,uint8 *password,
                         size_t password_len,char *identifier)

{
  byte bVar1;
  sae_temporary_data *psVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  crypto_ec_point *pcVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  crypto_bignum *pcVar12;
  int iVar13;
  uint8 *puVar14;
  byte bStack369;
  undefined auStack368 [3];
  uint8 counter;
  uint8 addrs [12];
  uint8 *addr [3];
  size_t len [3];
  uint8 dummy_password [32];
  uint8 pwd_seed [32];
  uint8 prime [66];
  uint8 pwd_value [66];
  uint8 tmp [66];
  
  puVar14 = (uint8 *)0x20;
  if (password_len < 0x21) {
    puVar14 = (uint8 *)password_len;
  }
  _LVL103();
  iVar3 = FUN_000104c6();
  if (iVar3 < 0) {
    return -1;
  }
  uVar4 = _L0();
  pcVar12 = sae->tmp->prime;
  iVar3 = 0;
  iVar13 = 0;
  do {
    FUN_00010536(pwd_value + 0x40);
    if ((uVar4 & 7) != 0) {
      FUN_00010548(pwd_value + 0x40,8 - (uVar4 & 7));
    }
    iVar5 = FUN_00010556(pwd_value + 0x40,pwd_seed + 0x1c);
    iVar8 = iVar3;
    iVar9 = iVar13;
    if (iVar5 < 0) {
      iVar5 = FUN_00010566(pwd_value + 0x40);
      if (iVar5 == 0) {
        if (iVar13 == 0) {
          return -1;
        }
        if (iVar3 == 0) {
          return -1;
        }
        break;
      }
      iVar6 = FUN_00010576(pcVar12);
      iVar9 = iVar5;
      iVar10 = iVar13;
      if (((iVar6 != 1) && (iVar8 = iVar5, iVar9 = iVar13, iVar10 = iVar3, iVar6 != -1)) ||
         (iVar10 != 0)) {
        _LVL120(iVar5,0);
        iVar8 = iVar3;
        iVar9 = iVar13;
      }
    }
    iVar3 = iVar8;
    iVar13 = iVar9;
  } while ((iVar9 == 0) || (iVar8 == 0));
  iVar3 = FUN_000105b0();
  if (iVar3 < 1) {
    _LVL144();
  }
  else {
    _LVL124();
  }
  FUN_000105d2();
  iVar3 = 1;
  addrs._8_4_ = (size_t *)password;
  addr[2] = (uint8 *)password_len;
  if (identifier != (char *)0x0) {
    addr[0] = (uint8 *)identifier;
    len[0] = _L0();
    iVar3 = 2;
  }
  *(byte **)(addrs + iVar3 * 4 + 8) = &bStack369;
  addr[iVar3 + 2] = (uint8 *)0x1;
  bStack369 = 1;
  iVar13 = 0;
  do {
    if (0x28 < bStack369) {
      if (iVar13 != 0) {
        psVar2 = sae->tmp;
        if (psVar2->pwe_ecc == (crypto_ec_point *)0x0) {
          pcVar7 = (crypto_ec_point *)FUN_00010632();
          psVar2->pwe_ecc = pcVar7;
        }
        iVar3 = -1;
        if (sae->tmp->pwe_ecc != (crypto_ec_point *)0x0) {
          iVar3 = FUN_0001064a();
        }
        FUN_00010658();
        if (iVar3 < 0) {
          FUN_0001066c();
        }
        goto _L0;
      }
      if (200 < bStack369) {
        FUN_000106a6();
        FUN_000106b6();
        goto _L0;
      }
    }
    FUN_000106e6(auStack368,0xc,iVar3 + 1,(undefined4 *)(addrs + 8),(undefined *)(addr + 2),
                 dummy_password + 0x1c);
    uVar4 = FUN_000106f2(sae->tmp->ec);
    iVar8 = _LVL157(dummy_password + 0x1c,0,pwd_seed + 0x1c,sae->tmp->prime_len,prime + 0x40,uVar4);
    if (iVar8 < 0) goto _L0;
    uVar4 &= 7;
    if (uVar4 != 0) {
      FUN_0001072e(prime + 0x40,0x42,8 - uVar4);
    }
    iVar8 = FUN_0001073e(prime + 0x40,pwd_seed + 0x1c,sae->tmp->prime_len);
    if (iVar8 < 0) {
      iVar8 = FUN_00010750(prime + 0x40,sae->tmp->prime_len);
      if (iVar8 == 0) goto _L0;
      iVar9 = _LVL165(sae->tmp->ec,iVar8);
      if (iVar9 == 0) {
        _LVL168();
_L0:
        iVar3 = -1;
_L0:
        FUN_000106c4();
        FUN_000106d0();
        return iVar3;
      }
      iVar5 = sae->tmp->prime_len;
      while( true ) {
        do {
          FUN_0001078a(pwd_value + 0x40,iVar5);
          if (uVar4 != 0) {
            FUN_0001079c(pwd_value + 0x40,iVar5,8 - uVar4);
          }
          iVar10 = FUN_000107aa(pwd_value + 0x40,pwd_seed + 0x1c,iVar5);
        } while (-1 < iVar10);
        iVar10 = FUN_000107ba(pwd_value + 0x40,iVar5);
        if (iVar10 == 0) {
          uVar4 = 0xffffffff;
          goto _L0;
        }
        iVar6 = _L0();
        if (iVar6 == 0) break;
        FUN_000107d4(iVar10,0);
      }
      bVar1 = pwd_value[iVar5 + 0x3f];
      iVar5 = _L0();
      if (((iVar5 == 0) || (iVar6 = _LVL198(iVar9,iVar10,sae->tmp->prime,iVar5), iVar6 < 0)) ||
         (iVar6 = FUN_00010868(iVar5,iVar10,sae->tmp->prime,iVar5), iVar6 < 0)) {
_L0:
        uVar4 = 0xffffffff;
      }
      else {
        pcVar12 = sae->tmp->prime;
        if ((bVar1 & 1) == 0) {
          iVar6 = FUN_000108b0(iVar5,pcVar12,iVar5);
          if (-1 < iVar6) {
            iVar6 = -1;
            goto _L0;
          }
          goto _L0;
        }
        iVar11 = FUN_00010882(iVar5,pcVar12,iVar5);
        iVar6 = 1;
        if (iVar11 < 0) goto _L0;
_L0:
        iVar11 = FUN_00010896(iVar5,sae->tmp->prime);
        if (iVar11 == -2) goto _L0;
        uVar4 = (uint)(iVar11 == iVar6);
      }
      FUN_000107f8(iVar5,1);
      FUN_00010804(iVar10,1);
_L0:
      FUN_00010814(iVar9,1);
      if (uVar4 == 1) {
        if (iVar13 == 0) {
          FUN_00010832(dummy_password + 0x1c,0,0x20);
          addrs._8_4_ = len + 2;
          iVar13 = iVar8;
          addr[2] = puVar14;
        }
        else {
          FUN_000108e2(iVar8,1);
        }
      }
      else {
        FUN_000108c4(iVar8,1);
        if (uVar4 == 0xffffffff) goto _L0;
      }
    }
    bStack369 += 1;
  } while( true );
}



int _LVL103(void)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int unaff_s2;
  int iStack00000004;
  int iStack00000008;
  byte bStack0000001f;
  int in_stack_0000003c;
  
  _LVL103();
  iVar3 = FUN_000104c6();
  if (iVar3 < 0) {
    return -1;
  }
  uVar4 = _L0();
  iStack00000004 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
  iStack00000008 = 8 - (uVar4 & 7);
  iVar3 = 0;
  iVar7 = 0;
  do {
    FUN_00010536(&stack0x0000010c);
    if ((uVar4 & 7) != 0) {
      FUN_00010548(&stack0x0000010c,iStack00000008);
    }
    iVar5 = FUN_00010556(&stack0x0000010c,&stack0x00000084);
    iVar8 = iVar3;
    iVar2 = iVar7;
    if (iVar5 < 0) {
      iVar5 = FUN_00010566(&stack0x0000010c);
      if (iVar5 == 0) {
        if (iVar7 == 0) {
          return -1;
        }
        if (iVar3 == 0) {
          return -1;
        }
        break;
      }
      iVar6 = FUN_00010576(iStack00000004);
      iVar2 = iVar5;
      iVar9 = iVar7;
      if (((iVar6 != 1) && (iVar8 = iVar5, iVar2 = iVar7, iVar9 = iVar3, iVar6 != -1)) ||
         (iVar9 != 0)) {
        _LVL120(iVar5,0);
        iVar8 = iVar3;
        iVar2 = iVar7;
      }
    }
    iVar3 = iVar8;
    iVar7 = iVar2;
  } while ((iVar2 == 0) || (iVar8 == 0));
  iVar3 = FUN_000105b0();
  if (iVar3 < 1) {
    _LVL144();
  }
  else {
    _LVL124();
  }
  FUN_000105d2();
  iVar3 = 1;
  if (unaff_s2 != 0) {
    in_stack_0000003c = _L0();
    iVar3 = 2;
  }
  *(undefined **)(&stack0x0000002c + iVar3 * 4) = &stack0x0000001f;
  *(undefined4 *)(&stack0x00000038 + iVar3 * 4) = 1;
  iStack00000004 = iVar3 + 1;
  bStack0000001f = 1;
  iVar3 = 0;
  do {
    if (0x28 < bStack0000001f) {
      if (iVar3 != 0) {
        iVar3 = *(int *)(unaff_s0 + 0x44);
        if (*(int *)(iVar3 + 0x34) == 0) {
          iVar7 = FUN_00010632();
          *(int *)(iVar3 + 0x34) = iVar7;
        }
        iVar3 = -1;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
          iVar3 = FUN_0001064a();
        }
        FUN_00010658();
        if (iVar3 < 0) {
          FUN_0001066c();
        }
        goto _L0;
      }
      if (200 < bStack0000001f) {
        FUN_000106a6();
        FUN_000106b6();
        goto _L0;
      }
    }
    FUN_000106e6(&stack0x00000020,0xc,iStack00000004,(undefined4 *)&stack0x0000002c,&stack0x00000038
                 ,&stack0x00000064);
    uVar4 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
    iVar7 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar4);
    if (iVar7 < 0) goto _L0;
    uVar4 &= 7;
    if (uVar4 != 0) {
      FUN_0001072e(&stack0x000000c8,0x42,8 - uVar4);
    }
    iVar7 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                         *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (iVar7 < 0) {
      iVar7 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      if (iVar7 == 0) goto _L0;
      iVar8 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),iVar7);
      if (iVar8 == 0) {
        _LVL168();
_L0:
        iVar3 = -1;
_L0:
        FUN_000106c4();
        FUN_000106d0();
        return iVar3;
      }
      iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
      iStack00000008 = 8 - uVar4;
      while( true ) {
        do {
          FUN_0001078a(&stack0x0000010c,iVar2);
          if (uVar4 != 0) {
            FUN_0001079c(&stack0x0000010c,iVar2,iStack00000008);
          }
          iVar5 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
        } while (-1 < iVar5);
        iVar5 = FUN_000107ba(&stack0x0000010c,iVar2);
        if (iVar5 == 0) {
          uVar4 = 0xffffffff;
          goto _L0;
        }
        iVar9 = _L0();
        if (iVar9 == 0) break;
        FUN_000107d4(iVar5,0);
      }
      bVar1 = (&stack0x0000010b)[iVar2];
      iVar2 = _L0();
      if (((iVar2 == 0) ||
          (iVar9 = _LVL198(iVar8,iVar5,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
          iVar9 < 0)) ||
         (iVar9 = FUN_00010868(iVar2,iVar5,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
         iVar9 < 0)) {
_L0:
        uVar4 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
        if ((bVar1 & 1) == 0) {
          iVar9 = FUN_000108b0(iVar2,uVar10,iVar2);
          if (-1 < iVar9) {
            iVar9 = -1;
            goto _L0;
          }
          goto _L0;
        }
        iVar6 = FUN_00010882(iVar2,uVar10,iVar2);
        iVar9 = 1;
        if (iVar6 < 0) goto _L0;
_L0:
        iVar6 = FUN_00010896(iVar2,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
        if (iVar6 == -2) goto _L0;
        uVar4 = (uint)(iVar6 == iVar9);
      }
      FUN_000107f8(iVar2,1);
      FUN_00010804(iVar5,1);
_L0:
      FUN_00010814(iVar8,1);
      if (uVar4 == 1) {
        if (iVar3 == 0) {
          FUN_00010832(&stack0x00000064,0,0x20);
          iVar3 = iVar7;
        }
        else {
          FUN_000108e2(iVar7,1);
        }
      }
      else {
        FUN_000108c4(iVar7,1);
        if (uVar4 == 0xffffffff) goto _L0;
      }
    }
    bStack0000001f += 1;
  } while( true );
}



int FUN_000104c6(void)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int unaff_s2;
  int iStack00000004;
  int iStack00000008;
  byte bStack0000001f;
  int in_stack_0000003c;
  
  iVar3 = FUN_000104c6();
  if (iVar3 < 0) {
    return -1;
  }
  uVar4 = _L0();
  iStack00000004 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
  iStack00000008 = 8 - (uVar4 & 7);
  iVar3 = 0;
  iVar7 = 0;
  do {
    FUN_00010536(&stack0x0000010c);
    if ((uVar4 & 7) != 0) {
      FUN_00010548(&stack0x0000010c,iStack00000008);
    }
    iVar5 = FUN_00010556(&stack0x0000010c,&stack0x00000084);
    iVar8 = iVar3;
    iVar2 = iVar7;
    if (iVar5 < 0) {
      iVar5 = FUN_00010566(&stack0x0000010c);
      if (iVar5 == 0) {
        if (iVar7 == 0) {
          return -1;
        }
        if (iVar3 == 0) {
          return -1;
        }
        break;
      }
      iVar6 = FUN_00010576(iStack00000004);
      iVar2 = iVar5;
      iVar9 = iVar7;
      if (((iVar6 != 1) && (iVar8 = iVar5, iVar2 = iVar7, iVar9 = iVar3, iVar6 != -1)) ||
         (iVar9 != 0)) {
        _LVL120(iVar5,0);
        iVar8 = iVar3;
        iVar2 = iVar7;
      }
    }
    iVar3 = iVar8;
    iVar7 = iVar2;
  } while ((iVar2 == 0) || (iVar8 == 0));
  iVar3 = FUN_000105b0();
  if (iVar3 < 1) {
    _LVL144();
  }
  else {
    _LVL124();
  }
  FUN_000105d2();
  iVar3 = 1;
  if (unaff_s2 != 0) {
    in_stack_0000003c = _L0();
    iVar3 = 2;
  }
  *(undefined **)(&stack0x0000002c + iVar3 * 4) = &stack0x0000001f;
  *(undefined4 *)(&stack0x00000038 + iVar3 * 4) = 1;
  iStack00000004 = iVar3 + 1;
  bStack0000001f = 1;
  iVar3 = 0;
  do {
    if (0x28 < bStack0000001f) {
      if (iVar3 != 0) {
        iVar3 = *(int *)(unaff_s0 + 0x44);
        if (*(int *)(iVar3 + 0x34) == 0) {
          iVar7 = FUN_00010632();
          *(int *)(iVar3 + 0x34) = iVar7;
        }
        iVar3 = -1;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
          iVar3 = FUN_0001064a();
        }
        FUN_00010658();
        if (iVar3 < 0) {
          FUN_0001066c();
        }
        goto _L0;
      }
      if (200 < bStack0000001f) {
        FUN_000106a6();
        FUN_000106b6();
        goto _L0;
      }
    }
    FUN_000106e6(&stack0x00000020,0xc,iStack00000004,(undefined4 *)&stack0x0000002c,&stack0x00000038
                 ,&stack0x00000064);
    uVar4 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
    iVar7 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar4);
    if (iVar7 < 0) goto _L0;
    uVar4 &= 7;
    if (uVar4 != 0) {
      FUN_0001072e(&stack0x000000c8,0x42,8 - uVar4);
    }
    iVar7 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                         *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (iVar7 < 0) {
      iVar7 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      if (iVar7 == 0) goto _L0;
      iVar8 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),iVar7);
      if (iVar8 == 0) {
        _LVL168();
_L0:
        iVar3 = -1;
_L0:
        FUN_000106c4();
        FUN_000106d0();
        return iVar3;
      }
      iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
      iStack00000008 = 8 - uVar4;
      while( true ) {
        do {
          FUN_0001078a(&stack0x0000010c,iVar2);
          if (uVar4 != 0) {
            FUN_0001079c(&stack0x0000010c,iVar2,iStack00000008);
          }
          iVar5 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
        } while (-1 < iVar5);
        iVar5 = FUN_000107ba(&stack0x0000010c,iVar2);
        if (iVar5 == 0) {
          uVar4 = 0xffffffff;
          goto _L0;
        }
        iVar9 = _L0();
        if (iVar9 == 0) break;
        FUN_000107d4(iVar5,0);
      }
      bVar1 = (&stack0x0000010b)[iVar2];
      iVar2 = _L0();
      if (((iVar2 == 0) ||
          (iVar9 = _LVL198(iVar8,iVar5,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
          iVar9 < 0)) ||
         (iVar9 = FUN_00010868(iVar2,iVar5,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
         iVar9 < 0)) {
_L0:
        uVar4 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
        if ((bVar1 & 1) == 0) {
          iVar9 = FUN_000108b0(iVar2,uVar10,iVar2);
          if (-1 < iVar9) {
            iVar9 = -1;
            goto _L0;
          }
          goto _L0;
        }
        iVar6 = FUN_00010882(iVar2,uVar10,iVar2);
        iVar9 = 1;
        if (iVar6 < 0) goto _L0;
_L0:
        iVar6 = FUN_00010896(iVar2,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
        if (iVar6 == -2) goto _L0;
        uVar4 = (uint)(iVar6 == iVar9);
      }
      FUN_000107f8(iVar2,1);
      FUN_00010804(iVar5,1);
_L0:
      FUN_00010814(iVar8,1);
      if (uVar4 == 1) {
        if (iVar3 == 0) {
          FUN_00010832(&stack0x00000064,0,0x20);
          iVar3 = iVar7;
        }
        else {
          FUN_000108e2(iVar7,1);
        }
      }
      else {
        FUN_000108c4(iVar7,1);
        if (uVar4 == 0xffffffff) goto _L0;
      }
    }
    bStack0000001f += 1;
  } while( true );
}



int _L0(void)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s11;
  int iStack00000004;
  int iStack00000008;
  byte bStack0000001f;
  int in_stack_0000003c;
  
  uVar3 = _L0();
  iStack00000004 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
  iStack00000008 = 8 - (uVar3 & 7);
  do {
    FUN_00010536(&stack0x0000010c);
    if ((uVar3 & 7) != 0) {
      FUN_00010548(&stack0x0000010c,iStack00000008);
    }
    iVar4 = FUN_00010556(&stack0x0000010c,&stack0x00000084);
    iVar6 = unaff_s3;
    iVar7 = unaff_s4;
    if (iVar4 < 0) {
      iVar4 = FUN_00010566(&stack0x0000010c);
      if (iVar4 == 0) {
        if ((unaff_s4 == 0) || (unaff_s3 == 0)) {
          return -1;
        }
        break;
      }
      iVar5 = FUN_00010576(iStack00000004);
      iVar7 = iVar4;
      iVar2 = unaff_s4;
      if (((iVar5 != 1) && (iVar6 = iVar4, iVar7 = unaff_s4, iVar2 = unaff_s3, iVar5 != unaff_s11))
         || (iVar2 != 0)) {
        _LVL120(iVar4,0);
        iVar6 = unaff_s3;
        iVar7 = unaff_s4;
      }
    }
    unaff_s3 = iVar6;
    unaff_s4 = iVar7;
  } while ((iVar7 == 0) || (iVar6 == 0));
  iVar6 = FUN_000105b0();
  if (iVar6 < 1) {
    _LVL144();
  }
  else {
    _LVL124();
  }
  FUN_000105d2();
  iVar6 = 1;
  if (unaff_s2 != 0) {
    in_stack_0000003c = _L0();
    iVar6 = 2;
  }
  *(undefined **)(&stack0x0000002c + iVar6 * 4) = &stack0x0000001f;
  *(undefined4 *)(&stack0x00000038 + iVar6 * 4) = 1;
  iStack00000004 = iVar6 + 1;
  bStack0000001f = 1;
  iVar6 = 0;
  do {
    if (0x28 < bStack0000001f) {
      if (iVar6 != 0) {
        iVar6 = *(int *)(unaff_s0 + 0x44);
        if (*(int *)(iVar6 + 0x34) == 0) {
          iVar7 = FUN_00010632();
          *(int *)(iVar6 + 0x34) = iVar7;
        }
        iVar6 = -1;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
          iVar6 = FUN_0001064a();
        }
        FUN_00010658();
        if (iVar6 < 0) {
          FUN_0001066c();
        }
        goto _L0;
      }
      if (200 < bStack0000001f) {
        FUN_000106a6();
        FUN_000106b6();
        goto _L0;
      }
    }
    FUN_000106e6(&stack0x00000020,0xc,iStack00000004,(undefined4 *)&stack0x0000002c,&stack0x00000038
                 ,&stack0x00000064);
    uVar3 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
    iVar7 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar3);
    if (iVar7 < 0) goto _L0;
    uVar3 &= 7;
    if (uVar3 != 0) {
      FUN_0001072e(&stack0x000000c8,0x42,8 - uVar3);
    }
    iVar7 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                         *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (iVar7 < 0) {
      iVar7 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      if (iVar7 == 0) goto _L0;
      iVar4 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),iVar7);
      if (iVar4 == 0) {
        _LVL168();
_L0:
        iVar6 = -1;
_L0:
        FUN_000106c4();
        FUN_000106d0();
        return iVar6;
      }
      iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
      iStack00000008 = 8 - uVar3;
      while( true ) {
        do {
          FUN_0001078a(&stack0x0000010c,iVar2);
          if (uVar3 != 0) {
            FUN_0001079c(&stack0x0000010c,iVar2,iStack00000008);
          }
          iVar5 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
        } while (-1 < iVar5);
        iVar5 = FUN_000107ba(&stack0x0000010c,iVar2);
        if (iVar5 == 0) {
          uVar3 = 0xffffffff;
          goto _L0;
        }
        iVar8 = _L0();
        if (iVar8 == 0) break;
        FUN_000107d4(iVar5,0);
      }
      bVar1 = (&stack0x0000010b)[iVar2];
      iVar2 = _L0();
      if (((iVar2 == 0) ||
          (iVar8 = _LVL198(iVar4,iVar5,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
          iVar8 < 0)) ||
         (iVar8 = FUN_00010868(iVar2,iVar5,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
         iVar8 < 0)) {
_L0:
        uVar3 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
        if ((bVar1 & 1) == 0) {
          iVar8 = FUN_000108b0(iVar2,uVar10,iVar2);
          if (-1 < iVar8) {
            iVar8 = -1;
            goto _L0;
          }
          goto _L0;
        }
        iVar9 = FUN_00010882(iVar2,uVar10,iVar2);
        iVar8 = 1;
        if (iVar9 < 0) goto _L0;
_L0:
        iVar9 = FUN_00010896(iVar2,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
        if (iVar9 == -2) goto _L0;
        uVar3 = (uint)(iVar9 == iVar8);
      }
      FUN_000107f8(iVar2,1);
      FUN_00010804(iVar5,1);
_L0:
      FUN_00010814(iVar4,1);
      if (uVar3 == 1) {
        if (iVar6 == 0) {
          FUN_00010832(&stack0x00000064,0,0x20);
          iVar6 = iVar7;
        }
        else {
          FUN_000108e2(iVar7,1);
        }
      }
      else {
        FUN_000108c4(iVar7,1);
        if (uVar3 == 0xffffffff) goto _L0;
      }
    }
    bStack0000001f += 1;
  } while( true );
}



int FUN_00010536(undefined *param_1)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int iVar11;
  int unaff_s8;
  int unaff_s11;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  byte bStack0000001f;
  int in_stack_0000003c;
  
code_r0x00010536:
  FUN_00010536(param_1);
  if (unaff_s8 != 0) {
    FUN_00010548(&stack0x0000010c,in_stack_00000008);
  }
  iVar2 = FUN_00010556(&stack0x0000010c,&stack0x00000084);
  iVar4 = unaff_s3;
  iVar11 = unaff_s4;
  if (iVar2 < 0) {
    iVar2 = FUN_00010566(&stack0x0000010c);
    if (iVar2 == 0) {
      if ((unaff_s4 == 0) || (unaff_s3 == 0)) {
        return -1;
      }
_L0:
      iVar4 = FUN_000105b0();
      if (iVar4 < 1) {
        _LVL144();
      }
      else {
        _LVL124();
      }
      FUN_000105d2();
      iVar4 = 1;
      if (unaff_s2 != 0) {
        in_stack_0000003c = _L0();
        iVar4 = 2;
      }
      *(undefined **)(&stack0x0000002c + iVar4 * 4) = &stack0x0000001f;
      *(undefined4 *)(&stack0x00000038 + iVar4 * 4) = 1;
      bStack0000001f = 1;
      iVar11 = 0;
      do {
        if (0x28 < bStack0000001f) {
          if (iVar11 != 0) {
            iVar4 = *(int *)(unaff_s0 + 0x44);
            if (*(int *)(iVar4 + 0x34) == 0) {
              iVar11 = FUN_00010632();
              *(int *)(iVar4 + 0x34) = iVar11;
            }
            iVar4 = -1;
            if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
              iVar4 = FUN_0001064a();
            }
            FUN_00010658();
            if (iVar4 < 0) {
              FUN_0001066c();
            }
            goto _L0;
          }
          if (200 < bStack0000001f) {
            FUN_000106a6();
            FUN_000106b6();
            goto _L0;
          }
        }
        FUN_000106e6(&stack0x00000020,0xc,iVar4 + 1,(undefined4 *)&stack0x0000002c,&stack0x00000038,
                     &stack0x00000064);
        uVar5 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
        iVar2 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                        *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar5);
        if (iVar2 < 0) goto _L0;
        uVar5 &= 7;
        if (uVar5 != 0) {
          FUN_0001072e(&stack0x000000c8,0x42,8 - uVar5);
        }
        iVar2 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                             *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
        if (iVar2 < 0) {
          iVar2 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
          if (iVar2 == 0) goto _L0;
          iVar6 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),iVar2);
          if (iVar6 == 0) {
            _LVL168();
_L0:
            iVar4 = -1;
_L0:
            FUN_000106c4();
            FUN_000106d0();
            return iVar4;
          }
          iVar3 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
          while( true ) {
            do {
              FUN_0001078a(&stack0x0000010c,iVar3);
              if (uVar5 != 0) {
                FUN_0001079c(&stack0x0000010c,iVar3,8 - uVar5);
              }
              iVar7 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar3);
            } while (-1 < iVar7);
            iVar7 = FUN_000107ba(&stack0x0000010c,iVar3);
            if (iVar7 == 0) {
              uVar5 = 0xffffffff;
              goto _L0;
            }
            iVar8 = _L0();
            if (iVar8 == 0) break;
            FUN_000107d4(iVar7,0);
          }
          bVar1 = (&stack0x0000010b)[iVar3];
          iVar3 = _L0();
          if (((iVar3 == 0) ||
              (iVar8 = _LVL198(iVar6,iVar7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar3),
              iVar8 < 0)) ||
             (iVar8 = FUN_00010868(iVar3,iVar7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),
                                   iVar3), iVar8 < 0)) {
_L0:
            uVar5 = 0xffffffff;
          }
          else {
            uVar10 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
            if ((bVar1 & 1) == 0) {
              iVar8 = FUN_000108b0(iVar3,uVar10,iVar3);
              if (-1 < iVar8) {
                iVar8 = -1;
                goto _L0;
              }
              goto _L0;
            }
            iVar9 = FUN_00010882(iVar3,uVar10,iVar3);
            iVar8 = 1;
            if (iVar9 < 0) goto _L0;
_L0:
            iVar9 = FUN_00010896(iVar3,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
            if (iVar9 == -2) goto _L0;
            uVar5 = (uint)(iVar9 == iVar8);
          }
          FUN_000107f8(iVar3,1);
          FUN_00010804(iVar7,1);
_L0:
          FUN_00010814(iVar6,1);
          if (uVar5 == 1) {
            if (iVar11 == 0) {
              FUN_00010832(&stack0x00000064,0,0x20);
              iVar11 = iVar2;
            }
            else {
              FUN_000108e2(iVar2,1);
            }
          }
          else {
            FUN_000108c4(iVar2,1);
            if (uVar5 == 0xffffffff) goto _L0;
          }
        }
        bStack0000001f += 1;
      } while( true );
    }
    iVar3 = FUN_00010576(in_stack_00000004);
    iVar11 = iVar2;
    iVar6 = unaff_s4;
    if (((iVar3 != 1) && (iVar4 = iVar2, iVar11 = unaff_s4, iVar6 = unaff_s3, iVar3 != unaff_s11))
       || (iVar6 != 0)) {
      _LVL120(iVar2,0);
      iVar4 = unaff_s3;
      iVar11 = unaff_s4;
    }
  }
  if ((iVar11 != 0) && (iVar4 != 0)) goto _L0;
  param_1 = &stack0x0000010c;
  unaff_s3 = iVar4;
  unaff_s4 = iVar11;
  goto code_r0x00010536;
}



int FUN_00010548(undefined *param_1,undefined4 param_2)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int iVar11;
  int unaff_s8;
  int unaff_s11;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  byte bStack0000001f;
  int in_stack_0000003c;
  
  do {
    FUN_00010548(param_1,param_2);
    iVar4 = unaff_s3;
    iVar11 = unaff_s4;
    do {
      iVar2 = FUN_00010556(&stack0x0000010c,&stack0x00000084);
      unaff_s3 = iVar4;
      unaff_s4 = iVar11;
      if (iVar2 < 0) {
        iVar2 = FUN_00010566(&stack0x0000010c);
        if (iVar2 != 0) {
          iVar3 = FUN_00010576(in_stack_00000004);
          unaff_s4 = iVar2;
          iVar6 = iVar11;
          if (((iVar3 != 1) &&
              (unaff_s3 = iVar2, unaff_s4 = iVar11, iVar6 = iVar4, iVar3 != unaff_s11)) ||
             (iVar6 != 0)) {
            _LVL120(iVar2,0);
            unaff_s3 = iVar4;
            unaff_s4 = iVar11;
          }
          goto _L0;
        }
        if ((iVar11 == 0) || (iVar4 == 0)) {
          return -1;
        }
_L0:
        iVar4 = FUN_000105b0();
        if (iVar4 < 1) {
          _LVL144();
        }
        else {
          _LVL124();
        }
        FUN_000105d2();
        iVar4 = 1;
        if (unaff_s2 != 0) {
          in_stack_0000003c = _L0();
          iVar4 = 2;
        }
        *(undefined **)(&stack0x0000002c + iVar4 * 4) = &stack0x0000001f;
        *(undefined4 *)(&stack0x00000038 + iVar4 * 4) = 1;
        bStack0000001f = 1;
        iVar11 = 0;
        goto _L0;
      }
_L0:
      if ((unaff_s4 != 0) && (unaff_s3 != 0)) goto _L0;
      FUN_00010536(&stack0x0000010c);
      iVar4 = unaff_s3;
      iVar11 = unaff_s4;
    } while (unaff_s8 == 0);
    param_1 = &stack0x0000010c;
    param_2 = in_stack_00000008;
  } while( true );
_L0:
  if (0x28 < bStack0000001f) {
    if (iVar11 != 0) {
      iVar4 = *(int *)(unaff_s0 + 0x44);
      if (*(int *)(iVar4 + 0x34) == 0) {
        iVar11 = FUN_00010632();
        *(int *)(iVar4 + 0x34) = iVar11;
      }
      iVar4 = -1;
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
        iVar4 = FUN_0001064a();
      }
      FUN_00010658();
      if (iVar4 < 0) {
        FUN_0001066c();
      }
      goto _L0;
    }
    if (200 < bStack0000001f) {
      FUN_000106a6();
      FUN_000106b6();
      goto _L0;
    }
  }
  FUN_000106e6(&stack0x00000020,0xc,iVar4 + 1,(undefined4 *)&stack0x0000002c,&stack0x00000038,
               &stack0x00000064);
  uVar5 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
  iVar2 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                  *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar5);
  if (iVar2 < 0) goto _L0;
  uVar5 &= 7;
  if (uVar5 != 0) {
    FUN_0001072e(&stack0x000000c8,0x42,8 - uVar5);
  }
  iVar2 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                       *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
  if (iVar2 < 0) {
    iVar2 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (iVar2 == 0) goto _L0;
    iVar6 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),iVar2);
    if (iVar6 == 0) {
      _LVL168();
_L0:
      iVar4 = -1;
_L0:
      FUN_000106c4();
      FUN_000106d0();
      return iVar4;
    }
    iVar3 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    while( true ) {
      do {
        FUN_0001078a(&stack0x0000010c,iVar3);
        if (uVar5 != 0) {
          FUN_0001079c(&stack0x0000010c,iVar3,8 - uVar5);
        }
        iVar7 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar3);
      } while (-1 < iVar7);
      iVar7 = FUN_000107ba(&stack0x0000010c,iVar3);
      if (iVar7 == 0) {
        uVar5 = 0xffffffff;
        goto _L0;
      }
      iVar8 = _L0();
      if (iVar8 == 0) break;
      FUN_000107d4(iVar7,0);
    }
    bVar1 = (&stack0x0000010b)[iVar3];
    iVar3 = _L0();
    if (((iVar3 == 0) ||
        (iVar8 = _LVL198(iVar6,iVar7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar3),
        iVar8 < 0)) ||
       (iVar8 = FUN_00010868(iVar3,iVar7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar3),
       iVar8 < 0)) {
_L0:
      uVar5 = 0xffffffff;
    }
    else {
      uVar10 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
      if ((bVar1 & 1) == 0) {
        iVar8 = FUN_000108b0(iVar3,uVar10,iVar3);
        if (-1 < iVar8) {
          iVar8 = -1;
          goto _L0;
        }
        goto _L0;
      }
      iVar9 = FUN_00010882(iVar3,uVar10,iVar3);
      iVar8 = 1;
      if (iVar9 < 0) goto _L0;
_L0:
      iVar9 = FUN_00010896(iVar3,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
      if (iVar9 == -2) goto _L0;
      uVar5 = (uint)(iVar9 == iVar8);
    }
    FUN_000107f8(iVar3,1);
    FUN_00010804(iVar7,1);
_L0:
    FUN_00010814(iVar6,1);
    if (uVar5 == 1) {
      if (iVar11 == 0) {
        FUN_00010832(&stack0x00000064,0,0x20);
        iVar11 = iVar2;
      }
      else {
        FUN_000108e2(iVar2,1);
      }
    }
    else {
      FUN_000108c4(iVar2,1);
      if (uVar5 == 0xffffffff) goto _L0;
    }
  }
  bStack0000001f += 1;
  goto _L0;
}



int FUN_00010556(undefined *param_1,undefined *param_2)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int iVar11;
  int unaff_s8;
  int unaff_s11;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  byte bStack0000001f;
  int in_stack_0000003c;
  
code_r0x00010556:
  iVar2 = FUN_00010556(param_1,param_2);
  iVar4 = unaff_s3;
  iVar11 = unaff_s4;
  if (iVar2 < 0) {
    iVar2 = FUN_00010566(&stack0x0000010c);
    if (iVar2 == 0) {
      if ((unaff_s4 == 0) || (unaff_s3 == 0)) {
        return -1;
      }
_L0:
      iVar4 = FUN_000105b0();
      if (iVar4 < 1) {
        _LVL144();
      }
      else {
        _LVL124();
      }
      FUN_000105d2();
      iVar4 = 1;
      if (unaff_s2 != 0) {
        in_stack_0000003c = _L0();
        iVar4 = 2;
      }
      *(undefined **)(&stack0x0000002c + iVar4 * 4) = &stack0x0000001f;
      *(undefined4 *)(&stack0x00000038 + iVar4 * 4) = 1;
      bStack0000001f = 1;
      iVar11 = 0;
      do {
        if (0x28 < bStack0000001f) {
          if (iVar11 != 0) {
            iVar4 = *(int *)(unaff_s0 + 0x44);
            if (*(int *)(iVar4 + 0x34) == 0) {
              iVar11 = FUN_00010632();
              *(int *)(iVar4 + 0x34) = iVar11;
            }
            iVar4 = -1;
            if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
              iVar4 = FUN_0001064a();
            }
            FUN_00010658();
            if (iVar4 < 0) {
              FUN_0001066c();
            }
            goto _L0;
          }
          if (200 < bStack0000001f) {
            FUN_000106a6();
            FUN_000106b6();
            goto _L0;
          }
        }
        FUN_000106e6(&stack0x00000020,0xc,iVar4 + 1,(undefined4 *)&stack0x0000002c,&stack0x00000038,
                     &stack0x00000064);
        uVar5 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
        iVar2 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                        *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar5);
        if (iVar2 < 0) goto _L0;
        uVar5 &= 7;
        if (uVar5 != 0) {
          FUN_0001072e(&stack0x000000c8,0x42,8 - uVar5);
        }
        iVar2 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                             *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
        if (iVar2 < 0) {
          iVar2 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
          if (iVar2 == 0) goto _L0;
          iVar6 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),iVar2);
          if (iVar6 == 0) {
            _LVL168();
_L0:
            iVar4 = -1;
_L0:
            FUN_000106c4();
            FUN_000106d0();
            return iVar4;
          }
          iVar3 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
          while( true ) {
            do {
              FUN_0001078a(&stack0x0000010c,iVar3);
              if (uVar5 != 0) {
                FUN_0001079c(&stack0x0000010c,iVar3,8 - uVar5);
              }
              iVar7 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar3);
            } while (-1 < iVar7);
            iVar7 = FUN_000107ba(&stack0x0000010c,iVar3);
            if (iVar7 == 0) {
              uVar5 = 0xffffffff;
              goto _L0;
            }
            iVar8 = _L0();
            if (iVar8 == 0) break;
            FUN_000107d4(iVar7,0);
          }
          bVar1 = (&stack0x0000010b)[iVar3];
          iVar3 = _L0();
          if (((iVar3 == 0) ||
              (iVar8 = _LVL198(iVar6,iVar7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar3),
              iVar8 < 0)) ||
             (iVar8 = FUN_00010868(iVar3,iVar7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),
                                   iVar3), iVar8 < 0)) {
_L0:
            uVar5 = 0xffffffff;
          }
          else {
            uVar10 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
            if ((bVar1 & 1) == 0) {
              iVar8 = FUN_000108b0(iVar3,uVar10,iVar3);
              if (-1 < iVar8) {
                iVar8 = -1;
                goto _L0;
              }
              goto _L0;
            }
            iVar9 = FUN_00010882(iVar3,uVar10,iVar3);
            iVar8 = 1;
            if (iVar9 < 0) goto _L0;
_L0:
            iVar9 = FUN_00010896(iVar3,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
            if (iVar9 == -2) goto _L0;
            uVar5 = (uint)(iVar9 == iVar8);
          }
          FUN_000107f8(iVar3,1);
          FUN_00010804(iVar7,1);
_L0:
          FUN_00010814(iVar6,1);
          if (uVar5 == 1) {
            if (iVar11 == 0) {
              FUN_00010832(&stack0x00000064,0,0x20);
              iVar11 = iVar2;
            }
            else {
              FUN_000108e2(iVar2,1);
            }
          }
          else {
            FUN_000108c4(iVar2,1);
            if (uVar5 == 0xffffffff) goto _L0;
          }
        }
        bStack0000001f += 1;
      } while( true );
    }
    iVar3 = FUN_00010576(in_stack_00000004);
    iVar11 = iVar2;
    iVar6 = unaff_s4;
    if (((iVar3 != 1) && (iVar4 = iVar2, iVar11 = unaff_s4, iVar6 = unaff_s3, iVar3 != unaff_s11))
       || (iVar6 != 0)) {
      _LVL120(iVar2,0);
      iVar4 = unaff_s3;
      iVar11 = unaff_s4;
    }
  }
  if ((iVar11 != 0) && (iVar4 != 0)) goto _L0;
  FUN_00010536(&stack0x0000010c);
  if (unaff_s8 != 0) {
    FUN_00010548(&stack0x0000010c,in_stack_00000008);
  }
  param_2 = &stack0x00000084;
  param_1 = &stack0x0000010c;
  unaff_s3 = iVar4;
  unaff_s4 = iVar11;
  goto code_r0x00010556;
}



int FUN_00010566(undefined *param_1)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int iVar11;
  int unaff_s8;
  int unaff_s11;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  byte bStack0000001f;
  int in_stack_0000003c;
  
  while (iVar2 = FUN_00010566(param_1), iVar2 != 0) {
    iVar3 = FUN_00010576(in_stack_00000004);
    iVar11 = unaff_s3;
    iVar5 = iVar2;
    iVar6 = unaff_s4;
    if (((iVar3 != 1) && (iVar11 = iVar2, iVar5 = unaff_s4, iVar6 = unaff_s3, iVar3 != unaff_s11))
       || (iVar6 != 0)) {
      _LVL120(iVar2,0);
      iVar11 = unaff_s3;
      iVar5 = unaff_s4;
    }
    do {
      if ((iVar5 != 0) && (iVar11 != 0)) goto _L0;
      FUN_00010536(&stack0x0000010c);
      if (unaff_s8 != 0) {
        FUN_00010548(&stack0x0000010c,in_stack_00000008);
      }
      iVar2 = FUN_00010556(&stack0x0000010c,&stack0x00000084);
    } while (-1 < iVar2);
    param_1 = &stack0x0000010c;
    unaff_s3 = iVar11;
    unaff_s4 = iVar5;
  }
  if ((unaff_s4 == 0) || (unaff_s3 == 0)) {
    return -1;
  }
_L0:
  iVar2 = FUN_000105b0();
  if (iVar2 < 1) {
    _LVL144();
  }
  else {
    _LVL124();
  }
  FUN_000105d2();
  iVar2 = 1;
  if (unaff_s2 != 0) {
    in_stack_0000003c = _L0();
    iVar2 = 2;
  }
  *(undefined **)(&stack0x0000002c + iVar2 * 4) = &stack0x0000001f;
  *(undefined4 *)(&stack0x00000038 + iVar2 * 4) = 1;
  bStack0000001f = 1;
  iVar11 = 0;
  do {
    if (0x28 < bStack0000001f) {
      if (iVar11 != 0) {
        iVar2 = *(int *)(unaff_s0 + 0x44);
        if (*(int *)(iVar2 + 0x34) == 0) {
          iVar11 = FUN_00010632();
          *(int *)(iVar2 + 0x34) = iVar11;
        }
        iVar2 = -1;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
          iVar2 = FUN_0001064a();
        }
        FUN_00010658();
        if (iVar2 < 0) {
          FUN_0001066c();
        }
        goto _L0;
      }
      if (200 < bStack0000001f) {
        FUN_000106a6();
        FUN_000106b6();
        goto _L0;
      }
    }
    FUN_000106e6(&stack0x00000020,0xc,iVar2 + 1,(undefined4 *)&stack0x0000002c,&stack0x00000038,
                 &stack0x00000064);
    uVar4 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
    iVar5 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar4);
    if (iVar5 < 0) goto _L0;
    uVar4 &= 7;
    if (uVar4 != 0) {
      FUN_0001072e(&stack0x000000c8,0x42,8 - uVar4);
    }
    iVar5 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                         *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (iVar5 < 0) {
      iVar5 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      if (iVar5 == 0) goto _L0;
      iVar6 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),iVar5);
      if (iVar6 == 0) {
        _LVL168();
_L0:
        iVar2 = -1;
_L0:
        FUN_000106c4();
        FUN_000106d0();
        return iVar2;
      }
      iVar3 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
      while( true ) {
        do {
          FUN_0001078a(&stack0x0000010c,iVar3);
          if (uVar4 != 0) {
            FUN_0001079c(&stack0x0000010c,iVar3,8 - uVar4);
          }
          iVar7 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar3);
        } while (-1 < iVar7);
        iVar7 = FUN_000107ba(&stack0x0000010c,iVar3);
        if (iVar7 == 0) {
          uVar4 = 0xffffffff;
          goto _L0;
        }
        iVar8 = _L0();
        if (iVar8 == 0) break;
        FUN_000107d4(iVar7,0);
      }
      bVar1 = (&stack0x0000010b)[iVar3];
      iVar3 = _L0();
      if (((iVar3 == 0) ||
          (iVar8 = _LVL198(iVar6,iVar7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar3),
          iVar8 < 0)) ||
         (iVar8 = FUN_00010868(iVar3,iVar7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar3),
         iVar8 < 0)) {
_L0:
        uVar4 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
        if ((bVar1 & 1) == 0) {
          iVar8 = FUN_000108b0(iVar3,uVar10,iVar3);
          if (-1 < iVar8) {
            iVar8 = -1;
            goto _L0;
          }
          goto _L0;
        }
        iVar9 = FUN_00010882(iVar3,uVar10,iVar3);
        iVar8 = 1;
        if (iVar9 < 0) goto _L0;
_L0:
        iVar9 = FUN_00010896(iVar3,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
        if (iVar9 == -2) goto _L0;
        uVar4 = (uint)(iVar9 == iVar8);
      }
      FUN_000107f8(iVar3,1);
      FUN_00010804(iVar7,1);
_L0:
      FUN_00010814(iVar6,1);
      if (uVar4 == 1) {
        if (iVar11 == 0) {
          FUN_00010832(&stack0x00000064,0,0x20);
          iVar11 = iVar5;
        }
        else {
          FUN_000108e2(iVar5,1);
        }
      }
      else {
        FUN_000108c4(iVar5,1);
        if (uVar4 == 0xffffffff) goto _L0;
      }
    }
    bStack0000001f += 1;
  } while( true );
}



int FUN_00010576(undefined4 param_1)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int iVar11;
  int unaff_s8;
  int unaff_s11;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  int in_stack_0000000c;
  byte bStack0000001f;
  int in_stack_0000003c;
  
  do {
    iVar3 = FUN_00010576(param_1);
    iVar4 = in_stack_0000000c;
    iVar11 = unaff_s3;
    iVar6 = unaff_s4;
    if (((iVar3 != 1) &&
        (iVar4 = unaff_s4, iVar11 = in_stack_0000000c, iVar6 = unaff_s3, iVar3 != unaff_s11)) ||
       (iVar6 != 0)) {
      _LVL120(in_stack_0000000c,0);
      iVar11 = unaff_s3;
      iVar4 = unaff_s4;
    }
    do {
      if ((iVar4 != 0) && (iVar11 != 0)) goto _L0;
      FUN_00010536(&stack0x0000010c);
      if (unaff_s8 != 0) {
        FUN_00010548(&stack0x0000010c,in_stack_00000008);
      }
      iVar6 = FUN_00010556(&stack0x0000010c,&stack0x00000084);
    } while (-1 < iVar6);
    in_stack_0000000c = FUN_00010566(&stack0x0000010c);
    param_1 = in_stack_00000004;
    unaff_s3 = iVar11;
    unaff_s4 = iVar4;
  } while (in_stack_0000000c != 0);
  if ((iVar4 == 0) || (iVar11 == 0)) {
    return -1;
  }
_L0:
  iVar4 = FUN_000105b0();
  if (iVar4 < 1) {
    _LVL144();
  }
  else {
    _LVL124();
  }
  FUN_000105d2();
  iVar4 = 1;
  if (unaff_s2 != 0) {
    in_stack_0000003c = _L0();
    iVar4 = 2;
  }
  *(undefined **)(&stack0x0000002c + iVar4 * 4) = &stack0x0000001f;
  *(undefined4 *)(&stack0x00000038 + iVar4 * 4) = 1;
  bStack0000001f = 1;
  iVar11 = 0;
  do {
    if (0x28 < bStack0000001f) {
      if (iVar11 != 0) {
        iVar4 = *(int *)(unaff_s0 + 0x44);
        if (*(int *)(iVar4 + 0x34) == 0) {
          iVar11 = FUN_00010632();
          *(int *)(iVar4 + 0x34) = iVar11;
        }
        iVar4 = -1;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
          iVar4 = FUN_0001064a();
        }
        FUN_00010658();
        if (iVar4 < 0) {
          FUN_0001066c();
        }
        goto _L0;
      }
      if (200 < bStack0000001f) {
        FUN_000106a6();
        FUN_000106b6();
        goto _L0;
      }
    }
    FUN_000106e6(&stack0x00000020,0xc,iVar4 + 1,(undefined4 *)&stack0x0000002c,&stack0x00000038,
                 &stack0x00000064);
    uVar5 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
    iVar6 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar5);
    if (iVar6 < 0) goto _L0;
    uVar5 &= 7;
    if (uVar5 != 0) {
      FUN_0001072e(&stack0x000000c8,0x42,8 - uVar5);
    }
    iVar6 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                         *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (iVar6 < 0) {
      iVar6 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      if (iVar6 == 0) goto _L0;
      iVar3 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),iVar6);
      if (iVar3 == 0) {
        _LVL168();
_L0:
        iVar4 = -1;
_L0:
        FUN_000106c4();
        FUN_000106d0();
        return iVar4;
      }
      iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
      while( true ) {
        do {
          FUN_0001078a(&stack0x0000010c,iVar2);
          if (uVar5 != 0) {
            FUN_0001079c(&stack0x0000010c,iVar2,8 - uVar5);
          }
          iVar7 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
        } while (-1 < iVar7);
        iVar7 = FUN_000107ba(&stack0x0000010c,iVar2);
        if (iVar7 == 0) {
          uVar5 = 0xffffffff;
          goto _L0;
        }
        iVar8 = _L0();
        if (iVar8 == 0) break;
        FUN_000107d4(iVar7,0);
      }
      bVar1 = (&stack0x0000010b)[iVar2];
      iVar2 = _L0();
      if (((iVar2 == 0) ||
          (iVar8 = _LVL198(iVar3,iVar7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
          iVar8 < 0)) ||
         (iVar8 = FUN_00010868(iVar2,iVar7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
         iVar8 < 0)) {
_L0:
        uVar5 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
        if ((bVar1 & 1) == 0) {
          iVar8 = FUN_000108b0(iVar2,uVar10,iVar2);
          if (-1 < iVar8) {
            iVar8 = -1;
            goto _L0;
          }
          goto _L0;
        }
        iVar9 = FUN_00010882(iVar2,uVar10,iVar2);
        iVar8 = 1;
        if (iVar9 < 0) goto _L0;
_L0:
        iVar9 = FUN_00010896(iVar2,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
        if (iVar9 == -2) goto _L0;
        uVar5 = (uint)(iVar9 == iVar8);
      }
      FUN_000107f8(iVar2,1);
      FUN_00010804(iVar7,1);
_L0:
      FUN_00010814(iVar3,1);
      if (uVar5 == 1) {
        if (iVar11 == 0) {
          FUN_00010832(&stack0x00000064,0,0x20);
          iVar11 = iVar6;
        }
        else {
          FUN_000108e2(iVar6,1);
        }
      }
      else {
        FUN_000108c4(iVar6,1);
        if (uVar5 == 0xffffffff) goto _L0;
      }
    }
    bStack0000001f += 1;
  } while( true );
}



int _LVL120(int param_1,undefined4 param_2)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int iVar11;
  int unaff_s8;
  int unaff_s11;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  byte bStack0000001f;
  int in_stack_0000003c;
  
  do {
    _LVL120(param_1,param_2);
    iVar3 = unaff_s3;
    iVar11 = unaff_s4;
    do {
      do {
        unaff_s4 = iVar11;
        unaff_s3 = iVar3;
        if ((unaff_s4 != 0) && (unaff_s3 != 0)) {
_L0:
          iVar3 = FUN_000105b0();
          if (iVar3 < 1) {
            _LVL144();
          }
          else {
            _LVL124();
          }
          FUN_000105d2();
          iVar3 = 1;
          if (unaff_s2 != 0) {
            in_stack_0000003c = _L0();
            iVar3 = 2;
          }
          *(undefined **)(&stack0x0000002c + iVar3 * 4) = &stack0x0000001f;
          *(undefined4 *)(&stack0x00000038 + iVar3 * 4) = 1;
          bStack0000001f = 1;
          iVar11 = 0;
          goto _L0;
        }
        FUN_00010536(&stack0x0000010c);
        if (unaff_s8 != 0) {
          FUN_00010548(&stack0x0000010c,in_stack_00000008);
        }
        iVar5 = FUN_00010556(&stack0x0000010c,&stack0x00000084);
        iVar3 = unaff_s3;
        iVar11 = unaff_s4;
      } while (-1 < iVar5);
      param_1 = FUN_00010566(&stack0x0000010c);
      if (param_1 == 0) {
        if ((unaff_s4 == 0) || (unaff_s3 == 0)) {
          return -1;
        }
        goto _L0;
      }
      iVar6 = FUN_00010576(in_stack_00000004);
      iVar11 = param_1;
      iVar5 = unaff_s4;
    } while (((iVar6 == 1) ||
             (iVar3 = param_1, iVar11 = unaff_s4, iVar5 = unaff_s3, iVar6 == unaff_s11)) &&
            (iVar5 == 0));
    param_2 = 0;
  } while( true );
_L0:
  if (0x28 < bStack0000001f) {
    if (iVar11 != 0) {
      iVar3 = *(int *)(unaff_s0 + 0x44);
      if (*(int *)(iVar3 + 0x34) == 0) {
        iVar11 = FUN_00010632();
        *(int *)(iVar3 + 0x34) = iVar11;
      }
      iVar3 = -1;
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
        iVar3 = FUN_0001064a();
      }
      FUN_00010658();
      if (iVar3 < 0) {
        FUN_0001066c();
      }
      goto _L0;
    }
    if (200 < bStack0000001f) {
      FUN_000106a6();
      FUN_000106b6();
      goto _L0;
    }
  }
  FUN_000106e6(&stack0x00000020,0xc,iVar3 + 1,(undefined4 *)&stack0x0000002c,&stack0x00000038,
               &stack0x00000064);
  uVar4 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
  iVar5 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                  *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar4);
  if (iVar5 < 0) goto _L0;
  uVar4 &= 7;
  if (uVar4 != 0) {
    FUN_0001072e(&stack0x000000c8,0x42,8 - uVar4);
  }
  iVar5 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                       *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
  if (iVar5 < 0) {
    iVar5 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (iVar5 == 0) goto _L0;
    iVar6 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),iVar5);
    if (iVar6 == 0) {
      _LVL168();
_L0:
      iVar3 = -1;
_L0:
      FUN_000106c4();
      FUN_000106d0();
      return iVar3;
    }
    iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    while( true ) {
      do {
        FUN_0001078a(&stack0x0000010c,iVar2);
        if (uVar4 != 0) {
          FUN_0001079c(&stack0x0000010c,iVar2,8 - uVar4);
        }
        iVar7 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
      } while (-1 < iVar7);
      iVar7 = FUN_000107ba(&stack0x0000010c,iVar2);
      if (iVar7 == 0) {
        uVar4 = 0xffffffff;
        goto _L0;
      }
      iVar8 = _L0();
      if (iVar8 == 0) break;
      FUN_000107d4(iVar7,0);
    }
    bVar1 = (&stack0x0000010b)[iVar2];
    iVar2 = _L0();
    if (((iVar2 == 0) ||
        (iVar8 = _LVL198(iVar6,iVar7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
        iVar8 < 0)) ||
       (iVar8 = FUN_00010868(iVar2,iVar7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
       iVar8 < 0)) {
_L0:
      uVar4 = 0xffffffff;
    }
    else {
      uVar10 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
      if ((bVar1 & 1) == 0) {
        iVar8 = FUN_000108b0(iVar2,uVar10,iVar2);
        if (-1 < iVar8) {
          iVar8 = -1;
          goto _L0;
        }
        goto _L0;
      }
      iVar9 = FUN_00010882(iVar2,uVar10,iVar2);
      iVar8 = 1;
      if (iVar9 < 0) goto _L0;
_L0:
      iVar9 = FUN_00010896(iVar2,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
      if (iVar9 == -2) goto _L0;
      uVar4 = (uint)(iVar9 == iVar8);
    }
    FUN_000107f8(iVar2,1);
    FUN_00010804(iVar7,1);
_L0:
    FUN_00010814(iVar6,1);
    if (uVar4 == 1) {
      if (iVar11 == 0) {
        FUN_00010832(&stack0x00000064,0,0x20);
        iVar11 = iVar5;
      }
      else {
        FUN_000108e2(iVar5,1);
      }
    }
    else {
      FUN_000108c4(iVar5,1);
      if (uVar4 == 0xffffffff) goto _L0;
    }
  }
  bStack0000001f += 1;
  goto _L0;
}



int FUN_000105b0(void)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int unaff_s2;
  int iStack00000004;
  byte bStack0000001f;
  int in_stack_0000003c;
  
  iVar3 = FUN_000105b0();
  if (iVar3 < 1) {
    _LVL144();
  }
  else {
    _LVL124();
  }
  FUN_000105d2();
  iStack00000004 = 1;
  if (unaff_s2 != 0) {
    in_stack_0000003c = _L0();
    iStack00000004 = 2;
  }
  *(undefined **)(&stack0x0000002c + iStack00000004 * 4) = &stack0x0000001f;
  *(undefined4 *)(&stack0x00000038 + iStack00000004 * 4) = 1;
  iStack00000004 += 1;
  bStack0000001f = 1;
  iVar3 = 0;
  do {
    if (0x28 < bStack0000001f) {
      if (iVar3 != 0) {
        iVar3 = *(int *)(unaff_s0 + 0x44);
        if (*(int *)(iVar3 + 0x34) == 0) {
          iVar4 = FUN_00010632();
          *(int *)(iVar3 + 0x34) = iVar4;
        }
        iVar3 = -1;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
          iVar3 = FUN_0001064a();
        }
        FUN_00010658();
        if (iVar3 < 0) {
          FUN_0001066c();
        }
        goto _L0;
      }
      if (200 < bStack0000001f) {
        FUN_000106a6();
        FUN_000106b6();
        goto _L0;
      }
    }
    FUN_000106e6(&stack0x00000020,0xc,iStack00000004,(undefined4 *)&stack0x0000002c,&stack0x00000038
                 ,&stack0x00000064);
    uVar5 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
    iVar4 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar5);
    if (iVar4 < 0) goto _L0;
    uVar5 &= 7;
    if (uVar5 != 0) {
      FUN_0001072e(&stack0x000000c8,0x42,8 - uVar5);
    }
    iVar4 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                         *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (iVar4 < 0) {
      iVar4 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      if (iVar4 == 0) goto _L0;
      iVar6 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),iVar4);
      if (iVar6 == 0) {
        _LVL168();
_L0:
        iVar3 = -1;
_L0:
        FUN_000106c4();
        FUN_000106d0();
        return iVar3;
      }
      iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
      while( true ) {
        do {
          FUN_0001078a(&stack0x0000010c,iVar2);
          if (uVar5 != 0) {
            FUN_0001079c(&stack0x0000010c,iVar2,8 - uVar5);
          }
          iVar7 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
        } while (-1 < iVar7);
        iVar7 = FUN_000107ba(&stack0x0000010c,iVar2);
        if (iVar7 == 0) {
          uVar5 = 0xffffffff;
          goto _L0;
        }
        iVar8 = _L0();
        if (iVar8 == 0) break;
        FUN_000107d4(iVar7,0);
      }
      bVar1 = (&stack0x0000010b)[iVar2];
      iVar2 = _L0();
      if (((iVar2 == 0) ||
          (iVar8 = _LVL198(iVar6,iVar7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
          iVar8 < 0)) ||
         (iVar8 = FUN_00010868(iVar2,iVar7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
         iVar8 < 0)) {
_L0:
        uVar5 = 0xffffffff;
      }
      else {
        uVar10 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
        if ((bVar1 & 1) == 0) {
          iVar8 = FUN_000108b0(iVar2,uVar10,iVar2);
          if (-1 < iVar8) {
            iVar8 = -1;
            goto _L0;
          }
          goto _L0;
        }
        iVar9 = FUN_00010882(iVar2,uVar10,iVar2);
        iVar8 = 1;
        if (iVar9 < 0) goto _L0;
_L0:
        iVar9 = FUN_00010896(iVar2,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
        if (iVar9 == -2) goto _L0;
        uVar5 = (uint)(iVar9 == iVar8);
      }
      FUN_000107f8(iVar2,1);
      FUN_00010804(iVar7,1);
_L0:
      FUN_00010814(iVar6,1);
      if (uVar5 == 1) {
        if (iVar3 == 0) {
          FUN_00010832(&stack0x00000064,0,0x20);
          iVar3 = iVar4;
        }
        else {
          FUN_000108e2(iVar4,1);
        }
      }
      else {
        FUN_000108c4(iVar4,1);
        if (uVar5 == 0xffffffff) goto _L0;
      }
    }
    bStack0000001f += 1;
  } while( true );
}



int _LVL124(void)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int unaff_s2;
  int iVar10;
  int iStack00000004;
  byte bStack0000001f;
  int in_stack_0000003c;
  
  _LVL124();
  FUN_000105d2();
  iStack00000004 = 1;
  if (unaff_s2 != 0) {
    in_stack_0000003c = _L0();
    iStack00000004 = 2;
  }
  *(undefined **)(&stack0x0000002c + iStack00000004 * 4) = &stack0x0000001f;
  *(undefined4 *)(&stack0x00000038 + iStack00000004 * 4) = 1;
  iStack00000004 += 1;
  bStack0000001f = 1;
  iVar10 = 0;
  do {
    if (0x28 < bStack0000001f) {
      if (iVar10 != 0) {
        iVar10 = *(int *)(unaff_s0 + 0x44);
        if (*(int *)(iVar10 + 0x34) == 0) {
          iVar3 = FUN_00010632();
          *(int *)(iVar10 + 0x34) = iVar3;
        }
        iVar10 = -1;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
          iVar10 = FUN_0001064a();
        }
        FUN_00010658();
        if (iVar10 < 0) {
          FUN_0001066c();
        }
        goto _L0;
      }
      if (200 < bStack0000001f) {
        FUN_000106a6();
        FUN_000106b6();
        goto _L0;
      }
    }
    FUN_000106e6(&stack0x00000020,0xc,iStack00000004,(undefined4 *)&stack0x0000002c,&stack0x00000038
                 ,&stack0x00000064);
    uVar4 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
    iVar3 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar4);
    if (iVar3 < 0) goto _L0;
    uVar4 &= 7;
    if (uVar4 != 0) {
      FUN_0001072e(&stack0x000000c8,0x42,8 - uVar4);
    }
    iVar3 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                         *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (iVar3 < 0) {
      iVar3 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      if (iVar3 == 0) goto _L0;
      iVar5 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),iVar3);
      if (iVar5 == 0) {
        _LVL168();
_L0:
        iVar10 = -1;
_L0:
        FUN_000106c4();
        FUN_000106d0();
        return iVar10;
      }
      iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
      while( true ) {
        do {
          FUN_0001078a(&stack0x0000010c,iVar2);
          if (uVar4 != 0) {
            FUN_0001079c(&stack0x0000010c,iVar2,8 - uVar4);
          }
          iVar6 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
        } while (-1 < iVar6);
        iVar6 = FUN_000107ba(&stack0x0000010c,iVar2);
        if (iVar6 == 0) {
          uVar4 = 0xffffffff;
          goto _L0;
        }
        iVar7 = _L0();
        if (iVar7 == 0) break;
        FUN_000107d4(iVar6,0);
      }
      bVar1 = (&stack0x0000010b)[iVar2];
      iVar2 = _L0();
      if (((iVar2 == 0) ||
          (iVar7 = _LVL198(iVar5,iVar6,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
          iVar7 < 0)) ||
         (iVar7 = FUN_00010868(iVar2,iVar6,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
         iVar7 < 0)) {
_L0:
        uVar4 = 0xffffffff;
      }
      else {
        uVar9 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
        if ((bVar1 & 1) == 0) {
          iVar7 = FUN_000108b0(iVar2,uVar9,iVar2);
          if (-1 < iVar7) {
            iVar7 = -1;
            goto _L0;
          }
          goto _L0;
        }
        iVar8 = FUN_00010882(iVar2,uVar9,iVar2);
        iVar7 = 1;
        if (iVar8 < 0) goto _L0;
_L0:
        iVar8 = FUN_00010896(iVar2,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
        if (iVar8 == -2) goto _L0;
        uVar4 = (uint)(iVar8 == iVar7);
      }
      FUN_000107f8(iVar2,1);
      FUN_00010804(iVar6,1);
_L0:
      FUN_00010814(iVar5,1);
      if (uVar4 == 1) {
        if (iVar10 == 0) {
          FUN_00010832(&stack0x00000064,0,0x20);
          iVar10 = iVar3;
        }
        else {
          FUN_000108e2(iVar3,1);
        }
      }
      else {
        FUN_000108c4(iVar3,1);
        if (uVar4 == 0xffffffff) goto _L0;
      }
    }
    bStack0000001f += 1;
  } while( true );
}



int FUN_000105d2(void)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int unaff_s2;
  int iVar10;
  int iStack00000004;
  byte bStack0000001f;
  int in_stack_0000003c;
  
  FUN_000105d2();
  iStack00000004 = 1;
  if (unaff_s2 != 0) {
    in_stack_0000003c = _L0();
    iStack00000004 = 2;
  }
  *(undefined **)(&stack0x0000002c + iStack00000004 * 4) = &stack0x0000001f;
  *(undefined4 *)(&stack0x00000038 + iStack00000004 * 4) = 1;
  iStack00000004 += 1;
  bStack0000001f = 1;
  iVar10 = 0;
  do {
    if (0x28 < bStack0000001f) {
      if (iVar10 != 0) {
        iVar10 = *(int *)(unaff_s0 + 0x44);
        if (*(int *)(iVar10 + 0x34) == 0) {
          iVar3 = FUN_00010632();
          *(int *)(iVar10 + 0x34) = iVar3;
        }
        iVar10 = -1;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
          iVar10 = FUN_0001064a();
        }
        FUN_00010658();
        if (iVar10 < 0) {
          FUN_0001066c();
        }
        goto _L0;
      }
      if (200 < bStack0000001f) {
        FUN_000106a6();
        FUN_000106b6();
        goto _L0;
      }
    }
    FUN_000106e6(&stack0x00000020,0xc,iStack00000004,(undefined4 *)&stack0x0000002c,&stack0x00000038
                 ,&stack0x00000064);
    uVar4 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
    iVar3 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar4);
    if (iVar3 < 0) goto _L0;
    uVar4 &= 7;
    if (uVar4 != 0) {
      FUN_0001072e(&stack0x000000c8,0x42,8 - uVar4);
    }
    iVar3 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                         *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (iVar3 < 0) {
      iVar3 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      if (iVar3 == 0) goto _L0;
      iVar5 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),iVar3);
      if (iVar5 == 0) {
        _LVL168();
_L0:
        iVar10 = -1;
_L0:
        FUN_000106c4();
        FUN_000106d0();
        return iVar10;
      }
      iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
      while( true ) {
        do {
          FUN_0001078a(&stack0x0000010c,iVar2);
          if (uVar4 != 0) {
            FUN_0001079c(&stack0x0000010c,iVar2,8 - uVar4);
          }
          iVar6 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
        } while (-1 < iVar6);
        iVar6 = FUN_000107ba(&stack0x0000010c,iVar2);
        if (iVar6 == 0) {
          uVar4 = 0xffffffff;
          goto _L0;
        }
        iVar7 = _L0();
        if (iVar7 == 0) break;
        FUN_000107d4(iVar6,0);
      }
      bVar1 = (&stack0x0000010b)[iVar2];
      iVar2 = _L0();
      if (((iVar2 == 0) ||
          (iVar7 = _LVL198(iVar5,iVar6,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
          iVar7 < 0)) ||
         (iVar7 = FUN_00010868(iVar2,iVar6,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
         iVar7 < 0)) {
_L0:
        uVar4 = 0xffffffff;
      }
      else {
        uVar9 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
        if ((bVar1 & 1) == 0) {
          iVar7 = FUN_000108b0(iVar2,uVar9,iVar2);
          if (-1 < iVar7) {
            iVar7 = -1;
            goto _L0;
          }
          goto _L0;
        }
        iVar8 = FUN_00010882(iVar2,uVar9,iVar2);
        iVar7 = 1;
        if (iVar8 < 0) goto _L0;
_L0:
        iVar8 = FUN_00010896(iVar2,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
        if (iVar8 == -2) goto _L0;
        uVar4 = (uint)(iVar8 == iVar7);
      }
      FUN_000107f8(iVar2,1);
      FUN_00010804(iVar6,1);
_L0:
      FUN_00010814(iVar5,1);
      if (uVar4 == 1) {
        if (iVar10 == 0) {
          FUN_00010832(&stack0x00000064,0,0x20);
          iVar10 = iVar3;
        }
        else {
          FUN_000108e2(iVar3,1);
        }
      }
      else {
        FUN_000108c4(iVar3,1);
        if (uVar4 == 0xffffffff) goto _L0;
      }
    }
    bStack0000001f += 1;
  } while( true );
}



int _L0(void)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uStack00000004;
  byte bStack0000001f;
  undefined *in_stack_0000002c;
  undefined *puStack00000034;
  int iStack0000003c;
  undefined4 uStack00000040;
  
  iStack0000003c = _L0();
  puStack00000034 = &stack0x0000001f;
  uStack00000040 = 1;
  uStack00000004 = 3;
  bStack0000001f = 1;
  iVar10 = 0;
  do {
    if (0x28 < bStack0000001f) {
      if (iVar10 != 0) {
        iVar10 = *(int *)(unaff_s0 + 0x44);
        if (*(int *)(iVar10 + 0x34) == 0) {
          iVar3 = FUN_00010632();
          *(int *)(iVar10 + 0x34) = iVar3;
        }
        iVar10 = -1;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
          iVar10 = FUN_0001064a();
        }
        FUN_00010658();
        if (iVar10 < 0) {
          FUN_0001066c();
        }
        goto _L0;
      }
      if (200 < bStack0000001f) {
        FUN_000106a6();
        FUN_000106b6();
        goto _L0;
      }
    }
    FUN_000106e6(&stack0x00000020,0xc,uStack00000004,(undefined4 *)&stack0x0000002c,&stack0x00000038
                 ,&stack0x00000064);
    uVar4 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
    iVar3 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar4);
    if (iVar3 < 0) goto _L0;
    uVar4 &= 7;
    if (uVar4 != 0) {
      FUN_0001072e(&stack0x000000c8,0x42,8 - uVar4);
    }
    iVar3 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                         *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (iVar3 < 0) {
      iVar3 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      if (iVar3 == 0) goto _L0;
      iVar5 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),iVar3);
      if (iVar5 == 0) {
        _LVL168();
_L0:
        iVar10 = -1;
_L0:
        FUN_000106c4();
        FUN_000106d0();
        return iVar10;
      }
      iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
      while( true ) {
        do {
          FUN_0001078a(&stack0x0000010c,iVar2);
          if (uVar4 != 0) {
            FUN_0001079c(&stack0x0000010c,iVar2,8 - uVar4);
          }
          iVar6 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
        } while (-1 < iVar6);
        iVar6 = FUN_000107ba(&stack0x0000010c,iVar2);
        if (iVar6 == 0) {
          uVar4 = 0xffffffff;
          goto _L0;
        }
        iVar7 = _L0();
        if (iVar7 == 0) break;
        FUN_000107d4(iVar6,0);
      }
      bVar1 = (&stack0x0000010b)[iVar2];
      iVar2 = _L0();
      if (((iVar2 == 0) ||
          (iVar7 = _LVL198(iVar5,iVar6,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
          iVar7 < 0)) ||
         (iVar7 = FUN_00010868(iVar2,iVar6,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
         iVar7 < 0)) {
_L0:
        uVar4 = 0xffffffff;
      }
      else {
        uVar9 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
        if ((bVar1 & 1) == 0) {
          iVar7 = FUN_000108b0(iVar2,uVar9,iVar2);
          if (-1 < iVar7) {
            iVar7 = -1;
            goto _L0;
          }
          goto _L0;
        }
        iVar8 = FUN_00010882(iVar2,uVar9,iVar2);
        iVar7 = 1;
        if (iVar8 < 0) goto _L0;
_L0:
        iVar8 = FUN_00010896(iVar2,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
        if (iVar8 == -2) goto _L0;
        uVar4 = (uint)(iVar8 == iVar7);
      }
      FUN_000107f8(iVar2,1);
      FUN_00010804(iVar6,1);
_L0:
      FUN_00010814(iVar5,1);
      if (uVar4 == 1) {
        if (iVar10 == 0) {
          FUN_00010832(&stack0x00000064,0,0x20);
          in_stack_0000002c = &stack0x00000044;
          iVar10 = iVar3;
        }
        else {
          FUN_000108e2(iVar3,1);
        }
      }
      else {
        FUN_000108c4(iVar3,1);
        if (uVar4 == 0xffffffff) goto _L0;
      }
    }
    bStack0000001f += 1;
  } while( true );
}



int FUN_00010632(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  
  iVar1 = FUN_00010632();
  *(int *)(unaff_s1 + 0x34) = iVar1;
  iVar1 = -1;
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
    iVar1 = FUN_0001064a();
  }
  FUN_00010658();
  if (iVar1 < 0) {
    FUN_0001066c();
  }
  FUN_000106c4();
  FUN_000106d0();
  return iVar1;
}



int FUN_0001064a(void)

{
  int iVar1;
  
  iVar1 = FUN_0001064a();
  FUN_00010658();
  if (iVar1 < 0) {
    FUN_0001066c();
  }
  FUN_000106c4();
  FUN_000106d0();
  return iVar1;
}



void FUN_00010658(void)

{
  int unaff_s0;
  
  FUN_00010658();
  if (unaff_s0 < 0) {
    FUN_0001066c();
  }
  FUN_000106c4();
  FUN_000106d0();
  return;
}



void FUN_0001066c(void)

{
  FUN_0001066c();
  FUN_000106c4();
  FUN_000106d0();
  return;
}



int _LVL144(void)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int unaff_s2;
  int iVar10;
  int iStack00000004;
  byte bStack0000001f;
  int in_stack_0000003c;
  
  _LVL144();
  FUN_000105d2();
  iStack00000004 = 1;
  if (unaff_s2 != 0) {
    in_stack_0000003c = _L0();
    iStack00000004 = 2;
  }
  *(undefined **)(&stack0x0000002c + iStack00000004 * 4) = &stack0x0000001f;
  *(undefined4 *)(&stack0x00000038 + iStack00000004 * 4) = 1;
  iStack00000004 += 1;
  bStack0000001f = 1;
  iVar10 = 0;
  do {
    if (0x28 < bStack0000001f) {
      if (iVar10 != 0) {
        iVar10 = *(int *)(unaff_s0 + 0x44);
        if (*(int *)(iVar10 + 0x34) == 0) {
          iVar3 = FUN_00010632();
          *(int *)(iVar10 + 0x34) = iVar3;
        }
        iVar10 = -1;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
          iVar10 = FUN_0001064a();
        }
        FUN_00010658();
        if (iVar10 < 0) {
          FUN_0001066c();
        }
        goto _L0;
      }
      if (200 < bStack0000001f) {
        FUN_000106a6();
        FUN_000106b6();
        goto _L0;
      }
    }
    FUN_000106e6(&stack0x00000020,0xc,iStack00000004,(undefined4 *)&stack0x0000002c,&stack0x00000038
                 ,&stack0x00000064);
    uVar4 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
    iVar3 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar4);
    if (iVar3 < 0) goto _L0;
    uVar4 &= 7;
    if (uVar4 != 0) {
      FUN_0001072e(&stack0x000000c8,0x42,8 - uVar4);
    }
    iVar3 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                         *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (iVar3 < 0) {
      iVar3 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      if (iVar3 == 0) goto _L0;
      iVar5 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),iVar3);
      if (iVar5 == 0) {
        _LVL168();
_L0:
        iVar10 = -1;
_L0:
        FUN_000106c4();
        FUN_000106d0();
        return iVar10;
      }
      iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
      while( true ) {
        do {
          FUN_0001078a(&stack0x0000010c,iVar2);
          if (uVar4 != 0) {
            FUN_0001079c(&stack0x0000010c,iVar2,8 - uVar4);
          }
          iVar6 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
        } while (-1 < iVar6);
        iVar6 = FUN_000107ba(&stack0x0000010c,iVar2);
        if (iVar6 == 0) {
          uVar4 = 0xffffffff;
          goto _L0;
        }
        iVar7 = _L0();
        if (iVar7 == 0) break;
        FUN_000107d4(iVar6,0);
      }
      bVar1 = (&stack0x0000010b)[iVar2];
      iVar2 = _L0();
      if (((iVar2 == 0) ||
          (iVar7 = _LVL198(iVar5,iVar6,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
          iVar7 < 0)) ||
         (iVar7 = FUN_00010868(iVar2,iVar6,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
         iVar7 < 0)) {
_L0:
        uVar4 = 0xffffffff;
      }
      else {
        uVar9 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
        if ((bVar1 & 1) == 0) {
          iVar7 = FUN_000108b0(iVar2,uVar9,iVar2);
          if (-1 < iVar7) {
            iVar7 = -1;
            goto _L0;
          }
          goto _L0;
        }
        iVar8 = FUN_00010882(iVar2,uVar9,iVar2);
        iVar7 = 1;
        if (iVar8 < 0) goto _L0;
_L0:
        iVar8 = FUN_00010896(iVar2,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
        if (iVar8 == -2) goto _L0;
        uVar4 = (uint)(iVar8 == iVar7);
      }
      FUN_000107f8(iVar2,1);
      FUN_00010804(iVar6,1);
_L0:
      FUN_00010814(iVar5,1);
      if (uVar4 == 1) {
        if (iVar10 == 0) {
          FUN_00010832(&stack0x00000064,0,0x20);
          iVar10 = iVar3;
        }
        else {
          FUN_000108e2(iVar3,1);
        }
      }
      else {
        FUN_000108c4(iVar3,1);
        if (uVar4 == 0xffffffff) goto _L0;
      }
    }
    bStack0000001f += 1;
  } while( true );
}



undefined4 FUN_000106a6(void)

{
  FUN_000106a6();
  FUN_000106b6();
  FUN_000106c4();
  FUN_000106d0();
  return 0xffffffff;
}



undefined4 FUN_000106b6(void)

{
  FUN_000106b6();
  FUN_000106c4();
  FUN_000106d0();
  return 0xffffffff;
}



void FUN_000106c4(void)

{
  FUN_000106c4();
  FUN_000106d0();
  return;
}



void FUN_000106d0(void)

{
  FUN_000106d0();
  return;
}



int FUN_000106e6(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined *param_5,undefined *param_6)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int unaff_s6;
  int unaff_s11;
  undefined4 in_stack_00000004;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
  do {
    FUN_000106e6(param_1,param_2,param_3,param_4,param_5,param_6);
    uVar3 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
    iVar4 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar3);
    if (iVar4 < 0) {
_L0:
      iVar4 = -1;
_L0:
      FUN_000106c4();
      FUN_000106d0();
      return iVar4;
    }
    uVar3 &= 7;
    if (uVar3 != 0) {
      FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - uVar3);
    }
    iVar4 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                         *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (iVar4 < 0) {
      iVar4 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      if (iVar4 == 0) goto _L0;
      iVar5 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),iVar4);
      if (iVar5 == 0) {
        _LVL168();
        goto _L0;
      }
      iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
      while( true ) {
        do {
          FUN_0001078a(&stack0x0000010c,iVar2);
          if (uVar3 != 0) {
            FUN_0001079c(&stack0x0000010c,iVar2,unaff_s11 - uVar3);
          }
          iVar6 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
        } while (-1 < iVar6);
        iVar6 = FUN_000107ba(&stack0x0000010c,iVar2);
        if (iVar6 == 0) {
          uVar3 = 0xffffffff;
          goto _L0;
        }
        iVar7 = _L0();
        if (iVar7 == 0) break;
        FUN_000107d4(iVar6,0);
      }
      bVar1 = (&stack0x0000010b)[iVar2];
      iVar2 = _L0();
      if (((iVar2 == 0) ||
          (iVar7 = _LVL198(iVar5,iVar6,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
          iVar7 < 0)) ||
         (iVar7 = FUN_00010868(iVar2,iVar6,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
         iVar7 < 0)) {
_L0:
        uVar3 = 0xffffffff;
      }
      else {
        uVar9 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
        if ((bVar1 & 1) == 0) {
          iVar7 = FUN_000108b0(iVar2,uVar9,iVar2);
          if (-1 < iVar7) {
            iVar7 = -1;
            goto _L0;
          }
          goto _L0;
        }
        iVar8 = FUN_00010882(iVar2,uVar9,iVar2);
        iVar7 = 1;
        if (iVar8 < 0) goto _L0;
_L0:
        iVar8 = FUN_00010896(iVar2,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
        if (iVar8 == -2) goto _L0;
        uVar3 = (uint)(iVar8 == iVar7);
      }
      FUN_000107f8(iVar2,1);
      FUN_00010804(iVar6,1);
_L0:
      FUN_00010814(iVar5,1);
      if (uVar3 == 1) {
        if (unaff_s6 == 0) {
          FUN_00010832(&stack0x00000064,0,0x20);
          in_stack_0000002c = &stack0x00000044;
          unaff_s6 = iVar4;
        }
        else {
          FUN_000108e2(iVar4,1);
        }
      }
      else {
        FUN_000108c4(iVar4,1);
        if (uVar3 == 0xffffffff) goto _L0;
      }
    }
    in_stack_0000001f += 1;
    if (0x28 < in_stack_0000001f) {
      if (unaff_s6 != 0) {
        iVar4 = *(int *)(unaff_s0 + 0x44);
        if (*(int *)(iVar4 + 0x34) == 0) {
          iVar5 = FUN_00010632();
          *(int *)(iVar4 + 0x34) = iVar5;
        }
        iVar4 = -1;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
          iVar4 = FUN_0001064a();
        }
        FUN_00010658();
        if (iVar4 < 0) {
          FUN_0001066c();
        }
        goto _L0;
      }
      if (200 < in_stack_0000001f) {
        FUN_000106a6();
        FUN_000106b6();
        goto _L0;
      }
    }
    param_5 = &stack0x00000038;
    param_4 = (undefined4 *)&stack0x0000002c;
    param_2 = 0xc;
    param_6 = &stack0x00000064;
    param_1 = &stack0x00000020;
    param_3 = in_stack_00000004;
  } while( true );
}



int FUN_000106f2(undefined4 param_1)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int unaff_s6;
  int unaff_s11;
  undefined4 in_stack_00000004;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
  do {
    uVar3 = FUN_000106f2(param_1);
    iVar4 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar3);
    if (iVar4 < 0) {
_L0:
      iVar4 = -1;
_L0:
      FUN_000106c4();
      FUN_000106d0();
      return iVar4;
    }
    uVar3 &= 7;
    if (uVar3 != 0) {
      FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - uVar3);
    }
    iVar4 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                         *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (iVar4 < 0) {
      iVar4 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      if (iVar4 == 0) goto _L0;
      iVar5 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),iVar4);
      if (iVar5 == 0) {
        _LVL168();
        goto _L0;
      }
      iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
      while( true ) {
        do {
          FUN_0001078a(&stack0x0000010c,iVar2);
          if (uVar3 != 0) {
            FUN_0001079c(&stack0x0000010c,iVar2,unaff_s11 - uVar3);
          }
          iVar6 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
        } while (-1 < iVar6);
        iVar6 = FUN_000107ba(&stack0x0000010c,iVar2);
        if (iVar6 == 0) {
          uVar3 = 0xffffffff;
          goto _L0;
        }
        iVar7 = _L0();
        if (iVar7 == 0) break;
        FUN_000107d4(iVar6,0);
      }
      bVar1 = (&stack0x0000010b)[iVar2];
      iVar2 = _L0();
      if (((iVar2 == 0) ||
          (iVar7 = _LVL198(iVar5,iVar6,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
          iVar7 < 0)) ||
         (iVar7 = FUN_00010868(iVar2,iVar6,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
         iVar7 < 0)) {
_L0:
        uVar3 = 0xffffffff;
      }
      else {
        uVar9 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
        if ((bVar1 & 1) == 0) {
          iVar7 = FUN_000108b0(iVar2,uVar9,iVar2);
          if (-1 < iVar7) {
            iVar7 = -1;
            goto _L0;
          }
          goto _L0;
        }
        iVar8 = FUN_00010882(iVar2,uVar9,iVar2);
        iVar7 = 1;
        if (iVar8 < 0) goto _L0;
_L0:
        iVar8 = FUN_00010896(iVar2,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
        if (iVar8 == -2) goto _L0;
        uVar3 = (uint)(iVar8 == iVar7);
      }
      FUN_000107f8(iVar2,1);
      FUN_00010804(iVar6,1);
_L0:
      FUN_00010814(iVar5,1);
      if (uVar3 == 1) {
        if (unaff_s6 == 0) {
          FUN_00010832(&stack0x00000064,0,0x20);
          in_stack_0000002c = &stack0x00000044;
          unaff_s6 = iVar4;
        }
        else {
          FUN_000108e2(iVar4,1);
        }
      }
      else {
        FUN_000108c4(iVar4,1);
        if (uVar3 == 0xffffffff) goto _L0;
      }
    }
    in_stack_0000001f += 1;
    if (0x28 < in_stack_0000001f) {
      if (unaff_s6 != 0) {
        iVar4 = *(int *)(unaff_s0 + 0x44);
        if (*(int *)(iVar4 + 0x34) == 0) {
          iVar5 = FUN_00010632();
          *(int *)(iVar4 + 0x34) = iVar5;
        }
        iVar4 = -1;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
          iVar4 = FUN_0001064a();
        }
        FUN_00010658();
        if (iVar4 < 0) {
          FUN_0001066c();
        }
        goto _L0;
      }
      if (200 < in_stack_0000001f) {
        FUN_000106a6();
        FUN_000106b6();
        goto _L0;
      }
    }
    FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                 &stack0x00000038,&stack0x00000064);
    param_1 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40);
  } while( true );
}



int _LVL157(undefined *param_1,undefined4 param_2,undefined *param_3,undefined4 param_4,
           undefined *param_5,uint param_6)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint unaff_s2;
  uint uVar9;
  int unaff_s6;
  int unaff_s11;
  undefined4 in_stack_00000004;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
  do {
    iVar3 = _LVL157(param_1,param_2,param_3,param_4,param_5,param_6);
    if (iVar3 < 0) {
_L0:
      iVar3 = -1;
_L0:
      FUN_000106c4();
      FUN_000106d0();
      return iVar3;
    }
    uVar9 = unaff_s2 & 7;
    if (uVar9 != 0) {
      FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - uVar9);
    }
    iVar3 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                         *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (iVar3 < 0) {
      iVar3 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      if (iVar3 == 0) goto _L0;
      iVar4 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),iVar3);
      if (iVar4 == 0) {
        _LVL168();
        goto _L0;
      }
      iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
      while( true ) {
        do {
          FUN_0001078a(&stack0x0000010c,iVar2);
          if (uVar9 != 0) {
            FUN_0001079c(&stack0x0000010c,iVar2,unaff_s11 - uVar9);
          }
          iVar5 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
        } while (-1 < iVar5);
        iVar5 = FUN_000107ba(&stack0x0000010c,iVar2);
        if (iVar5 == 0) {
          uVar9 = 0xffffffff;
          goto _L0;
        }
        iVar6 = _L0();
        if (iVar6 == 0) break;
        FUN_000107d4(iVar5,0);
      }
      bVar1 = (&stack0x0000010b)[iVar2];
      iVar2 = _L0();
      if (((iVar2 == 0) ||
          (iVar6 = _LVL198(iVar4,iVar5,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
          iVar6 < 0)) ||
         (iVar6 = FUN_00010868(iVar2,iVar5,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
         iVar6 < 0)) {
_L0:
        uVar9 = 0xffffffff;
      }
      else {
        uVar8 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
        if ((bVar1 & 1) == 0) {
          iVar6 = FUN_000108b0(iVar2,uVar8,iVar2);
          if (-1 < iVar6) {
            iVar6 = -1;
            goto _L0;
          }
          goto _L0;
        }
        iVar7 = FUN_00010882(iVar2,uVar8,iVar2);
        iVar6 = 1;
        if (iVar7 < 0) goto _L0;
_L0:
        iVar7 = FUN_00010896(iVar2,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
        if (iVar7 == -2) goto _L0;
        uVar9 = (uint)(iVar7 == iVar6);
      }
      FUN_000107f8(iVar2,1);
      FUN_00010804(iVar5,1);
_L0:
      FUN_00010814(iVar4,1);
      if (uVar9 == 1) {
        if (unaff_s6 == 0) {
          FUN_00010832(&stack0x00000064,0,0x20);
          in_stack_0000002c = &stack0x00000044;
          unaff_s6 = iVar3;
        }
        else {
          FUN_000108e2(iVar3,1);
        }
      }
      else {
        FUN_000108c4(iVar3,1);
        if (uVar9 == 0xffffffff) goto _L0;
      }
    }
    in_stack_0000001f += 1;
    if (0x28 < in_stack_0000001f) {
      if (unaff_s6 != 0) {
        iVar3 = *(int *)(unaff_s0 + 0x44);
        if (*(int *)(iVar3 + 0x34) == 0) {
          iVar4 = FUN_00010632();
          *(int *)(iVar3 + 0x34) = iVar4;
        }
        iVar3 = -1;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
          iVar3 = FUN_0001064a();
        }
        FUN_00010658();
        if (iVar3 < 0) {
          FUN_0001066c();
        }
        goto _L0;
      }
      if (200 < in_stack_0000001f) {
        FUN_000106a6();
        FUN_000106b6();
        goto _L0;
      }
    }
    FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                 &stack0x00000038,&stack0x00000064);
    param_6 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
    param_4 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    param_5 = &stack0x000000c8;
    param_3 = &stack0x00000084;
    param_2 = 0;
    param_1 = &stack0x00000064;
    unaff_s2 = param_6;
  } while( true );
}



int FUN_0001072e(undefined *param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint unaff_s2;
  int unaff_s6;
  int unaff_s11;
  undefined4 in_stack_00000004;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
  do {
    FUN_0001072e(param_1,param_2,param_3);
    do {
      iVar4 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                           *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      if (-1 < iVar4) goto _L0;
      iVar4 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      if (iVar4 == 0) {
_L0:
        iVar4 = -1;
_L0:
        FUN_000106c4();
        FUN_000106d0();
        return iVar4;
      }
      iVar5 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),iVar4);
      if (iVar5 == 0) {
        _LVL168();
        goto _L0;
      }
      iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
      while( true ) {
        do {
          FUN_0001078a(&stack0x0000010c,iVar2);
          if (unaff_s2 != 0) {
            FUN_0001079c(&stack0x0000010c,iVar2,unaff_s11 - unaff_s2);
          }
          iVar6 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
        } while (-1 < iVar6);
        iVar6 = FUN_000107ba(&stack0x0000010c,iVar2);
        if (iVar6 == 0) {
          uVar3 = 0xffffffff;
          goto _L0;
        }
        iVar7 = _L0();
        if (iVar7 == 0) break;
        FUN_000107d4(iVar6,0);
      }
      bVar1 = (&stack0x0000010b)[iVar2];
      iVar2 = _L0();
      if (((iVar2 == 0) ||
          (iVar7 = _LVL198(iVar5,iVar6,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
          iVar7 < 0)) ||
         (iVar7 = FUN_00010868(iVar2,iVar6,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
         iVar7 < 0)) {
_L0:
        uVar3 = 0xffffffff;
      }
      else {
        uVar9 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
        if ((bVar1 & 1) == 0) {
          iVar7 = FUN_000108b0(iVar2,uVar9,iVar2);
          if (-1 < iVar7) {
            iVar7 = -1;
            goto _L0;
          }
          goto _L0;
        }
        iVar8 = FUN_00010882(iVar2,uVar9,iVar2);
        iVar7 = 1;
        if (iVar8 < 0) goto _L0;
_L0:
        iVar8 = FUN_00010896(iVar2,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
        if (iVar8 == -2) goto _L0;
        uVar3 = (uint)(iVar8 == iVar7);
      }
      FUN_000107f8(iVar2,1);
      FUN_00010804(iVar6,1);
_L0:
      FUN_00010814(iVar5,1);
      if (uVar3 == 1) {
        if (unaff_s6 == 0) {
          FUN_00010832(&stack0x00000064,0,0x20);
          in_stack_0000002c = &stack0x00000044;
          unaff_s6 = iVar4;
        }
        else {
          FUN_000108e2(iVar4,1);
        }
      }
      else {
        FUN_000108c4(iVar4,1);
        if (uVar3 == 0xffffffff) goto _L0;
      }
_L0:
      in_stack_0000001f += 1;
      if (0x28 < in_stack_0000001f) {
        if (unaff_s6 != 0) {
          iVar4 = *(int *)(unaff_s0 + 0x44);
          if (*(int *)(iVar4 + 0x34) == 0) {
            iVar5 = FUN_00010632();
            *(int *)(iVar4 + 0x34) = iVar5;
          }
          iVar4 = -1;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
            iVar4 = FUN_0001064a();
          }
          FUN_00010658();
          if (iVar4 < 0) {
            FUN_0001066c();
          }
          goto _L0;
        }
        if (200 < in_stack_0000001f) {
          FUN_000106a6();
          FUN_000106b6();
          goto _L0;
        }
      }
      FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                   &stack0x00000038,&stack0x00000064);
      uVar3 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
      iVar4 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar3);
      if (iVar4 < 0) goto _L0;
      unaff_s2 = uVar3 & 7;
    } while (unaff_s2 == 0);
    param_3 = unaff_s11 - unaff_s2;
    param_2 = 0x42;
    param_1 = &stack0x000000c8;
  } while( true );
}



int FUN_0001073e(undefined *param_1,undefined *param_2,undefined4 param_3)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint unaff_s2;
  int unaff_s6;
  int unaff_s11;
  undefined4 in_stack_00000004;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
  do {
    iVar4 = FUN_0001073e(param_1,param_2,param_3);
    if (iVar4 < 0) {
      iVar4 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      if (iVar4 == 0) goto _L0;
      iVar5 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),iVar4);
      if (iVar5 == 0) {
        _LVL168();
_L0:
        iVar4 = -1;
_L0:
        FUN_000106c4();
        FUN_000106d0();
        return iVar4;
      }
      iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
      while( true ) {
        do {
          FUN_0001078a(&stack0x0000010c,iVar2);
          if (unaff_s2 != 0) {
            FUN_0001079c(&stack0x0000010c,iVar2,unaff_s11 - unaff_s2);
          }
          iVar6 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
        } while (-1 < iVar6);
        iVar6 = FUN_000107ba(&stack0x0000010c,iVar2);
        if (iVar6 == 0) {
          uVar3 = 0xffffffff;
          goto _L0;
        }
        iVar7 = _L0();
        if (iVar7 == 0) break;
        FUN_000107d4(iVar6,0);
      }
      bVar1 = (&stack0x0000010b)[iVar2];
      iVar2 = _L0();
      if (((iVar2 == 0) ||
          (iVar7 = _LVL198(iVar5,iVar6,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
          iVar7 < 0)) ||
         (iVar7 = FUN_00010868(iVar2,iVar6,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
         iVar7 < 0)) {
_L0:
        uVar3 = 0xffffffff;
      }
      else {
        uVar9 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
        if ((bVar1 & 1) == 0) {
          iVar7 = FUN_000108b0(iVar2,uVar9,iVar2);
          if (-1 < iVar7) {
            iVar7 = -1;
            goto _L0;
          }
          goto _L0;
        }
        iVar8 = FUN_00010882(iVar2,uVar9,iVar2);
        iVar7 = 1;
        if (iVar8 < 0) goto _L0;
_L0:
        iVar8 = FUN_00010896(iVar2,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
        if (iVar8 == -2) goto _L0;
        uVar3 = (uint)(iVar8 == iVar7);
      }
      FUN_000107f8(iVar2,1);
      FUN_00010804(iVar6,1);
_L0:
      FUN_00010814(iVar5,1);
      if (uVar3 == 1) {
        if (unaff_s6 == 0) {
          FUN_00010832(&stack0x00000064,0,0x20);
          in_stack_0000002c = &stack0x00000044;
          unaff_s6 = iVar4;
        }
        else {
          FUN_000108e2(iVar4,1);
        }
      }
      else {
        FUN_000108c4(iVar4,1);
        if (uVar3 == 0xffffffff) goto _L0;
      }
    }
    in_stack_0000001f += 1;
    if (0x28 < in_stack_0000001f) {
      if (unaff_s6 != 0) {
        iVar4 = *(int *)(unaff_s0 + 0x44);
        if (*(int *)(iVar4 + 0x34) == 0) {
          iVar5 = FUN_00010632();
          *(int *)(iVar4 + 0x34) = iVar5;
        }
        iVar4 = -1;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
          iVar4 = FUN_0001064a();
        }
        FUN_00010658();
        if (iVar4 < 0) {
          FUN_0001066c();
        }
        goto _L0;
      }
      if (200 < in_stack_0000001f) {
        FUN_000106a6();
        FUN_000106b6();
        goto _L0;
      }
    }
    FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                 &stack0x00000038,&stack0x00000064);
    uVar3 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
    iVar4 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar3);
    if (iVar4 < 0) goto _L0;
    unaff_s2 = uVar3 & 7;
    if (unaff_s2 != 0) {
      FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - unaff_s2);
    }
    param_2 = &stack0x00000084;
    param_1 = &stack0x000000c8;
    param_3 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44);
  } while( true );
}



int FUN_00010750(undefined *param_1,undefined4 param_2)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  uint unaff_s2;
  int unaff_s6;
  int unaff_s11;
  undefined4 in_stack_00000004;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
  do {
    iVar4 = FUN_00010750(param_1,param_2);
    if (iVar4 == 0) {
_L0:
      iVar4 = -1;
_L0:
      FUN_000106c4();
      FUN_000106d0();
      return iVar4;
    }
    iVar5 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),iVar4);
    if (iVar5 == 0) {
      _LVL168();
      goto _L0;
    }
    iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    while( true ) {
      do {
        FUN_0001078a(&stack0x0000010c,iVar2);
        if (unaff_s2 != 0) {
          FUN_0001079c(&stack0x0000010c,iVar2,unaff_s11 - unaff_s2);
        }
        iVar6 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
      } while (-1 < iVar6);
      iVar6 = FUN_000107ba(&stack0x0000010c,iVar2);
      if (iVar6 == 0) {
        uVar3 = 0xffffffff;
        goto _L0;
      }
      iVar7 = _L0();
      if (iVar7 == 0) break;
      FUN_000107d4(iVar6,0);
    }
    bVar1 = (&stack0x0000010b)[iVar2];
    iVar2 = _L0();
    if (((iVar2 == 0) ||
        (iVar7 = _LVL198(iVar5,iVar6,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
        iVar7 < 0)) ||
       (iVar7 = FUN_00010868(iVar2,iVar6,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
       iVar7 < 0)) {
_L0:
      uVar3 = 0xffffffff;
    }
    else {
      uVar9 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
      if ((bVar1 & 1) == 0) {
        iVar7 = FUN_000108b0(iVar2,uVar9,iVar2);
        if (-1 < iVar7) {
          iVar7 = -1;
          goto _L0;
        }
        goto _L0;
      }
      iVar8 = FUN_00010882(iVar2,uVar9,iVar2);
      iVar7 = 1;
      if (iVar8 < 0) goto _L0;
_L0:
      iVar8 = FUN_00010896(iVar2,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
      if (iVar8 == -2) goto _L0;
      uVar3 = (uint)(iVar8 == iVar7);
    }
    FUN_000107f8(iVar2,1);
    FUN_00010804(iVar6,1);
_L0:
    FUN_00010814(iVar5,1);
    if (uVar3 == 1) {
      if (unaff_s6 == 0) {
        FUN_00010832(&stack0x00000064,0,0x20);
        in_stack_0000002c = &stack0x00000044;
        unaff_s6 = iVar4;
      }
      else {
        FUN_000108e2(iVar4,1);
      }
    }
    else {
      FUN_000108c4(iVar4,1);
      if (uVar3 == 0xffffffff) goto _L0;
    }
    do {
      in_stack_0000001f += 1;
      if (0x28 < in_stack_0000001f) {
        if (unaff_s6 != 0) {
          iVar4 = *(int *)(unaff_s0 + 0x44);
          if (*(int *)(iVar4 + 0x34) == 0) {
            iVar5 = FUN_00010632();
            *(int *)(iVar4 + 0x34) = iVar5;
          }
          iVar4 = -1;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
            iVar4 = FUN_0001064a();
          }
          FUN_00010658();
          if (iVar4 < 0) {
            FUN_0001066c();
          }
          goto _L0;
        }
        if (200 < in_stack_0000001f) {
          FUN_000106a6();
          FUN_000106b6();
          goto _L0;
        }
      }
      FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                   &stack0x00000038,&stack0x00000064);
      uVar3 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
      iVar4 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar3);
      if (iVar4 < 0) goto _L0;
      unaff_s2 = uVar3 & 7;
      if (unaff_s2 != 0) {
        FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - unaff_s2);
      }
      iVar4 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                           *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    } while (-1 < iVar4);
    param_1 = &stack0x000000c8;
    param_2 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44);
  } while( true );
}



int _LVL165(undefined4 param_1,int param_2)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint unaff_s2;
  int unaff_s5;
  int unaff_s6;
  int unaff_s11;
  undefined4 in_stack_00000004;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
  while (iVar4 = _LVL165(param_1,param_2), iVar4 != 0) {
    iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    while( true ) {
      do {
        FUN_0001078a(&stack0x0000010c,iVar2);
        if (unaff_s2 != 0) {
          FUN_0001079c(&stack0x0000010c,iVar2,unaff_s11 - unaff_s2);
        }
        iVar5 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
      } while (-1 < iVar5);
      iVar5 = FUN_000107ba(&stack0x0000010c,iVar2);
      if (iVar5 == 0) {
        uVar3 = 0xffffffff;
        goto _L0;
      }
      iVar6 = _L0();
      if (iVar6 == 0) break;
      FUN_000107d4(iVar5,0);
    }
    bVar1 = (&stack0x0000010b)[iVar2];
    iVar2 = _L0();
    if (((iVar2 == 0) ||
        (iVar6 = _LVL198(iVar4,iVar5,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
        iVar6 < 0)) ||
       (iVar6 = FUN_00010868(iVar2,iVar5,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
       iVar6 < 0)) {
_L0:
      uVar3 = 0xffffffff;
    }
    else {
      uVar8 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
      if ((bVar1 & 1) == 0) {
        iVar6 = FUN_000108b0(iVar2,uVar8,iVar2);
        if (-1 < iVar6) {
          iVar6 = -1;
          goto _L0;
        }
        goto _L0;
      }
      iVar7 = FUN_00010882(iVar2,uVar8,iVar2);
      iVar6 = 1;
      if (iVar7 < 0) goto _L0;
_L0:
      iVar7 = FUN_00010896(iVar2,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
      if (iVar7 == -2) goto _L0;
      uVar3 = (uint)(iVar7 == iVar6);
    }
    FUN_000107f8(iVar2,1);
    FUN_00010804(iVar5,1);
_L0:
    FUN_00010814(iVar4,1);
    if (uVar3 == 1) {
      if (unaff_s6 == 0) {
        FUN_00010832(&stack0x00000064,0,0x20);
        in_stack_0000002c = &stack0x00000044;
        unaff_s6 = unaff_s5;
      }
      else {
        FUN_000108e2(unaff_s5,1);
      }
    }
    else {
      FUN_000108c4(unaff_s5,1);
      if (uVar3 == 0xffffffff) goto _L0;
    }
    do {
      in_stack_0000001f += 1;
      if (0x28 < in_stack_0000001f) {
        if (unaff_s6 != 0) {
          iVar4 = *(int *)(unaff_s0 + 0x44);
          if (*(int *)(iVar4 + 0x34) == 0) {
            iVar2 = FUN_00010632();
            *(int *)(iVar4 + 0x34) = iVar2;
          }
          iVar4 = -1;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
            iVar4 = FUN_0001064a();
          }
          FUN_00010658();
          if (iVar4 < 0) {
            FUN_0001066c();
          }
          goto _L0;
        }
        if (200 < in_stack_0000001f) {
          FUN_000106a6();
          FUN_000106b6();
          goto _L0;
        }
      }
      FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                   &stack0x00000038,&stack0x00000064);
      uVar3 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
      iVar4 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar3);
      if (iVar4 < 0) goto _L0;
      unaff_s2 = uVar3 & 7;
      if (unaff_s2 != 0) {
        FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - unaff_s2);
      }
      iVar4 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                           *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    } while (-1 < iVar4);
    param_2 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (param_2 == 0) goto _L0;
    param_1 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40);
    unaff_s5 = param_2;
  }
  _LVL168();
_L0:
  iVar4 = -1;
_L0:
  FUN_000106c4();
  FUN_000106d0();
  return iVar4;
}



undefined4 _LVL168(void)

{
  _LVL168();
  FUN_000106c4();
  FUN_000106d0();
  return 0xffffffff;
}



int FUN_0001078a(undefined *param_1,int param_2)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint unaff_s2;
  int unaff_s5;
  int unaff_s6;
  int unaff_s10;
  int unaff_s11;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
  do {
    FUN_0001078a(param_1,param_2);
    if (unaff_s2 != 0) {
      FUN_0001079c(&stack0x0000010c,unaff_s1,in_stack_00000008);
    }
    iVar3 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,unaff_s1);
    if (iVar3 < 0) {
      iVar3 = FUN_000107ba(&stack0x0000010c,unaff_s1);
      if (iVar3 == 0) {
        uVar2 = 0xffffffff;
      }
      else {
        iVar4 = _L0();
        if (iVar4 != 0) {
          FUN_000107d4(iVar3,0);
          goto _L0;
        }
        bVar1 = (&stack0x0000010b)[unaff_s1];
        iVar4 = _L0();
        if (((iVar4 == 0) ||
            (iVar5 = _LVL198(unaff_s10,iVar3,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar4
                            ), iVar5 < 0)) ||
           (iVar5 = FUN_00010868(iVar4,iVar3,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar4
                                ), iVar5 < 0)) {
_L0:
          uVar2 = 0xffffffff;
        }
        else {
          uVar7 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
          if ((bVar1 & 1) == 0) {
            iVar5 = FUN_000108b0(iVar4,uVar7,iVar4);
            if (-1 < iVar5) {
              iVar5 = -1;
              goto _L0;
            }
            goto _L0;
          }
          iVar6 = FUN_00010882(iVar4,uVar7,iVar4);
          iVar5 = 1;
          if (iVar6 < 0) goto _L0;
_L0:
          iVar6 = FUN_00010896(iVar4,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
          if (iVar6 == -2) goto _L0;
          uVar2 = (uint)(iVar6 == iVar5);
        }
        FUN_000107f8(iVar4,1);
        FUN_00010804(iVar3,1);
      }
      FUN_00010814(unaff_s10,1);
      if (uVar2 == 1) {
        if (unaff_s6 == 0) {
          FUN_00010832(&stack0x00000064,0,0x20);
          in_stack_0000002c = &stack0x00000044;
          unaff_s6 = unaff_s5;
        }
        else {
          FUN_000108e2(unaff_s5,1);
        }
      }
      else {
        FUN_000108c4(unaff_s5,1);
        if (uVar2 == 0xffffffff) goto _L0;
      }
      do {
        in_stack_0000001f += 1;
        if (0x28 < in_stack_0000001f) {
          if (unaff_s6 != 0) {
            iVar3 = *(int *)(unaff_s0 + 0x44);
            if (*(int *)(iVar3 + 0x34) == 0) {
              iVar4 = FUN_00010632();
              *(int *)(iVar3 + 0x34) = iVar4;
            }
            iVar3 = -1;
            if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
              iVar3 = FUN_0001064a();
            }
            FUN_00010658();
            if (iVar3 < 0) {
              FUN_0001066c();
            }
            goto _L0;
          }
          if (200 < in_stack_0000001f) {
            FUN_000106a6();
            FUN_000106b6();
            goto _L0;
          }
        }
        FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                     &stack0x00000038,&stack0x00000064);
        uVar2 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
        iVar3 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                        *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar2);
        if (iVar3 < 0) goto _L0;
        unaff_s2 = uVar2 & 7;
        if (unaff_s2 != 0) {
          FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - unaff_s2);
        }
        iVar3 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                             *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      } while (-1 < iVar3);
      unaff_s5 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      if (unaff_s5 == 0) goto _L0;
      unaff_s10 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),unaff_s5);
      if (unaff_s10 == 0) {
        _LVL168();
_L0:
        iVar3 = -1;
_L0:
        FUN_000106c4();
        FUN_000106d0();
        return iVar3;
      }
      unaff_s1 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
      in_stack_00000008 = unaff_s11 - unaff_s2;
    }
_L0:
    param_1 = &stack0x0000010c;
    param_2 = unaff_s1;
  } while( true );
}



int FUN_0001079c(undefined *param_1,int param_2,int param_3)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint unaff_s2;
  int unaff_s5;
  int unaff_s6;
  int unaff_s10;
  int unaff_s11;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
  do {
    FUN_0001079c(param_1,param_2,param_3);
    do {
      iVar3 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,unaff_s1);
      if (iVar3 < 0) {
        iVar3 = FUN_000107ba(&stack0x0000010c,unaff_s1);
        if (iVar3 == 0) {
          uVar2 = 0xffffffff;
        }
        else {
          iVar4 = _L0();
          if (iVar4 != 0) {
            FUN_000107d4(iVar3,0);
            goto _L0;
          }
          bVar1 = (&stack0x0000010b)[unaff_s1];
          iVar4 = _L0();
          if (((iVar4 == 0) ||
              (iVar5 = _LVL198(unaff_s10,iVar3,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),
                               iVar4), iVar5 < 0)) ||
             (iVar5 = FUN_00010868(iVar4,iVar3,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),
                                   iVar4), iVar5 < 0)) {
_L0:
            uVar2 = 0xffffffff;
          }
          else {
            uVar7 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
            if ((bVar1 & 1) == 0) {
              iVar5 = FUN_000108b0(iVar4,uVar7,iVar4);
              if (-1 < iVar5) {
                iVar5 = -1;
                goto _L0;
              }
              goto _L0;
            }
            iVar6 = FUN_00010882(iVar4,uVar7,iVar4);
            iVar5 = 1;
            if (iVar6 < 0) goto _L0;
_L0:
            iVar6 = FUN_00010896(iVar4,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
            if (iVar6 == -2) goto _L0;
            uVar2 = (uint)(iVar6 == iVar5);
          }
          FUN_000107f8(iVar4,1);
          FUN_00010804(iVar3,1);
        }
        FUN_00010814(unaff_s10,1);
        if (uVar2 == 1) {
          if (unaff_s6 == 0) {
            FUN_00010832(&stack0x00000064,0,0x20);
            in_stack_0000002c = &stack0x00000044;
            unaff_s6 = unaff_s5;
          }
          else {
            FUN_000108e2(unaff_s5,1);
          }
        }
        else {
          FUN_000108c4(unaff_s5,1);
          if (uVar2 == 0xffffffff) goto _L0;
        }
        do {
          in_stack_0000001f += 1;
          if (0x28 < in_stack_0000001f) {
            if (unaff_s6 != 0) {
              iVar3 = *(int *)(unaff_s0 + 0x44);
              if (*(int *)(iVar3 + 0x34) == 0) {
                iVar4 = FUN_00010632();
                *(int *)(iVar3 + 0x34) = iVar4;
              }
              iVar3 = -1;
              if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
                iVar3 = FUN_0001064a();
              }
              FUN_00010658();
              if (iVar3 < 0) {
                FUN_0001066c();
              }
              goto _L0;
            }
            if (200 < in_stack_0000001f) {
              FUN_000106a6();
              FUN_000106b6();
              goto _L0;
            }
          }
          FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                       &stack0x00000038,&stack0x00000064);
          uVar2 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
          iVar3 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                          *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar2);
          if (iVar3 < 0) goto _L0;
          unaff_s2 = uVar2 & 7;
          if (unaff_s2 != 0) {
            FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - unaff_s2);
          }
          iVar3 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                               *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
        } while (-1 < iVar3);
        unaff_s5 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
        if (unaff_s5 == 0) {
_L0:
          iVar3 = -1;
_L0:
          FUN_000106c4();
          FUN_000106d0();
          return iVar3;
        }
        unaff_s10 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),unaff_s5);
        if (unaff_s10 == 0) {
          _LVL168();
          goto _L0;
        }
        unaff_s1 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
        in_stack_00000008 = unaff_s11 - unaff_s2;
      }
_L0:
      FUN_0001078a(&stack0x0000010c,unaff_s1);
    } while (unaff_s2 == 0);
    param_1 = &stack0x0000010c;
    param_2 = unaff_s1;
    param_3 = in_stack_00000008;
  } while( true );
}



int FUN_000107aa(undefined *param_1,undefined *param_2,int param_3)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint unaff_s2;
  int unaff_s5;
  int unaff_s6;
  int unaff_s10;
  int unaff_s11;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
  do {
    iVar3 = FUN_000107aa(param_1,param_2,param_3);
    if (iVar3 < 0) {
      iVar3 = FUN_000107ba(&stack0x0000010c,unaff_s1);
      if (iVar3 == 0) {
        uVar2 = 0xffffffff;
      }
      else {
        iVar4 = _L0();
        if (iVar4 != 0) {
          FUN_000107d4(iVar3,0);
          goto _L0;
        }
        bVar1 = (&stack0x0000010b)[unaff_s1];
        iVar4 = _L0();
        if (((iVar4 == 0) ||
            (iVar5 = _LVL198(unaff_s10,iVar3,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar4
                            ), iVar5 < 0)) ||
           (iVar5 = FUN_00010868(iVar4,iVar3,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar4
                                ), iVar5 < 0)) {
_L0:
          uVar2 = 0xffffffff;
        }
        else {
          uVar7 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
          if ((bVar1 & 1) == 0) {
            iVar5 = FUN_000108b0(iVar4,uVar7,iVar4);
            if (-1 < iVar5) {
              iVar5 = -1;
              goto _L0;
            }
            goto _L0;
          }
          iVar6 = FUN_00010882(iVar4,uVar7,iVar4);
          iVar5 = 1;
          if (iVar6 < 0) goto _L0;
_L0:
          iVar6 = FUN_00010896(iVar4,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
          if (iVar6 == -2) goto _L0;
          uVar2 = (uint)(iVar6 == iVar5);
        }
        FUN_000107f8(iVar4,1);
        FUN_00010804(iVar3,1);
      }
      FUN_00010814(unaff_s10,1);
      if (uVar2 == 1) {
        if (unaff_s6 == 0) {
          FUN_00010832(&stack0x00000064,0,0x20);
          in_stack_0000002c = &stack0x00000044;
          unaff_s6 = unaff_s5;
        }
        else {
          FUN_000108e2(unaff_s5,1);
        }
      }
      else {
        FUN_000108c4(unaff_s5,1);
        if (uVar2 == 0xffffffff) goto _L0;
      }
      do {
        in_stack_0000001f += 1;
        if (0x28 < in_stack_0000001f) {
          if (unaff_s6 != 0) {
            iVar3 = *(int *)(unaff_s0 + 0x44);
            if (*(int *)(iVar3 + 0x34) == 0) {
              iVar4 = FUN_00010632();
              *(int *)(iVar3 + 0x34) = iVar4;
            }
            iVar3 = -1;
            if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
              iVar3 = FUN_0001064a();
            }
            FUN_00010658();
            if (iVar3 < 0) {
              FUN_0001066c();
            }
            goto _L0;
          }
          if (200 < in_stack_0000001f) {
            FUN_000106a6();
            FUN_000106b6();
            goto _L0;
          }
        }
        FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                     &stack0x00000038,&stack0x00000064);
        uVar2 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
        iVar3 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                        *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar2);
        if (iVar3 < 0) goto _L0;
        unaff_s2 = uVar2 & 7;
        if (unaff_s2 != 0) {
          FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - unaff_s2);
        }
        iVar3 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                             *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      } while (-1 < iVar3);
      unaff_s5 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      if (unaff_s5 == 0) goto _L0;
      unaff_s10 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),unaff_s5);
      if (unaff_s10 == 0) {
        _LVL168();
_L0:
        iVar3 = -1;
_L0:
        FUN_000106c4();
        FUN_000106d0();
        return iVar3;
      }
      unaff_s1 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
      in_stack_00000008 = unaff_s11 - unaff_s2;
    }
_L0:
    FUN_0001078a(&stack0x0000010c,unaff_s1);
    if (unaff_s2 != 0) {
      FUN_0001079c(&stack0x0000010c,unaff_s1,in_stack_00000008);
    }
    param_2 = &stack0x00000084;
    param_1 = &stack0x0000010c;
    param_3 = unaff_s1;
  } while( true );
}



int FUN_000107ba(undefined *param_1,int param_2)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint unaff_s2;
  int unaff_s5;
  int unaff_s6;
  int unaff_s10;
  int unaff_s11;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
  do {
    iVar3 = FUN_000107ba(param_1,param_2);
    if (iVar3 == 0) {
      uVar2 = 0xffffffff;
_L0:
      FUN_00010814(unaff_s10,1);
      if (uVar2 == 1) {
        if (unaff_s6 == 0) {
          FUN_00010832(&stack0x00000064,0,0x20);
          in_stack_0000002c = &stack0x00000044;
          unaff_s6 = unaff_s5;
        }
        else {
          FUN_000108e2(unaff_s5,1);
        }
      }
      else {
        FUN_000108c4(unaff_s5,1);
        if (uVar2 == 0xffffffff) goto _L0;
      }
      do {
        in_stack_0000001f += 1;
        if (0x28 < in_stack_0000001f) {
          if (unaff_s6 != 0) {
            iVar3 = *(int *)(unaff_s0 + 0x44);
            if (*(int *)(iVar3 + 0x34) == 0) {
              iVar4 = FUN_00010632();
              *(int *)(iVar3 + 0x34) = iVar4;
            }
            iVar3 = -1;
            if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
              iVar3 = FUN_0001064a();
            }
            FUN_00010658();
            if (iVar3 < 0) {
              FUN_0001066c();
            }
            goto _L0;
          }
          if (200 < in_stack_0000001f) {
            FUN_000106a6();
            FUN_000106b6();
            goto _L0;
          }
        }
        FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                     &stack0x00000038,&stack0x00000064);
        uVar2 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
        iVar3 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                        *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar2);
        if (iVar3 < 0) goto _L0;
        unaff_s2 = uVar2 & 7;
        if (unaff_s2 != 0) {
          FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - unaff_s2);
        }
        iVar3 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                             *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      } while (-1 < iVar3);
      unaff_s5 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      if (unaff_s5 == 0) goto _L0;
      unaff_s10 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),unaff_s5);
      if (unaff_s10 == 0) {
        _LVL168();
_L0:
        iVar3 = -1;
_L0:
        FUN_000106c4();
        FUN_000106d0();
        return iVar3;
      }
      unaff_s1 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
      in_stack_00000008 = unaff_s11 - unaff_s2;
    }
    else {
      iVar4 = _L0();
      if (iVar4 == 0) {
        bVar1 = (&stack0x0000010b)[unaff_s1];
        iVar4 = _L0();
        if (((iVar4 == 0) ||
            (iVar5 = _LVL198(unaff_s10,iVar3,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar4
                            ), iVar5 < 0)) ||
           (iVar5 = FUN_00010868(iVar4,iVar3,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar4
                                ), iVar5 < 0)) {
_L0:
          uVar2 = 0xffffffff;
        }
        else {
          uVar7 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
          if ((bVar1 & 1) == 0) {
            iVar5 = FUN_000108b0(iVar4,uVar7,iVar4);
            if (-1 < iVar5) {
              iVar5 = -1;
              goto _L0;
            }
            goto _L0;
          }
          iVar6 = FUN_00010882(iVar4,uVar7,iVar4);
          iVar5 = 1;
          if (iVar6 < 0) goto _L0;
_L0:
          iVar6 = FUN_00010896(iVar4,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
          if (iVar6 == -2) goto _L0;
          uVar2 = (uint)(iVar6 == iVar5);
        }
        FUN_000107f8(iVar4,1);
        FUN_00010804(iVar3,1);
        goto _L0;
      }
      FUN_000107d4(iVar3,0);
    }
    do {
      FUN_0001078a(&stack0x0000010c,unaff_s1);
      if (unaff_s2 != 0) {
        FUN_0001079c(&stack0x0000010c,unaff_s1,in_stack_00000008);
      }
      iVar3 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,unaff_s1);
    } while (-1 < iVar3);
    param_1 = &stack0x0000010c;
    param_2 = unaff_s1;
  } while( true );
}



int _L0(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint unaff_s2;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s10;
  int unaff_s11;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
  while (iVar4 = _L0(), iVar4 != 0) {
    FUN_000107d4(unaff_s7,0);
    while( true ) {
      do {
        FUN_0001078a(&stack0x0000010c,unaff_s1);
        if (unaff_s2 != 0) {
          FUN_0001079c(&stack0x0000010c,unaff_s1,in_stack_00000008);
        }
        iVar4 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,unaff_s1);
      } while (-1 < iVar4);
      unaff_s7 = FUN_000107ba(&stack0x0000010c,unaff_s1);
      if (unaff_s7 != 0) break;
      uVar2 = 0xffffffff;
_L0:
      FUN_00010814(unaff_s10,1);
      if (uVar2 == 1) {
        if (unaff_s6 == 0) {
          FUN_00010832(&stack0x00000064,0,0x20);
          in_stack_0000002c = &stack0x00000044;
          unaff_s6 = unaff_s5;
        }
        else {
          FUN_000108e2(unaff_s5,1);
        }
      }
      else {
        FUN_000108c4(unaff_s5,1);
        if (uVar2 == 0xffffffff) goto _L0;
      }
      do {
        in_stack_0000001f += 1;
        if (0x28 < in_stack_0000001f) {
          if (unaff_s6 != 0) {
            iVar4 = *(int *)(unaff_s0 + 0x44);
            if (*(int *)(iVar4 + 0x34) == 0) {
              iVar3 = FUN_00010632();
              *(int *)(iVar4 + 0x34) = iVar3;
            }
            iVar4 = -1;
            if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
              iVar4 = FUN_0001064a();
            }
            FUN_00010658();
            if (iVar4 < 0) {
              FUN_0001066c();
            }
            goto _L0;
          }
          if (200 < in_stack_0000001f) {
            FUN_000106a6();
            FUN_000106b6();
            goto _L0;
          }
        }
        FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                     &stack0x00000038,&stack0x00000064);
        uVar2 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
        iVar4 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                        *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar2);
        if (iVar4 < 0) goto _L0;
        unaff_s2 = uVar2 & 7;
        if (unaff_s2 != 0) {
          FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - unaff_s2);
        }
        iVar4 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                             *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      } while (-1 < iVar4);
      unaff_s5 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
      if (unaff_s5 == 0) {
_L0:
        iVar4 = -1;
_L0:
        FUN_000106c4();
        FUN_000106d0();
        return iVar4;
      }
      unaff_s10 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),unaff_s5);
      if (unaff_s10 == 0) {
        _LVL168();
        goto _L0;
      }
      unaff_s1 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
      in_stack_00000008 = unaff_s11 - unaff_s2;
    }
  }
  bVar1 = (&stack0x0000010b)[unaff_s1];
  iVar4 = _L0();
  if (((iVar4 != 0) &&
      (iVar3 = _LVL198(unaff_s10,unaff_s7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar4),
      -1 < iVar3)) &&
     (iVar3 = FUN_00010868(iVar4,unaff_s7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar4),
     -1 < iVar3)) {
    uVar6 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
    if ((bVar1 & 1) == 0) {
      iVar3 = FUN_000108b0(iVar4,uVar6,iVar4);
      if (-1 < iVar3) {
        iVar3 = -1;
        goto _L0;
      }
    }
    else {
      iVar5 = FUN_00010882(iVar4,uVar6,iVar4);
      iVar3 = 1;
      if (-1 < iVar5) {
_L0:
        iVar5 = FUN_00010896(iVar4,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
        if (iVar5 != -2) {
          uVar2 = (uint)(iVar5 == iVar3);
          goto _L0;
        }
      }
    }
  }
  uVar2 = 0xffffffff;
_L0:
  FUN_000107f8(iVar4,1);
  FUN_00010804(unaff_s7,1);
  goto _L0;
}



int FUN_000107d4(int param_1,undefined4 param_2)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint unaff_s2;
  int unaff_s5;
  int unaff_s6;
  int unaff_s10;
  int unaff_s11;
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
code_r0x000107d4:
  FUN_000107d4(param_1,param_2);
_L0:
  do {
    FUN_0001078a(&stack0x0000010c,unaff_s1);
    if (unaff_s2 != 0) {
      FUN_0001079c(&stack0x0000010c,unaff_s1,in_stack_00000008);
    }
    iVar4 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,unaff_s1);
  } while (-1 < iVar4);
  param_1 = FUN_000107ba(&stack0x0000010c,unaff_s1);
  if (param_1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar4 = _L0();
    if (iVar4 != 0) goto _L0;
    bVar1 = (&stack0x0000010b)[unaff_s1];
    iVar4 = _L0();
    if (((iVar4 == 0) ||
        (iVar3 = _LVL198(unaff_s10,param_1,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar4),
        iVar3 < 0)) ||
       (iVar3 = FUN_00010868(iVar4,param_1,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar4),
       iVar3 < 0)) {
_L0:
      uVar2 = 0xffffffff;
    }
    else {
      uVar6 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
      if ((bVar1 & 1) == 0) {
        iVar3 = FUN_000108b0(iVar4,uVar6,iVar4);
        if (-1 < iVar3) {
          iVar3 = -1;
          goto _L0;
        }
        goto _L0;
      }
      iVar5 = FUN_00010882(iVar4,uVar6,iVar4);
      iVar3 = 1;
      if (iVar5 < 0) goto _L0;
_L0:
      iVar5 = FUN_00010896(iVar4,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
      if (iVar5 == -2) goto _L0;
      uVar2 = (uint)(iVar5 == iVar3);
    }
    FUN_000107f8(iVar4,1);
    FUN_00010804(param_1,1);
  }
  FUN_00010814(unaff_s10,1);
  if (uVar2 == 1) {
    if (unaff_s6 == 0) {
      FUN_00010832(&stack0x00000064,0,0x20);
      in_stack_0000002c = &stack0x00000044;
      unaff_s6 = unaff_s5;
    }
    else {
      FUN_000108e2(unaff_s5,1);
    }
  }
  else {
    FUN_000108c4(unaff_s5,1);
    if (uVar2 == 0xffffffff) goto _L0;
  }
  do {
    in_stack_0000001f += 1;
    if (0x28 < in_stack_0000001f) {
      if (unaff_s6 != 0) {
        iVar4 = *(int *)(unaff_s0 + 0x44);
        if (*(int *)(iVar4 + 0x34) == 0) {
          iVar3 = FUN_00010632();
          *(int *)(iVar4 + 0x34) = iVar3;
        }
        iVar4 = -1;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
          iVar4 = FUN_0001064a();
        }
        FUN_00010658();
        if (iVar4 < 0) {
          FUN_0001066c();
        }
        goto _L0;
      }
      if (200 < in_stack_0000001f) {
        FUN_000106a6();
        FUN_000106b6();
        goto _L0;
      }
    }
    FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                 &stack0x00000038,&stack0x00000064);
    uVar2 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
    iVar4 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar2);
    if (iVar4 < 0) goto _L0;
    unaff_s2 = uVar2 & 7;
    if (unaff_s2 != 0) {
      FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - unaff_s2);
    }
    iVar4 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                         *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
  } while (-1 < iVar4);
  unaff_s5 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
  if (unaff_s5 == 0) {
_L0:
    iVar4 = -1;
_L0:
    FUN_000106c4();
    FUN_000106d0();
    return iVar4;
  }
  unaff_s10 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),unaff_s5);
  if (unaff_s10 == 0) {
    _LVL168();
    goto _L0;
  }
  unaff_s1 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
  in_stack_00000008 = unaff_s11 - unaff_s2;
  goto _L0;
_L0:
  param_2 = 0;
  goto code_r0x000107d4;
}



int _L0(void)

{
  int unaff_s0;
  byte unaff_s1;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s10;
  int unaff_s11;
  undefined4 in_stack_00000004;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
code_r0x000107e6:
  iVar3 = _L0();
  if (((iVar3 != 0) &&
      (iVar2 = _LVL198(unaff_s10,unaff_s7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar3),
      -1 < iVar2)) &&
     (iVar2 = FUN_00010868(iVar3,unaff_s7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar3),
     -1 < iVar2)) {
    uVar5 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
    if ((unaff_s1 & 1) == 0) {
      iVar2 = FUN_000108b0(iVar3,uVar5,iVar3);
      if (-1 < iVar2) {
        iVar2 = -1;
        goto _L0;
      }
    }
    else {
      iVar4 = FUN_00010882(iVar3,uVar5,iVar3);
      iVar2 = 1;
      if (-1 < iVar4) {
_L0:
        iVar4 = FUN_00010896(iVar3,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
        if (iVar4 != -2) {
          uVar1 = (uint)(iVar4 == iVar2);
          goto _L0;
        }
      }
    }
  }
  uVar1 = 0xffffffff;
_L0:
  FUN_000107f8(iVar3,1);
  FUN_00010804(unaff_s7,1);
  while( true ) {
    FUN_00010814(unaff_s10,1);
    if (uVar1 == 1) {
      if (unaff_s6 == 0) {
        FUN_00010832(&stack0x00000064,0,0x20);
        in_stack_0000002c = &stack0x00000044;
        unaff_s6 = unaff_s5;
      }
      else {
        FUN_000108e2(unaff_s5,1);
      }
    }
    else {
      FUN_000108c4(unaff_s5,1);
      if (uVar1 == 0xffffffff) break;
    }
    do {
      in_stack_0000001f += 1;
      if (0x28 < in_stack_0000001f) {
        if (unaff_s6 != 0) {
          iVar3 = *(int *)(unaff_s0 + 0x44);
          if (*(int *)(iVar3 + 0x34) == 0) {
            iVar2 = FUN_00010632();
            *(int *)(iVar3 + 0x34) = iVar2;
          }
          iVar3 = -1;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
            iVar3 = FUN_0001064a();
          }
          FUN_00010658();
          if (iVar3 < 0) {
            FUN_0001066c();
          }
          goto _L0;
        }
        if (200 < in_stack_0000001f) {
          FUN_000106a6();
          FUN_000106b6();
          goto _L0;
        }
      }
      FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                   &stack0x00000038,&stack0x00000064);
      uVar1 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
      iVar3 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar1);
      if (iVar3 < 0) goto _L0;
      uVar1 &= 7;
      if (uVar1 != 0) {
        FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - uVar1);
      }
      iVar3 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                           *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    } while (-1 < iVar3);
    unaff_s5 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (unaff_s5 == 0) break;
    unaff_s10 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),unaff_s5);
    if (unaff_s10 == 0) {
      _LVL168();
      break;
    }
    iVar3 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    while( true ) {
      do {
        FUN_0001078a(&stack0x0000010c,iVar3);
        if (uVar1 != 0) {
          FUN_0001079c(&stack0x0000010c,iVar3,unaff_s11 - uVar1);
        }
        iVar2 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar3);
      } while (-1 < iVar2);
      unaff_s7 = FUN_000107ba(&stack0x0000010c,iVar3);
      if (unaff_s7 == 0) break;
      iVar2 = _L0();
      if (iVar2 == 0) {
        unaff_s1 = (&stack0x0000010b)[iVar3];
        goto code_r0x000107e6;
      }
      FUN_000107d4(unaff_s7,0);
    }
    uVar1 = 0xffffffff;
  }
_L0:
  iVar3 = -1;
_L0:
  FUN_000106c4();
  FUN_000106d0();
  return iVar3;
}



int FUN_000107f8(int param_1,undefined4 param_2)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  uint unaff_s1;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s10;
  int unaff_s11;
  undefined4 in_stack_00000004;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
code_r0x000107f8:
  FUN_000107f8(param_1,param_2);
  FUN_00010804(unaff_s7,1);
  while( true ) {
    FUN_00010814(unaff_s10,1);
    if (unaff_s1 == 1) {
      if (unaff_s6 == 0) {
        FUN_00010832(&stack0x00000064,0,0x20);
        in_stack_0000002c = &stack0x00000044;
        unaff_s6 = unaff_s5;
      }
      else {
        FUN_000108e2(unaff_s5,1);
      }
    }
    else {
      FUN_000108c4(unaff_s5,1);
      if (unaff_s1 == 0xffffffff) break;
    }
    do {
      in_stack_0000001f += 1;
      if (0x28 < in_stack_0000001f) {
        if (unaff_s6 != 0) {
          iVar2 = *(int *)(unaff_s0 + 0x44);
          if (*(int *)(iVar2 + 0x34) == 0) {
            iVar3 = FUN_00010632();
            *(int *)(iVar2 + 0x34) = iVar3;
          }
          iVar2 = -1;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
            iVar2 = FUN_0001064a();
          }
          FUN_00010658();
          if (iVar2 < 0) {
            FUN_0001066c();
          }
          goto _L0;
        }
        if (200 < in_stack_0000001f) {
          FUN_000106a6();
          FUN_000106b6();
          goto _L0;
        }
      }
      FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                   &stack0x00000038,&stack0x00000064);
      uVar4 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
      iVar2 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar4);
      if (iVar2 < 0) goto _L0;
      uVar4 &= 7;
      if (uVar4 != 0) {
        FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - uVar4);
      }
      iVar2 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                           *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    } while (-1 < iVar2);
    unaff_s5 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (unaff_s5 == 0) break;
    unaff_s10 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),unaff_s5);
    if (unaff_s10 == 0) {
      _LVL168();
      break;
    }
    iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    while( true ) {
      do {
        FUN_0001078a(&stack0x0000010c,iVar2);
        if (uVar4 != 0) {
          FUN_0001079c(&stack0x0000010c,iVar2,unaff_s11 - uVar4);
        }
        iVar3 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
      } while (-1 < iVar3);
      unaff_s7 = FUN_000107ba(&stack0x0000010c,iVar2);
      if (unaff_s7 == 0) break;
      iVar3 = _L0();
      if (iVar3 == 0) {
        bVar1 = (&stack0x0000010b)[iVar2];
        param_1 = _L0();
        if (((param_1 == 0) ||
            (iVar2 = _LVL198(unaff_s10,unaff_s7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),
                             param_1), iVar2 < 0)) ||
           (iVar2 = FUN_00010868(param_1,unaff_s7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),
                                 param_1), iVar2 < 0)) {
_L0:
          unaff_s1 = 0xffffffff;
        }
        else {
          uVar5 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
          if ((bVar1 & 1) == 0) {
            iVar2 = FUN_000108b0(param_1,uVar5,param_1);
            if (-1 < iVar2) {
              iVar2 = -1;
              goto _L0;
            }
            goto _L0;
          }
          iVar3 = FUN_00010882(param_1,uVar5,param_1);
          iVar2 = 1;
          if (iVar3 < 0) goto _L0;
_L0:
          iVar3 = FUN_00010896(param_1,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
          if (iVar3 == -2) goto _L0;
          unaff_s1 = (uint)(iVar3 == iVar2);
        }
        param_2 = 1;
        goto code_r0x000107f8;
      }
      FUN_000107d4(unaff_s7,0);
    }
    unaff_s1 = 0xffffffff;
  }
_L0:
  iVar2 = -1;
_L0:
  FUN_000106c4();
  FUN_000106d0();
  return iVar2;
}



int FUN_00010804(int param_1,undefined4 param_2)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  uint unaff_s1;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_s5;
  int unaff_s6;
  int unaff_s10;
  int unaff_s11;
  undefined4 in_stack_00000004;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
code_r0x00010804:
  FUN_00010804(param_1,param_2);
  while( true ) {
    FUN_00010814(unaff_s10,1);
    if (unaff_s1 == 1) {
      if (unaff_s6 == 0) {
        FUN_00010832(&stack0x00000064,0,0x20);
        in_stack_0000002c = &stack0x00000044;
        unaff_s6 = unaff_s5;
      }
      else {
        FUN_000108e2(unaff_s5,1);
      }
    }
    else {
      FUN_000108c4(unaff_s5,1);
      if (unaff_s1 == 0xffffffff) break;
    }
    do {
      in_stack_0000001f += 1;
      if (0x28 < in_stack_0000001f) {
        if (unaff_s6 != 0) {
          iVar2 = *(int *)(unaff_s0 + 0x44);
          if (*(int *)(iVar2 + 0x34) == 0) {
            iVar3 = FUN_00010632();
            *(int *)(iVar2 + 0x34) = iVar3;
          }
          iVar2 = -1;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
            iVar2 = FUN_0001064a();
          }
          FUN_00010658();
          if (iVar2 < 0) {
            FUN_0001066c();
          }
          goto _L0;
        }
        if (200 < in_stack_0000001f) {
          FUN_000106a6();
          FUN_000106b6();
          goto _L0;
        }
      }
      FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                   &stack0x00000038,&stack0x00000064);
      uVar4 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
      iVar2 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar4);
      if (iVar2 < 0) goto _L0;
      uVar4 &= 7;
      if (uVar4 != 0) {
        FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - uVar4);
      }
      iVar2 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                           *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    } while (-1 < iVar2);
    unaff_s5 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (unaff_s5 == 0) break;
    unaff_s10 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),unaff_s5);
    if (unaff_s10 == 0) {
      _LVL168();
      break;
    }
    iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    while( true ) {
      do {
        FUN_0001078a(&stack0x0000010c,iVar2);
        if (uVar4 != 0) {
          FUN_0001079c(&stack0x0000010c,iVar2,unaff_s11 - uVar4);
        }
        iVar3 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
      } while (-1 < iVar3);
      param_1 = FUN_000107ba(&stack0x0000010c,iVar2);
      if (param_1 == 0) break;
      iVar3 = _L0();
      if (iVar3 == 0) {
        bVar1 = (&stack0x0000010b)[iVar2];
        iVar2 = _L0();
        if (((iVar2 == 0) ||
            (iVar3 = _LVL198(unaff_s10,param_1,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),
                             iVar2), iVar3 < 0)) ||
           (iVar3 = FUN_00010868(iVar2,param_1,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),
                                 iVar2), iVar3 < 0)) {
_L0:
          unaff_s1 = 0xffffffff;
        }
        else {
          uVar6 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
          if ((bVar1 & 1) == 0) {
            iVar3 = FUN_000108b0(iVar2,uVar6,iVar2);
            if (-1 < iVar3) {
              iVar3 = -1;
              goto _L0;
            }
            goto _L0;
          }
          iVar5 = FUN_00010882(iVar2,uVar6,iVar2);
          iVar3 = 1;
          if (iVar5 < 0) goto _L0;
_L0:
          iVar5 = FUN_00010896(iVar2,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
          if (iVar5 == -2) goto _L0;
          unaff_s1 = (uint)(iVar5 == iVar3);
        }
        FUN_000107f8(iVar2,1);
        param_2 = 1;
        goto code_r0x00010804;
      }
      FUN_000107d4(param_1,0);
    }
    unaff_s1 = 0xffffffff;
  }
_L0:
  iVar2 = -1;
_L0:
  FUN_000106c4();
  FUN_000106d0();
  return iVar2;
}



int FUN_00010814(int param_1,undefined4 param_2)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  uint unaff_s1;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int unaff_s5;
  int unaff_s6;
  int unaff_s11;
  undefined4 in_stack_00000004;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
  while( true ) {
    FUN_00010814(param_1,param_2);
    if (unaff_s1 == 1) {
      if (unaff_s6 == 0) {
        FUN_00010832(&stack0x00000064,0,0x20);
        in_stack_0000002c = &stack0x00000044;
        unaff_s6 = unaff_s5;
      }
      else {
        FUN_000108e2(unaff_s5,1);
      }
    }
    else {
      FUN_000108c4(unaff_s5,1);
      if (unaff_s1 == 0xffffffff) goto _L0;
    }
    do {
      in_stack_0000001f += 1;
      if (0x28 < in_stack_0000001f) {
        if (unaff_s6 != 0) {
          iVar2 = *(int *)(unaff_s0 + 0x44);
          if (*(int *)(iVar2 + 0x34) == 0) {
            iVar3 = FUN_00010632();
            *(int *)(iVar2 + 0x34) = iVar3;
          }
          iVar2 = -1;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
            iVar2 = FUN_0001064a();
          }
          FUN_00010658();
          if (iVar2 < 0) {
            FUN_0001066c();
          }
          goto _L0;
        }
        if (200 < in_stack_0000001f) {
          FUN_000106a6();
          FUN_000106b6();
          goto _L0;
        }
      }
      FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                   &stack0x00000038,&stack0x00000064);
      uVar4 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
      iVar2 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar4);
      if (iVar2 < 0) goto _L0;
      uVar4 &= 7;
      if (uVar4 != 0) {
        FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - uVar4);
      }
      iVar2 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                           *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    } while (-1 < iVar2);
    unaff_s5 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (unaff_s5 == 0) goto _L0;
    param_1 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),unaff_s5);
    if (param_1 == 0) break;
    iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    while( true ) {
      do {
        FUN_0001078a(&stack0x0000010c,iVar2);
        if (uVar4 != 0) {
          FUN_0001079c(&stack0x0000010c,iVar2,unaff_s11 - uVar4);
        }
        iVar3 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
      } while (-1 < iVar3);
      iVar3 = FUN_000107ba(&stack0x0000010c,iVar2);
      if (iVar3 == 0) {
        unaff_s1 = 0xffffffff;
        goto _L0;
      }
      iVar5 = _L0();
      if (iVar5 == 0) break;
      FUN_000107d4(iVar3,0);
    }
    bVar1 = (&stack0x0000010b)[iVar2];
    iVar2 = _L0();
    if (((iVar2 == 0) ||
        (iVar5 = _LVL198(param_1,iVar3,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
        iVar5 < 0)) ||
       (iVar5 = FUN_00010868(iVar2,iVar3,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar2),
       iVar5 < 0)) {
_L0:
      unaff_s1 = 0xffffffff;
    }
    else {
      uVar7 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
      if ((bVar1 & 1) == 0) {
        iVar5 = FUN_000108b0(iVar2,uVar7,iVar2);
        if (-1 < iVar5) {
          iVar5 = -1;
          goto _L0;
        }
        goto _L0;
      }
      iVar6 = FUN_00010882(iVar2,uVar7,iVar2);
      iVar5 = 1;
      if (iVar6 < 0) goto _L0;
_L0:
      iVar6 = FUN_00010896(iVar2,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
      if (iVar6 == -2) goto _L0;
      unaff_s1 = (uint)(iVar6 == iVar5);
    }
    FUN_000107f8(iVar2,1);
    FUN_00010804(iVar3,1);
_L0:
    param_2 = 1;
  }
  _LVL168();
_L0:
  iVar2 = -1;
_L0:
  FUN_000106c4();
  FUN_000106d0();
  return iVar2;
}



int FUN_00010832(undefined *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int unaff_s5;
  int unaff_s11;
  undefined4 in_stack_00000004;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
  do {
    FUN_00010832(param_1,param_2,param_3);
    in_stack_0000002c = &stack0x00000044;
_L0:
    do {
      in_stack_0000001f += 1;
      if (0x28 < in_stack_0000001f) {
        if (unaff_s5 != 0) {
          iVar2 = *(int *)(unaff_s0 + 0x44);
          if (*(int *)(iVar2 + 0x34) == 0) {
            iVar4 = FUN_00010632();
            *(int *)(iVar2 + 0x34) = iVar4;
          }
          iVar2 = -1;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
            iVar2 = FUN_0001064a();
          }
          FUN_00010658();
          if (iVar2 < 0) {
            FUN_0001066c();
          }
          goto _L0;
        }
        if (in_stack_0000001f < 0xc9) goto _L0;
        FUN_000106a6();
        FUN_000106b6();
        goto _L0;
      }
_L0:
      FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                   &stack0x00000038,&stack0x00000064);
      uVar5 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
      iVar2 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar5);
      if (iVar2 < 0) goto _L0;
      uVar5 &= 7;
      if (uVar5 != 0) {
        FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - uVar5);
      }
      iVar2 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                           *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    } while (-1 < iVar2);
    iVar2 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (iVar2 == 0) goto _L0;
    iVar4 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),iVar2);
    if (iVar4 == 0) {
      _LVL168();
_L0:
      iVar2 = -1;
_L0:
      FUN_000106c4();
      FUN_000106d0();
      return iVar2;
    }
    iVar3 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    while( true ) {
      do {
        FUN_0001078a(&stack0x0000010c,iVar3);
        if (uVar5 != 0) {
          FUN_0001079c(&stack0x0000010c,iVar3,unaff_s11 - uVar5);
        }
        iVar6 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar3);
      } while (-1 < iVar6);
      iVar6 = FUN_000107ba(&stack0x0000010c,iVar3);
      if (iVar6 == 0) {
        uVar5 = 0xffffffff;
        goto _L0;
      }
      iVar7 = _L0();
      if (iVar7 == 0) break;
      FUN_000107d4(iVar6,0);
    }
    bVar1 = (&stack0x0000010b)[iVar3];
    iVar3 = _L0();
    if (((iVar3 == 0) ||
        (iVar7 = _LVL198(iVar4,iVar6,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar3),
        iVar7 < 0)) ||
       (iVar7 = FUN_00010868(iVar3,iVar6,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar3),
       iVar7 < 0)) {
_L0:
      uVar5 = 0xffffffff;
    }
    else {
      uVar9 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
      if ((bVar1 & 1) == 0) {
        iVar7 = FUN_000108b0(iVar3,uVar9,iVar3);
        if (-1 < iVar7) {
          iVar7 = -1;
          goto _L0;
        }
        goto _L0;
      }
      iVar8 = FUN_00010882(iVar3,uVar9,iVar3);
      iVar7 = 1;
      if (iVar8 < 0) goto _L0;
_L0:
      iVar8 = FUN_00010896(iVar3,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
      if (iVar8 == -2) goto _L0;
      uVar5 = (uint)(iVar8 == iVar7);
    }
    FUN_000107f8(iVar3,1);
    FUN_00010804(iVar6,1);
_L0:
    FUN_00010814(iVar4,1);
    if (uVar5 != 1) {
      FUN_000108c4(iVar2,1);
      if (uVar5 != 0xffffffff) goto _L0;
      goto _L0;
    }
    if (unaff_s5 != 0) {
      FUN_000108e2(iVar2,1);
      goto _L0;
    }
    param_3 = 0x20;
    param_2 = 0;
    param_1 = &stack0x00000064;
    unaff_s5 = iVar2;
  } while( true );
}



int _LVL198(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int unaff_s0;
  byte unaff_s1;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_s2;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s10;
  int unaff_s11;
  undefined4 in_stack_00000004;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
code_r0x00010852:
  iVar2 = _LVL198(param_1,param_2,param_3,param_4);
  if (iVar2 < 0) goto _L0;
  iVar2 = FUN_00010868(unaff_s2,unaff_s7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),unaff_s2)
  ;
  if (iVar2 < 0) goto _L0;
  uVar4 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
  if ((unaff_s1 & 1) == 0) {
    iVar2 = FUN_000108b0(unaff_s2,uVar4,unaff_s2);
    if (iVar2 < 0) goto _L0;
    iVar2 = -1;
  }
  else {
    iVar3 = FUN_00010882(unaff_s2,uVar4,unaff_s2);
    iVar2 = 1;
    if (iVar3 < 0) goto _L0;
  }
  iVar3 = FUN_00010896(unaff_s2,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
  if (iVar3 == -2) goto _L0;
  uVar1 = (uint)(iVar3 == iVar2);
  param_1 = unaff_s10;
_L0:
  FUN_000107f8(unaff_s2,1);
  FUN_00010804(unaff_s7,1);
  while( true ) {
    FUN_00010814(param_1,1);
    if (uVar1 == 1) {
      if (unaff_s6 == 0) {
        FUN_00010832(&stack0x00000064,0,0x20);
        in_stack_0000002c = &stack0x00000044;
        unaff_s6 = unaff_s5;
      }
      else {
        FUN_000108e2(unaff_s5,1);
      }
    }
    else {
      FUN_000108c4(unaff_s5,1);
      if (uVar1 == 0xffffffff) break;
    }
    do {
      in_stack_0000001f += 1;
      if (0x28 < in_stack_0000001f) {
        if (unaff_s6 != 0) {
          iVar2 = *(int *)(unaff_s0 + 0x44);
          if (*(int *)(iVar2 + 0x34) == 0) {
            iVar3 = FUN_00010632();
            *(int *)(iVar2 + 0x34) = iVar3;
          }
          iVar2 = -1;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
            iVar2 = FUN_0001064a();
          }
          FUN_00010658();
          if (iVar2 < 0) {
            FUN_0001066c();
          }
          goto _L0;
        }
        if (200 < in_stack_0000001f) {
          FUN_000106a6();
          FUN_000106b6();
          goto _L0;
        }
      }
      FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                   &stack0x00000038,&stack0x00000064);
      uVar1 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
      iVar2 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar1);
      if (iVar2 < 0) goto _L0;
      uVar1 &= 7;
      if (uVar1 != 0) {
        FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - uVar1);
      }
      iVar2 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                           *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    } while (-1 < iVar2);
    unaff_s5 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (unaff_s5 == 0) break;
    param_1 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),unaff_s5);
    if (param_1 == 0) {
      _LVL168();
      break;
    }
    iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    while( true ) {
      do {
        FUN_0001078a(&stack0x0000010c,iVar2);
        if (uVar1 != 0) {
          FUN_0001079c(&stack0x0000010c,iVar2,unaff_s11 - uVar1);
        }
        iVar3 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
      } while (-1 < iVar3);
      param_2 = FUN_000107ba(&stack0x0000010c,iVar2);
      if (param_2 == 0) break;
      iVar3 = _L0();
      if (iVar3 == 0) {
        unaff_s1 = (&stack0x0000010b)[iVar2];
        param_4 = _L0();
        unaff_s2 = param_4;
        unaff_s7 = param_2;
        unaff_s10 = param_1;
        if (param_4 == 0) goto _L0;
        param_3 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
        goto code_r0x00010852;
      }
      FUN_000107d4(param_2,0);
    }
    uVar1 = 0xffffffff;
  }
_L0:
  iVar2 = -1;
_L0:
  FUN_000106c4();
  FUN_000106d0();
  return iVar2;
_L0:
  uVar1 = 0xffffffff;
  param_1 = unaff_s10;
  goto _L0;
}



int FUN_00010868(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int unaff_s0;
  byte unaff_s1;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_s2;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s10;
  int unaff_s11;
  undefined4 in_stack_00000004;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
code_r0x00010868:
  iVar2 = FUN_00010868(param_1,param_2,param_3,param_4);
  if (iVar2 < 0) goto _L0;
  uVar4 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
  if ((unaff_s1 & 1) == 0) {
    iVar2 = FUN_000108b0(unaff_s2,uVar4,unaff_s2);
    if (iVar2 < 0) goto _L0;
    iVar2 = -1;
  }
  else {
    iVar3 = FUN_00010882(unaff_s2,uVar4,unaff_s2);
    iVar2 = 1;
    if (iVar3 < 0) goto _L0;
  }
  iVar3 = FUN_00010896(unaff_s2,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
  if (iVar3 == -2) goto _L0;
  uVar1 = (uint)(iVar3 == iVar2);
_L0:
  FUN_000107f8(unaff_s2,1);
  FUN_00010804(unaff_s7,1);
  while( true ) {
    FUN_00010814(unaff_s10,1);
    if (uVar1 == 1) {
      if (unaff_s6 == 0) {
        FUN_00010832(&stack0x00000064,0,0x20);
        in_stack_0000002c = &stack0x00000044;
        unaff_s6 = unaff_s5;
      }
      else {
        FUN_000108e2(unaff_s5,1);
      }
    }
    else {
      FUN_000108c4(unaff_s5,1);
      if (uVar1 == 0xffffffff) break;
    }
    do {
      in_stack_0000001f += 1;
      if (0x28 < in_stack_0000001f) {
        if (unaff_s6 != 0) {
          iVar2 = *(int *)(unaff_s0 + 0x44);
          if (*(int *)(iVar2 + 0x34) == 0) {
            iVar3 = FUN_00010632();
            *(int *)(iVar2 + 0x34) = iVar3;
          }
          iVar2 = -1;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
            iVar2 = FUN_0001064a();
          }
          FUN_00010658();
          if (iVar2 < 0) {
            FUN_0001066c();
          }
          goto _L0;
        }
        if (200 < in_stack_0000001f) {
          FUN_000106a6();
          FUN_000106b6();
          goto _L0;
        }
      }
      FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                   &stack0x00000038,&stack0x00000064);
      uVar1 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
      iVar2 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar1);
      if (iVar2 < 0) goto _L0;
      uVar1 &= 7;
      if (uVar1 != 0) {
        FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - uVar1);
      }
      iVar2 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                           *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    } while (-1 < iVar2);
    unaff_s5 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (unaff_s5 == 0) break;
    unaff_s10 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),unaff_s5);
    if (unaff_s10 == 0) {
      _LVL168();
      break;
    }
    iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    while( true ) {
      do {
        FUN_0001078a(&stack0x0000010c,iVar2);
        if (uVar1 != 0) {
          FUN_0001079c(&stack0x0000010c,iVar2,unaff_s11 - uVar1);
        }
        iVar3 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
      } while (-1 < iVar3);
      param_2 = FUN_000107ba(&stack0x0000010c,iVar2);
      if (param_2 == 0) break;
      iVar3 = _L0();
      if (iVar3 == 0) {
        unaff_s1 = (&stack0x0000010b)[iVar2];
        param_1 = _L0();
        unaff_s2 = param_1;
        unaff_s7 = param_2;
        if ((param_1 == 0) ||
           (iVar2 = _LVL198(unaff_s10,param_2,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),
                            param_1), iVar2 < 0)) goto _L0;
        param_3 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
        param_4 = param_1;
        goto code_r0x00010868;
      }
      FUN_000107d4(param_2,0);
    }
    uVar1 = 0xffffffff;
  }
_L0:
  iVar2 = -1;
_L0:
  FUN_000106c4();
  FUN_000106d0();
  return iVar2;
_L0:
  uVar1 = 0xffffffff;
  goto _L0;
}



int FUN_00010882(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  uint uVar3;
  int iVar4;
  int unaff_s2;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s10;
  int unaff_s11;
  undefined4 in_stack_00000004;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
code_r0x00010882:
  iVar4 = FUN_00010882(param_1,param_2,param_3);
  iVar2 = 1;
  param_1 = unaff_s2;
  if (iVar4 < 0) goto _L0;
_L0:
  iVar4 = FUN_00010896(param_1,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
  if (iVar4 == -2) goto _L0;
  uVar3 = (uint)(iVar4 == iVar2);
_L0:
  FUN_000107f8(param_1,1);
  FUN_00010804(unaff_s7,1);
  while( true ) {
    FUN_00010814(unaff_s10,1);
    if (uVar3 == 1) {
      if (unaff_s6 == 0) {
        FUN_00010832(&stack0x00000064,0,0x20);
        in_stack_0000002c = &stack0x00000044;
        unaff_s6 = unaff_s5;
      }
      else {
        FUN_000108e2(unaff_s5,1);
      }
    }
    else {
      FUN_000108c4(unaff_s5,1);
      if (uVar3 == 0xffffffff) break;
    }
    do {
      in_stack_0000001f += 1;
      if (0x28 < in_stack_0000001f) {
        if (unaff_s6 != 0) {
          iVar2 = *(int *)(unaff_s0 + 0x44);
          if (*(int *)(iVar2 + 0x34) == 0) {
            iVar4 = FUN_00010632();
            *(int *)(iVar2 + 0x34) = iVar4;
          }
          iVar2 = -1;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
            iVar2 = FUN_0001064a();
          }
          FUN_00010658();
          if (iVar2 < 0) {
            FUN_0001066c();
          }
          goto _L0;
        }
        if (200 < in_stack_0000001f) {
          FUN_000106a6();
          FUN_000106b6();
          goto _L0;
        }
      }
      FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                   &stack0x00000038,&stack0x00000064);
      uVar3 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
      iVar2 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar3);
      if (iVar2 < 0) goto _L0;
      uVar3 &= 7;
      if (uVar3 != 0) {
        FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - uVar3);
      }
      iVar2 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                           *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    } while (-1 < iVar2);
    unaff_s5 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (unaff_s5 == 0) break;
    unaff_s10 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),unaff_s5);
    if (unaff_s10 == 0) {
      _LVL168();
      break;
    }
    iVar2 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    while( true ) {
      do {
        FUN_0001078a(&stack0x0000010c,iVar2);
        if (uVar3 != 0) {
          FUN_0001079c(&stack0x0000010c,iVar2,unaff_s11 - uVar3);
        }
        iVar4 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar2);
      } while (-1 < iVar4);
      unaff_s7 = FUN_000107ba(&stack0x0000010c,iVar2);
      if (unaff_s7 == 0) break;
      iVar4 = _L0();
      if (iVar4 == 0) {
        bVar1 = (&stack0x0000010b)[iVar2];
        param_1 = _L0();
        if (((param_1 == 0) ||
            (iVar2 = _LVL198(unaff_s10,unaff_s7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),
                             param_1), iVar2 < 0)) ||
           (iVar2 = FUN_00010868(param_1,unaff_s7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),
                                 param_1), iVar2 < 0)) goto _L0;
        param_2 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
        param_3 = param_1;
        unaff_s2 = param_1;
        if ((bVar1 & 1) != 0) goto code_r0x00010882;
        iVar2 = FUN_000108b0(param_1,param_2,param_1);
        if (iVar2 < 0) goto _L0;
        iVar2 = -1;
        goto _L0;
      }
      FUN_000107d4(unaff_s7,0);
    }
    uVar3 = 0xffffffff;
  }
_L0:
  iVar2 = -1;
_L0:
  FUN_000106c4();
  FUN_000106d0();
  return iVar2;
_L0:
  uVar3 = 0xffffffff;
  goto _L0;
}



int FUN_00010896(int param_1,undefined4 param_2)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_s2;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s10;
  int unaff_s11;
  undefined4 in_stack_00000004;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
code_r0x00010896:
  iVar4 = FUN_00010896(param_1,param_2);
  param_1 = unaff_s2;
  if (iVar4 == -2) goto _L0;
  uVar2 = (uint)(iVar4 == unaff_s1);
_L0:
  FUN_000107f8(param_1,1);
  FUN_00010804(unaff_s7,1);
  while( true ) {
    FUN_00010814(unaff_s10,1);
    if (uVar2 == 1) {
      if (unaff_s6 == 0) {
        FUN_00010832(&stack0x00000064,0,0x20);
        in_stack_0000002c = &stack0x00000044;
        unaff_s6 = unaff_s5;
      }
      else {
        FUN_000108e2(unaff_s5,1);
      }
    }
    else {
      FUN_000108c4(unaff_s5,1);
      if (uVar2 == 0xffffffff) break;
    }
    do {
      in_stack_0000001f += 1;
      if (0x28 < in_stack_0000001f) {
        if (unaff_s6 != 0) {
          iVar4 = *(int *)(unaff_s0 + 0x44);
          if (*(int *)(iVar4 + 0x34) == 0) {
            iVar3 = FUN_00010632();
            *(int *)(iVar4 + 0x34) = iVar3;
          }
          iVar4 = -1;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
            iVar4 = FUN_0001064a();
          }
          FUN_00010658();
          if (iVar4 < 0) {
            FUN_0001066c();
          }
          goto _L0;
        }
        if (200 < in_stack_0000001f) {
          FUN_000106a6();
          FUN_000106b6();
          goto _L0;
        }
      }
      FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                   &stack0x00000038,&stack0x00000064);
      uVar2 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
      iVar4 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar2);
      if (iVar4 < 0) goto _L0;
      uVar2 &= 7;
      if (uVar2 != 0) {
        FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - uVar2);
      }
      iVar4 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                           *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    } while (-1 < iVar4);
    unaff_s5 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (unaff_s5 == 0) break;
    unaff_s10 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),unaff_s5);
    if (unaff_s10 == 0) {
      _LVL168();
      break;
    }
    iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    while( true ) {
      do {
        FUN_0001078a(&stack0x0000010c,iVar4);
        if (uVar2 != 0) {
          FUN_0001079c(&stack0x0000010c,iVar4,unaff_s11 - uVar2);
        }
        iVar3 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar4);
      } while (-1 < iVar3);
      unaff_s7 = FUN_000107ba(&stack0x0000010c,iVar4);
      if (unaff_s7 == 0) break;
      iVar3 = _L0();
      if (iVar3 == 0) {
        bVar1 = (&stack0x0000010b)[iVar4];
        param_1 = _L0();
        if (((param_1 == 0) ||
            (iVar4 = _LVL198(unaff_s10,unaff_s7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),
                             param_1), iVar4 < 0)) ||
           (iVar4 = FUN_00010868(param_1,unaff_s7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),
                                 param_1), iVar4 < 0)) goto _L0;
        uVar5 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
        if ((bVar1 & 1) == 0) {
          iVar4 = FUN_000108b0(param_1,uVar5,param_1);
          if (iVar4 < 0) goto _L0;
          unaff_s1 = -1;
        }
        else {
          iVar4 = FUN_00010882(param_1,uVar5,param_1);
          unaff_s1 = 1;
          if (iVar4 < 0) goto _L0;
        }
        param_2 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
        unaff_s2 = param_1;
        goto code_r0x00010896;
      }
      FUN_000107d4(unaff_s7,0);
    }
    uVar2 = 0xffffffff;
  }
_L0:
  iVar4 = -1;
_L0:
  FUN_000106c4();
  FUN_000106d0();
  return iVar4;
_L0:
  uVar2 = 0xffffffff;
  goto _L0;
}



int FUN_000108b0(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int unaff_s0;
  uint uVar2;
  int iVar3;
  int iVar4;
  int unaff_s2;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s10;
  int unaff_s11;
  undefined4 in_stack_00000004;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
code_r0x000108b0:
  iVar4 = FUN_000108b0(param_1,param_2,param_3);
  param_1 = unaff_s2;
  if (iVar4 < 0) goto _L0;
  iVar4 = -1;
_L0:
  iVar3 = FUN_00010896(param_1,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
  if (iVar3 == -2) goto _L0;
  uVar2 = (uint)(iVar3 == iVar4);
_L0:
  FUN_000107f8(param_1,1);
  FUN_00010804(unaff_s7,1);
  while( true ) {
    FUN_00010814(unaff_s10,1);
    if (uVar2 == 1) {
      if (unaff_s6 == 0) {
        FUN_00010832(&stack0x00000064,0,0x20);
        in_stack_0000002c = &stack0x00000044;
        unaff_s6 = unaff_s5;
      }
      else {
        FUN_000108e2(unaff_s5,1);
      }
    }
    else {
      FUN_000108c4(unaff_s5,1);
      if (uVar2 == 0xffffffff) break;
    }
    do {
      in_stack_0000001f += 1;
      if (0x28 < in_stack_0000001f) {
        if (unaff_s6 != 0) {
          iVar4 = *(int *)(unaff_s0 + 0x44);
          if (*(int *)(iVar4 + 0x34) == 0) {
            iVar3 = FUN_00010632();
            *(int *)(iVar4 + 0x34) = iVar3;
          }
          iVar4 = -1;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
            iVar4 = FUN_0001064a();
          }
          FUN_00010658();
          if (iVar4 < 0) {
            FUN_0001066c();
          }
          goto _L0;
        }
        if (200 < in_stack_0000001f) {
          FUN_000106a6();
          FUN_000106b6();
          goto _L0;
        }
      }
      FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                   &stack0x00000038,&stack0x00000064);
      uVar2 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
      iVar4 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar2);
      if (iVar4 < 0) goto _L0;
      uVar2 &= 7;
      if (uVar2 != 0) {
        FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - uVar2);
      }
      iVar4 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                           *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    } while (-1 < iVar4);
    unaff_s5 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (unaff_s5 == 0) break;
    unaff_s10 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),unaff_s5);
    if (unaff_s10 == 0) {
      _LVL168();
      break;
    }
    iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    while( true ) {
      do {
        FUN_0001078a(&stack0x0000010c,iVar4);
        if (uVar2 != 0) {
          FUN_0001079c(&stack0x0000010c,iVar4,unaff_s11 - uVar2);
        }
        iVar3 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar4);
      } while (-1 < iVar3);
      unaff_s7 = FUN_000107ba(&stack0x0000010c,iVar4);
      if (unaff_s7 == 0) break;
      iVar3 = _L0();
      if (iVar3 == 0) {
        bVar1 = (&stack0x0000010b)[iVar4];
        param_1 = _L0();
        if (((param_1 == 0) ||
            (iVar4 = _LVL198(unaff_s10,unaff_s7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),
                             param_1), iVar4 < 0)) ||
           (iVar4 = FUN_00010868(param_1,unaff_s7,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),
                                 param_1), iVar4 < 0)) goto _L0;
        param_2 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
        param_3 = param_1;
        unaff_s2 = param_1;
        if ((bVar1 & 1) == 0) goto code_r0x000108b0;
        iVar3 = FUN_00010882(param_1,param_2,param_1);
        iVar4 = 1;
        if (iVar3 < 0) goto _L0;
        goto _L0;
      }
      FUN_000107d4(unaff_s7,0);
    }
    uVar2 = 0xffffffff;
  }
_L0:
  iVar4 = -1;
_L0:
  FUN_000106c4();
  FUN_000106d0();
  return iVar4;
_L0:
  uVar2 = 0xffffffff;
  goto _L0;
}



int FUN_000108c4(int param_1,undefined4 param_2)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  uint unaff_s1;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int unaff_s6;
  int unaff_s11;
  undefined4 in_stack_00000004;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
  do {
    FUN_000108c4(param_1,param_2);
    if (unaff_s1 == 0xffffffff) {
_L0:
      iVar2 = -1;
_L0:
      FUN_000106c4();
      FUN_000106d0();
      return iVar2;
    }
_L0:
    do {
      in_stack_0000001f += 1;
      if (0x28 < in_stack_0000001f) {
        if (unaff_s6 != 0) {
          iVar2 = *(int *)(unaff_s0 + 0x44);
          if (*(int *)(iVar2 + 0x34) == 0) {
            iVar3 = FUN_00010632();
            *(int *)(iVar2 + 0x34) = iVar3;
          }
          iVar2 = -1;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
            iVar2 = FUN_0001064a();
          }
          FUN_00010658();
          if (iVar2 < 0) {
            FUN_0001066c();
          }
          goto _L0;
        }
        if (200 < in_stack_0000001f) {
          FUN_000106a6();
          FUN_000106b6();
          goto _L0;
        }
      }
      FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                   &stack0x00000038,&stack0x00000064);
      uVar4 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
      iVar2 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar4);
      if (iVar2 < 0) goto _L0;
      uVar4 &= 7;
      if (uVar4 != 0) {
        FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - uVar4);
      }
      iVar2 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                           *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    } while (-1 < iVar2);
    param_1 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (param_1 == 0) goto _L0;
    iVar2 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),param_1);
    if (iVar2 == 0) {
      _LVL168();
      goto _L0;
    }
    iVar3 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    while( true ) {
      do {
        FUN_0001078a(&stack0x0000010c,iVar3);
        if (uVar4 != 0) {
          FUN_0001079c(&stack0x0000010c,iVar3,unaff_s11 - uVar4);
        }
        iVar5 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar3);
      } while (-1 < iVar5);
      iVar5 = FUN_000107ba(&stack0x0000010c,iVar3);
      if (iVar5 == 0) {
        unaff_s1 = 0xffffffff;
        goto _L0;
      }
      iVar6 = _L0();
      if (iVar6 == 0) break;
      FUN_000107d4(iVar5,0);
    }
    bVar1 = (&stack0x0000010b)[iVar3];
    iVar3 = _L0();
    if (((iVar3 == 0) ||
        (iVar6 = _LVL198(iVar2,iVar5,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar3),
        iVar6 < 0)) ||
       (iVar6 = FUN_00010868(iVar3,iVar5,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar3),
       iVar6 < 0)) {
_L0:
      unaff_s1 = 0xffffffff;
    }
    else {
      uVar8 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
      if ((bVar1 & 1) == 0) {
        iVar6 = FUN_000108b0(iVar3,uVar8,iVar3);
        if (-1 < iVar6) {
          iVar6 = -1;
          goto _L0;
        }
        goto _L0;
      }
      iVar7 = FUN_00010882(iVar3,uVar8,iVar3);
      iVar6 = 1;
      if (iVar7 < 0) goto _L0;
_L0:
      iVar7 = FUN_00010896(iVar3,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
      if (iVar7 == -2) goto _L0;
      unaff_s1 = (uint)(iVar7 == iVar6);
    }
    FUN_000107f8(iVar3,1);
    FUN_00010804(iVar5,1);
_L0:
    FUN_00010814(iVar2,1);
    if (unaff_s1 == 1) {
      if (unaff_s6 == 0) {
        FUN_00010832(&stack0x00000064,0,0x20);
        in_stack_0000002c = &stack0x00000044;
        unaff_s6 = param_1;
      }
      else {
        FUN_000108e2(param_1,1);
      }
      goto _L0;
    }
    param_2 = 1;
  } while( true );
}



int FUN_000108e2(int param_1,undefined4 param_2)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int unaff_s6;
  int unaff_s11;
  undefined4 in_stack_00000004;
  byte in_stack_0000001f;
  undefined *in_stack_0000002c;
  
  do {
    FUN_000108e2(param_1,param_2);
_L0:
    do {
      in_stack_0000001f += 1;
      if (0x28 < in_stack_0000001f) {
        if (unaff_s6 != 0) {
          iVar2 = *(int *)(unaff_s0 + 0x44);
          if (*(int *)(iVar2 + 0x34) == 0) {
            iVar3 = FUN_00010632();
            *(int *)(iVar2 + 0x34) = iVar3;
          }
          iVar2 = -1;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x34) != 0) {
            iVar2 = FUN_0001064a();
          }
          FUN_00010658();
          if (iVar2 < 0) {
            FUN_0001066c();
          }
          goto _L0;
        }
        if (in_stack_0000001f < 0xc9) goto _L0;
        FUN_000106a6();
        FUN_000106b6();
        goto _L0;
      }
_L0:
      FUN_000106e6(&stack0x00000020,0xc,in_stack_00000004,(undefined4 *)&stack0x0000002c,
                   &stack0x00000038,&stack0x00000064);
      uVar4 = FUN_000106f2(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40));
      iVar2 = _LVL157(&stack0x00000064,0,&stack0x00000084,
                      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44),&stack0x000000c8,uVar4);
      if (iVar2 < 0) goto _L0;
      uVar4 &= 7;
      if (uVar4 != 0) {
        FUN_0001072e(&stack0x000000c8,0x42,unaff_s11 - uVar4);
      }
      iVar2 = FUN_0001073e(&stack0x000000c8,&stack0x00000084,
                           *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    } while (-1 < iVar2);
    param_1 = FUN_00010750(&stack0x000000c8,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x44));
    if (param_1 == 0) goto _L0;
    iVar2 = _LVL165(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x40),param_1);
    if (iVar2 == 0) {
      _LVL168();
_L0:
      iVar2 = -1;
_L0:
      FUN_000106c4();
      FUN_000106d0();
      return iVar2;
    }
    iVar3 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    while( true ) {
      do {
        FUN_0001078a(&stack0x0000010c,iVar3);
        if (uVar4 != 0) {
          FUN_0001079c(&stack0x0000010c,iVar3,unaff_s11 - uVar4);
        }
        iVar5 = FUN_000107aa(&stack0x0000010c,&stack0x00000084,iVar3);
      } while (-1 < iVar5);
      iVar5 = FUN_000107ba(&stack0x0000010c,iVar3);
      if (iVar5 == 0) {
        uVar4 = 0xffffffff;
        goto _L0;
      }
      iVar6 = _L0();
      if (iVar6 == 0) break;
      FUN_000107d4(iVar5,0);
    }
    bVar1 = (&stack0x0000010b)[iVar3];
    iVar3 = _L0();
    if (((iVar3 == 0) ||
        (iVar6 = _LVL198(iVar2,iVar5,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar3),
        iVar6 < 0)) ||
       (iVar6 = FUN_00010868(iVar3,iVar5,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c),iVar3),
       iVar6 < 0)) {
_L0:
      uVar4 = 0xffffffff;
    }
    else {
      uVar8 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c);
      if ((bVar1 & 1) == 0) {
        iVar6 = FUN_000108b0(iVar3,uVar8,iVar3);
        if (-1 < iVar6) {
          iVar6 = -1;
          goto _L0;
        }
        goto _L0;
      }
      iVar7 = FUN_00010882(iVar3,uVar8,iVar3);
      iVar6 = 1;
      if (iVar7 < 0) goto _L0;
_L0:
      iVar7 = FUN_00010896(iVar3,*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x4c));
      if (iVar7 == -2) goto _L0;
      uVar4 = (uint)(iVar7 == iVar6);
    }
    FUN_000107f8(iVar3,1);
    FUN_00010804(iVar5,1);
_L0:
    FUN_00010814(iVar2,1);
    if (uVar4 != 1) {
      FUN_000108c4(param_1,1);
      if (uVar4 != 0xffffffff) goto _L0;
      goto _L0;
    }
    if (unaff_s6 == 0) {
      FUN_00010832(&stack0x00000064,0,0x20);
      in_stack_0000002c = &stack0x00000044;
      unaff_s6 = param_1;
      goto _L0;
    }
    param_2 = 1;
  } while( true );
}



// DWARF DIE: 37c4

void wpabuf_clear_free(wpabuf *buf)

{
  if (buf != (wpabuf *)0x0) {
    _LVL218();
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void _LVL218(void)

{
  _LVL218();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 3f22

void bin_clear_free(void *bin,size_t len)

{
  if (bin == (void *)0x0) {
    return;
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



// DWARF DIE: 359e

void sae_clear_temp_data(sae_data *sae)

{
  if (sae != (sae_data *)0x0) {
    if (sae->tmp != (sae_temporary_data *)0x0) {
      _LVL230();
      FUN_00010964();
      FUN_00010970();
      FUN_0001097c();
      FUN_00010988();
      FUN_00010994();
      FUN_000109a0();
      FUN_000109ac();
      FUN_000109b8();
      FUN_000109c4();
      FUN_000109d0();
      FUN_000109da();
      FUN_000109e4();
      FUN_000109f2();
      sae->tmp = (sae_temporary_data *)0x0;
    }
    return;
  }
  return;
}



void _LVL230(void)

{
  int unaff_s1;
  
  _LVL230();
  FUN_00010964();
  FUN_00010970();
  FUN_0001097c();
  FUN_00010988();
  FUN_00010994();
  FUN_000109a0();
  FUN_000109ac();
  FUN_000109b8();
  FUN_000109c4();
  FUN_000109d0();
  FUN_000109da();
  FUN_000109e4();
  FUN_000109f2();
  *(undefined4 *)(unaff_s1 + 0x44) = 0;
  return;
}



void FUN_00010964(void)

{
  int unaff_s1;
  
  FUN_00010964();
  FUN_00010970();
  FUN_0001097c();
  FUN_00010988();
  FUN_00010994();
  FUN_000109a0();
  FUN_000109ac();
  FUN_000109b8();
  FUN_000109c4();
  FUN_000109d0();
  FUN_000109da();
  FUN_000109e4();
  FUN_000109f2();
  *(undefined4 *)(unaff_s1 + 0x44) = 0;
  return;
}



void FUN_00010970(void)

{
  int unaff_s1;
  
  FUN_00010970();
  FUN_0001097c();
  FUN_00010988();
  FUN_00010994();
  FUN_000109a0();
  FUN_000109ac();
  FUN_000109b8();
  FUN_000109c4();
  FUN_000109d0();
  FUN_000109da();
  FUN_000109e4();
  FUN_000109f2();
  *(undefined4 *)(unaff_s1 + 0x44) = 0;
  return;
}



void FUN_0001097c(void)

{
  int unaff_s1;
  
  FUN_0001097c();
  FUN_00010988();
  FUN_00010994();
  FUN_000109a0();
  FUN_000109ac();
  FUN_000109b8();
  FUN_000109c4();
  FUN_000109d0();
  FUN_000109da();
  FUN_000109e4();
  FUN_000109f2();
  *(undefined4 *)(unaff_s1 + 0x44) = 0;
  return;
}



void FUN_00010988(void)

{
  int unaff_s1;
  
  FUN_00010988();
  FUN_00010994();
  FUN_000109a0();
  FUN_000109ac();
  FUN_000109b8();
  FUN_000109c4();
  FUN_000109d0();
  FUN_000109da();
  FUN_000109e4();
  FUN_000109f2();
  *(undefined4 *)(unaff_s1 + 0x44) = 0;
  return;
}



void FUN_00010994(void)

{
  int unaff_s1;
  
  FUN_00010994();
  FUN_000109a0();
  FUN_000109ac();
  FUN_000109b8();
  FUN_000109c4();
  FUN_000109d0();
  FUN_000109da();
  FUN_000109e4();
  FUN_000109f2();
  *(undefined4 *)(unaff_s1 + 0x44) = 0;
  return;
}



void FUN_000109a0(void)

{
  int unaff_s1;
  
  FUN_000109a0();
  FUN_000109ac();
  FUN_000109b8();
  FUN_000109c4();
  FUN_000109d0();
  FUN_000109da();
  FUN_000109e4();
  FUN_000109f2();
  *(undefined4 *)(unaff_s1 + 0x44) = 0;
  return;
}



void FUN_000109ac(void)

{
  int unaff_s1;
  
  FUN_000109ac();
  FUN_000109b8();
  FUN_000109c4();
  FUN_000109d0();
  FUN_000109da();
  FUN_000109e4();
  FUN_000109f2();
  *(undefined4 *)(unaff_s1 + 0x44) = 0;
  return;
}



void FUN_000109b8(void)

{
  int unaff_s1;
  
  FUN_000109b8();
  FUN_000109c4();
  FUN_000109d0();
  FUN_000109da();
  FUN_000109e4();
  FUN_000109f2();
  *(undefined4 *)(unaff_s1 + 0x44) = 0;
  return;
}



void FUN_000109c4(void)

{
  int unaff_s1;
  
  FUN_000109c4();
  FUN_000109d0();
  FUN_000109da();
  FUN_000109e4();
  FUN_000109f2();
  *(undefined4 *)(unaff_s1 + 0x44) = 0;
  return;
}



void FUN_000109d0(void)

{
  int unaff_s1;
  
  FUN_000109d0();
  FUN_000109da();
  FUN_000109e4();
  FUN_000109f2();
  *(undefined4 *)(unaff_s1 + 0x44) = 0;
  return;
}



void FUN_000109da(void)

{
  int unaff_s1;
  
  FUN_000109da();
  FUN_000109e4();
  FUN_000109f2();
  *(undefined4 *)(unaff_s1 + 0x44) = 0;
  return;
}



void FUN_000109e4(void)

{
  int unaff_s1;
  
  FUN_000109e4();
  FUN_000109f2();
  *(undefined4 *)(unaff_s1 + 0x44) = 0;
  return;
}



void FUN_000109f2(void)

{
  int unaff_s1;
  
  FUN_000109f2();
  *(undefined4 *)(unaff_s1 + 0x44) = 0;
  return;
}



// DWARF DIE: 3f9c

void sae_clear_data(sae_data *sae)

{
  if (sae == (sae_data *)0x0) {
    return;
  }
  _L0();
  FUN_00010a20();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  FUN_00010a20();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010a20(void)

{
  FUN_00010a20();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 36c4

sint32 sae_set_group(sae_data *sae,sint32 group)

{
  sae_temporary_data *psVar1;
  crypto_ec *pcVar2;
  sint32 sVar3;
  crypto_bignum *pcVar4;
  
  _L0();
  psVar1 = (sae_temporary_data *)FUN_00010a5a();
  sae->tmp = psVar1;
  if (psVar1 != (sae_temporary_data *)0x0) {
    _L0();
    pcVar2 = (crypto_ec *)FUN_00010a7a();
    psVar1->ec = pcVar2;
    if (pcVar2 != (crypto_ec *)0x0) {
      sae->group = group;
      sVar3 = FUN_00010a8c();
      psVar1->prime_len = sVar3;
      pcVar4 = (crypto_bignum *)FUN_00010a98();
      psVar1->prime = pcVar4;
      pcVar4 = (crypto_bignum *)FUN_00010aa4();
      psVar1->order = pcVar4;
      return 0;
    }
    FUN_00010ac6();
  }
  return -1;
}



undefined4 _L0(void)

{
  undefined4 unaff_s1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_s2;
  
  _L0();
  iVar1 = FUN_00010a5a();
  *(int *)(unaff_s2 + 0x44) = iVar1;
  if (iVar1 != 0) {
    _L0();
    iVar2 = FUN_00010a7a();
    *(int *)(iVar1 + 0x40) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(unaff_s2 + 0x38) = unaff_s1;
      uVar3 = FUN_00010a8c();
      *(undefined4 *)(iVar1 + 0x44) = uVar3;
      uVar3 = FUN_00010a98();
      *(undefined4 *)(iVar1 + 0x4c) = uVar3;
      uVar3 = FUN_00010aa4();
      *(undefined4 *)(iVar1 + 0x50) = uVar3;
      return 0;
    }
    FUN_00010ac6();
  }
  return 0xffffffff;
}



undefined4 FUN_00010a5a(void)

{
  undefined4 unaff_s1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_s2;
  
  iVar1 = FUN_00010a5a();
  *(int *)(unaff_s2 + 0x44) = iVar1;
  if (iVar1 != 0) {
    _L0();
    iVar2 = FUN_00010a7a();
    *(int *)(iVar1 + 0x40) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(unaff_s2 + 0x38) = unaff_s1;
      uVar3 = FUN_00010a8c();
      *(undefined4 *)(iVar1 + 0x44) = uVar3;
      uVar3 = FUN_00010a98();
      *(undefined4 *)(iVar1 + 0x4c) = uVar3;
      uVar3 = FUN_00010aa4();
      *(undefined4 *)(iVar1 + 0x50) = uVar3;
      return 0;
    }
    FUN_00010ac6();
  }
  return 0xffffffff;
}



undefined4 _L0(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int unaff_s2;
  
  _L0();
  iVar1 = FUN_00010a7a();
  *(int *)(unaff_s0 + 0x40) = iVar1;
  if (iVar1 == 0) {
    FUN_00010ac6();
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(unaff_s2 + 0x38) = unaff_s1;
    uVar2 = FUN_00010a8c();
    *(undefined4 *)(unaff_s0 + 0x44) = uVar2;
    uVar2 = FUN_00010a98();
    *(undefined4 *)(unaff_s0 + 0x4c) = uVar2;
    uVar2 = FUN_00010aa4();
    *(undefined4 *)(unaff_s0 + 0x50) = uVar2;
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_00010a7a(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  int iVar1;
  undefined4 uVar2;
  int unaff_s2;
  
  iVar1 = FUN_00010a7a();
  *(int *)(unaff_s0 + 0x40) = iVar1;
  if (iVar1 == 0) {
    FUN_00010ac6();
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)(unaff_s2 + 0x38) = unaff_s1;
    uVar2 = FUN_00010a8c();
    *(undefined4 *)(unaff_s0 + 0x44) = uVar2;
    uVar2 = FUN_00010a98();
    *(undefined4 *)(unaff_s0 + 0x4c) = uVar2;
    uVar2 = FUN_00010aa4();
    *(undefined4 *)(unaff_s0 + 0x50) = uVar2;
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_00010a8c(void)

{
  int unaff_s0;
  undefined4 uVar1;
  
  uVar1 = FUN_00010a8c();
  *(undefined4 *)(unaff_s0 + 0x44) = uVar1;
  uVar1 = FUN_00010a98();
  *(undefined4 *)(unaff_s0 + 0x4c) = uVar1;
  uVar1 = FUN_00010aa4();
  *(undefined4 *)(unaff_s0 + 0x50) = uVar1;
  return 0;
}



undefined4 FUN_00010a98(void)

{
  int unaff_s0;
  undefined4 uVar1;
  
  uVar1 = FUN_00010a98();
  *(undefined4 *)(unaff_s0 + 0x4c) = uVar1;
  uVar1 = FUN_00010aa4();
  *(undefined4 *)(unaff_s0 + 0x50) = uVar1;
  return 0;
}



undefined4 FUN_00010aa4(void)

{
  int unaff_s0;
  undefined4 uVar1;
  
  uVar1 = FUN_00010aa4();
  *(undefined4 *)(unaff_s0 + 0x50) = uVar1;
  return 0;
}



undefined4 FUN_00010ac6(void)

{
  FUN_00010ac6();
  return 0xffffffff;
}



// DWARF DIE: 26f5

sint32 sae_prepare_commit(uint8 *addr1,uint8 *addr2,uint8 *password,size_t password_len,
                         char *identifier,sae_data *sae)

{
  sae_temporary_data *psVar1;
  crypto_bignum *pcVar2;
  int iVar3;
  crypto_ec_point *pcVar4;
  int iVar5;
  
  if (sae->tmp == (sae_temporary_data *)0x0) {
    return -1;
  }
  if ((sae->tmp->ec != (crypto_ec *)0x0) && (iVar5 = FUN_00010b42(), iVar5 < 0)) {
    return -1;
  }
  iVar5 = 0x65;
  do {
    iVar5 += -1;
    if (iVar5 == 0) {
      return -1;
    }
    FUN_00010b12(sae->tmp->sae_rand,1);
    psVar1 = sae->tmp;
    pcVar2 = (crypto_bignum *)FUN_00010b1e();
    psVar1->sae_rand = pcVar2;
    if ((sae->tmp->sae_rand == (crypto_bignum *)0x0) || (iVar3 = FUN_00010b62(), iVar3 == 0)) {
      FUN_00010b36();
      return -1;
    }
    psVar1 = sae->tmp;
    if (psVar1->own_commit_scalar == (crypto_bignum *)0x0) {
      pcVar2 = (crypto_bignum *)_L0();
      psVar1->own_commit_scalar = pcVar2;
      if (sae->tmp->own_commit_scalar == (crypto_bignum *)0x0) goto _L0;
    }
    FUN_00010b7c(sae->tmp->sae_rand,iVar3,sae->tmp->own_commit_scalar);
    FUN_00010b8c(sae->tmp->own_commit_scalar,sae->tmp->order);
    iVar3 = FUN_00010b98(sae->tmp->own_commit_scalar);
  } while ((iVar3 != 0) || (iVar3 = FUN_00010ba6(sae->tmp->own_commit_scalar), iVar3 != 0));
  psVar1 = sae->tmp;
  if (psVar1->ec == (crypto_ec *)0x0) goto _L0;
  if (psVar1->own_commit_element_ecc == (crypto_ec_point *)0x0) {
    pcVar4 = (crypto_ec_point *)_L0();
    psVar1->own_commit_element_ecc = pcVar4;
    if (sae->tmp->own_commit_element_ecc != (crypto_ec_point *)0x0) goto _L0;
  }
  else {
_L0:
    iVar5 = FUN_00010bcc();
    if ((-1 < iVar5) && (iVar5 = FUN_00010c30(), -1 < iVar5)) goto _L0;
    FUN_00010be0();
  }
_L0:
  iVar3 = -1;
_L0:
  FUN_00010c00();
  return -(uint)(iVar3 == -1);
}



int FUN_00010b12(undefined4 param_1,undefined4 param_2)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_s3;
  
  while( true ) {
    FUN_00010b12(param_1,param_2);
    iVar1 = *(int *)(unaff_s0 + 0x44);
    iVar2 = FUN_00010b1e();
    *(int *)(iVar1 + 0x3c) = iVar2;
    if ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x3c) == 0) || (iVar1 = FUN_00010b62(), iVar1 == 0)) {
      FUN_00010b36();
      return -1;
    }
    iVar2 = *(int *)(unaff_s0 + 0x44);
    if (*(int *)(iVar2 + 0x20) == 0) break;
_L0:
    FUN_00010b7c(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x3c),iVar1,
                 *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20));
    FUN_00010b8c(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20),
                 *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x50));
    iVar1 = FUN_00010b98(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20));
    if ((iVar1 == 0) &&
       (iVar1 = FUN_00010ba6(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20)), iVar1 == 0)) {
      iVar2 = *(int *)(unaff_s0 + 0x44);
      if (*(int *)(iVar2 + 0x40) == 0) goto _L0;
      if (*(int *)(iVar2 + 0x28) == 0) {
        iVar3 = _L0();
        *(int *)(iVar2 + 0x28) = iVar3;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) == 0) goto _L0;
      }
      iVar2 = FUN_00010bcc();
      if ((-1 < iVar2) && (iVar2 = FUN_00010c30(), -1 < iVar2)) goto _L0;
      FUN_00010be0();
      goto _L0;
    }
    unaff_s3 += -1;
    if (unaff_s3 == 0) {
      return -1;
    }
    param_2 = 1;
    param_1 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x3c);
  }
  iVar3 = _L0();
  *(int *)(iVar2 + 0x20) = iVar3;
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) goto _L0;
_L0:
  iVar1 = -1;
_L0:
  FUN_00010c00();
  return -(uint)(iVar1 == -1);
}



int FUN_00010b1e(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_s3;
  
  while( true ) {
    iVar2 = FUN_00010b1e();
    *(int *)(unaff_s1 + 0x3c) = iVar2;
    if ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x3c) == 0) || (iVar2 = FUN_00010b62(), iVar2 == 0)) {
      FUN_00010b36();
      return -1;
    }
    iVar1 = *(int *)(unaff_s0 + 0x44);
    if (*(int *)(iVar1 + 0x20) == 0) break;
_L0:
    FUN_00010b7c(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x3c),iVar2,
                 *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20));
    FUN_00010b8c(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20),
                 *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x50));
    iVar2 = FUN_00010b98(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20));
    if ((iVar2 == 0) &&
       (iVar2 = FUN_00010ba6(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20)), iVar2 == 0)) {
      iVar1 = *(int *)(unaff_s0 + 0x44);
      if (*(int *)(iVar1 + 0x40) == 0) goto _L0;
      if (*(int *)(iVar1 + 0x28) == 0) {
        iVar3 = _L0();
        *(int *)(iVar1 + 0x28) = iVar3;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) == 0) goto _L0;
      }
      iVar1 = FUN_00010bcc();
      if ((-1 < iVar1) && (iVar1 = FUN_00010c30(), -1 < iVar1)) goto _L0;
      FUN_00010be0();
      goto _L0;
    }
    unaff_s3 += -1;
    if (unaff_s3 == 0) {
      return -1;
    }
    FUN_00010b12(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x3c),1);
    unaff_s1 = *(int *)(unaff_s0 + 0x44);
  }
  iVar3 = _L0();
  *(int *)(iVar1 + 0x20) = iVar3;
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) goto _L0;
_L0:
  iVar2 = -1;
_L0:
  FUN_00010c00();
  return -(uint)(iVar2 == -1);
}



undefined4 FUN_00010b36(void)

{
  FUN_00010b36();
  return 0xffffffff;
}



int FUN_00010b42(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_00010b42();
  if (iVar3 < 0) {
    return -1;
  }
  iVar3 = 0x65;
  do {
    iVar3 += -1;
    if (iVar3 == 0) {
      return -1;
    }
    FUN_00010b12(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x3c),1);
    iVar1 = *(int *)(unaff_s0 + 0x44);
    iVar2 = FUN_00010b1e();
    *(int *)(iVar1 + 0x3c) = iVar2;
    if ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x3c) == 0) || (iVar1 = FUN_00010b62(), iVar1 == 0)) {
      FUN_00010b36();
      return -1;
    }
    iVar2 = *(int *)(unaff_s0 + 0x44);
    if (*(int *)(iVar2 + 0x20) == 0) {
      iVar4 = _L0();
      *(int *)(iVar2 + 0x20) = iVar4;
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) == 0) goto _L0;
    }
    FUN_00010b7c(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x3c),iVar1,
                 *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20));
    FUN_00010b8c(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20),
                 *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x50));
    iVar1 = FUN_00010b98(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20));
  } while ((iVar1 != 0) ||
          (iVar1 = FUN_00010ba6(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20)), iVar1 != 0));
  iVar3 = *(int *)(unaff_s0 + 0x44);
  if (*(int *)(iVar3 + 0x40) == 0) goto _L0;
  if (*(int *)(iVar3 + 0x28) == 0) {
    iVar2 = _L0();
    *(int *)(iVar3 + 0x28) = iVar2;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) goto _L0;
  }
  else {
_L0:
    iVar3 = FUN_00010bcc();
    if ((-1 < iVar3) && (iVar3 = FUN_00010c30(), -1 < iVar3)) goto _L0;
    FUN_00010be0();
  }
_L0:
  iVar1 = -1;
_L0:
  FUN_00010c00();
  return -(uint)(iVar1 == -1);
}



int FUN_00010b62(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_s3;
  
  do {
    iVar2 = FUN_00010b62();
    if (iVar2 == 0) break;
    iVar1 = *(int *)(unaff_s0 + 0x44);
    if (*(int *)(iVar1 + 0x20) == 0) {
      iVar3 = _L0();
      *(int *)(iVar1 + 0x20) = iVar3;
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) goto _L0;
_L0:
      iVar2 = -1;
_L0:
      FUN_00010c00();
      return -(uint)(iVar2 == -1);
    }
_L0:
    FUN_00010b7c(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x3c),iVar2,
                 *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20));
    FUN_00010b8c(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20),
                 *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x50));
    iVar2 = FUN_00010b98(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20));
    if ((iVar2 == 0) &&
       (iVar2 = FUN_00010ba6(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20)), iVar2 == 0)) {
      iVar1 = *(int *)(unaff_s0 + 0x44);
      if (*(int *)(iVar1 + 0x40) == 0) goto _L0;
      if (*(int *)(iVar1 + 0x28) == 0) {
        iVar3 = _L0();
        *(int *)(iVar1 + 0x28) = iVar3;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) == 0) goto _L0;
      }
      iVar1 = FUN_00010bcc();
      if ((-1 < iVar1) && (iVar1 = FUN_00010c30(), -1 < iVar1)) goto _L0;
      FUN_00010be0();
      goto _L0;
    }
    unaff_s3 += -1;
    if (unaff_s3 == 0) {
      return -1;
    }
    FUN_00010b12(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x3c),1);
    iVar2 = *(int *)(unaff_s0 + 0x44);
    iVar1 = FUN_00010b1e();
    *(int *)(iVar2 + 0x3c) = iVar1;
  } while (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x3c) != 0);
  FUN_00010b36();
  return -1;
}



int FUN_00010b7c(undefined4 param_1,int param_2,undefined4 param_3)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  int unaff_s3;
  int iVar3;
  
  while( true ) {
    FUN_00010b7c(param_1,param_2,param_3);
    FUN_00010b8c(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20),
                 *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x50));
    iVar1 = FUN_00010b98(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20));
    if ((iVar1 == 0) &&
       (iVar1 = FUN_00010ba6(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20)), iVar1 == 0)) break;
    unaff_s3 += -1;
    if (unaff_s3 == 0) {
      return -1;
    }
    FUN_00010b12(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x3c),1);
    iVar1 = *(int *)(unaff_s0 + 0x44);
    iVar3 = FUN_00010b1e();
    *(int *)(iVar1 + 0x3c) = iVar3;
    if ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x3c) == 0) ||
       (param_2 = FUN_00010b62(), param_2 == 0)) {
      FUN_00010b36();
      return -1;
    }
    iVar1 = *(int *)(unaff_s0 + 0x44);
    if (*(int *)(iVar1 + 0x20) == 0) {
      iVar3 = _L0();
      *(int *)(iVar1 + 0x20) = iVar3;
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) == 0) goto _L0;
    }
    param_3 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20);
    param_1 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x3c);
  }
  iVar3 = *(int *)(unaff_s0 + 0x44);
  if (*(int *)(iVar3 + 0x40) == 0) goto _L0;
  if (*(int *)(iVar3 + 0x28) == 0) {
    iVar2 = _L0();
    *(int *)(iVar3 + 0x28) = iVar2;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) == 0) goto _L0;
  }
  iVar3 = FUN_00010bcc();
  if ((-1 < iVar3) && (iVar3 = FUN_00010c30(), -1 < iVar3)) goto _L0;
  FUN_00010be0();
_L0:
  iVar1 = -1;
_L0:
  FUN_00010c00();
  return -(uint)(iVar1 == -1);
}



int FUN_00010b8c(undefined4 param_1,undefined4 param_2)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  int unaff_s3;
  int iVar3;
  
  while( true ) {
    FUN_00010b8c(param_1,param_2);
    iVar1 = FUN_00010b98(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20));
    if ((iVar1 == 0) &&
       (iVar1 = FUN_00010ba6(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20)), iVar1 == 0)) break;
    unaff_s3 += -1;
    if (unaff_s3 == 0) {
      return -1;
    }
    FUN_00010b12(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x3c),1);
    iVar1 = *(int *)(unaff_s0 + 0x44);
    iVar3 = FUN_00010b1e();
    *(int *)(iVar1 + 0x3c) = iVar3;
    if ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x3c) == 0) || (iVar1 = FUN_00010b62(), iVar1 == 0)) {
      FUN_00010b36();
      return -1;
    }
    iVar3 = *(int *)(unaff_s0 + 0x44);
    if (*(int *)(iVar3 + 0x20) == 0) {
      iVar2 = _L0();
      *(int *)(iVar3 + 0x20) = iVar2;
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) == 0) goto _L0;
    }
    FUN_00010b7c(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x3c),iVar1,
                 *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20));
    param_1 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20);
    param_2 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x50);
  }
  iVar3 = *(int *)(unaff_s0 + 0x44);
  if (*(int *)(iVar3 + 0x40) == 0) goto _L0;
  if (*(int *)(iVar3 + 0x28) == 0) {
    iVar2 = _L0();
    *(int *)(iVar3 + 0x28) = iVar2;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) == 0) goto _L0;
  }
  iVar3 = FUN_00010bcc();
  if ((-1 < iVar3) && (iVar3 = FUN_00010c30(), -1 < iVar3)) goto _L0;
  FUN_00010be0();
_L0:
  iVar1 = -1;
_L0:
  FUN_00010c00();
  return -(uint)(iVar1 == -1);
}



int FUN_00010b98(undefined4 param_1)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  int unaff_s3;
  int iVar3;
  
  while ((iVar1 = FUN_00010b98(param_1), iVar1 != 0 ||
         (iVar1 = FUN_00010ba6(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20)), iVar1 != 0))) {
    unaff_s3 += -1;
    if (unaff_s3 == 0) {
      return -1;
    }
    FUN_00010b12(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x3c),1);
    iVar1 = *(int *)(unaff_s0 + 0x44);
    iVar3 = FUN_00010b1e();
    *(int *)(iVar1 + 0x3c) = iVar3;
    if ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x3c) == 0) || (iVar1 = FUN_00010b62(), iVar1 == 0)) {
      FUN_00010b36();
      return -1;
    }
    iVar3 = *(int *)(unaff_s0 + 0x44);
    if (*(int *)(iVar3 + 0x20) == 0) {
      iVar2 = _L0();
      *(int *)(iVar3 + 0x20) = iVar2;
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) == 0) goto _L0;
    }
    FUN_00010b7c(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x3c),iVar1,
                 *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20));
    FUN_00010b8c(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20),
                 *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x50));
    param_1 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20);
  }
  iVar3 = *(int *)(unaff_s0 + 0x44);
  if (*(int *)(iVar3 + 0x40) == 0) goto _L0;
  if (*(int *)(iVar3 + 0x28) == 0) {
    iVar2 = _L0();
    *(int *)(iVar3 + 0x28) = iVar2;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) == 0) goto _L0;
  }
  iVar3 = FUN_00010bcc();
  if ((-1 < iVar3) && (iVar3 = FUN_00010c30(), -1 < iVar3)) goto _L0;
  FUN_00010be0();
_L0:
  iVar1 = -1;
_L0:
  FUN_00010c00();
  return -(uint)(iVar1 == -1);
}



int FUN_00010ba6(undefined4 param_1)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  int unaff_s3;
  int iVar3;
  
  while (iVar1 = FUN_00010ba6(param_1), iVar1 != 0) {
    do {
      unaff_s3 += -1;
      if (unaff_s3 == 0) {
        return -1;
      }
      FUN_00010b12(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x3c),1);
      iVar1 = *(int *)(unaff_s0 + 0x44);
      iVar3 = FUN_00010b1e();
      *(int *)(iVar1 + 0x3c) = iVar3;
      if ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x3c) == 0) || (iVar1 = FUN_00010b62(), iVar1 == 0))
      {
        FUN_00010b36();
        return -1;
      }
      iVar3 = *(int *)(unaff_s0 + 0x44);
      if (*(int *)(iVar3 + 0x20) == 0) {
        iVar2 = _L0();
        *(int *)(iVar3 + 0x20) = iVar2;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) == 0) goto _L0;
      }
      FUN_00010b7c(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x3c),iVar1,
                   *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20));
      FUN_00010b8c(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20),
                   *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x50));
      iVar1 = FUN_00010b98(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20));
    } while (iVar1 != 0);
    param_1 = *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20);
  }
  iVar3 = *(int *)(unaff_s0 + 0x44);
  if (*(int *)(iVar3 + 0x40) == 0) goto _L0;
  if (*(int *)(iVar3 + 0x28) == 0) {
    iVar2 = _L0();
    *(int *)(iVar3 + 0x28) = iVar2;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) goto _L0;
  }
  else {
_L0:
    iVar3 = FUN_00010bcc();
    if ((-1 < iVar3) && (iVar3 = FUN_00010c30(), -1 < iVar3)) goto _L0;
    FUN_00010be0();
  }
_L0:
  iVar1 = -1;
_L0:
  FUN_00010c00();
  return -(uint)(iVar1 == -1);
}



int FUN_00010bcc(void)

{
  int unaff_s1;
  int iVar1;
  
  iVar1 = FUN_00010bcc();
  if ((iVar1 < 0) || (iVar1 = FUN_00010c30(), iVar1 < 0)) {
    FUN_00010be0();
    unaff_s1 = -1;
  }
  FUN_00010c00();
  return -(uint)(unaff_s1 == -1);
}



undefined4 FUN_00010be0(void)

{
  FUN_00010be0();
  FUN_00010c00();
  return 0xffffffff;
}



int _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int iVar2;
  int unaff_s2;
  int iVar3;
  int unaff_s3;
  
  do {
    iVar1 = _L0();
    *(int *)(unaff_s1 + 0x20) = iVar1;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) == 0) {
_L0:
      iVar1 = -1;
_L0:
      FUN_00010c00();
      return -(uint)(iVar1 == -1);
    }
    do {
      FUN_00010b7c(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x3c),unaff_s2,
                   *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20));
      FUN_00010b8c(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20),
                   *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x50));
      iVar1 = FUN_00010b98(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20));
      if ((iVar1 == 0) &&
         (iVar1 = FUN_00010ba6(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x20)), iVar1 == 0)) {
        iVar3 = *(int *)(unaff_s0 + 0x44);
        if (*(int *)(iVar3 + 0x40) == 0) goto _L0;
        if (*(int *)(iVar3 + 0x28) == 0) {
          iVar2 = _L0();
          *(int *)(iVar3 + 0x28) = iVar2;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) == 0) goto _L0;
        }
        iVar3 = FUN_00010bcc();
        if ((-1 < iVar3) && (iVar3 = FUN_00010c30(), -1 < iVar3)) goto _L0;
        FUN_00010be0();
        goto _L0;
      }
      unaff_s3 += -1;
      if (unaff_s3 == 0) {
        return -1;
      }
      FUN_00010b12(*(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x3c),1);
      iVar1 = *(int *)(unaff_s0 + 0x44);
      iVar3 = FUN_00010b1e();
      *(int *)(iVar1 + 0x3c) = iVar3;
      if ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x3c) == 0) ||
         (unaff_s2 = FUN_00010b62(), unaff_s2 == 0)) {
        FUN_00010b36();
        return -1;
      }
      unaff_s1 = *(int *)(unaff_s0 + 0x44);
    } while (*(int *)(unaff_s1 + 0x20) != 0);
  } while( true );
}



int FUN_00010c00(void)

{
  int unaff_s1;
  
  FUN_00010c00();
  return -(uint)(unaff_s1 == -1);
}



int _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s3;
  
  iVar1 = _L0();
  *(int *)(unaff_s3 + 0x28) = iVar1;
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
    iVar1 = FUN_00010bcc();
    if ((-1 < iVar1) && (iVar1 = FUN_00010c30(), -1 < iVar1)) goto _L0;
    FUN_00010be0();
  }
  unaff_s1 = -1;
_L0:
  FUN_00010c00();
  return -(uint)(unaff_s1 == -1);
}



int FUN_00010c30(void)

{
  int unaff_s1;
  int iVar1;
  
  iVar1 = FUN_00010c30();
  if (iVar1 < 0) {
    FUN_00010be0();
    unaff_s1 = -1;
  }
  FUN_00010c00();
  return -(uint)(unaff_s1 == -1);
}



// WARNING: Variable defined which should be unmapped: val
// DWARF DIE: 2258

sint32 sae_process_commit(sae_data *sae)

{
  sint32 sVar1;
  int iVar2;
  int iVar3;
  uint8 null_key [32];
  uint8 keyseed [32];
  uint8 keys [64];
  uint8 k [512];
  uint8 val [512];
  
  if (sae->tmp == (sae_temporary_data *)0x0) {
    return -1;
  }
  if (sae->tmp->ec != (crypto_ec *)0x0) {
    iVar2 = _L0();
    iVar3 = -1;
    if ((iVar2 != 0) &&
       ((((iVar2 = FUN_00010c96(), iVar2 < 0 || (iVar2 = FUN_00010ce8(), iVar2 < 0)) ||
         (iVar2 = FUN_00010cfe(), iVar2 < 0)) ||
        ((iVar3 = FUN_00010d10(), iVar3 != 0 || (iVar2 = FUN_00010d26(), iVar2 < 0)))))) {
      FUN_00010caa();
      iVar3 = -1;
    }
    FUN_00010cb8();
    if (iVar3 == -1) {
      return -1;
    }
  }
  iVar2 = _L0();
  if (iVar2 != 0) {
    FUN_00010d3c();
    FUN_00010d5e();
    FUN_00010d6e();
    FUN_00010d7e();
    FUN_00010d92();
    iVar2 = _LVL344();
    if (-1 < iVar2) {
      FUN_00010dc4();
      FUN_00010dd4();
      FUN_00010de6();
      FUN_00010df6();
      FUN_00010e06();
      sVar1 = 0;
      goto _L0;
    }
  }
  sVar1 = -1;
_L0:
  FUN_00010c72();
  return sVar1;
}



undefined4 _L0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = _L0();
  if (iVar2 != 0) {
    FUN_00010d3c();
    FUN_00010d5e();
    FUN_00010d6e();
    FUN_00010d7e();
    FUN_00010d92();
    iVar2 = _LVL344();
    if (-1 < iVar2) {
      FUN_00010dc4();
      FUN_00010dd4();
      FUN_00010de6();
      FUN_00010df6();
      FUN_00010e06();
      uVar1 = 0;
      goto _L0;
    }
  }
  uVar1 = 0xffffffff;
_L0:
  FUN_00010c72();
  return uVar1;
}



void FUN_00010c72(void)

{
  FUN_00010c72();
  return;
}



undefined4 _L0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _L0();
  iVar3 = -1;
  if ((iVar2 != 0) &&
     ((((iVar2 = FUN_00010c96(), iVar2 < 0 || (iVar2 = FUN_00010ce8(), iVar2 < 0)) ||
       (iVar2 = FUN_00010cfe(), iVar2 < 0)) ||
      ((iVar3 = FUN_00010d10(), iVar3 != 0 || (iVar2 = FUN_00010d26(), iVar2 < 0)))))) {
    FUN_00010caa();
    iVar3 = -1;
  }
  FUN_00010cb8();
  if (iVar3 == -1) {
    return 0xffffffff;
  }
  iVar2 = _L0();
  if (iVar2 != 0) {
    FUN_00010d3c();
    FUN_00010d5e();
    FUN_00010d6e();
    FUN_00010d7e();
    FUN_00010d92();
    iVar2 = _LVL344();
    if (-1 < iVar2) {
      FUN_00010dc4();
      FUN_00010dd4();
      FUN_00010de6();
      FUN_00010df6();
      FUN_00010e06();
      uVar1 = 0;
      goto _L0;
    }
  }
  uVar1 = 0xffffffff;
_L0:
  FUN_00010c72();
  return uVar1;
}



undefined4 FUN_00010c96(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00010c96();
  if ((((iVar2 < 0) || (iVar2 = FUN_00010ce8(), iVar2 < 0)) || (iVar2 = FUN_00010cfe(), iVar2 < 0))
     || ((iVar2 = FUN_00010d10(), iVar2 != 0 || (iVar3 = FUN_00010d26(), iVar3 < 0)))) {
    FUN_00010caa();
    iVar2 = -1;
  }
  FUN_00010cb8();
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  iVar2 = _L0();
  if (iVar2 != 0) {
    FUN_00010d3c();
    FUN_00010d5e();
    FUN_00010d6e();
    FUN_00010d7e();
    FUN_00010d92();
    iVar2 = _LVL344();
    if (-1 < iVar2) {
      FUN_00010dc4();
      FUN_00010dd4();
      FUN_00010de6();
      FUN_00010df6();
      FUN_00010e06();
      uVar1 = 0;
      goto _L0;
    }
  }
  uVar1 = 0xffffffff;
_L0:
  FUN_00010c72();
  return uVar1;
}



undefined4 FUN_00010caa(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00010caa();
  FUN_00010cb8();
  if (true) {
    return 0xffffffff;
  }
  iVar2 = _L0();
  if (iVar2 != 0) {
    FUN_00010d3c();
    FUN_00010d5e();
    FUN_00010d6e();
    FUN_00010d7e();
    FUN_00010d92();
    iVar2 = _LVL344();
    if (-1 < iVar2) {
      FUN_00010dc4();
      FUN_00010dd4();
      FUN_00010de6();
      FUN_00010df6();
      FUN_00010e06();
      uVar1 = 0;
      goto _L0;
    }
  }
  uVar1 = 0xffffffff;
_L0:
  FUN_00010c72();
  return uVar1;
}



undefined4 FUN_00010cb8(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_s2;
  
  FUN_00010cb8();
  if (unaff_s2 == -1) {
    return 0xffffffff;
  }
  iVar2 = _L0();
  if (iVar2 != 0) {
    FUN_00010d3c();
    FUN_00010d5e();
    FUN_00010d6e();
    FUN_00010d7e();
    FUN_00010d92();
    iVar2 = _LVL344();
    if (-1 < iVar2) {
      FUN_00010dc4();
      FUN_00010dd4();
      FUN_00010de6();
      FUN_00010df6();
      FUN_00010e06();
      uVar1 = 0;
      goto _L0;
    }
  }
  uVar1 = 0xffffffff;
_L0:
  FUN_00010c72();
  return uVar1;
}



undefined4 FUN_00010ce8(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00010ce8();
  if ((((iVar2 < 0) || (iVar2 = FUN_00010cfe(), iVar2 < 0)) || (iVar2 = FUN_00010d10(), iVar2 != 0))
     || (iVar3 = FUN_00010d26(), iVar3 < 0)) {
    FUN_00010caa();
    iVar2 = -1;
  }
  FUN_00010cb8();
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  iVar2 = _L0();
  if (iVar2 != 0) {
    FUN_00010d3c();
    FUN_00010d5e();
    FUN_00010d6e();
    FUN_00010d7e();
    FUN_00010d92();
    iVar2 = _LVL344();
    if (-1 < iVar2) {
      FUN_00010dc4();
      FUN_00010dd4();
      FUN_00010de6();
      FUN_00010df6();
      FUN_00010e06();
      uVar1 = 0;
      goto _L0;
    }
  }
  uVar1 = 0xffffffff;
_L0:
  FUN_00010c72();
  return uVar1;
}



undefined4 FUN_00010cfe(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00010cfe();
  if (((iVar2 < 0) || (iVar2 = FUN_00010d10(), iVar2 != 0)) || (iVar3 = FUN_00010d26(), iVar3 < 0))
  {
    FUN_00010caa();
    iVar2 = -1;
  }
  FUN_00010cb8();
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  iVar2 = _L0();
  if (iVar2 != 0) {
    FUN_00010d3c();
    FUN_00010d5e();
    FUN_00010d6e();
    FUN_00010d7e();
    FUN_00010d92();
    iVar2 = _LVL344();
    if (-1 < iVar2) {
      FUN_00010dc4();
      FUN_00010dd4();
      FUN_00010de6();
      FUN_00010df6();
      FUN_00010e06();
      uVar1 = 0;
      goto _L0;
    }
  }
  uVar1 = 0xffffffff;
_L0:
  FUN_00010c72();
  return uVar1;
}



undefined4 FUN_00010d10(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_00010d10();
  if ((iVar2 != 0) || (iVar3 = FUN_00010d26(), iVar3 < 0)) {
    FUN_00010caa();
    iVar2 = -1;
  }
  FUN_00010cb8();
  if (iVar2 == -1) {
    return 0xffffffff;
  }
  iVar2 = _L0();
  if (iVar2 != 0) {
    FUN_00010d3c();
    FUN_00010d5e();
    FUN_00010d6e();
    FUN_00010d7e();
    FUN_00010d92();
    iVar2 = _LVL344();
    if (-1 < iVar2) {
      FUN_00010dc4();
      FUN_00010dd4();
      FUN_00010de6();
      FUN_00010df6();
      FUN_00010e06();
      uVar1 = 0;
      goto _L0;
    }
  }
  uVar1 = 0xffffffff;
_L0:
  FUN_00010c72();
  return uVar1;
}



undefined4 FUN_00010d26(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_s2;
  
  iVar2 = FUN_00010d26();
  if (iVar2 < 0) {
    FUN_00010caa();
    unaff_s2 = -1;
  }
  FUN_00010cb8();
  if (unaff_s2 == -1) {
    return 0xffffffff;
  }
  iVar2 = _L0();
  if (iVar2 != 0) {
    FUN_00010d3c();
    FUN_00010d5e();
    FUN_00010d6e();
    FUN_00010d7e();
    FUN_00010d92();
    iVar2 = _LVL344();
    if (-1 < iVar2) {
      FUN_00010dc4();
      FUN_00010dd4();
      FUN_00010de6();
      FUN_00010df6();
      FUN_00010e06();
      uVar1 = 0;
      goto _L0;
    }
  }
  uVar1 = 0xffffffff;
_L0:
  FUN_00010c72();
  return uVar1;
}



undefined4 FUN_00010d3c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puStack00000040;
  
  FUN_00010d3c();
  puStack00000040 = &stack0x00000080;
  FUN_00010d5e();
  FUN_00010d6e();
  FUN_00010d7e();
  FUN_00010d92();
  iVar2 = _LVL344();
  if (iVar2 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00010dc4();
    FUN_00010dd4();
    FUN_00010de6();
    FUN_00010df6();
    FUN_00010e06();
    uVar1 = 0;
  }
  FUN_00010c72();
  return uVar1;
}



undefined4 FUN_00010d5e(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00010d5e();
  FUN_00010d6e();
  FUN_00010d7e();
  FUN_00010d92();
  iVar2 = _LVL344();
  if (iVar2 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00010dc4();
    FUN_00010dd4();
    FUN_00010de6();
    FUN_00010df6();
    FUN_00010e06();
    uVar1 = 0;
  }
  FUN_00010c72();
  return uVar1;
}



undefined4 FUN_00010d6e(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00010d6e();
  FUN_00010d7e();
  FUN_00010d92();
  iVar2 = _LVL344();
  if (iVar2 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00010dc4();
    FUN_00010dd4();
    FUN_00010de6();
    FUN_00010df6();
    FUN_00010e06();
    uVar1 = 0;
  }
  FUN_00010c72();
  return uVar1;
}



undefined4 FUN_00010d7e(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00010d7e();
  FUN_00010d92();
  iVar2 = _LVL344();
  if (iVar2 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00010dc4();
    FUN_00010dd4();
    FUN_00010de6();
    FUN_00010df6();
    FUN_00010e06();
    uVar1 = 0;
  }
  FUN_00010c72();
  return uVar1;
}



undefined4 FUN_00010d92(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00010d92();
  iVar2 = _LVL344();
  if (iVar2 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00010dc4();
    FUN_00010dd4();
    FUN_00010de6();
    FUN_00010df6();
    FUN_00010e06();
    uVar1 = 0;
  }
  FUN_00010c72();
  return uVar1;
}



undefined4 _LVL344(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = _LVL344();
  if (iVar2 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00010dc4();
    FUN_00010dd4();
    FUN_00010de6();
    FUN_00010df6();
    FUN_00010e06();
    uVar1 = 0;
  }
  FUN_00010c72();
  return uVar1;
}



undefined4 FUN_00010dc4(void)

{
  FUN_00010dc4();
  FUN_00010dd4();
  FUN_00010de6();
  FUN_00010df6();
  FUN_00010e06();
  FUN_00010c72();
  return 0;
}



undefined4 FUN_00010dd4(void)

{
  FUN_00010dd4();
  FUN_00010de6();
  FUN_00010df6();
  FUN_00010e06();
  FUN_00010c72();
  return 0;
}



undefined4 FUN_00010de6(void)

{
  FUN_00010de6();
  FUN_00010df6();
  FUN_00010e06();
  FUN_00010c72();
  return 0;
}



undefined4 FUN_00010df6(void)

{
  FUN_00010df6();
  FUN_00010e06();
  FUN_00010c72();
  return 0;
}



undefined4 FUN_00010e06(void)

{
  FUN_00010e06();
  FUN_00010c72();
  return 0;
}



// DWARF DIE: 1e7c

sint32 sae_write_commit(sae_data *sae,wpabuf *buf,wpabuf *token,char *identifier)

{
  char extraout_a0;
  undefined *puVar1;
  int iVar2;
  undefined *extraout_a0_00;
  char *extraout_a0_01;
  undefined *extraout_a0_02;
  sint32 sVar3;
  
  if (sae->tmp != (sae_temporary_data *)0x0) {
    sVar3 = sae->group;
    puVar1 = (undefined *)FUN_00010e34();
    puVar1[1] = (char)((uint)sVar3 >> 8);
    *puVar1 = (char)sVar3;
    if ((token != (wpabuf *)0x0) &&
       ((token->ext_data != (uint8 *)0x0 || (token != (wpabuf *)0xfffffff4)))) {
      FUN_00010e6a();
      FUN_00010e76();
    }
    FUN_00010e84();
    iVar2 = FUN_00010e96();
    if (-1 < iVar2) {
      if (sae->tmp->ec == (crypto_ec *)0x0) {
        FUN_00010eee();
        iVar2 = FUN_00010f00();
        if (iVar2 < 0) {
          sVar3 = _L0();
          return sVar3;
        }
      }
      else {
        FUN_00010ec2();
        iVar2 = _LVL371();
        if (iVar2 < 0) {
          sVar3 = _L0();
          return sVar3;
        }
      }
      if (identifier == (char *)0x0) {
        return 0;
      }
      FUN_00010f20();
      *extraout_a0_00 = 0xff;
      FUN_00010f30();
      FUN_00010f3e();
      *extraout_a0_01 = extraout_a0 + '\x01';
      FUN_00010f50();
      *extraout_a0_02 = 0x21;
      FUN_00010f62();
      _LVL388();
      FUN_00010f7c();
      return 0;
    }
    _L0();
  }
  return -1;
}



undefined4 FUN_00010e34(void)

{
  int unaff_s1;
  undefined4 uVar1;
  char extraout_a0;
  undefined *puVar2;
  int iVar3;
  undefined *extraout_a0_00;
  char *extraout_a0_01;
  undefined *extraout_a0_02;
  int unaff_s2;
  int unaff_s3;
  undefined4 unaff_s4;
  
  puVar2 = (undefined *)FUN_00010e34();
  puVar2[1] = (char)((uint)unaff_s4 >> 8);
  *puVar2 = (char)unaff_s4;
  if ((unaff_s3 != 0) && ((*(int *)(unaff_s3 + 8) != 0 || (unaff_s3 != -0xc)))) {
    FUN_00010e6a();
    FUN_00010e76();
  }
  FUN_00010e84();
  iVar3 = FUN_00010e96();
  if (iVar3 < 0) {
    _L0();
    uVar1 = 0xffffffff;
  }
  else {
    if (*(int *)(*(int *)(unaff_s1 + 0x44) + 0x40) == 0) {
      FUN_00010eee();
      iVar3 = FUN_00010f00();
      if (iVar3 < 0) {
        uVar1 = _L0();
        return uVar1;
      }
    }
    else {
      FUN_00010ec2();
      iVar3 = _LVL371();
      if (iVar3 < 0) {
        uVar1 = _L0();
        return uVar1;
      }
    }
    uVar1 = 0;
    if (unaff_s2 != 0) {
      FUN_00010f20();
      *extraout_a0_00 = 0xff;
      FUN_00010f30();
      FUN_00010f3e();
      *extraout_a0_01 = extraout_a0 + '\x01';
      FUN_00010f50();
      *extraout_a0_02 = 0x21;
      FUN_00010f62();
      _LVL388();
      FUN_00010f7c();
    }
  }
  return uVar1;
}



undefined4 FUN_00010e6a(void)

{
  int unaff_s1;
  undefined4 uVar1;
  char extraout_a0;
  int iVar2;
  undefined *extraout_a0_00;
  char *extraout_a0_01;
  undefined *extraout_a0_02;
  undefined4 extraout_a0_03;
  int unaff_s2;
  undefined4 uStack0000000c;
  
  FUN_00010e6a();
  FUN_00010e76();
  FUN_00010e84();
  iVar2 = FUN_00010e96();
  if (iVar2 < 0) {
    _L0();
    uVar1 = 0xffffffff;
  }
  else {
    if (*(int *)(*(int *)(unaff_s1 + 0x44) + 0x40) == 0) {
      FUN_00010eee();
      iVar2 = FUN_00010f00();
      if (iVar2 < 0) {
        uVar1 = _L0();
        return uVar1;
      }
    }
    else {
      FUN_00010ec2();
      iVar2 = _LVL371();
      if (iVar2 < 0) {
        uVar1 = _L0();
        return uVar1;
      }
    }
    uVar1 = 0;
    if (unaff_s2 != 0) {
      FUN_00010f20();
      *extraout_a0_00 = 0xff;
      FUN_00010f30();
      FUN_00010f3e();
      *extraout_a0_01 = extraout_a0 + '\x01';
      FUN_00010f50();
      *extraout_a0_02 = 0x21;
      FUN_00010f62();
      uStack0000000c = extraout_a0_03;
      _LVL388();
      FUN_00010f7c();
    }
  }
  return uVar1;
}



undefined4 FUN_00010e76(void)

{
  int unaff_s1;
  undefined4 uVar1;
  char extraout_a0;
  int iVar2;
  undefined *extraout_a0_00;
  char *extraout_a0_01;
  undefined *extraout_a0_02;
  undefined4 extraout_a0_03;
  int unaff_s2;
  undefined4 uStack0000000c;
  
  FUN_00010e76();
  FUN_00010e84();
  iVar2 = FUN_00010e96();
  if (iVar2 < 0) {
    _L0();
    uVar1 = 0xffffffff;
  }
  else {
    if (*(int *)(*(int *)(unaff_s1 + 0x44) + 0x40) == 0) {
      FUN_00010eee();
      iVar2 = FUN_00010f00();
      if (iVar2 < 0) {
        uVar1 = _L0();
        return uVar1;
      }
    }
    else {
      FUN_00010ec2();
      iVar2 = _LVL371();
      if (iVar2 < 0) {
        uVar1 = _L0();
        return uVar1;
      }
    }
    uVar1 = 0;
    if (unaff_s2 != 0) {
      FUN_00010f20();
      *extraout_a0_00 = 0xff;
      FUN_00010f30();
      FUN_00010f3e();
      *extraout_a0_01 = extraout_a0 + '\x01';
      FUN_00010f50();
      *extraout_a0_02 = 0x21;
      FUN_00010f62();
      uStack0000000c = extraout_a0_03;
      _LVL388();
      FUN_00010f7c();
    }
  }
  return uVar1;
}



undefined4 FUN_00010e84(void)

{
  int unaff_s1;
  undefined4 uVar1;
  char extraout_a0;
  int iVar2;
  undefined *extraout_a0_00;
  char *extraout_a0_01;
  undefined *extraout_a0_02;
  undefined4 extraout_a0_03;
  int unaff_s2;
  undefined4 uStack0000000c;
  
  FUN_00010e84();
  iVar2 = FUN_00010e96();
  if (iVar2 < 0) {
    _L0();
    uVar1 = 0xffffffff;
  }
  else {
    if (*(int *)(*(int *)(unaff_s1 + 0x44) + 0x40) == 0) {
      FUN_00010eee();
      iVar2 = FUN_00010f00();
      if (iVar2 < 0) {
        uVar1 = _L0();
        return uVar1;
      }
    }
    else {
      FUN_00010ec2();
      iVar2 = _LVL371();
      if (iVar2 < 0) {
        uVar1 = _L0();
        return uVar1;
      }
    }
    uVar1 = 0;
    if (unaff_s2 != 0) {
      FUN_00010f20();
      *extraout_a0_00 = 0xff;
      FUN_00010f30();
      FUN_00010f3e();
      *extraout_a0_01 = extraout_a0 + '\x01';
      FUN_00010f50();
      *extraout_a0_02 = 0x21;
      FUN_00010f62();
      uStack0000000c = extraout_a0_03;
      _LVL388();
      FUN_00010f7c();
    }
  }
  return uVar1;
}



undefined4 FUN_00010e96(void)

{
  int unaff_s1;
  undefined4 uVar1;
  char extraout_a0;
  int iVar2;
  undefined *extraout_a0_00;
  char *extraout_a0_01;
  undefined *extraout_a0_02;
  undefined4 extraout_a0_03;
  int unaff_s2;
  undefined4 uStack0000000c;
  
  iVar2 = FUN_00010e96();
  if (iVar2 < 0) {
    _L0();
    uVar1 = 0xffffffff;
  }
  else {
    if (*(int *)(*(int *)(unaff_s1 + 0x44) + 0x40) == 0) {
      FUN_00010eee();
      iVar2 = FUN_00010f00();
      if (iVar2 < 0) {
        uVar1 = _L0();
        return uVar1;
      }
    }
    else {
      FUN_00010ec2();
      iVar2 = _LVL371();
      if (iVar2 < 0) {
        uVar1 = _L0();
        return uVar1;
      }
    }
    uVar1 = 0;
    if (unaff_s2 != 0) {
      FUN_00010f20();
      *extraout_a0_00 = 0xff;
      FUN_00010f30();
      FUN_00010f3e();
      *extraout_a0_01 = extraout_a0 + '\x01';
      FUN_00010f50();
      *extraout_a0_02 = 0x21;
      FUN_00010f62();
      uStack0000000c = extraout_a0_03;
      _LVL388();
      FUN_00010f7c();
    }
  }
  return uVar1;
}



undefined4 _L0(void)

{
  _L0();
  return 0xffffffff;
}



undefined4 FUN_00010ec2(void)

{
  char extraout_a0;
  int iVar1;
  undefined4 uVar2;
  undefined *extraout_a0_00;
  char *extraout_a0_01;
  undefined *extraout_a0_02;
  undefined4 extraout_a0_03;
  int unaff_s2;
  undefined4 uStack0000000c;
  
  FUN_00010ec2();
  iVar1 = _LVL371();
  if (iVar1 < 0) {
    uVar2 = _L0();
    return uVar2;
  }
  if (unaff_s2 != 0) {
    FUN_00010f20();
    *extraout_a0_00 = 0xff;
    FUN_00010f30();
    FUN_00010f3e();
    *extraout_a0_01 = extraout_a0 + '\x01';
    FUN_00010f50();
    *extraout_a0_02 = 0x21;
    FUN_00010f62();
    uStack0000000c = extraout_a0_03;
    _LVL388();
    FUN_00010f7c();
  }
  return 0;
}



undefined4 _LVL371(void)

{
  char extraout_a0;
  int iVar1;
  undefined4 uVar2;
  undefined *extraout_a0_00;
  char *extraout_a0_01;
  undefined *extraout_a0_02;
  undefined4 extraout_a0_03;
  int unaff_s2;
  undefined4 uStack0000000c;
  
  iVar1 = _LVL371();
  if (iVar1 < 0) {
    uVar2 = _L0();
    return uVar2;
  }
  if (unaff_s2 != 0) {
    FUN_00010f20();
    *extraout_a0_00 = 0xff;
    FUN_00010f30();
    FUN_00010f3e();
    *extraout_a0_01 = extraout_a0 + '\x01';
    FUN_00010f50();
    *extraout_a0_02 = 0x21;
    FUN_00010f62();
    uStack0000000c = extraout_a0_03;
    _LVL388();
    FUN_00010f7c();
  }
  return 0;
}



undefined4 FUN_00010eee(void)

{
  char extraout_a0;
  int iVar1;
  undefined4 uVar2;
  undefined *extraout_a0_00;
  char *extraout_a0_01;
  undefined *extraout_a0_02;
  undefined4 extraout_a0_03;
  int unaff_s2;
  undefined4 uStack0000000c;
  
  FUN_00010eee();
  iVar1 = FUN_00010f00();
  if (iVar1 < 0) {
    uVar2 = _L0();
    return uVar2;
  }
  if (unaff_s2 != 0) {
    FUN_00010f20();
    *extraout_a0_00 = 0xff;
    FUN_00010f30();
    FUN_00010f3e();
    *extraout_a0_01 = extraout_a0 + '\x01';
    FUN_00010f50();
    *extraout_a0_02 = 0x21;
    FUN_00010f62();
    uStack0000000c = extraout_a0_03;
    _LVL388();
    FUN_00010f7c();
  }
  return 0;
}



undefined4 FUN_00010f00(void)

{
  char extraout_a0;
  int iVar1;
  undefined4 uVar2;
  undefined *extraout_a0_00;
  char *extraout_a0_01;
  undefined *extraout_a0_02;
  undefined4 extraout_a0_03;
  int unaff_s2;
  undefined4 uStack0000000c;
  
  iVar1 = FUN_00010f00();
  if (iVar1 < 0) {
    uVar2 = _L0();
    return uVar2;
  }
  if (unaff_s2 != 0) {
    FUN_00010f20();
    *extraout_a0_00 = 0xff;
    FUN_00010f30();
    FUN_00010f3e();
    *extraout_a0_01 = extraout_a0 + '\x01';
    FUN_00010f50();
    *extraout_a0_02 = 0x21;
    FUN_00010f62();
    uStack0000000c = extraout_a0_03;
    _LVL388();
    FUN_00010f7c();
  }
  return 0;
}



void FUN_00010f20(void)

{
  char extraout_a0;
  undefined *extraout_a0_00;
  char *extraout_a0_01;
  undefined *extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 uStack0000000c;
  
  FUN_00010f20();
  *extraout_a0_00 = 0xff;
  FUN_00010f30();
  FUN_00010f3e();
  *extraout_a0_01 = extraout_a0 + '\x01';
  FUN_00010f50();
  *extraout_a0_02 = 0x21;
  FUN_00010f62();
  uStack0000000c = extraout_a0_03;
  _LVL388();
  FUN_00010f7c();
  return;
}



void FUN_00010f30(void)

{
  char extraout_a0;
  char *extraout_a0_00;
  undefined *extraout_a0_01;
  undefined4 extraout_a0_02;
  undefined4 uStack0000000c;
  
  FUN_00010f30();
  FUN_00010f3e();
  *extraout_a0_00 = extraout_a0 + '\x01';
  FUN_00010f50();
  *extraout_a0_01 = 0x21;
  FUN_00010f62();
  uStack0000000c = extraout_a0_02;
  _LVL388();
  FUN_00010f7c();
  return;
}



void FUN_00010f3e(void)

{
  char *extraout_a0;
  undefined *extraout_a0_00;
  undefined4 extraout_a0_01;
  char unaff_s3;
  undefined4 uStack0000000c;
  
  FUN_00010f3e();
  *extraout_a0 = unaff_s3 + '\x01';
  FUN_00010f50();
  *extraout_a0_00 = 0x21;
  FUN_00010f62();
  uStack0000000c = extraout_a0_01;
  _LVL388();
  FUN_00010f7c();
  return;
}



void FUN_00010f50(void)

{
  undefined *extraout_a0;
  undefined4 extraout_a0_00;
  undefined4 uStack0000000c;
  
  FUN_00010f50();
  *extraout_a0 = 0x21;
  FUN_00010f62();
  uStack0000000c = extraout_a0_00;
  _LVL388();
  FUN_00010f7c();
  return;
}



void FUN_00010f62(void)

{
  undefined4 extraout_a0;
  undefined4 uStack0000000c;
  
  FUN_00010f62();
  uStack0000000c = extraout_a0;
  _LVL388();
  FUN_00010f7c();
  return;
}



void _LVL388(void)

{
  _LVL388();
  FUN_00010f7c();
  return;
}



void FUN_00010f7c(void)

{
  FUN_00010f7c();
  return;
}



// DWARF DIE: 1dc6

uint16 sae_group_allowed(sae_data *sae,sint32 *allowed_groups,uint16 group)

{
  uint16 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 in_register_00002032;
  sint32 *psVar4;
  int iVar5;
  
  iVar2 = CONCAT22(in_register_00002032,group);
  psVar4 = allowed_groups;
  if (allowed_groups != (sint32 *)0x0) {
    do {
      iVar5 = *psVar4;
      if (iVar5 < 1) {
        if (iVar5 != iVar2) {
          _L0();
          return 0x4d;
        }
        break;
      }
      psVar4 = psVar4 + 1;
    } while (iVar5 != iVar2);
  }
  if (sae->state == SAE_COMMITTED) {
    if (sae->group != iVar2) {
      FUN_00010fbe();
      return 0x4d;
    }
  }
  else {
    if ((sae->group != iVar2) && (iVar2 = FUN_00010ffa(), iVar2 < 0)) {
      uVar3 = _L0();
      return (uint16)uVar3;
    }
  }
  if (sae->tmp == (sae_temporary_data *)0x0) {
    FUN_00011020();
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
    if ((sae->tmp->dh != (dh_group *)0x0) && (uVar1 = 0, allowed_groups == (sint32 *)0x0)) {
      uVar3 = _L0();
      return (uint16)uVar3;
    }
  }
  return uVar1;
}



undefined4 FUN_00010fbe(void)

{
  FUN_00010fbe();
  return 0x4d;
}



undefined4 _L0(void)

{
  _L0();
  return 0x4d;
}



undefined4 FUN_00010ffa(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00010ffa();
  if (iVar1 < 0) {
    uVar2 = _L0();
    return uVar2;
  }
  if (*(int *)(unaff_s0 + 0x44) == 0) {
    FUN_00011020();
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    if ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) != 0) && (uVar2 = 0, unaff_s1 == 0)) {
      uVar2 = _L0();
      return uVar2;
    }
  }
  return uVar2;
}



undefined4 FUN_00011020(void)

{
  FUN_00011020();
  return 1;
}



// DWARF DIE: 1606

uint16 sae_parse_commit(sae_data *sae,uint8 *data,size_t len,uint8 **token,size_t *token_len,
                       sint32 *allowed_groups)

{
  byte bVar1;
  uint8 *puVar2;
  uint uVar3;
  crypto_bignum *pcVar4;
  undefined4 uVar5;
  crypto_ec_point *pcVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  uint8 *puVar10;
  uint uVar11;
  sae_temporary_data *psVar12;
  uint8 *puVar13;
  uint8 one_bin [1];
  
  if (1 < (int)len) {
    uVar9 = FUN_00011094();
    if (uVar9 != 0) goto _L0;
    puVar2 = data + 2;
    if (token != (uint8 **)0x0) {
      *token = (uint8 *)0x0;
    }
    if (token_len != (size_t *)0x0) {
      *token_len = 0;
    }
    puVar10 = data + len;
    uVar11 = ((sae->tmp->ec != (crypto_ec *)0x0) + 2) * sae->tmp->prime_len;
    if (uVar11 < len - 2) {
      puVar13 = puVar10 + -(int)(puVar2 + uVar11);
      if (((uint8 *)0x1f < puVar13) && (uVar3 = _LVL422(), uVar3 == 0)) {
        uVar3 = _LVL425();
        if (uVar3 != 0) {
          puVar13 = puVar13 + (-2 - (uint)(puVar2 + uVar11)[0x21]);
        }
        if (token != (uint8 **)0x0) {
          *token = puVar2;
        }
        if (token_len != (size_t *)0x0) {
          *token_len = (size_t)puVar13;
        }
        puVar2 = puVar2 + (int)puVar13;
      }
    }
    if ((int)(puVar10 + -(int)puVar2) < sae->tmp->prime_len) {
      _L345();
    }
    else {
      pcVar4 = (crypto_bignum *)FUN_00011136();
      if (pcVar4 != (crypto_bignum *)0x0) {
        if (((sae->state == SAE_ACCEPTED) && (sae->peer_commit_scalar != (crypto_bignum *)0x0)) &&
           (uVar11 = FUN_00011152(), uVar11 == 0)) {
          _L0();
          FUN_00011170();
        }
        else {
          uVar11 = FUN_0001117c();
          if (((uVar11 != 0) || (uVar11 = FUN_00011192(), uVar11 != 0)) ||
             (uVar11 = FUN_000111a2(), -1 < (int)uVar11)) {
            uVar5 = _L0();
            return (uint16)uVar5;
          }
          FUN_000111b2();
          sae->peer_commit_scalar = pcVar4;
          iVar8 = sae->tmp->prime_len;
          puVar2 = puVar2 + iVar8;
          if (sae->tmp->dh == (dh_group *)0x0) {
            if ((int)(puVar10 + -(int)puVar2) < iVar8 << 1) goto _L0;
            uVar11 = FUN_00011310();
            if (-1 < (int)uVar11) {
              uVar11 = FUN_00011324();
              if ((-1 < (int)uVar11) || (uVar11 = FUN_00011344(), -1 < (int)uVar11)) {
                uVar5 = _L345();
                return (uint16)uVar5;
              }
              FUN_00011356();
              psVar12 = sae->tmp;
              pcVar6 = (crypto_ec_point *)FUN_00011368();
              psVar12->peer_commit_element_ecc = pcVar6;
              if (sae->tmp->peer_commit_element_ecc != (crypto_ec_point *)0x0) {
                uVar11 = FUN_0001137e();
                if (uVar11 == 0) {
                  uVar5 = _L345();
                  return (uint16)uVar5;
                }
                iVar8 = sae->tmp->prime_len << 1;
                goto _L0;
              }
            }
          }
          else {
            if ((int)(puVar10 + -(int)puVar2) < iVar8) {
_L0:
              uVar5 = _L345();
              return (uint16)uVar5;
            }
            FUN_000111e6();
            psVar12 = sae->tmp;
            pcVar4 = (crypto_bignum *)FUN_000111f8();
            psVar12->peer_commit_element_ffc = pcVar4;
            if (sae->tmp->peer_commit_element_ffc != (crypto_bignum *)0x0) {
              uVar11 = _L0();
              uVar3 = _LVL454();
              if (((((uVar11 == 0) || (uVar3 == 0)) || (uVar11 = _LVL461(), uVar11 != 0)) ||
                  ((uVar11 = FUN_00011262(), uVar11 != 0 || (uVar11 = FUN_00011270(), uVar11 != 0)))
                  ) || (uVar11 = FUN_00011280(), -1 < (int)uVar11)) {
                FUN_0001122c();
                FUN_00011238();
                uVar5 = _L345();
                return (uint16)uVar5;
              }
              FUN_00011290();
              uVar11 = FUN_000112a2();
              if (((int)uVar11 < 0) || (uVar11 = FUN_000112ba(), uVar11 == 0)) {
                uVar5 = _L0();
                return (uint16)uVar5;
              }
              FUN_000112c8();
              iVar8 = sae->tmp->prime_len;
_L0:
              uVar11 = FUN_000112da();
              pcVar7 = sae->tmp->pw_id;
              if (uVar11 == 0) {
                if (pcVar7 != (char *)0x0) {
                  _L0();
                  uVar9 = 0x7b;
                  goto _L0;
                }
                _L0();
                sae->tmp->pw_id = (char *)0x0;
              }
              else {
                if ((pcVar7 != (char *)0x0) &&
                   ((bVar1 = (puVar2 + iVar8)[1], uVar11 = _L0(), bVar1 - 1 != uVar11 ||
                    (uVar11 = FUN_00011402(), uVar11 != 0)))) {
                  uVar5 = _L0();
                  return (uint16)uVar5;
                }
                FUN_00011410();
                psVar12 = sae->tmp;
                pcVar7 = (char *)_L0();
                psVar12->pw_id = pcVar7;
                if (sae->tmp->pw_id == (char *)0x0) goto _L0;
                FUN_0001143e();
                sae->tmp->pw_id[(puVar2 + iVar8)[1] - 1] = '\0';
              }
              if (((sae->tmp->own_commit_scalar != (crypto_bignum *)0x0) &&
                  (uVar11 = FUN_000113b2(), uVar11 == 0)) &&
                 ((sae->tmp->dh == (dh_group *)0x0 ||
                  ((sae->tmp->own_commit_element_ffc != (crypto_bignum *)0x0 &&
                   (uVar11 = FUN_0001145e(), uVar11 == 0)))))) {
                if (sae->tmp->ec == (crypto_ec *)0x0) {
                  uVar9 = 0xffff;
                }
                else {
                  if (sae->tmp->own_commit_element_ecc != (crypto_ec_point *)0x0) {
                    uVar9 = FUN_00011472();
                    uVar9 = (uint)(uVar9 == 0) * -0x10000 >> 0x10;
                  }
                }
              }
              goto _L0;
            }
          }
        }
      }
    }
  }
_L0:
  uVar9 = 1;
_L0:
  return (uint16)uVar9;
}



uint FUN_00011094(void)

{
  byte bVar1;
  char *unaff_s0;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int unaff_s3;
  int iVar5;
  int iVar6;
  int unaff_s5;
  uint *unaff_s6;
  int *unaff_s7;
  
  uVar3 = FUN_00011094();
  if (uVar3 != 0) {
    return uVar3;
  }
  iVar2 = unaff_s3 + 2;
  if (unaff_s7 != (int *)0x0) {
    *unaff_s7 = 0;
  }
  if (unaff_s6 != (uint *)0x0) {
    *unaff_s6 = 0;
  }
  iVar5 = unaff_s3 + unaff_s5;
  uVar3 = ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) != 0) + 2) *
          *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
  if (uVar3 < unaff_s5 - 2U) {
    iVar6 = uVar3 + iVar2;
    uVar3 = iVar5 - iVar6;
    if ((0x1f < uVar3) && (uVar4 = _LVL422(), uVar4 == 0)) {
      uVar4 = _LVL425();
      if (uVar4 != 0) {
        uVar3 = (uVar3 - 2) - (uint)*(byte *)(iVar6 + 0x21);
      }
      if (unaff_s7 != (int *)0x0) {
        *unaff_s7 = iVar2;
      }
      if (unaff_s6 != (uint *)0x0) {
        *unaff_s6 = uVar3;
      }
      iVar2 += uVar3;
    }
  }
  if (iVar5 - iVar2 < *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44)) {
    _L345();
  }
  else {
    uVar3 = FUN_00011136();
    if (uVar3 != 0) {
      if (((*unaff_s0 != '\x03') || (*(int *)(unaff_s0 + 0x34) == 0)) ||
         (uVar4 = FUN_00011152(), uVar4 != 0)) {
        uVar4 = FUN_0001117c();
        if (((uVar4 != 0) || (uVar4 = FUN_00011192(), uVar4 != 0)) ||
           (uVar4 = FUN_000111a2(), -1 < (int)uVar4)) {
          uVar3 = _L0();
          return uVar3;
        }
        FUN_000111b2();
        *(uint *)(unaff_s0 + 0x34) = uVar3;
        iVar6 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
        iVar5 -= iVar2 + iVar6;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0) {
          if (iVar5 < iVar6 << 1) goto _L0;
          uVar3 = FUN_00011310();
          if ((int)uVar3 < 0) {
            return 1;
          }
          uVar3 = FUN_00011324();
          if ((-1 < (int)uVar3) || (uVar3 = FUN_00011344(), -1 < (int)uVar3)) {
            uVar3 = _L345();
            return uVar3;
          }
          FUN_00011356();
          iVar5 = *(int *)(unaff_s0 + 0x44);
          uVar3 = FUN_00011368();
          *(uint *)(iVar5 + 0x30) = uVar3;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x30) == 0) {
            return 1;
          }
          uVar3 = FUN_0001137e();
          if (uVar3 == 0) {
            uVar3 = _L345();
            return uVar3;
          }
          iVar5 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44) << 1;
        }
        else {
          if (iVar5 < iVar6) {
_L0:
            uVar3 = _L345();
            return uVar3;
          }
          FUN_000111e6();
          iVar5 = *(int *)(unaff_s0 + 0x44);
          uVar3 = FUN_000111f8();
          *(uint *)(iVar5 + 0x2c) = uVar3;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x2c) == 0) {
            return 1;
          }
          uVar3 = _L0();
          uVar4 = _LVL454();
          if (((((uVar3 == 0) || (uVar4 == 0)) || (uVar3 = _LVL461(), uVar3 != 0)) ||
              ((uVar3 = FUN_00011262(), uVar3 != 0 || (uVar3 = FUN_00011270(), uVar3 != 0)))) ||
             (uVar3 = FUN_00011280(), -1 < (int)uVar3)) {
            FUN_0001122c();
            FUN_00011238();
            uVar3 = _L345();
            return uVar3;
          }
          FUN_00011290();
          uVar3 = FUN_000112a2();
          if (((int)uVar3 < 0) || (uVar3 = FUN_000112ba(), uVar3 == 0)) {
            uVar3 = _L0();
            return uVar3;
          }
          FUN_000112c8();
          iVar5 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
        }
        iVar5 = iVar2 + iVar6 + iVar5;
        uVar3 = FUN_000112da();
        if (uVar3 == 0) {
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) != 0) {
            _L0();
            return 0x7b;
          }
          _L0();
          *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
        }
        else {
          if ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) != 0) &&
             ((bVar1 = *(byte *)(iVar5 + 1), uVar3 = _L0(), bVar1 - 1 != uVar3 ||
              (uVar3 = FUN_00011402(), uVar3 != 0)))) {
            uVar3 = _L0();
            return uVar3;
          }
          FUN_00011410();
          iVar2 = *(int *)(unaff_s0 + 0x44);
          uVar3 = _L0();
          *(uint *)(iVar2 + 0x60) = uVar3;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
            return 1;
          }
          FUN_0001143e();
          *(undefined *)
           (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar5 + 1) + -1) = 0;
        }
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) == 0) {
          return 0;
        }
        uVar3 = FUN_000113b2();
        if (uVar3 != 0) {
          return 0;
        }
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) != 0) {
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) == 0) {
            return 0;
          }
          uVar3 = FUN_0001145e();
          if (uVar3 != 0) {
            return 0;
          }
        }
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
          return 0xffff;
        }
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
          uVar3 = FUN_00011472();
          return (uint)(uVar3 == 0) * -0x10000 >> 0x10;
        }
        return 0;
      }
      _L0();
      FUN_00011170();
    }
  }
  return 1;
}



uint _LVL422(void)

{
  byte bVar1;
  char *unaff_s0;
  int unaff_s1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int *unaff_s6;
  int *unaff_s7;
  
  uVar2 = _LVL422();
  if (uVar2 == 0) {
    uVar2 = _LVL425();
    if (uVar2 != 0) {
      unaff_s5 = (unaff_s5 + -2) - (uint)*(byte *)(unaff_s4 + 0x21);
    }
    if (unaff_s7 != (int *)0x0) {
      *unaff_s7 = unaff_s1;
    }
    if (unaff_s6 != (int *)0x0) {
      *unaff_s6 = unaff_s5;
    }
    unaff_s1 += unaff_s5;
  }
  if (unaff_s3 - unaff_s1 < *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44)) {
    _L345();
  }
  else {
    uVar2 = FUN_00011136();
    if (uVar2 != 0) {
      if (((*unaff_s0 != '\x03') || (*(int *)(unaff_s0 + 0x34) == 0)) ||
         (uVar3 = FUN_00011152(), uVar3 != 0)) {
        uVar3 = FUN_0001117c();
        if (((uVar3 != 0) || (uVar3 = FUN_00011192(), uVar3 != 0)) ||
           (uVar3 = FUN_000111a2(), -1 < (int)uVar3)) {
          uVar2 = _L0();
          return uVar2;
        }
        FUN_000111b2();
        *(uint *)(unaff_s0 + 0x34) = uVar2;
        iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
        iVar5 = unaff_s3 - (unaff_s1 + iVar4);
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0) {
          if (iVar5 < iVar4 << 1) goto _L0;
          uVar2 = FUN_00011310();
          if ((int)uVar2 < 0) {
            return 1;
          }
          uVar2 = FUN_00011324();
          if ((-1 < (int)uVar2) || (uVar2 = FUN_00011344(), -1 < (int)uVar2)) {
            uVar2 = _L345();
            return uVar2;
          }
          FUN_00011356();
          iVar5 = *(int *)(unaff_s0 + 0x44);
          uVar2 = FUN_00011368();
          *(uint *)(iVar5 + 0x30) = uVar2;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x30) == 0) {
            return 1;
          }
          uVar2 = FUN_0001137e();
          if (uVar2 == 0) {
            uVar2 = _L345();
            return uVar2;
          }
          iVar5 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44) << 1;
        }
        else {
          if (iVar5 < iVar4) {
_L0:
            uVar2 = _L345();
            return uVar2;
          }
          FUN_000111e6();
          iVar5 = *(int *)(unaff_s0 + 0x44);
          uVar2 = FUN_000111f8();
          *(uint *)(iVar5 + 0x2c) = uVar2;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x2c) == 0) {
            return 1;
          }
          uVar2 = _L0();
          uVar3 = _LVL454();
          if (((((uVar2 == 0) || (uVar3 == 0)) || (uVar2 = _LVL461(), uVar2 != 0)) ||
              ((uVar2 = FUN_00011262(), uVar2 != 0 || (uVar2 = FUN_00011270(), uVar2 != 0)))) ||
             (uVar2 = FUN_00011280(), -1 < (int)uVar2)) {
            FUN_0001122c();
            FUN_00011238();
            uVar2 = _L345();
            return uVar2;
          }
          FUN_00011290();
          uVar2 = FUN_000112a2();
          if (((int)uVar2 < 0) || (uVar2 = FUN_000112ba(), uVar2 == 0)) {
            uVar2 = _L0();
            return uVar2;
          }
          FUN_000112c8();
          iVar5 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
        }
        iVar5 = unaff_s1 + iVar4 + iVar5;
        uVar2 = FUN_000112da();
        if (uVar2 == 0) {
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) != 0) {
            _L0();
            return 0x7b;
          }
          _L0();
          *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
        }
        else {
          if ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) != 0) &&
             ((bVar1 = *(byte *)(iVar5 + 1), uVar2 = _L0(), bVar1 - 1 != uVar2 ||
              (uVar2 = FUN_00011402(), uVar2 != 0)))) {
            uVar2 = _L0();
            return uVar2;
          }
          FUN_00011410();
          iVar4 = *(int *)(unaff_s0 + 0x44);
          uVar2 = _L0();
          *(uint *)(iVar4 + 0x60) = uVar2;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
            return 1;
          }
          FUN_0001143e();
          *(undefined *)
           (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar5 + 1) + -1) = 0;
        }
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) == 0) {
          return unaff_s2;
        }
        uVar2 = FUN_000113b2();
        if (uVar2 != 0) {
          return unaff_s2;
        }
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) != 0) {
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) == 0) {
            return unaff_s2;
          }
          uVar2 = FUN_0001145e();
          if (uVar2 != 0) {
            return unaff_s2;
          }
        }
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
          return 0xffff;
        }
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
          uVar2 = FUN_00011472();
          return (uint)(uVar2 == 0) * -0x10000 >> 0x10;
        }
        return unaff_s2;
      }
      _L0();
      FUN_00011170();
    }
  }
  return 1;
}



uint _LVL425(void)

{
  byte bVar1;
  char *unaff_s0;
  int unaff_s1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int *unaff_s6;
  int *unaff_s7;
  
  uVar3 = _LVL425();
  if (uVar3 != 0) {
    unaff_s5 = (unaff_s5 + -2) - (uint)*(byte *)(unaff_s4 + 0x21);
  }
  if (unaff_s7 != (int *)0x0) {
    *unaff_s7 = unaff_s1;
  }
  if (unaff_s6 != (int *)0x0) {
    *unaff_s6 = unaff_s5;
  }
  if (unaff_s3 - (unaff_s1 + unaff_s5) < *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44)) {
    _L345();
  }
  else {
    uVar3 = FUN_00011136();
    if (uVar3 != 0) {
      if (((*unaff_s0 != '\x03') || (*(int *)(unaff_s0 + 0x34) == 0)) ||
         (uVar4 = FUN_00011152(), uVar4 != 0)) {
        uVar4 = FUN_0001117c();
        if (((uVar4 != 0) || (uVar4 = FUN_00011192(), uVar4 != 0)) ||
           (uVar4 = FUN_000111a2(), -1 < (int)uVar4)) {
          uVar3 = _L0();
          return uVar3;
        }
        FUN_000111b2();
        *(uint *)(unaff_s0 + 0x34) = uVar3;
        iVar5 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
        iVar2 = unaff_s1 + unaff_s5 + iVar5;
        iVar6 = unaff_s3 - iVar2;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0) {
          if (iVar6 < iVar5 << 1) goto _L0;
          uVar3 = FUN_00011310();
          if ((int)uVar3 < 0) {
            return 1;
          }
          uVar3 = FUN_00011324();
          if ((-1 < (int)uVar3) || (uVar3 = FUN_00011344(), -1 < (int)uVar3)) {
            uVar3 = _L345();
            return uVar3;
          }
          FUN_00011356();
          iVar5 = *(int *)(unaff_s0 + 0x44);
          uVar3 = FUN_00011368();
          *(uint *)(iVar5 + 0x30) = uVar3;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x30) == 0) {
            return 1;
          }
          uVar3 = FUN_0001137e();
          if (uVar3 == 0) {
            uVar3 = _L345();
            return uVar3;
          }
          iVar5 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44) << 1;
        }
        else {
          if (iVar6 < iVar5) {
_L0:
            uVar3 = _L345();
            return uVar3;
          }
          FUN_000111e6();
          iVar5 = *(int *)(unaff_s0 + 0x44);
          uVar3 = FUN_000111f8();
          *(uint *)(iVar5 + 0x2c) = uVar3;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x2c) == 0) {
            return 1;
          }
          uVar3 = _L0();
          uVar4 = _LVL454();
          if (((((uVar3 == 0) || (uVar4 == 0)) || (uVar3 = _LVL461(), uVar3 != 0)) ||
              ((uVar3 = FUN_00011262(), uVar3 != 0 || (uVar3 = FUN_00011270(), uVar3 != 0)))) ||
             (uVar3 = FUN_00011280(), -1 < (int)uVar3)) {
            FUN_0001122c();
            FUN_00011238();
            uVar3 = _L345();
            return uVar3;
          }
          FUN_00011290();
          uVar3 = FUN_000112a2();
          if (((int)uVar3 < 0) || (uVar3 = FUN_000112ba(), uVar3 == 0)) {
            uVar3 = _L0();
            return uVar3;
          }
          FUN_000112c8();
          iVar5 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
        }
        iVar2 += iVar5;
        uVar3 = FUN_000112da();
        if (uVar3 == 0) {
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) != 0) {
            _L0();
            return 0x7b;
          }
          _L0();
          *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
        }
        else {
          if ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) != 0) &&
             ((bVar1 = *(byte *)(iVar2 + 1), uVar3 = _L0(), bVar1 - 1 != uVar3 ||
              (uVar3 = FUN_00011402(), uVar3 != 0)))) {
            uVar3 = _L0();
            return uVar3;
          }
          FUN_00011410();
          iVar5 = *(int *)(unaff_s0 + 0x44);
          uVar3 = _L0();
          *(uint *)(iVar5 + 0x60) = uVar3;
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
            return 1;
          }
          FUN_0001143e();
          *(undefined *)
           (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar2 + 1) + -1) = 0;
        }
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) == 0) {
          return unaff_s2;
        }
        uVar3 = FUN_000113b2();
        if (uVar3 != 0) {
          return unaff_s2;
        }
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) != 0) {
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) == 0) {
            return unaff_s2;
          }
          uVar3 = FUN_0001145e();
          if (uVar3 != 0) {
            return unaff_s2;
          }
        }
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
          return 0xffff;
        }
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
          uVar3 = FUN_00011472();
          return (uint)(uVar3 == 0) * -0x10000 >> 0x10;
        }
        return unaff_s2;
      }
      _L0();
      FUN_00011170();
    }
  }
  return 1;
}



undefined4 _L345(void)

{
  _L345();
  return 1;
}



uint FUN_00011136(void)

{
  byte bVar1;
  char *unaff_s0;
  int unaff_s1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint unaff_s2;
  int unaff_s3;
  
  uVar2 = FUN_00011136();
  if (uVar2 != 0) {
    if (((*unaff_s0 != '\x03') || (*(int *)(unaff_s0 + 0x34) == 0)) ||
       (uVar3 = FUN_00011152(), uVar3 != 0)) {
      uVar3 = FUN_0001117c();
      if (((uVar3 != 0) || (uVar3 = FUN_00011192(), uVar3 != 0)) ||
         (uVar3 = FUN_000111a2(), -1 < (int)uVar3)) {
        uVar2 = _L0();
        return uVar2;
      }
      FUN_000111b2();
      *(uint *)(unaff_s0 + 0x34) = uVar2;
      iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
      iVar5 = unaff_s3 - (unaff_s1 + iVar4);
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0) {
        if (iVar5 < iVar4 << 1) goto _L0;
        uVar2 = FUN_00011310();
        if ((int)uVar2 < 0) {
          return 1;
        }
        uVar2 = FUN_00011324();
        if ((-1 < (int)uVar2) || (uVar2 = FUN_00011344(), -1 < (int)uVar2)) {
          uVar2 = _L345();
          return uVar2;
        }
        FUN_00011356();
        iVar5 = *(int *)(unaff_s0 + 0x44);
        uVar2 = FUN_00011368();
        *(uint *)(iVar5 + 0x30) = uVar2;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x30) == 0) {
          return 1;
        }
        uVar2 = FUN_0001137e();
        if (uVar2 == 0) {
          uVar2 = _L345();
          return uVar2;
        }
        iVar5 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44) << 1;
      }
      else {
        if (iVar5 < iVar4) {
_L0:
          uVar2 = _L345();
          return uVar2;
        }
        FUN_000111e6();
        iVar5 = *(int *)(unaff_s0 + 0x44);
        uVar2 = FUN_000111f8();
        *(uint *)(iVar5 + 0x2c) = uVar2;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x2c) == 0) {
          return 1;
        }
        uVar2 = _L0();
        uVar3 = _LVL454();
        if (((((uVar2 == 0) || (uVar3 == 0)) || (uVar2 = _LVL461(), uVar2 != 0)) ||
            ((uVar2 = FUN_00011262(), uVar2 != 0 || (uVar2 = FUN_00011270(), uVar2 != 0)))) ||
           (uVar2 = FUN_00011280(), -1 < (int)uVar2)) {
          FUN_0001122c();
          FUN_00011238();
          uVar2 = _L345();
          return uVar2;
        }
        FUN_00011290();
        uVar2 = FUN_000112a2();
        if (((int)uVar2 < 0) || (uVar2 = FUN_000112ba(), uVar2 == 0)) {
          uVar2 = _L0();
          return uVar2;
        }
        FUN_000112c8();
        iVar5 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
      }
      iVar5 = unaff_s1 + iVar4 + iVar5;
      uVar2 = FUN_000112da();
      if (uVar2 == 0) {
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) != 0) {
          _L0();
          return 0x7b;
        }
        _L0();
        *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
      }
      else {
        if ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) != 0) &&
           ((bVar1 = *(byte *)(iVar5 + 1), uVar2 = _L0(), bVar1 - 1 != uVar2 ||
            (uVar2 = FUN_00011402(), uVar2 != 0)))) {
          uVar2 = _L0();
          return uVar2;
        }
        FUN_00011410();
        iVar4 = *(int *)(unaff_s0 + 0x44);
        uVar2 = _L0();
        *(uint *)(iVar4 + 0x60) = uVar2;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
          return 1;
        }
        FUN_0001143e();
        *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar5 + 1) + -1)
             = 0;
      }
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) == 0) {
        return unaff_s2;
      }
      uVar2 = FUN_000113b2();
      if (uVar2 != 0) {
        return unaff_s2;
      }
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) != 0) {
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) == 0) {
          return unaff_s2;
        }
        uVar2 = FUN_0001145e();
        if (uVar2 != 0) {
          return unaff_s2;
        }
      }
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
        return 0xffff;
      }
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
        uVar2 = FUN_00011472();
        return (uint)(uVar2 == 0) * -0x10000 >> 0x10;
      }
      return unaff_s2;
    }
    _L0();
    FUN_00011170();
  }
  return 1;
}



uint FUN_00011152(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint unaff_s2;
  int unaff_s3;
  undefined4 unaff_s4;
  
  uVar2 = FUN_00011152();
  if (uVar2 == 0) {
    _L0();
    FUN_00011170();
    return 1;
  }
  uVar2 = FUN_0001117c();
  if (((uVar2 != 0) || (uVar2 = FUN_00011192(), uVar2 != 0)) ||
     (uVar2 = FUN_000111a2(), -1 < (int)uVar2)) {
    uVar2 = _L0();
    return uVar2;
  }
  FUN_000111b2();
  *(undefined4 *)(unaff_s0 + 0x34) = unaff_s4;
  iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
  iVar5 = unaff_s3 - (unaff_s1 + iVar4);
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0) {
    if (iVar5 < iVar4 << 1) goto _L0;
    uVar2 = FUN_00011310();
    if ((int)uVar2 < 0) {
      return 1;
    }
    uVar2 = FUN_00011324();
    if ((-1 < (int)uVar2) || (uVar2 = FUN_00011344(), -1 < (int)uVar2)) {
      uVar2 = _L345();
      return uVar2;
    }
    FUN_00011356();
    iVar5 = *(int *)(unaff_s0 + 0x44);
    uVar2 = FUN_00011368();
    *(uint *)(iVar5 + 0x30) = uVar2;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x30) == 0) {
      return 1;
    }
    uVar2 = FUN_0001137e();
    if (uVar2 == 0) {
      uVar2 = _L345();
      return uVar2;
    }
    iVar5 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44) << 1;
  }
  else {
    if (iVar5 < iVar4) {
_L0:
      uVar2 = _L345();
      return uVar2;
    }
    FUN_000111e6();
    iVar5 = *(int *)(unaff_s0 + 0x44);
    uVar2 = FUN_000111f8();
    *(uint *)(iVar5 + 0x2c) = uVar2;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x2c) == 0) {
      return 1;
    }
    uVar2 = _L0();
    uVar3 = _LVL454();
    if (((uVar2 == 0) || (uVar3 == 0)) ||
       ((uVar2 = _LVL461(), uVar2 != 0 ||
        (((uVar2 = FUN_00011262(), uVar2 != 0 || (uVar2 = FUN_00011270(), uVar2 != 0)) ||
         (uVar2 = FUN_00011280(), -1 < (int)uVar2)))))) {
      FUN_0001122c();
      FUN_00011238();
      uVar2 = _L345();
      return uVar2;
    }
    FUN_00011290();
    uVar2 = FUN_000112a2();
    if (((int)uVar2 < 0) || (uVar2 = FUN_000112ba(), uVar2 == 0)) {
      uVar2 = _L0();
      return uVar2;
    }
    FUN_000112c8();
    iVar5 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
  }
  iVar5 = unaff_s1 + iVar4 + iVar5;
  uVar2 = FUN_000112da();
  iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
  if (uVar2 == 0) {
    if (iVar4 != 0) {
      _L0();
      return 0x7b;
    }
    _L0();
    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
  }
  else {
    if ((iVar4 != 0) &&
       ((bVar1 = *(byte *)(iVar5 + 1), uVar2 = _L0(), bVar1 - 1 != uVar2 ||
        (uVar2 = FUN_00011402(), uVar2 != 0)))) {
      uVar2 = _L0();
      return uVar2;
    }
    FUN_00011410();
    iVar4 = *(int *)(unaff_s0 + 0x44);
    uVar2 = _L0();
    *(uint *)(iVar4 + 0x60) = uVar2;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
      return 1;
    }
    FUN_0001143e();
    *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar5 + 1) + -1) = 0
    ;
  }
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) == 0) {
    return unaff_s2;
  }
  uVar2 = FUN_000113b2();
  if (uVar2 != 0) {
    return unaff_s2;
  }
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) != 0) {
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) == 0) {
      return unaff_s2;
    }
    uVar2 = FUN_0001145e();
    if (uVar2 != 0) {
      return unaff_s2;
    }
  }
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
    return 0xffff;
  }
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
    uVar2 = FUN_00011472();
    return (uint)(uVar2 == 0) * -0x10000 >> 0x10;
  }
  return unaff_s2;
}



undefined4 _L0(void)

{
  _L0();
  FUN_00011170();
  return 1;
}



undefined4 FUN_00011170(void)

{
  FUN_00011170();
  return 1;
}



uint FUN_0001117c(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint unaff_s2;
  int unaff_s3;
  undefined4 unaff_s4;
  
  uVar2 = FUN_0001117c();
  if (((uVar2 != 0) || (uVar2 = FUN_00011192(), uVar2 != 0)) ||
     (uVar2 = FUN_000111a2(), -1 < (int)uVar2)) {
    uVar2 = _L0();
    return uVar2;
  }
  FUN_000111b2();
  *(undefined4 *)(unaff_s0 + 0x34) = unaff_s4;
  iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
  iVar5 = unaff_s3 - (unaff_s1 + iVar4);
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0) {
    if (iVar5 < iVar4 << 1) goto _L0;
    uVar2 = FUN_00011310();
    if ((int)uVar2 < 0) {
      return 1;
    }
    uVar2 = FUN_00011324();
    if ((-1 < (int)uVar2) || (uVar2 = FUN_00011344(), -1 < (int)uVar2)) {
      uVar2 = _L345();
      return uVar2;
    }
    FUN_00011356();
    iVar5 = *(int *)(unaff_s0 + 0x44);
    uVar2 = FUN_00011368();
    *(uint *)(iVar5 + 0x30) = uVar2;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x30) == 0) {
      return 1;
    }
    uVar2 = FUN_0001137e();
    if (uVar2 == 0) {
      uVar2 = _L345();
      return uVar2;
    }
    iVar5 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44) << 1;
  }
  else {
    if (iVar5 < iVar4) {
_L0:
      uVar2 = _L345();
      return uVar2;
    }
    FUN_000111e6();
    iVar5 = *(int *)(unaff_s0 + 0x44);
    uVar2 = FUN_000111f8();
    *(uint *)(iVar5 + 0x2c) = uVar2;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x2c) == 0) {
      return 1;
    }
    uVar2 = _L0();
    uVar3 = _LVL454();
    if (((uVar2 == 0) || (uVar3 == 0)) ||
       ((uVar2 = _LVL461(), uVar2 != 0 ||
        (((uVar2 = FUN_00011262(), uVar2 != 0 || (uVar2 = FUN_00011270(), uVar2 != 0)) ||
         (uVar2 = FUN_00011280(), -1 < (int)uVar2)))))) {
      FUN_0001122c();
      FUN_00011238();
      uVar2 = _L345();
      return uVar2;
    }
    FUN_00011290();
    uVar2 = FUN_000112a2();
    if (((int)uVar2 < 0) || (uVar2 = FUN_000112ba(), uVar2 == 0)) {
      uVar2 = _L0();
      return uVar2;
    }
    FUN_000112c8();
    iVar5 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
  }
  iVar5 = unaff_s1 + iVar4 + iVar5;
  uVar2 = FUN_000112da();
  iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
  if (uVar2 == 0) {
    if (iVar4 != 0) {
      _L0();
      return 0x7b;
    }
    _L0();
    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
  }
  else {
    if ((iVar4 != 0) &&
       ((bVar1 = *(byte *)(iVar5 + 1), uVar2 = _L0(), bVar1 - 1 != uVar2 ||
        (uVar2 = FUN_00011402(), uVar2 != 0)))) {
      uVar2 = _L0();
      return uVar2;
    }
    FUN_00011410();
    iVar4 = *(int *)(unaff_s0 + 0x44);
    uVar2 = _L0();
    *(uint *)(iVar4 + 0x60) = uVar2;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
      return 1;
    }
    FUN_0001143e();
    *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar5 + 1) + -1) = 0
    ;
  }
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) == 0) {
    return unaff_s2;
  }
  uVar2 = FUN_000113b2();
  if (uVar2 != 0) {
    return unaff_s2;
  }
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) != 0) {
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) == 0) {
      return unaff_s2;
    }
    uVar2 = FUN_0001145e();
    if (uVar2 != 0) {
      return unaff_s2;
    }
  }
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
    return 0xffff;
  }
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
    uVar2 = FUN_00011472();
    return (uint)(uVar2 == 0) * -0x10000 >> 0x10;
  }
  return unaff_s2;
}



uint FUN_00011192(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint unaff_s2;
  int unaff_s3;
  undefined4 unaff_s4;
  
  uVar2 = FUN_00011192();
  if ((uVar2 != 0) || (uVar2 = FUN_000111a2(), -1 < (int)uVar2)) {
    uVar2 = _L0();
    return uVar2;
  }
  FUN_000111b2();
  *(undefined4 *)(unaff_s0 + 0x34) = unaff_s4;
  iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
  iVar5 = unaff_s3 - (unaff_s1 + iVar4);
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0) {
    if (iVar5 < iVar4 << 1) goto _L0;
    uVar2 = FUN_00011310();
    if ((int)uVar2 < 0) {
      return 1;
    }
    uVar2 = FUN_00011324();
    if ((-1 < (int)uVar2) || (uVar2 = FUN_00011344(), -1 < (int)uVar2)) {
      uVar2 = _L345();
      return uVar2;
    }
    FUN_00011356();
    iVar5 = *(int *)(unaff_s0 + 0x44);
    uVar2 = FUN_00011368();
    *(uint *)(iVar5 + 0x30) = uVar2;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x30) == 0) {
      return 1;
    }
    uVar2 = FUN_0001137e();
    if (uVar2 == 0) {
      uVar2 = _L345();
      return uVar2;
    }
    iVar5 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44) << 1;
  }
  else {
    if (iVar5 < iVar4) {
_L0:
      uVar2 = _L345();
      return uVar2;
    }
    FUN_000111e6();
    iVar5 = *(int *)(unaff_s0 + 0x44);
    uVar2 = FUN_000111f8();
    *(uint *)(iVar5 + 0x2c) = uVar2;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x2c) == 0) {
      return 1;
    }
    uVar2 = _L0();
    uVar3 = _LVL454();
    if (((((uVar2 == 0) || (uVar3 == 0)) || (uVar2 = _LVL461(), uVar2 != 0)) ||
        ((uVar2 = FUN_00011262(), uVar2 != 0 || (uVar2 = FUN_00011270(), uVar2 != 0)))) ||
       (uVar2 = FUN_00011280(), -1 < (int)uVar2)) {
      FUN_0001122c();
      FUN_00011238();
      uVar2 = _L345();
      return uVar2;
    }
    FUN_00011290();
    uVar2 = FUN_000112a2();
    if (((int)uVar2 < 0) || (uVar2 = FUN_000112ba(), uVar2 == 0)) {
      uVar2 = _L0();
      return uVar2;
    }
    FUN_000112c8();
    iVar5 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
  }
  iVar5 = unaff_s1 + iVar4 + iVar5;
  uVar2 = FUN_000112da();
  iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
  if (uVar2 == 0) {
    if (iVar4 != 0) {
      _L0();
      return 0x7b;
    }
    _L0();
    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
  }
  else {
    if ((iVar4 != 0) &&
       ((bVar1 = *(byte *)(iVar5 + 1), uVar2 = _L0(), bVar1 - 1 != uVar2 ||
        (uVar2 = FUN_00011402(), uVar2 != 0)))) {
      uVar2 = _L0();
      return uVar2;
    }
    FUN_00011410();
    iVar4 = *(int *)(unaff_s0 + 0x44);
    uVar2 = _L0();
    *(uint *)(iVar4 + 0x60) = uVar2;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
      return 1;
    }
    FUN_0001143e();
    *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar5 + 1) + -1) = 0
    ;
  }
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) == 0) {
    return unaff_s2;
  }
  uVar2 = FUN_000113b2();
  if (uVar2 != 0) {
    return unaff_s2;
  }
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) != 0) {
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) == 0) {
      return unaff_s2;
    }
    uVar2 = FUN_0001145e();
    if (uVar2 != 0) {
      return unaff_s2;
    }
  }
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
    return 0xffff;
  }
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
    uVar2 = FUN_00011472();
    return (uint)(uVar2 == 0) * -0x10000 >> 0x10;
  }
  return unaff_s2;
}



uint FUN_000111a2(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint unaff_s2;
  int unaff_s3;
  undefined4 unaff_s4;
  
  uVar2 = FUN_000111a2();
  if (-1 < (int)uVar2) {
    uVar2 = _L0();
    return uVar2;
  }
  FUN_000111b2();
  *(undefined4 *)(unaff_s0 + 0x34) = unaff_s4;
  iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
  iVar5 = unaff_s3 - (unaff_s1 + iVar4);
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0) {
    if (iVar5 < iVar4 << 1) goto _L0;
    uVar2 = FUN_00011310();
    if ((int)uVar2 < 0) {
      return 1;
    }
    uVar2 = FUN_00011324();
    if ((-1 < (int)uVar2) || (uVar2 = FUN_00011344(), -1 < (int)uVar2)) {
      uVar2 = _L345();
      return uVar2;
    }
    FUN_00011356();
    iVar5 = *(int *)(unaff_s0 + 0x44);
    uVar2 = FUN_00011368();
    *(uint *)(iVar5 + 0x30) = uVar2;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x30) == 0) {
      return 1;
    }
    uVar2 = FUN_0001137e();
    if (uVar2 == 0) {
      uVar2 = _L345();
      return uVar2;
    }
    iVar5 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44) << 1;
  }
  else {
    if (iVar5 < iVar4) {
_L0:
      uVar2 = _L345();
      return uVar2;
    }
    FUN_000111e6();
    iVar5 = *(int *)(unaff_s0 + 0x44);
    uVar2 = FUN_000111f8();
    *(uint *)(iVar5 + 0x2c) = uVar2;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x2c) == 0) {
      return 1;
    }
    uVar2 = _L0();
    uVar3 = _LVL454();
    if (((((uVar2 == 0) || (uVar3 == 0)) || (uVar2 = _LVL461(), uVar2 != 0)) ||
        ((uVar2 = FUN_00011262(), uVar2 != 0 || (uVar2 = FUN_00011270(), uVar2 != 0)))) ||
       (uVar2 = FUN_00011280(), -1 < (int)uVar2)) {
      FUN_0001122c();
      FUN_00011238();
      uVar2 = _L345();
      return uVar2;
    }
    FUN_00011290();
    uVar2 = FUN_000112a2();
    if (((int)uVar2 < 0) || (uVar2 = FUN_000112ba(), uVar2 == 0)) {
      uVar2 = _L0();
      return uVar2;
    }
    FUN_000112c8();
    iVar5 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
  }
  iVar5 = unaff_s1 + iVar4 + iVar5;
  uVar2 = FUN_000112da();
  iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
  if (uVar2 == 0) {
    if (iVar4 != 0) {
      _L0();
      return 0x7b;
    }
    _L0();
    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
  }
  else {
    if ((iVar4 != 0) &&
       ((bVar1 = *(byte *)(iVar5 + 1), uVar2 = _L0(), bVar1 - 1 != uVar2 ||
        (uVar2 = FUN_00011402(), uVar2 != 0)))) {
      uVar2 = _L0();
      return uVar2;
    }
    FUN_00011410();
    iVar4 = *(int *)(unaff_s0 + 0x44);
    uVar2 = _L0();
    *(uint *)(iVar4 + 0x60) = uVar2;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
      return 1;
    }
    FUN_0001143e();
    *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar5 + 1) + -1) = 0
    ;
  }
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) == 0) {
    return unaff_s2;
  }
  uVar2 = FUN_000113b2();
  if (uVar2 != 0) {
    return unaff_s2;
  }
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) != 0) {
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) == 0) {
      return unaff_s2;
    }
    uVar2 = FUN_0001145e();
    if (uVar2 != 0) {
      return unaff_s2;
    }
  }
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
    return 0xffff;
  }
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
    uVar2 = FUN_00011472();
    return (uint)(uVar2 == 0) * -0x10000 >> 0x10;
  }
  return unaff_s2;
}



uint FUN_000111b2(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint unaff_s2;
  int unaff_s3;
  undefined4 unaff_s4;
  
  FUN_000111b2();
  *(undefined4 *)(unaff_s0 + 0x34) = unaff_s4;
  iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
  iVar5 = unaff_s3 - (unaff_s1 + iVar4);
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0) {
    if (iVar5 < iVar4 << 1) goto _L0;
    uVar2 = FUN_00011310();
    if ((int)uVar2 < 0) {
      return 1;
    }
    uVar2 = FUN_00011324();
    if ((-1 < (int)uVar2) || (uVar2 = FUN_00011344(), -1 < (int)uVar2)) {
      uVar2 = _L345();
      return uVar2;
    }
    FUN_00011356();
    iVar5 = *(int *)(unaff_s0 + 0x44);
    uVar2 = FUN_00011368();
    *(uint *)(iVar5 + 0x30) = uVar2;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x30) == 0) {
      return 1;
    }
    uVar2 = FUN_0001137e();
    if (uVar2 == 0) {
      uVar2 = _L345();
      return uVar2;
    }
    iVar5 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44) << 1;
  }
  else {
    if (iVar5 < iVar4) {
_L0:
      uVar2 = _L345();
      return uVar2;
    }
    FUN_000111e6();
    iVar5 = *(int *)(unaff_s0 + 0x44);
    uVar2 = FUN_000111f8();
    *(uint *)(iVar5 + 0x2c) = uVar2;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x2c) == 0) {
      return 1;
    }
    uVar2 = _L0();
    uVar3 = _LVL454();
    if (((((uVar2 == 0) || (uVar3 == 0)) || (uVar2 = _LVL461(), uVar2 != 0)) ||
        ((uVar2 = FUN_00011262(), uVar2 != 0 || (uVar2 = FUN_00011270(), uVar2 != 0)))) ||
       (uVar2 = FUN_00011280(), -1 < (int)uVar2)) {
      FUN_0001122c();
      FUN_00011238();
      uVar2 = _L345();
      return uVar2;
    }
    FUN_00011290();
    uVar2 = FUN_000112a2();
    if (((int)uVar2 < 0) || (uVar2 = FUN_000112ba(), uVar2 == 0)) {
      uVar2 = _L0();
      return uVar2;
    }
    FUN_000112c8();
    iVar5 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
  }
  iVar5 = unaff_s1 + iVar4 + iVar5;
  uVar2 = FUN_000112da();
  iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
  if (uVar2 == 0) {
    if (iVar4 != 0) {
      _L0();
      return 0x7b;
    }
    _L0();
    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
  }
  else {
    if ((iVar4 != 0) &&
       ((bVar1 = *(byte *)(iVar5 + 1), uVar2 = _L0(), bVar1 - 1 != uVar2 ||
        (uVar2 = FUN_00011402(), uVar2 != 0)))) {
      uVar2 = _L0();
      return uVar2;
    }
    FUN_00011410();
    iVar4 = *(int *)(unaff_s0 + 0x44);
    uVar2 = _L0();
    *(uint *)(iVar4 + 0x60) = uVar2;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
      return 1;
    }
    FUN_0001143e();
    *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar5 + 1) + -1) = 0
    ;
  }
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) == 0) {
    return unaff_s2;
  }
  uVar2 = FUN_000113b2();
  if (uVar2 != 0) {
    return unaff_s2;
  }
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) != 0) {
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) == 0) {
      return unaff_s2;
    }
    uVar2 = FUN_0001145e();
    if (uVar2 != 0) {
      return unaff_s2;
    }
  }
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
    return 0xffff;
  }
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
    uVar2 = FUN_00011472();
    return (uint)(uVar2 == 0) * -0x10000 >> 0x10;
  }
  return unaff_s2;
}



uint FUN_000111e6(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint unaff_s2;
  int iVar5;
  
  FUN_000111e6();
  iVar5 = *(int *)(unaff_s0 + 0x44);
  uVar2 = FUN_000111f8();
  *(uint *)(iVar5 + 0x2c) = uVar2;
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x2c) == 0) {
_L0:
    unaff_s2 = 1;
  }
  else {
    uVar2 = _L0();
    uVar3 = _LVL454();
    if (((((uVar2 == 0) || (uVar3 == 0)) || (uVar2 = _LVL461(), uVar2 != 0)) ||
        ((uVar2 = FUN_00011262(), uVar2 != 0 || (uVar2 = FUN_00011270(), uVar2 != 0)))) ||
       (uVar2 = FUN_00011280(), -1 < (int)uVar2)) {
      FUN_0001122c();
      FUN_00011238();
      uVar2 = _L345();
      return uVar2;
    }
    FUN_00011290();
    uVar2 = FUN_000112a2();
    if (((int)uVar2 < 0) || (uVar2 = FUN_000112ba(), uVar2 == 0)) {
      uVar2 = _L0();
      return uVar2;
    }
    FUN_000112c8();
    iVar5 = unaff_s1 + *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    uVar2 = FUN_000112da();
    iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
    if (uVar2 == 0) {
      if (iVar4 != 0) {
        _L0();
        return 0x7b;
      }
      _L0();
      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
    }
    else {
      if ((iVar4 != 0) &&
         ((bVar1 = *(byte *)(iVar5 + 1), uVar2 = _L0(), bVar1 - 1 != uVar2 ||
          (uVar2 = FUN_00011402(), uVar2 != 0)))) {
        uVar2 = _L0();
        return uVar2;
      }
      FUN_00011410();
      iVar4 = *(int *)(unaff_s0 + 0x44);
      uVar2 = _L0();
      *(uint *)(iVar4 + 0x60) = uVar2;
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) goto _L0;
      FUN_0001143e();
      *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar5 + 1) + -1) =
           0;
    }
    if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar2 = FUN_000113b2(), uVar2 == 0))
       && ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
           ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar2 = FUN_0001145e(), uVar2 == 0)
            ))))) {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
        unaff_s2 = 0xffff;
      }
      else {
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
          uVar2 = FUN_00011472();
          unaff_s2 = (uint)(uVar2 == 0) * -0x10000 >> 0x10;
        }
      }
    }
  }
  return unaff_s2;
}



uint FUN_000111f8(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint unaff_s2;
  int unaff_s4;
  
  uVar3 = FUN_000111f8();
  *(uint *)(unaff_s4 + 0x2c) = uVar3;
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x2c) == 0) {
_L0:
    unaff_s2 = 1;
  }
  else {
    uVar3 = _L0();
    uVar4 = _LVL454();
    if (((((uVar3 == 0) || (uVar4 == 0)) || (uVar3 = _LVL461(), uVar3 != 0)) ||
        ((uVar3 = FUN_00011262(), uVar3 != 0 || (uVar3 = FUN_00011270(), uVar3 != 0)))) ||
       (uVar3 = FUN_00011280(), -1 < (int)uVar3)) {
      FUN_0001122c();
      FUN_00011238();
      uVar3 = _L345();
      return uVar3;
    }
    FUN_00011290();
    uVar3 = FUN_000112a2();
    if (((int)uVar3 < 0) || (uVar3 = FUN_000112ba(), uVar3 == 0)) {
      uVar3 = _L0();
      return uVar3;
    }
    FUN_000112c8();
    iVar2 = unaff_s1 + *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    uVar3 = FUN_000112da();
    iVar5 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
    if (uVar3 == 0) {
      if (iVar5 != 0) {
        _L0();
        return 0x7b;
      }
      _L0();
      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
    }
    else {
      if ((iVar5 != 0) &&
         ((bVar1 = *(byte *)(iVar2 + 1), uVar3 = _L0(), bVar1 - 1 != uVar3 ||
          (uVar3 = FUN_00011402(), uVar3 != 0)))) {
        uVar3 = _L0();
        return uVar3;
      }
      FUN_00011410();
      iVar5 = *(int *)(unaff_s0 + 0x44);
      uVar3 = _L0();
      *(uint *)(iVar5 + 0x60) = uVar3;
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) goto _L0;
      FUN_0001143e();
      *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar2 + 1) + -1) =
           0;
    }
    if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar3 = FUN_000113b2(), uVar3 == 0))
       && ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
           ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar3 = FUN_0001145e(), uVar3 == 0)
            ))))) {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
        unaff_s2 = 0xffff;
      }
      else {
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
          uVar3 = FUN_00011472();
          unaff_s2 = (uint)(uVar3 == 0) * -0x10000 >> 0x10;
        }
      }
    }
  }
  return unaff_s2;
}



uint _L0(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint unaff_s2;
  
  uVar3 = _L0();
  uVar4 = _LVL454();
  if (((((uVar3 != 0) && (uVar4 != 0)) && (uVar3 = _LVL461(), uVar3 == 0)) &&
      ((uVar3 = FUN_00011262(), uVar3 == 0 && (uVar3 = FUN_00011270(), uVar3 == 0)))) &&
     (uVar3 = FUN_00011280(), (int)uVar3 < 0)) {
    FUN_00011290();
    uVar3 = FUN_000112a2();
    if (((int)uVar3 < 0) || (uVar3 = FUN_000112ba(), uVar3 == 0)) {
      uVar3 = _L0();
      return uVar3;
    }
    FUN_000112c8();
    iVar2 = unaff_s1 + *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    uVar3 = FUN_000112da();
    iVar5 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
    if (uVar3 == 0) {
      if (iVar5 != 0) {
        _L0();
        return 0x7b;
      }
      _L0();
      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
    }
    else {
      if ((iVar5 != 0) &&
         ((bVar1 = *(byte *)(iVar2 + 1), uVar3 = _L0(), bVar1 - 1 != uVar3 ||
          (uVar3 = FUN_00011402(), uVar3 != 0)))) {
        uVar3 = _L0();
        return uVar3;
      }
      FUN_00011410();
      iVar5 = *(int *)(unaff_s0 + 0x44);
      uVar3 = _L0();
      *(uint *)(iVar5 + 0x60) = uVar3;
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
        return 1;
      }
      FUN_0001143e();
      *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar2 + 1) + -1) =
           0;
    }
    if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar3 = FUN_000113b2(), uVar3 == 0))
       && ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
           ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar3 = FUN_0001145e(), uVar3 == 0)
            ))))) {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
        unaff_s2 = 0xffff;
      }
      else {
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
          uVar3 = FUN_00011472();
          unaff_s2 = (uint)(uVar3 == 0) * -0x10000 >> 0x10;
        }
      }
    }
    return unaff_s2;
  }
  FUN_0001122c();
  FUN_00011238();
  uVar3 = _L345();
  return uVar3;
}



uint _LVL454(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint unaff_s2;
  int unaff_s4;
  
  uVar3 = _LVL454();
  if (((((unaff_s4 != 0) && (uVar3 != 0)) && (uVar3 = _LVL461(), uVar3 == 0)) &&
      ((uVar3 = FUN_00011262(), uVar3 == 0 && (uVar3 = FUN_00011270(), uVar3 == 0)))) &&
     (uVar3 = FUN_00011280(), (int)uVar3 < 0)) {
    FUN_00011290();
    uVar3 = FUN_000112a2();
    if (((int)uVar3 < 0) || (uVar3 = FUN_000112ba(), uVar3 == 0)) {
      uVar3 = _L0();
      return uVar3;
    }
    FUN_000112c8();
    iVar2 = unaff_s1 + *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    uVar3 = FUN_000112da();
    iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
    if (uVar3 == 0) {
      if (iVar4 != 0) {
        _L0();
        return 0x7b;
      }
      _L0();
      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
    }
    else {
      if ((iVar4 != 0) &&
         ((bVar1 = *(byte *)(iVar2 + 1), uVar3 = _L0(), bVar1 - 1 != uVar3 ||
          (uVar3 = FUN_00011402(), uVar3 != 0)))) {
        uVar3 = _L0();
        return uVar3;
      }
      FUN_00011410();
      iVar4 = *(int *)(unaff_s0 + 0x44);
      uVar3 = _L0();
      *(uint *)(iVar4 + 0x60) = uVar3;
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
        return 1;
      }
      FUN_0001143e();
      *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar2 + 1) + -1) =
           0;
    }
    if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar3 = FUN_000113b2(), uVar3 == 0))
       && ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
           ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar3 = FUN_0001145e(), uVar3 == 0)
            ))))) {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
        unaff_s2 = 0xffff;
      }
      else {
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
          uVar3 = FUN_00011472();
          unaff_s2 = (uint)(uVar3 == 0) * -0x10000 >> 0x10;
        }
      }
    }
    return unaff_s2;
  }
  FUN_0001122c();
  FUN_00011238();
  uVar3 = _L345();
  return uVar3;
}



void FUN_0001122c(void)

{
  FUN_0001122c();
  FUN_00011238();
  _L345();
  return;
}



void FUN_00011238(void)

{
  FUN_00011238();
  _L345();
  return;
}



uint _LVL461(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint unaff_s2;
  
  uVar3 = _LVL461();
  if ((((uVar3 != 0) || (uVar3 = FUN_00011262(), uVar3 != 0)) ||
      (uVar3 = FUN_00011270(), uVar3 != 0)) || (uVar3 = FUN_00011280(), -1 < (int)uVar3)) {
    FUN_0001122c();
    FUN_00011238();
    uVar3 = _L345();
    return uVar3;
  }
  FUN_00011290();
  uVar3 = FUN_000112a2();
  if (((int)uVar3 < 0) || (uVar3 = FUN_000112ba(), uVar3 == 0)) {
    uVar3 = _L0();
    return uVar3;
  }
  FUN_000112c8();
  iVar2 = unaff_s1 + *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
  uVar3 = FUN_000112da();
  iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
  if (uVar3 == 0) {
    if (iVar4 != 0) {
      _L0();
      return 0x7b;
    }
    _L0();
    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
  }
  else {
    if ((iVar4 != 0) &&
       ((bVar1 = *(byte *)(iVar2 + 1), uVar3 = _L0(), bVar1 - 1 != uVar3 ||
        (uVar3 = FUN_00011402(), uVar3 != 0)))) {
      uVar3 = _L0();
      return uVar3;
    }
    FUN_00011410();
    iVar4 = *(int *)(unaff_s0 + 0x44);
    uVar3 = _L0();
    *(uint *)(iVar4 + 0x60) = uVar3;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
      return 1;
    }
    FUN_0001143e();
    *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar2 + 1) + -1) = 0
    ;
  }
  if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar3 = FUN_000113b2(), uVar3 == 0)) &&
     ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
      ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar3 = FUN_0001145e(), uVar3 == 0))))))
  {
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
      unaff_s2 = 0xffff;
    }
    else {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
        uVar3 = FUN_00011472();
        unaff_s2 = (uint)(uVar3 == 0) * -0x10000 >> 0x10;
      }
    }
  }
  return unaff_s2;
}



uint FUN_00011262(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint unaff_s2;
  
  uVar3 = FUN_00011262();
  if (((uVar3 != 0) || (uVar3 = FUN_00011270(), uVar3 != 0)) ||
     (uVar3 = FUN_00011280(), -1 < (int)uVar3)) {
    FUN_0001122c();
    FUN_00011238();
    uVar3 = _L345();
    return uVar3;
  }
  FUN_00011290();
  uVar3 = FUN_000112a2();
  if (((int)uVar3 < 0) || (uVar3 = FUN_000112ba(), uVar3 == 0)) {
    uVar3 = _L0();
    return uVar3;
  }
  FUN_000112c8();
  iVar2 = unaff_s1 + *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
  uVar3 = FUN_000112da();
  iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
  if (uVar3 == 0) {
    if (iVar4 != 0) {
      _L0();
      return 0x7b;
    }
    _L0();
    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
  }
  else {
    if ((iVar4 != 0) &&
       ((bVar1 = *(byte *)(iVar2 + 1), uVar3 = _L0(), bVar1 - 1 != uVar3 ||
        (uVar3 = FUN_00011402(), uVar3 != 0)))) {
      uVar3 = _L0();
      return uVar3;
    }
    FUN_00011410();
    iVar4 = *(int *)(unaff_s0 + 0x44);
    uVar3 = _L0();
    *(uint *)(iVar4 + 0x60) = uVar3;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
      return 1;
    }
    FUN_0001143e();
    *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar2 + 1) + -1) = 0
    ;
  }
  if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar3 = FUN_000113b2(), uVar3 == 0)) &&
     ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
      ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar3 = FUN_0001145e(), uVar3 == 0))))))
  {
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
      unaff_s2 = 0xffff;
    }
    else {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
        uVar3 = FUN_00011472();
        unaff_s2 = (uint)(uVar3 == 0) * -0x10000 >> 0x10;
      }
    }
  }
  return unaff_s2;
}



uint FUN_00011270(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint unaff_s2;
  
  uVar3 = FUN_00011270();
  if ((uVar3 != 0) || (uVar3 = FUN_00011280(), -1 < (int)uVar3)) {
    FUN_0001122c();
    FUN_00011238();
    uVar3 = _L345();
    return uVar3;
  }
  FUN_00011290();
  uVar3 = FUN_000112a2();
  if ((-1 < (int)uVar3) && (uVar3 = FUN_000112ba(), uVar3 != 0)) {
    FUN_000112c8();
    iVar2 = unaff_s1 + *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    uVar3 = FUN_000112da();
    iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
    if (uVar3 == 0) {
      if (iVar4 != 0) {
        _L0();
        return 0x7b;
      }
      _L0();
      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
    }
    else {
      if ((iVar4 != 0) &&
         ((bVar1 = *(byte *)(iVar2 + 1), uVar3 = _L0(), bVar1 - 1 != uVar3 ||
          (uVar3 = FUN_00011402(), uVar3 != 0)))) {
        uVar3 = _L0();
        return uVar3;
      }
      FUN_00011410();
      iVar4 = *(int *)(unaff_s0 + 0x44);
      uVar3 = _L0();
      *(uint *)(iVar4 + 0x60) = uVar3;
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
        return 1;
      }
      FUN_0001143e();
      *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar2 + 1) + -1) =
           0;
    }
    if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar3 = FUN_000113b2(), uVar3 == 0))
       && ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
           ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar3 = FUN_0001145e(), uVar3 == 0)
            ))))) {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
        unaff_s2 = 0xffff;
      }
      else {
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
          uVar3 = FUN_00011472();
          unaff_s2 = (uint)(uVar3 == 0) * -0x10000 >> 0x10;
        }
      }
    }
    return unaff_s2;
  }
  uVar3 = _L0();
  return uVar3;
}



uint FUN_00011280(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint unaff_s2;
  
  uVar3 = FUN_00011280();
  if (-1 < (int)uVar3) {
    FUN_0001122c();
    FUN_00011238();
    uVar3 = _L345();
    return uVar3;
  }
  FUN_00011290();
  uVar3 = FUN_000112a2();
  if ((-1 < (int)uVar3) && (uVar3 = FUN_000112ba(), uVar3 != 0)) {
    FUN_000112c8();
    iVar2 = unaff_s1 + *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
    uVar3 = FUN_000112da();
    iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
    if (uVar3 == 0) {
      if (iVar4 != 0) {
        _L0();
        return 0x7b;
      }
      _L0();
      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
    }
    else {
      if ((iVar4 != 0) &&
         ((bVar1 = *(byte *)(iVar2 + 1), uVar3 = _L0(), bVar1 - 1 != uVar3 ||
          (uVar3 = FUN_00011402(), uVar3 != 0)))) {
        uVar3 = _L0();
        return uVar3;
      }
      FUN_00011410();
      iVar4 = *(int *)(unaff_s0 + 0x44);
      uVar3 = _L0();
      *(uint *)(iVar4 + 0x60) = uVar3;
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
        return 1;
      }
      FUN_0001143e();
      *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar2 + 1) + -1) =
           0;
    }
    if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar3 = FUN_000113b2(), uVar3 == 0))
       && ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
           ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar3 = FUN_0001145e(), uVar3 == 0)
            ))))) {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
        unaff_s2 = 0xffff;
      }
      else {
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
          uVar3 = FUN_00011472();
          unaff_s2 = (uint)(uVar3 == 0) * -0x10000 >> 0x10;
        }
      }
    }
    return unaff_s2;
  }
  uVar3 = _L0();
  return uVar3;
}



uint FUN_00011290(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint unaff_s2;
  
  FUN_00011290();
  uVar3 = FUN_000112a2();
  if (((int)uVar3 < 0) || (uVar3 = FUN_000112ba(), uVar3 == 0)) {
    uVar3 = _L0();
    return uVar3;
  }
  FUN_000112c8();
  iVar2 = unaff_s1 + *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
  uVar3 = FUN_000112da();
  iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
  if (uVar3 == 0) {
    if (iVar4 != 0) {
      _L0();
      return 0x7b;
    }
    _L0();
    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
  }
  else {
    if ((iVar4 != 0) &&
       ((bVar1 = *(byte *)(iVar2 + 1), uVar3 = _L0(), bVar1 - 1 != uVar3 ||
        (uVar3 = FUN_00011402(), uVar3 != 0)))) {
      uVar3 = _L0();
      return uVar3;
    }
    FUN_00011410();
    iVar4 = *(int *)(unaff_s0 + 0x44);
    uVar3 = _L0();
    *(uint *)(iVar4 + 0x60) = uVar3;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
      return 1;
    }
    FUN_0001143e();
    *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar2 + 1) + -1) = 0
    ;
  }
  if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar3 = FUN_000113b2(), uVar3 == 0)) &&
     ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
      ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar3 = FUN_0001145e(), uVar3 == 0))))))
  {
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
      unaff_s2 = 0xffff;
    }
    else {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
        uVar3 = FUN_00011472();
        unaff_s2 = (uint)(uVar3 == 0) * -0x10000 >> 0x10;
      }
    }
  }
  return unaff_s2;
}



uint FUN_000112a2(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint unaff_s2;
  
  uVar3 = FUN_000112a2();
  if (((int)uVar3 < 0) || (uVar3 = FUN_000112ba(), uVar3 == 0)) {
    uVar3 = _L0();
    return uVar3;
  }
  FUN_000112c8();
  iVar2 = unaff_s1 + *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
  uVar3 = FUN_000112da();
  iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
  if (uVar3 == 0) {
    if (iVar4 != 0) {
      _L0();
      return 0x7b;
    }
    _L0();
    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
  }
  else {
    if ((iVar4 != 0) &&
       ((bVar1 = *(byte *)(iVar2 + 1), uVar3 = _L0(), bVar1 - 1 != uVar3 ||
        (uVar3 = FUN_00011402(), uVar3 != 0)))) {
      uVar3 = _L0();
      return uVar3;
    }
    FUN_00011410();
    iVar4 = *(int *)(unaff_s0 + 0x44);
    uVar3 = _L0();
    *(uint *)(iVar4 + 0x60) = uVar3;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
      return 1;
    }
    FUN_0001143e();
    *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar2 + 1) + -1) = 0
    ;
  }
  if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar3 = FUN_000113b2(), uVar3 == 0)) &&
     ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
      ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar3 = FUN_0001145e(), uVar3 == 0))))))
  {
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
      unaff_s2 = 0xffff;
    }
    else {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
        uVar3 = FUN_00011472();
        unaff_s2 = (uint)(uVar3 == 0) * -0x10000 >> 0x10;
      }
    }
  }
  return unaff_s2;
}



uint FUN_000112ba(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint unaff_s2;
  
  uVar3 = FUN_000112ba();
  if (uVar3 == 0) {
    uVar3 = _L0();
    return uVar3;
  }
  FUN_000112c8();
  iVar2 = unaff_s1 + *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
  uVar3 = FUN_000112da();
  iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
  if (uVar3 == 0) {
    if (iVar4 != 0) {
      _L0();
      return 0x7b;
    }
    _L0();
    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
  }
  else {
    if ((iVar4 != 0) &&
       ((bVar1 = *(byte *)(iVar2 + 1), uVar3 = _L0(), bVar1 - 1 != uVar3 ||
        (uVar3 = FUN_00011402(), uVar3 != 0)))) {
      uVar3 = _L0();
      return uVar3;
    }
    FUN_00011410();
    iVar4 = *(int *)(unaff_s0 + 0x44);
    uVar3 = _L0();
    *(uint *)(iVar4 + 0x60) = uVar3;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
      return 1;
    }
    FUN_0001143e();
    *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar2 + 1) + -1) = 0
    ;
  }
  if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar3 = FUN_000113b2(), uVar3 == 0)) &&
     ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
      ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar3 = FUN_0001145e(), uVar3 == 0))))))
  {
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
      unaff_s2 = 0xffff;
    }
    else {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
        uVar3 = FUN_00011472();
        unaff_s2 = (uint)(uVar3 == 0) * -0x10000 >> 0x10;
      }
    }
  }
  return unaff_s2;
}



uint FUN_000112c8(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint unaff_s2;
  
  FUN_000112c8();
  iVar2 = unaff_s1 + *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44);
  uVar3 = FUN_000112da();
  iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
  if (uVar3 == 0) {
    if (iVar4 != 0) {
      _L0();
      return 0x7b;
    }
    _L0();
    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
  }
  else {
    if ((iVar4 != 0) &&
       ((bVar1 = *(byte *)(iVar2 + 1), uVar3 = _L0(), bVar1 - 1 != uVar3 ||
        (uVar3 = FUN_00011402(), uVar3 != 0)))) {
      uVar3 = _L0();
      return uVar3;
    }
    FUN_00011410();
    iVar4 = *(int *)(unaff_s0 + 0x44);
    uVar3 = _L0();
    *(uint *)(iVar4 + 0x60) = uVar3;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
      return 1;
    }
    FUN_0001143e();
    *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar2 + 1) + -1) = 0
    ;
  }
  if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar3 = FUN_000113b2(), uVar3 == 0)) &&
     ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
      ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar3 = FUN_0001145e(), uVar3 == 0))))))
  {
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
      unaff_s2 = 0xffff;
    }
    else {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
        uVar3 = FUN_00011472();
        unaff_s2 = (uint)(uVar3 == 0) * -0x10000 >> 0x10;
      }
    }
  }
  return unaff_s2;
}



uint FUN_000112da(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  int iVar3;
  uint unaff_s2;
  
  uVar2 = FUN_000112da();
  iVar3 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
  if (uVar2 == 0) {
    if (iVar3 != 0) {
      _L0();
      return 0x7b;
    }
    _L0();
    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
  }
  else {
    if ((iVar3 != 0) &&
       ((bVar1 = *(byte *)(unaff_s1 + 1), uVar2 = _L0(), bVar1 - 1 != uVar2 ||
        (uVar2 = FUN_00011402(), uVar2 != 0)))) {
      uVar2 = _L0();
      return uVar2;
    }
    FUN_00011410();
    iVar3 = *(int *)(unaff_s0 + 0x44);
    uVar2 = _L0();
    *(uint *)(iVar3 + 0x60) = uVar2;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
      return 1;
    }
    FUN_0001143e();
    *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(unaff_s1 + 1) + -1)
         = 0;
  }
  if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar2 = FUN_000113b2(), uVar2 == 0)) &&
     ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
      ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar2 = FUN_0001145e(), uVar2 == 0))))))
  {
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
      unaff_s2 = 0xffff;
    }
    else {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
        uVar2 = FUN_00011472();
        unaff_s2 = (uint)(uVar2 == 0) * -0x10000 >> 0x10;
      }
    }
  }
  return unaff_s2;
}



undefined4 _L0(void)

{
  _L0();
  return 0x7b;
}



uint FUN_00011310(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  int iVar3;
  uint unaff_s2;
  int iVar4;
  
  uVar2 = FUN_00011310();
  if (-1 < (int)uVar2) {
    uVar2 = FUN_00011324();
    if ((-1 < (int)uVar2) || (uVar2 = FUN_00011344(), -1 < (int)uVar2)) {
      uVar2 = _L345();
      return uVar2;
    }
    FUN_00011356();
    iVar4 = *(int *)(unaff_s0 + 0x44);
    uVar2 = FUN_00011368();
    *(uint *)(iVar4 + 0x30) = uVar2;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x30) != 0) {
      uVar2 = FUN_0001137e();
      if (uVar2 == 0) {
        uVar2 = _L345();
        return uVar2;
      }
      iVar4 = unaff_s1 + *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44) * 2;
      uVar2 = FUN_000112da();
      iVar3 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
      if (uVar2 == 0) {
        if (iVar3 != 0) {
          _L0();
          return 0x7b;
        }
        _L0();
        *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
      }
      else {
        if ((iVar3 != 0) &&
           ((bVar1 = *(byte *)(iVar4 + 1), uVar2 = _L0(), bVar1 - 1 != uVar2 ||
            (uVar2 = FUN_00011402(), uVar2 != 0)))) {
          uVar2 = _L0();
          return uVar2;
        }
        FUN_00011410();
        iVar3 = *(int *)(unaff_s0 + 0x44);
        uVar2 = _L0();
        *(uint *)(iVar3 + 0x60) = uVar2;
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
          return 1;
        }
        FUN_0001143e();
        *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar4 + 1) + -1)
             = 0;
      }
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) == 0) {
        return unaff_s2;
      }
      uVar2 = FUN_000113b2();
      if (uVar2 != 0) {
        return unaff_s2;
      }
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) != 0) {
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) == 0) {
          return unaff_s2;
        }
        uVar2 = FUN_0001145e();
        if (uVar2 != 0) {
          return unaff_s2;
        }
      }
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
        return 0xffff;
      }
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
        uVar2 = FUN_00011472();
        return (uint)(uVar2 == 0) * -0x10000 >> 0x10;
      }
      return unaff_s2;
    }
  }
  return 1;
}



uint FUN_00011324(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  int iVar3;
  uint unaff_s2;
  int iVar4;
  
  uVar2 = FUN_00011324();
  if ((-1 < (int)uVar2) || (uVar2 = FUN_00011344(), -1 < (int)uVar2)) {
    uVar2 = _L345();
    return uVar2;
  }
  FUN_00011356();
  iVar4 = *(int *)(unaff_s0 + 0x44);
  uVar2 = FUN_00011368();
  *(uint *)(iVar4 + 0x30) = uVar2;
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x30) == 0) {
_L0:
    unaff_s2 = 1;
  }
  else {
    uVar2 = FUN_0001137e();
    if (uVar2 == 0) {
      uVar2 = _L345();
      return uVar2;
    }
    iVar4 = unaff_s1 + *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44) * 2;
    uVar2 = FUN_000112da();
    iVar3 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
    if (uVar2 == 0) {
      if (iVar3 != 0) {
        _L0();
        return 0x7b;
      }
      _L0();
      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
    }
    else {
      if ((iVar3 != 0) &&
         ((bVar1 = *(byte *)(iVar4 + 1), uVar2 = _L0(), bVar1 - 1 != uVar2 ||
          (uVar2 = FUN_00011402(), uVar2 != 0)))) {
        uVar2 = _L0();
        return uVar2;
      }
      FUN_00011410();
      iVar3 = *(int *)(unaff_s0 + 0x44);
      uVar2 = _L0();
      *(uint *)(iVar3 + 0x60) = uVar2;
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) goto _L0;
      FUN_0001143e();
      *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar4 + 1) + -1) =
           0;
    }
    if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar2 = FUN_000113b2(), uVar2 == 0))
       && ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
           ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar2 = FUN_0001145e(), uVar2 == 0)
            ))))) {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
        unaff_s2 = 0xffff;
      }
      else {
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
          uVar2 = FUN_00011472();
          unaff_s2 = (uint)(uVar2 == 0) * -0x10000 >> 0x10;
        }
      }
    }
  }
  return unaff_s2;
}



uint FUN_00011344(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  int iVar3;
  uint unaff_s2;
  int iVar4;
  
  uVar2 = FUN_00011344();
  if (-1 < (int)uVar2) {
    uVar2 = _L345();
    return uVar2;
  }
  FUN_00011356();
  iVar4 = *(int *)(unaff_s0 + 0x44);
  uVar2 = FUN_00011368();
  *(uint *)(iVar4 + 0x30) = uVar2;
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x30) == 0) {
_L0:
    unaff_s2 = 1;
  }
  else {
    uVar2 = FUN_0001137e();
    if (uVar2 == 0) {
      uVar2 = _L345();
      return uVar2;
    }
    iVar4 = unaff_s1 + *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44) * 2;
    uVar2 = FUN_000112da();
    iVar3 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
    if (uVar2 == 0) {
      if (iVar3 != 0) {
        _L0();
        return 0x7b;
      }
      _L0();
      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
    }
    else {
      if ((iVar3 != 0) &&
         ((bVar1 = *(byte *)(iVar4 + 1), uVar2 = _L0(), bVar1 - 1 != uVar2 ||
          (uVar2 = FUN_00011402(), uVar2 != 0)))) {
        uVar2 = _L0();
        return uVar2;
      }
      FUN_00011410();
      iVar3 = *(int *)(unaff_s0 + 0x44);
      uVar2 = _L0();
      *(uint *)(iVar3 + 0x60) = uVar2;
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) goto _L0;
      FUN_0001143e();
      *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar4 + 1) + -1) =
           0;
    }
    if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar2 = FUN_000113b2(), uVar2 == 0))
       && ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
           ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar2 = FUN_0001145e(), uVar2 == 0)
            ))))) {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
        unaff_s2 = 0xffff;
      }
      else {
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
          uVar2 = FUN_00011472();
          unaff_s2 = (uint)(uVar2 == 0) * -0x10000 >> 0x10;
        }
      }
    }
  }
  return unaff_s2;
}



uint FUN_00011356(void)

{
  byte bVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  int iVar3;
  uint unaff_s2;
  int iVar4;
  
  FUN_00011356();
  iVar4 = *(int *)(unaff_s0 + 0x44);
  uVar2 = FUN_00011368();
  *(uint *)(iVar4 + 0x30) = uVar2;
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x30) == 0) {
_L0:
    unaff_s2 = 1;
  }
  else {
    uVar2 = FUN_0001137e();
    if (uVar2 == 0) {
      uVar2 = _L345();
      return uVar2;
    }
    iVar4 = unaff_s1 + *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44) * 2;
    uVar2 = FUN_000112da();
    iVar3 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
    if (uVar2 == 0) {
      if (iVar3 != 0) {
        _L0();
        return 0x7b;
      }
      _L0();
      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
    }
    else {
      if ((iVar3 != 0) &&
         ((bVar1 = *(byte *)(iVar4 + 1), uVar2 = _L0(), bVar1 - 1 != uVar2 ||
          (uVar2 = FUN_00011402(), uVar2 != 0)))) {
        uVar2 = _L0();
        return uVar2;
      }
      FUN_00011410();
      iVar3 = *(int *)(unaff_s0 + 0x44);
      uVar2 = _L0();
      *(uint *)(iVar3 + 0x60) = uVar2;
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) goto _L0;
      FUN_0001143e();
      *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar4 + 1) + -1) =
           0;
    }
    if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar2 = FUN_000113b2(), uVar2 == 0))
       && ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
           ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar2 = FUN_0001145e(), uVar2 == 0)
            ))))) {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
        unaff_s2 = 0xffff;
      }
      else {
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
          uVar2 = FUN_00011472();
          unaff_s2 = (uint)(uVar2 == 0) * -0x10000 >> 0x10;
        }
      }
    }
  }
  return unaff_s2;
}



uint FUN_00011368(void)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int unaff_s1;
  uint uVar3;
  int iVar4;
  uint unaff_s2;
  int unaff_s4;
  
  uVar3 = FUN_00011368();
  *(uint *)(unaff_s4 + 0x30) = uVar3;
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x30) == 0) {
_L0:
    unaff_s2 = 1;
  }
  else {
    uVar3 = FUN_0001137e();
    if (uVar3 == 0) {
      uVar3 = _L345();
      return uVar3;
    }
    iVar2 = unaff_s1 + *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44) * 2;
    uVar3 = FUN_000112da();
    iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
    if (uVar3 == 0) {
      if (iVar4 != 0) {
        _L0();
        return 0x7b;
      }
      _L0();
      *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
    }
    else {
      if ((iVar4 != 0) &&
         ((bVar1 = *(byte *)(iVar2 + 1), uVar3 = _L0(), bVar1 - 1 != uVar3 ||
          (uVar3 = FUN_00011402(), uVar3 != 0)))) {
        uVar3 = _L0();
        return uVar3;
      }
      FUN_00011410();
      iVar4 = *(int *)(unaff_s0 + 0x44);
      uVar3 = _L0();
      *(uint *)(iVar4 + 0x60) = uVar3;
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) goto _L0;
      FUN_0001143e();
      *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar2 + 1) + -1) =
           0;
    }
    if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar3 = FUN_000113b2(), uVar3 == 0))
       && ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
           ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar3 = FUN_0001145e(), uVar3 == 0)
            ))))) {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
        unaff_s2 = 0xffff;
      }
      else {
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
          uVar3 = FUN_00011472();
          unaff_s2 = (uint)(uVar3 == 0) * -0x10000 >> 0x10;
        }
      }
    }
  }
  return unaff_s2;
}



uint FUN_0001137e(void)

{
  byte bVar1;
  int unaff_s0;
  int iVar2;
  int unaff_s1;
  uint uVar3;
  int iVar4;
  uint unaff_s2;
  
  uVar3 = FUN_0001137e();
  if (uVar3 == 0) {
    uVar3 = _L345();
    return uVar3;
  }
  iVar2 = unaff_s1 + *(int *)(*(int *)(unaff_s0 + 0x44) + 0x44) * 2;
  uVar3 = FUN_000112da();
  iVar4 = *(int *)(*(int *)(unaff_s0 + 0x44) + 0x60);
  if (uVar3 == 0) {
    if (iVar4 != 0) {
      _L0();
      return 0x7b;
    }
    _L0();
    *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
  }
  else {
    if ((iVar4 != 0) &&
       ((bVar1 = *(byte *)(iVar2 + 1), uVar3 = _L0(), bVar1 - 1 != uVar3 ||
        (uVar3 = FUN_00011402(), uVar3 != 0)))) {
      uVar3 = _L0();
      return uVar3;
    }
    FUN_00011410();
    iVar4 = *(int *)(unaff_s0 + 0x44);
    uVar3 = _L0();
    *(uint *)(iVar4 + 0x60) = uVar3;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
      return 1;
    }
    FUN_0001143e();
    *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(iVar2 + 1) + -1) = 0
    ;
  }
  if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar3 = FUN_000113b2(), uVar3 == 0)) &&
     ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
      ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar3 = FUN_0001145e(), uVar3 == 0))))))
  {
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
      unaff_s2 = 0xffff;
    }
    else {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
        uVar3 = FUN_00011472();
        unaff_s2 = (uint)(uVar3 == 0) * -0x10000 >> 0x10;
      }
    }
  }
  return unaff_s2;
}



uint _L0(void)

{
  int unaff_s0;
  uint uVar1;
  uint unaff_s2;
  
  _L0();
  *(undefined4 *)(*(int *)(unaff_s0 + 0x44) + 0x60) = 0;
  if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar1 = FUN_000113b2(), uVar1 == 0)) &&
     ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
      ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar1 = FUN_0001145e(), uVar1 == 0))))))
  {
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
      unaff_s2 = 0xffff;
    }
    else {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
        uVar1 = FUN_00011472();
        unaff_s2 = (uint)(uVar1 == 0) * -0x10000 >> 0x10;
      }
    }
  }
  return unaff_s2;
}



uint FUN_000113b2(void)

{
  int unaff_s0;
  uint uVar1;
  uint unaff_s2;
  
  uVar1 = FUN_000113b2();
  if ((uVar1 == 0) &&
     ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
      ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar1 = FUN_0001145e(), uVar1 == 0))))))
  {
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
      unaff_s2 = 0xffff;
    }
    else {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
        uVar1 = FUN_00011472();
        unaff_s2 = (uint)(uVar1 == 0) * -0x10000 >> 0x10;
      }
    }
  }
  return unaff_s2;
}



uint _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  uint unaff_s2;
  uint unaff_s3;
  int iVar2;
  
  uVar1 = _L0();
  if ((unaff_s3 == uVar1) && (uVar1 = FUN_00011402(), uVar1 == 0)) {
    FUN_00011410();
    iVar2 = *(int *)(unaff_s0 + 0x44);
    uVar1 = _L0();
    *(uint *)(iVar2 + 0x60) = uVar1;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
      unaff_s2 = 1;
    }
    else {
      FUN_0001143e();
      *(undefined *)
       (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(unaff_s1 + 1) + -1) = 0;
      if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar1 = FUN_000113b2(), uVar1 == 0)
          ) && ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
                ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 &&
                 (uVar1 = FUN_0001145e(), uVar1 == 0)))))) {
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
          unaff_s2 = 0xffff;
        }
        else {
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
            uVar1 = FUN_00011472();
            unaff_s2 = (uint)(uVar1 == 0) * -0x10000 >> 0x10;
          }
        }
      }
    }
    return unaff_s2;
  }
  uVar1 = _L0();
  return uVar1;
}



uint FUN_00011402(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  uint unaff_s2;
  int iVar2;
  
  uVar1 = FUN_00011402();
  if (uVar1 == 0) {
    FUN_00011410();
    iVar2 = *(int *)(unaff_s0 + 0x44);
    uVar1 = _L0();
    *(uint *)(iVar2 + 0x60) = uVar1;
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
      unaff_s2 = 1;
    }
    else {
      FUN_0001143e();
      *(undefined *)
       (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(unaff_s1 + 1) + -1) = 0;
      if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar1 = FUN_000113b2(), uVar1 == 0)
          ) && ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
                ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 &&
                 (uVar1 = FUN_0001145e(), uVar1 == 0)))))) {
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
          unaff_s2 = 0xffff;
        }
        else {
          if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
            uVar1 = FUN_00011472();
            unaff_s2 = (uint)(uVar1 == 0) * -0x10000 >> 0x10;
          }
        }
      }
    }
    return unaff_s2;
  }
  uVar1 = _L0();
  return uVar1;
}



uint FUN_00011410(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  uint unaff_s2;
  int iVar2;
  
  FUN_00011410();
  iVar2 = *(int *)(unaff_s0 + 0x44);
  uVar1 = _L0();
  *(uint *)(iVar2 + 0x60) = uVar1;
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
    unaff_s2 = 1;
  }
  else {
    FUN_0001143e();
    *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(unaff_s1 + 1) + -1)
         = 0;
    if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar1 = FUN_000113b2(), uVar1 == 0))
       && ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
           ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar1 = FUN_0001145e(), uVar1 == 0)
            ))))) {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
        unaff_s2 = 0xffff;
      }
      else {
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
          uVar1 = FUN_00011472();
          unaff_s2 = (uint)(uVar1 == 0) * -0x10000 >> 0x10;
        }
      }
    }
  }
  return unaff_s2;
}



uint _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  uint unaff_s2;
  int unaff_s3;
  
  uVar1 = _L0();
  *(uint *)(unaff_s3 + 0x60) = uVar1;
  if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) == 0) {
    unaff_s2 = 1;
  }
  else {
    FUN_0001143e();
    *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(unaff_s1 + 1) + -1)
         = 0;
    if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar1 = FUN_000113b2(), uVar1 == 0))
       && ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
           ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar1 = FUN_0001145e(), uVar1 == 0)
            ))))) {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
        unaff_s2 = 0xffff;
      }
      else {
        if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
          uVar1 = FUN_00011472();
          unaff_s2 = (uint)(uVar1 == 0) * -0x10000 >> 0x10;
        }
      }
    }
  }
  return unaff_s2;
}



uint FUN_0001143e(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  uint unaff_s2;
  
  FUN_0001143e();
  *(undefined *)(*(int *)(*(int *)(unaff_s0 + 0x44) + 0x60) + (uint)*(byte *)(unaff_s1 + 1) + -1) =
       0;
  if (((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x20) != 0) && (uVar1 = FUN_000113b2(), uVar1 == 0)) &&
     ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x48) == 0 ||
      ((*(int *)(*(int *)(unaff_s0 + 0x44) + 0x24) != 0 && (uVar1 = FUN_0001145e(), uVar1 == 0))))))
  {
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
      unaff_s2 = 0xffff;
    }
    else {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
        uVar1 = FUN_00011472();
        unaff_s2 = (uint)(uVar1 == 0) * -0x10000 >> 0x10;
      }
    }
  }
  return unaff_s2;
}



uint FUN_0001145e(void)

{
  int unaff_s0;
  uint uVar1;
  uint unaff_s2;
  
  uVar1 = FUN_0001145e();
  if (uVar1 == 0) {
    if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x40) == 0) {
      unaff_s2 = 0xffff;
    }
    else {
      if (*(int *)(*(int *)(unaff_s0 + 0x44) + 0x28) != 0) {
        uVar1 = FUN_00011472();
        unaff_s2 = (uint)(uVar1 == 0) * -0x10000 >> 0x10;
      }
    }
  }
  return unaff_s2;
}



uint FUN_00011472(void)

{
  uint uVar1;
  
  uVar1 = FUN_00011472();
  return (uint)(uVar1 == 0) * -0x10000 >> 0x10;
}



// DWARF DIE: 113f

sint32 sae_write_confirm(sae_data *sae,wpabuf *buf)

{
  uint16 uVar1;
  undefined *puVar2;
  int iVar3;
  
  if (sae->tmp == (sae_temporary_data *)0x0) {
    return -1;
  }
  _L0();
  uVar1 = sae->send_confirm;
  puVar2 = (undefined *)_LVL500();
  puVar2[1] = (char)(uVar1 >> 8);
  *puVar2 = (char)uVar1;
  if (sae->send_confirm != 0xffff) {
    sae->send_confirm = sae->send_confirm + 1;
  }
  if (sae->tmp->ec != (crypto_ec *)0x0) {
    _L0();
    iVar3 = FUN_0001151c();
    if (iVar3 != 0) {
      FUN_0001152e();
      return -1;
    }
  }
  return 0;
}



undefined4 _L0(void)

{
  undefined2 uVar1;
  int unaff_s0;
  undefined *puVar2;
  int iVar3;
  undefined4 uStack00000000;
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  _L0();
  uVar1 = *(undefined2 *)(unaff_s0 + 2);
  puVar2 = (undefined *)_LVL500();
  puVar2[1] = (char)((ushort)uVar1 >> 8);
  *puVar2 = (char)uVar1;
  if (*(short *)(unaff_s0 + 2) != -1) {
    *(short *)(unaff_s0 + 2) = *(short *)(unaff_s0 + 2) + 1;
  }
  iVar3 = *(int *)(unaff_s0 + 0x44);
  if (*(int *)(iVar3 + 0x40) != 0) {
    uStack0000000c = *(undefined4 *)(iVar3 + 0x20);
    uStack00000008 = *(undefined4 *)(iVar3 + 0x28);
    uStack00000004 = *(undefined4 *)(unaff_s0 + 0x34);
    uStack00000000 = *(undefined4 *)(iVar3 + 0x30);
    _L0();
    iVar3 = FUN_0001151c();
    if (iVar3 != 0) {
      FUN_0001152e();
      return 0xffffffff;
    }
  }
  return 0;
}



undefined4 _LVL500(void)

{
  int unaff_s0;
  undefined *puVar1;
  int iVar2;
  undefined4 unaff_s2;
  undefined4 uStack00000000;
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  puVar1 = (undefined *)_LVL500();
  puVar1[1] = (char)((uint)unaff_s2 >> 8);
  *puVar1 = (char)unaff_s2;
  if (*(short *)(unaff_s0 + 2) != -1) {
    *(short *)(unaff_s0 + 2) = *(short *)(unaff_s0 + 2) + 1;
  }
  iVar2 = *(int *)(unaff_s0 + 0x44);
  if (*(int *)(iVar2 + 0x40) != 0) {
    uStack0000000c = *(undefined4 *)(iVar2 + 0x20);
    uStack00000008 = *(undefined4 *)(iVar2 + 0x28);
    uStack00000004 = *(undefined4 *)(unaff_s0 + 0x34);
    uStack00000000 = *(undefined4 *)(iVar2 + 0x30);
    _L0();
    iVar2 = FUN_0001151c();
    if (iVar2 != 0) {
      FUN_0001152e();
      return 0xffffffff;
    }
  }
  return 0;
}



undefined4 _L0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  _L0();
  iVar2 = FUN_0001151c();
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_0001152e();
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



undefined4 FUN_0001151c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0001151c();
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_0001152e();
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



undefined4 FUN_0001152e(void)

{
  FUN_0001152e();
  return 0xffffffff;
}



// DWARF DIE: 1085

sint32 sae_check_confirm(sae_data *sae,uint8 *data,size_t len)

{
  int iVar1;
  sint32 sVar2;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  uint8 verifier [32];
  
  if (len < 0x22) {
    _L0();
    iVar1 = -1;
  }
  else {
    if (sae->tmp == (sae_temporary_data *)0x0) {
      sVar2 = _L0();
      return sVar2;
    }
    if (sae->tmp->ec == (crypto_ec *)0x0) {
      FUN_0001159c();
      if (extraout_a0_00 != 0) {
        sVar2 = _L0();
        return sVar2;
      }
    }
    else {
      FUN_00011584();
      if (extraout_a0 != 0) {
        sVar2 = _L0();
        return sVar2;
      }
    }
    FUN_000115ba();
    iVar1 = extraout_a0_01;
    if (extraout_a0_01 != 0) {
      sVar2 = _L0();
      return sVar2;
    }
  }
  return iVar1;
}



undefined4 _L0(void)

{
  _L0();
  return 0xffffffff;
}



void FUN_00011584(void)

{
  int extraout_a0;
  int extraout_a0_00;
  
  FUN_00011584();
  if (extraout_a0 != 0) {
    _L0();
    return;
  }
  FUN_000115ba();
  if (extraout_a0_00 != 0) {
    _L0();
    return;
  }
  return;
}



void FUN_0001159c(void)

{
  int extraout_a0;
  int extraout_a0_00;
  
  FUN_0001159c();
  if (extraout_a0 != 0) {
    _L0();
    return;
  }
  FUN_000115ba();
  if (extraout_a0_00 != 0) {
    _L0();
    return;
  }
  return;
}



void FUN_000115ba(void)

{
  int extraout_a0;
  
  FUN_000115ba();
  if (extraout_a0 != 0) {
    _L0();
    return;
  }
  return;
}



// DWARF DIE: 1058

char * sae_state_txt(sae_state state)

{
  undefined3 in_register_00002029;
  
  if (CONCAT31(in_register_00002029,state) < 4) {
    return *(char **)(CONCAT31(in_register_00002029,state) * 4);
  }
  return (char *)0x0;
}


