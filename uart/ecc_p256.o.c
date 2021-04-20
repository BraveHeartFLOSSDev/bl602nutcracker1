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

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict311_for___value anon_union.conflict311_for___value, *Panon_union.conflict311_for___value;

typedef uint wint_t;

union anon_union.conflict311_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflict311_for___value __value;
};

typedef union anon_union.conflict311 anon_union.conflict311, *Panon_union.conflict311;

union anon_union.conflict311 {
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef enum KE_EVENT_TYPE {
    KE_EVENT_H4TL_CMD_HDR_RX=5,
    KE_EVENT_H4TL_TX=4,
    KE_EVENT_MAX=10,
    KE_EVENT_BLE_EVT_DELETE=9,
    KE_EVENT_KE_TIMER=3,
    KE_EVENT_H4TL_CMD_PLD_RX=6,
    KE_EVENT_BT_PSCAN_PROC=7,
    KE_EVENT_ECC_MULTIPLICATION=0,
    KE_EVENT_BLE_CRYPT=1,
    KE_EVENT_KE_MESSAGE=2,
    KE_EVENT_BLE_EVT_DEFER=8
} KE_EVENT_TYPE;

typedef enum anon_enum_8.conflictc5 {
    OP_MEXP=35,
    KE_MEM_KE_MSG=0,
    LIR_TYPE_A=1,
    LIR_TYPE_B=2,
    OP_PPSEL=0,
    OP_MREM=38,
    LIR_TYPE_G=7,
    KE_MEM_NON_RETENTION=0,
    LIR_TYPE_H=8,
    LIR_TYPE_I=9,
    LIR_TYPE_J=10,
    OP_MSQR=36,
    LIR_TYPE_C=3,
    LIR_TYPE_D=4,
    OP_MOD2N=17,
    KE_MEM_BLOCK_EM=1,
    LIR_TYPE_E=5,
    LIR_TYPE_F=6,
    OP_CTLIRI_PLD=55,
    OP_SLIR=52,
    KE_MEM_BLOCK_RAM=0,
    OP_LMUL2N=19,
    OP_LCMP=25,
    OP_LMUL=22,
    OP_CLIR=53,
    OP_LSUB=23,
    OP_MADD=40,
    OP_CFLIRI_BUFFER=54,
    OP_RESIZE=49,
    OP_LDIV2N=18,
    OP_LSQR=21,
    OP_NLIR=51,
    OP_MINV=34,
    KE_MEM_BLOCK_MAX=2,
    OP_LDIV=20,
    OP_CFLIR_BUFFER=56,
    KE_MEM_ENV=0,
    OP_MOVDAT=50,
    OP_MDIV2=33,
    OP_MMUL=37,
    OP_CFLIR_PLD=57,
    OP_LADD=24,
    OP_MSUB=39
} anon_enum_8.conflictc5;

typedef enum KE_TASK_TYPE {
    TASK_HCI_ONCHIP=4,
    TASK_NONE=-1,
    TASK_LLM=0,
    TASK_DBG=3,
    TASK_LLD=2,
    TASK_MAX=5,
    TASK_LLC=1
} KE_TASK_TYPE;

typedef struct bd_addr bd_addr, *Pbd_addr;

typedef uchar uint8_t;

struct bd_addr {
    uint8_t addr[6];
};

typedef ushort uint16_t;

typedef ulong uint32_t;

typedef long int32_t;

typedef char int8_t;

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflictae2_for__new anon_union.conflictae2_for__new, *Panon_union.conflictae2_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict956 anon_struct.conflict956, *Panon_struct.conflict956;

typedef struct anon_struct.conflicta9b anon_struct.conflicta9b, *Panon_struct.conflicta9b;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct _rand48 {
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
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

struct anon_struct.conflict956 {
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

struct anon_struct.conflicta9b {
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflictae2_for__new {
    struct anon_struct.conflict956 _reent;
    struct anon_struct.conflicta9b _unused;
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
    union anon_union.conflictae2_for__new _new;
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

typedef union anon_union.conflictae2 anon_union.conflictae2, *Panon_union.conflictae2;

union anon_union.conflictae2 {
    struct anon_struct.conflict956 _reent;
    struct anon_struct.conflicta9b _unused;
};

typedef uint16_t ke_task_id_t;

typedef uint16_t ke_msg_id_t;

typedef enum co_error {
    CO_ERROR_MEMORY_CAPA_EXCEED=7,
    CO_ERROR_INVALID_LMP_PARAM=30,
    CO_ERROR_INSTANT_PASSED=40,
    CO_ERROR_TERMINATED_MIC_FAILURE=61,
    CO_ERROR_UNSUPPORTED_LMP_PARAM_VALUE=32,
    CO_ERROR_PAIRING_WITH_UNIT_KEY_NOT_SUP=41,
    CO_ERROR_UNKNOW_ADV_ID=66,
    CO_ERROR_QOS_NOT_SUPPORTED=39,
    CO_ERROR_ROLE_SWITCH_FAIL=53,
    CO_ERROR_INSUFFICIENT_SECURITY=47,
    CO_ERROR_PIN_MISSING=6,
    CO_ERROR_LINK_KEY_CANT_CHANGE=38,
    CO_ERROR_ROLE_CHANGE_NOT_ALLOWED=33,
    CO_ERROR_CONN_ACCEPT_TIMEOUT_EXCEED=16,
    CO_ERROR_REMOTE_DEV_TERM_LOW_RESOURCES=20,
    CO_ERROR_UNSUPPORTED_REMOTE_FEATURE=26,
    CO_ERROR_DIRECT_ADV_TO=60,
    CO_ERROR_CONN_REJ_SECURITY_REASONS=14,
    CO_ERROR_ACL_CON_EXISTS=11,
    CO_ERROR_UNDEFINED=-1,
    CO_ERROR_UNKNOWN_LMP_PDU=25,
    CO_ERROR_QOS_UNACCEPTABLE_PARAM=44,
    CO_ERROR_PAIRING_NOT_ALLOWED=24,
    CO_ERROR_REMOTE_USER_TERM_CON=19,
    CO_ERROR_ROLE_SWITCH_PEND=50,
    CO_ERROR_LMP_RSP_TIMEOUT=34,
    CO_ERROR_CONN_FAILED_TO_BE_EST=62,
    CO_ERROR_SYNC_CON_LIMIT_DEV_EXCEED=10,
    CO_ERROR_REMOTE_DEV_POWER_OFF=21,
    CO_ERROR_CONN_REJ_LIMITED_RESOURCES=13,
    CO_ERROR_UNSUPPORTED=17,
    CO_ERROR_HW_MEM_ALLOC_FAIL=1,
    CO_ERROR_OP_CANCELL_BY_HOST=68,
    CO_ERROR_UNKNOWN_CONNECTION_ID=2,
    CO_ERROR_SCO_AIR_MODE_REJECTED=29,
    CO_ERROR_SP_NOT_SUPPORTED_HOST=55,
    CO_ERROR_DIFF_TRANSACTION_COLLISION=42,
    CO_ERROR_PARAM_OUT_OF_MAND_RANGE=48,
    CO_ERROR_UNKNOWN_HCI_COMMAND=1,
    CO_ERROR_CCA_REJ_USE_CLOCK_DRAG=64,
    CO_ERROR_PAGE_TIMEOUT=4,
    CO_ERROR_LMP_COLLISION=35,
    CO_ERROR_LIMIT_REACHED=67,
    CO_ERROR_HW_UART_OUT_OF_SYNC=0,
    CO_ERROR_CON_LIMIT_EXCEED=9,
    CO_ERROR_NO_ERROR=0,
    CO_ERROR_ENC_MODE_NOT_ACCEPT=37,
    CO_ERROR_QOS_REJECTED=45,
    CO_ERROR_HOST_BUSY_PAIRING=56,
    CO_ERROR_SCO_OFFSET_REJECTED=27,
    CO_ERROR_EIR_TOO_LARGE=54,
    CO_ERROR_CONTROLLER_BUSY=58,
    CO_ERROR_CON_TERM_BY_LOCAL_HOST=22,
    CO_ERROR_UNSPECIFIED_ERROR=31,
    CO_ERROR_CON_TIMEOUT=8,
    CO_ERROR_REPEATED_ATTEMPTS=23,
    CO_ERROR_UNACCEPTABLE_CONN_INT=59,
    CO_ERROR_LMP_PDU_NOT_ALLOWED=36,
    CO_ERROR_HARDWARE_FAILURE=3,
    CO_ERROR_CONN_REJ_UNACCEPTABLE_BDADDR=15,
    CO_ERROR_INVALID_HCI_PARAM=18,
    CO_ERROR_RESERVED_SLOT_VIOLATION=52,
    CO_ERROR_CHANNEL_CLASS_NOT_SUP=46,
    CO_ERROR_COMMAND_DISALLOWED=12,
    CO_ERROR_SCO_INTERVAL_REJECTED=28,
    CO_ERROR_AUTH_FAILURE=5
} co_error;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr {
    struct co_list_hdr * next;
};

typedef struct co_list co_list, *Pco_list;

struct co_list {
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

typedef struct ecc_result_ind ecc_result_ind, *Pecc_result_ind;

struct ecc_result_ind {
    uint8_t key_res_x[32];
    uint8_t key_res_y[32];
};

typedef struct ECC_Point256 ECC_Point256, *PECC_Point256;

typedef struct bigHex256 bigHex256, *PbigHex256;

typedef uint32_t u_int32;

struct bigHex256 {
    u_int32 num[8];
    u_int32 len;
    u_int32 sign;
};

struct ECC_Point256 {
    struct bigHex256 x;
    struct bigHex256 y;
};

typedef struct ecc_elt_tag ecc_elt_tag, *Pecc_elt_tag;

typedef struct ECC_Jacobian_Point256 ECC_Jacobian_Point256, *PECC_Jacobian_Point256;

struct ECC_Jacobian_Point256 {
    struct bigHex256 x;
    struct bigHex256 y;
    struct bigHex256 z;
};

struct ecc_elt_tag {
    struct co_list_hdr hdr;
    u_int32 Point_Mul_Word256;
    struct ECC_Jacobian_Point256 Jacobian_PointQ256;
    struct ECC_Jacobian_Point256 Jacobian_PointR256;
    struct bigHex256 Pk256;
    ke_msg_id_t msg_id;
    ke_task_id_t client_id;
    uint32_t current_val;
    uint32_t bit_cursor;
    uint8_t key_type;
    undefined field_0x12d;
    undefined field_0x12e;
    undefined field_0x12f;
    struct ECC_Jacobian_Point256 * win_4_table;
};

typedef uint8_t u_int8;

typedef struct ecc_env_tag ecc_env_tag, *Pecc_env_tag;

struct ecc_env_tag {
    struct co_list ongoing_mul;
};

typedef ulonglong u64;

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




void Mont2GF(uint8_t reg_idx)

{
  undefined3 in_register_00002029;
  
  _L0(8,0,0xd,3,0x39,0);
  FUN_0001002c(1,3,6,0);
  FUN_0001003c(1,3,7,0);
  FUN_00010052(0,4,3,3,CONCAT31(in_register_00002029,reg_idx),3,0xd);
  FUN_00010068(0,3,CONCAT31(in_register_00002029,reg_idx),4,3,3,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  FUN_0001002c(1,3,6,0);
  FUN_0001003c(1,3,7,0);
  FUN_00010052(0,4,3,3,3,0xd);
  FUN_00010068(0,3,4,3,3,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001002c(void)

{
  FUN_0001002c();
  FUN_0001003c(1,3,7,0);
  FUN_00010052(0,4,3,3,3,0xd);
  FUN_00010068(0,3,4,3,3,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001003c(void)

{
  FUN_0001003c();
  FUN_00010052(0,4,3,3,3,0xd);
  FUN_00010068(0,3,4,3,3,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010052(void)

{
  FUN_00010052();
  FUN_00010068(0,3,4,3,3,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010068(void)

{
  FUN_00010068();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void getFinalPoint(uint8_t reg_idx)

{
  undefined3 in_register_00002029;
  
  _L0(1,3,6,0);
  FUN_000100a6(1,3,7,0);
  FUN_000100bc(0,4,3,3,CONCAT31(in_register_00002029,reg_idx),3,0xe);
  FUN_000100d2(0,3,CONCAT31(in_register_00002029,reg_idx),4,3,3,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  FUN_000100a6(1,3,7,0);
  FUN_000100bc(0,4,3,3,3,0xe);
  FUN_000100d2(0,3,4,3,3,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000100a6(void)

{
  FUN_000100a6();
  FUN_000100bc(0,4,3,3,3,0xe);
  FUN_000100d2(0,3,4,3,3,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000100bc(void)

{
  FUN_000100bc();
  FUN_000100d2(0,3,4,3,3,0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000100d2(void)

{
  FUN_000100d2();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void pka_point_addition(uint8_t x1_idx,uint8_t x2_idx,uint8_t ret_idx)

{
  uint uVar1;
  uint uVar2;
  undefined3 in_register_00002029;
  int iVar3;
  undefined3 in_register_0000202d;
  int iVar4;
  undefined3 in_register_00002031;
  int iVar5;
  uint uVar6;
  
  iVar5 = CONCAT31(in_register_00002031,ret_idx);
  iVar4 = CONCAT31(in_register_0000202d,x2_idx);
  iVar3 = CONCAT31(in_register_00002029,x1_idx);
  uVar2 = iVar3 + 2U & 0xff;
  uVar1 = iVar3 + 1U & 0xff;
  _L0(0,3,0xd,3,iVar4 + 1U & 0xff,3,uVar2,3);
  uVar6 = iVar4 + 2U & 0xff;
  FUN_00010150(0,3,0xe,3,uVar1,3,uVar6,3);
  FUN_0001016a(0,3,0xf,3,iVar4,3,uVar2,3);
  FUN_00010184(0,3,0x10,3,iVar3,3,uVar6,3);
  FUN_0001019e(0,3,0xd,3,0xd,3,0xe,3);
  FUN_000101b8(0,3,0xf,3,0xf,3,0x10,3);
  FUN_000101d2(0,3,iVar3,3,uVar2,3,uVar6,3);
  FUN_000101ec(0,3,uVar1,3,0xf,3,0xf,3);
  FUN_00010206(0,3,uVar2,3,uVar1,3,0xf,3);
  FUN_00010220(0,3,0x11,3,0xd,3,0xd,3);
  FUN_0001023a(0,3,0x11,3,0x11,3,iVar3,3);
  FUN_00010254(0,3,0x11,3,0x11,3,uVar2,3);
  FUN_0001026e(0,3,0x12,3,9,3,uVar1,3);
  FUN_00010288(0,3,0x12,3,0x12,3,0x10,3);
  FUN_000102a2(0,3,0x12,3,0x11,3,0x12,3);
  FUN_000102bc(0,3,uVar1,3,uVar1,3,0x10,3);
  FUN_000102d6(0,3,0xe,3,uVar2,3,0xe,3);
  FUN_000102f6(0,3,iVar5 + 2U & 0xff,3,uVar2,3,iVar3,3);
  FUN_00010310(0,3,iVar5,3,0xf,3,0x12,3);
  FUN_0001032a(0,3,uVar1,3,uVar1,3,0x12,3);
  FUN_00010344(0,3,uVar1,3,0xd,3,uVar1,3);
  FUN_00010364(1,3,iVar5 + 1U & 0xff,3,uVar1,3,0xe,3);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  char unaff_s3;
  undefined unaff_s4;
  undefined4 uStack00000000;
  
  _L0();
  uStack00000000 = 0;
  FUN_00010150(0,3,0xe,3,3,unaff_s4,3);
  uStack00000000 = 0;
  FUN_0001016a(0,3,0xf,3,3,3);
  uStack00000000 = 0;
  FUN_00010184(0,3,0x10,3,3,unaff_s4,3);
  uStack00000000 = 0;
  FUN_0001019e(0,3,0xd,3,0xd,3,0xe,3);
  uStack00000000 = 0;
  FUN_000101b8(0,3,0xf,3,0xf,3,0x10,3);
  uStack00000000 = 0;
  FUN_000101d2(0,3,3,3,unaff_s4,3);
  uStack00000000 = 0;
  FUN_000101ec(0,3,3,0xf,3,0xf,3);
  uStack00000000 = 0;
  FUN_00010206(0,3,3,3,0xf,3);
  uStack00000000 = 0;
  FUN_00010220(0,3,0x11,3,0xd,3,0xd,3);
  uStack00000000 = 0;
  FUN_0001023a(0,3,0x11,3,0x11,3,3);
  uStack00000000 = 0;
  FUN_00010254(0,3,0x11,3,0x11,3,3);
  uStack00000000 = 0;
  FUN_0001026e(0,3,0x12,3,9,3,3);
  uStack00000000 = 0;
  FUN_00010288(0,3,0x12,3,0x12,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102a2(0,3,0x12,3,0x11,3,0x12,3);
  uStack00000000 = 0;
  FUN_000102bc(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102d6(0,3,0xe,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_000102f6(0,3,unaff_s3 + '\x02',3,3,3);
  uStack00000000 = 0;
  FUN_00010310(0,3,3,0xf,3,0x12,3);
  uStack00000000 = 0;
  FUN_0001032a(0,3,3,3,0x12,3);
  uStack00000000 = 0;
  FUN_00010344(0,3,3,0xd,3,3);
  uStack00000000 = 0;
  FUN_00010364(1,3,unaff_s3 + '\x01',3,3,0xe,3);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010150(void)

{
  char unaff_s3;
  undefined4 uStack00000000;
  
  FUN_00010150();
  uStack00000000 = 0;
  FUN_0001016a(0,3,0xf,3,3,3);
  uStack00000000 = 0;
  FUN_00010184(0,3,0x10,3,3,3);
  uStack00000000 = 0;
  FUN_0001019e(0,3,0xd,3,0xd,3,0xe,3);
  uStack00000000 = 0;
  FUN_000101b8(0,3,0xf,3,0xf,3,0x10,3);
  uStack00000000 = 0;
  FUN_000101d2(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_000101ec(0,3,3,0xf,3,0xf,3);
  uStack00000000 = 0;
  FUN_00010206(0,3,3,3,0xf,3);
  uStack00000000 = 0;
  FUN_00010220(0,3,0x11,3,0xd,3,0xd,3);
  uStack00000000 = 0;
  FUN_0001023a(0,3,0x11,3,0x11,3,3);
  uStack00000000 = 0;
  FUN_00010254(0,3,0x11,3,0x11,3,3);
  uStack00000000 = 0;
  FUN_0001026e(0,3,0x12,3,9,3,3);
  uStack00000000 = 0;
  FUN_00010288(0,3,0x12,3,0x12,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102a2(0,3,0x12,3,0x11,3,0x12,3);
  uStack00000000 = 0;
  FUN_000102bc(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102d6(0,3,0xe,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_000102f6(0,3,unaff_s3 + '\x02',3,3,3);
  uStack00000000 = 0;
  FUN_00010310(0,3,3,0xf,3,0x12,3);
  uStack00000000 = 0;
  FUN_0001032a(0,3,3,3,0x12,3);
  uStack00000000 = 0;
  FUN_00010344(0,3,3,0xd,3,3);
  uStack00000000 = 0;
  FUN_00010364(1,3,unaff_s3 + '\x01',3,3,0xe,3);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001016a(void)

{
  char unaff_s3;
  undefined4 uStack00000000;
  
  FUN_0001016a();
  uStack00000000 = 0;
  FUN_00010184(0,3,0x10,3,3,3);
  uStack00000000 = 0;
  FUN_0001019e(0,3,0xd,3,0xd,3,0xe,3);
  uStack00000000 = 0;
  FUN_000101b8(0,3,0xf,3,0xf,3,0x10,3);
  uStack00000000 = 0;
  FUN_000101d2(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_000101ec(0,3,3,0xf,3,0xf,3);
  uStack00000000 = 0;
  FUN_00010206(0,3,3,3,0xf,3);
  uStack00000000 = 0;
  FUN_00010220(0,3,0x11,3,0xd,3,0xd,3);
  uStack00000000 = 0;
  FUN_0001023a(0,3,0x11,3,0x11,3,3);
  uStack00000000 = 0;
  FUN_00010254(0,3,0x11,3,0x11,3,3);
  uStack00000000 = 0;
  FUN_0001026e(0,3,0x12,3,9,3,3);
  uStack00000000 = 0;
  FUN_00010288(0,3,0x12,3,0x12,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102a2(0,3,0x12,3,0x11,3,0x12,3);
  uStack00000000 = 0;
  FUN_000102bc(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102d6(0,3,0xe,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_000102f6(0,3,unaff_s3 + '\x02',3,3,3);
  uStack00000000 = 0;
  FUN_00010310(0,3,3,0xf,3,0x12,3);
  uStack00000000 = 0;
  FUN_0001032a(0,3,3,3,0x12,3);
  uStack00000000 = 0;
  FUN_00010344(0,3,3,0xd,3,3);
  uStack00000000 = 0;
  FUN_00010364(1,3,unaff_s3 + '\x01',3,3,0xe,3);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010184(void)

{
  char unaff_s3;
  undefined4 uStack00000000;
  
  FUN_00010184();
  uStack00000000 = 0;
  FUN_0001019e(0,3,0xd,3,0xd,3,0xe,3);
  uStack00000000 = 0;
  FUN_000101b8(0,3,0xf,3,0xf,3,0x10,3);
  uStack00000000 = 0;
  FUN_000101d2(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_000101ec(0,3,3,0xf,3,0xf,3);
  uStack00000000 = 0;
  FUN_00010206(0,3,3,3,0xf,3);
  uStack00000000 = 0;
  FUN_00010220(0,3,0x11,3,0xd,3,0xd,3);
  uStack00000000 = 0;
  FUN_0001023a(0,3,0x11,3,0x11,3,3);
  uStack00000000 = 0;
  FUN_00010254(0,3,0x11,3,0x11,3,3);
  uStack00000000 = 0;
  FUN_0001026e(0,3,0x12,3,9,3,3);
  uStack00000000 = 0;
  FUN_00010288(0,3,0x12,3,0x12,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102a2(0,3,0x12,3,0x11,3,0x12,3);
  uStack00000000 = 0;
  FUN_000102bc(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102d6(0,3,0xe,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_000102f6(0,3,unaff_s3 + '\x02',3,3,3);
  uStack00000000 = 0;
  FUN_00010310(0,3,3,0xf,3,0x12,3);
  uStack00000000 = 0;
  FUN_0001032a(0,3,3,3,0x12,3);
  uStack00000000 = 0;
  FUN_00010344(0,3,3,0xd,3,3);
  uStack00000000 = 0;
  FUN_00010364(1,3,unaff_s3 + '\x01',3,3,0xe,3);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001019e(void)

{
  char unaff_s3;
  undefined4 uStack00000000;
  
  FUN_0001019e();
  uStack00000000 = 0;
  FUN_000101b8(0,3,0xf,3,0xf,3,0x10,3);
  uStack00000000 = 0;
  FUN_000101d2(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_000101ec(0,3,3,0xf,3,0xf,3);
  uStack00000000 = 0;
  FUN_00010206(0,3,3,3,0xf,3);
  uStack00000000 = 0;
  FUN_00010220(0,3,0x11,3,0xd,3,0xd,3);
  uStack00000000 = 0;
  FUN_0001023a(0,3,0x11,3,0x11,3,3);
  uStack00000000 = 0;
  FUN_00010254(0,3,0x11,3,0x11,3,3);
  uStack00000000 = 0;
  FUN_0001026e(0,3,0x12,3,9,3,3);
  uStack00000000 = 0;
  FUN_00010288(0,3,0x12,3,0x12,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102a2(0,3,0x12,3,0x11,3,0x12,3);
  uStack00000000 = 0;
  FUN_000102bc(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102d6(0,3,0xe,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_000102f6(0,3,unaff_s3 + '\x02',3,3,3);
  uStack00000000 = 0;
  FUN_00010310(0,3,3,0xf,3,0x12,3);
  uStack00000000 = 0;
  FUN_0001032a(0,3,3,3,0x12,3);
  uStack00000000 = 0;
  FUN_00010344(0,3,3,0xd,3,3);
  uStack00000000 = 0;
  FUN_00010364(1,3,unaff_s3 + '\x01',3,3,0xe,3);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000101b8(void)

{
  char unaff_s3;
  undefined4 uStack00000000;
  
  FUN_000101b8();
  uStack00000000 = 0;
  FUN_000101d2(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_000101ec(0,3,3,0xf,3,0xf,3);
  uStack00000000 = 0;
  FUN_00010206(0,3,3,3,0xf,3);
  uStack00000000 = 0;
  FUN_00010220(0,3,0x11,3,0xd,3,0xd,3);
  uStack00000000 = 0;
  FUN_0001023a(0,3,0x11,3,0x11,3,3);
  uStack00000000 = 0;
  FUN_00010254(0,3,0x11,3,0x11,3,3);
  uStack00000000 = 0;
  FUN_0001026e(0,3,0x12,3,9,3,3);
  uStack00000000 = 0;
  FUN_00010288(0,3,0x12,3,0x12,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102a2(0,3,0x12,3,0x11,3,0x12,3);
  uStack00000000 = 0;
  FUN_000102bc(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102d6(0,3,0xe,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_000102f6(0,3,unaff_s3 + '\x02',3,3,3);
  uStack00000000 = 0;
  FUN_00010310(0,3,3,0xf,3,0x12,3);
  uStack00000000 = 0;
  FUN_0001032a(0,3,3,3,0x12,3);
  uStack00000000 = 0;
  FUN_00010344(0,3,3,0xd,3,3);
  uStack00000000 = 0;
  FUN_00010364(1,3,unaff_s3 + '\x01',3,3,0xe,3);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000101d2(void)

{
  char unaff_s3;
  undefined4 uStack00000000;
  
  FUN_000101d2();
  uStack00000000 = 0;
  FUN_000101ec(0,3,3,0xf,3,0xf,3);
  uStack00000000 = 0;
  FUN_00010206(0,3,3,3,0xf,3);
  uStack00000000 = 0;
  FUN_00010220(0,3,0x11,3,0xd,3,0xd,3);
  uStack00000000 = 0;
  FUN_0001023a(0,3,0x11,3,0x11,3,3);
  uStack00000000 = 0;
  FUN_00010254(0,3,0x11,3,0x11,3,3);
  uStack00000000 = 0;
  FUN_0001026e(0,3,0x12,3,9,3,3);
  uStack00000000 = 0;
  FUN_00010288(0,3,0x12,3,0x12,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102a2(0,3,0x12,3,0x11,3,0x12,3);
  uStack00000000 = 0;
  FUN_000102bc(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102d6(0,3,0xe,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_000102f6(0,3,unaff_s3 + '\x02',3,3,3);
  uStack00000000 = 0;
  FUN_00010310(0,3,3,0xf,3,0x12,3);
  uStack00000000 = 0;
  FUN_0001032a(0,3,3,3,0x12,3);
  uStack00000000 = 0;
  FUN_00010344(0,3,3,0xd,3,3);
  uStack00000000 = 0;
  FUN_00010364(1,3,unaff_s3 + '\x01',3,3,0xe,3);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000101ec(void)

{
  char unaff_s3;
  undefined4 uStack00000000;
  
  FUN_000101ec();
  uStack00000000 = 0;
  FUN_00010206(0,3,3,3,0xf,3);
  uStack00000000 = 0;
  FUN_00010220(0,3,0x11,3,0xd,3,0xd,3);
  uStack00000000 = 0;
  FUN_0001023a(0,3,0x11,3,0x11,3,3);
  uStack00000000 = 0;
  FUN_00010254(0,3,0x11,3,0x11,3,3);
  uStack00000000 = 0;
  FUN_0001026e(0,3,0x12,3,9,3,3);
  uStack00000000 = 0;
  FUN_00010288(0,3,0x12,3,0x12,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102a2(0,3,0x12,3,0x11,3,0x12,3);
  uStack00000000 = 0;
  FUN_000102bc(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102d6(0,3,0xe,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_000102f6(0,3,unaff_s3 + '\x02',3,3,3);
  uStack00000000 = 0;
  FUN_00010310(0,3,3,0xf,3,0x12,3);
  uStack00000000 = 0;
  FUN_0001032a(0,3,3,3,0x12,3);
  uStack00000000 = 0;
  FUN_00010344(0,3,3,0xd,3,3);
  uStack00000000 = 0;
  FUN_00010364(1,3,unaff_s3 + '\x01',3,3,0xe,3);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010206(void)

{
  char unaff_s3;
  undefined4 uStack00000000;
  
  FUN_00010206();
  uStack00000000 = 0;
  FUN_00010220(0,3,0x11,3,0xd,3,0xd,3);
  uStack00000000 = 0;
  FUN_0001023a(0,3,0x11,3,0x11,3,3);
  uStack00000000 = 0;
  FUN_00010254(0,3,0x11,3,0x11,3,3);
  uStack00000000 = 0;
  FUN_0001026e(0,3,0x12,3,9,3,3);
  uStack00000000 = 0;
  FUN_00010288(0,3,0x12,3,0x12,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102a2(0,3,0x12,3,0x11,3,0x12,3);
  uStack00000000 = 0;
  FUN_000102bc(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102d6(0,3,0xe,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_000102f6(0,3,unaff_s3 + '\x02',3,3,3);
  uStack00000000 = 0;
  FUN_00010310(0,3,3,0xf,3,0x12,3);
  uStack00000000 = 0;
  FUN_0001032a(0,3,3,3,0x12,3);
  uStack00000000 = 0;
  FUN_00010344(0,3,3,0xd,3,3);
  uStack00000000 = 0;
  FUN_00010364(1,3,unaff_s3 + '\x01',3,3,0xe,3);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010220(void)

{
  char unaff_s3;
  undefined4 uStack00000000;
  
  FUN_00010220();
  uStack00000000 = 0;
  FUN_0001023a(0,3,0x11,3,0x11,3,3);
  uStack00000000 = 0;
  FUN_00010254(0,3,0x11,3,0x11,3,3);
  uStack00000000 = 0;
  FUN_0001026e(0,3,0x12,3,9,3,3);
  uStack00000000 = 0;
  FUN_00010288(0,3,0x12,3,0x12,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102a2(0,3,0x12,3,0x11,3,0x12,3);
  uStack00000000 = 0;
  FUN_000102bc(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102d6(0,3,0xe,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_000102f6(0,3,unaff_s3 + '\x02',3,3,3);
  uStack00000000 = 0;
  FUN_00010310(0,3,3,0xf,3,0x12,3);
  uStack00000000 = 0;
  FUN_0001032a(0,3,3,3,0x12,3);
  uStack00000000 = 0;
  FUN_00010344(0,3,3,0xd,3,3);
  uStack00000000 = 0;
  FUN_00010364(1,3,unaff_s3 + '\x01',3,3,0xe,3);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001023a(void)

{
  char unaff_s3;
  undefined4 uStack00000000;
  
  FUN_0001023a();
  uStack00000000 = 0;
  FUN_00010254(0,3,0x11,3,0x11,3,3);
  uStack00000000 = 0;
  FUN_0001026e(0,3,0x12,3,9,3,3);
  uStack00000000 = 0;
  FUN_00010288(0,3,0x12,3,0x12,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102a2(0,3,0x12,3,0x11,3,0x12,3);
  uStack00000000 = 0;
  FUN_000102bc(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102d6(0,3,0xe,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_000102f6(0,3,unaff_s3 + '\x02',3,3,3);
  uStack00000000 = 0;
  FUN_00010310(0,3,3,0xf,3,0x12,3);
  uStack00000000 = 0;
  FUN_0001032a(0,3,3,3,0x12,3);
  uStack00000000 = 0;
  FUN_00010344(0,3,3,0xd,3,3);
  uStack00000000 = 0;
  FUN_00010364(1,3,unaff_s3 + '\x01',3,3,0xe,3);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010254(void)

{
  char unaff_s3;
  undefined4 uStack00000000;
  
  FUN_00010254();
  uStack00000000 = 0;
  FUN_0001026e(0,3,0x12,3,9,3,3);
  uStack00000000 = 0;
  FUN_00010288(0,3,0x12,3,0x12,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102a2(0,3,0x12,3,0x11,3,0x12,3);
  uStack00000000 = 0;
  FUN_000102bc(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102d6(0,3,0xe,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_000102f6(0,3,unaff_s3 + '\x02',3,3,3);
  uStack00000000 = 0;
  FUN_00010310(0,3,3,0xf,3,0x12,3);
  uStack00000000 = 0;
  FUN_0001032a(0,3,3,3,0x12,3);
  uStack00000000 = 0;
  FUN_00010344(0,3,3,0xd,3,3);
  uStack00000000 = 0;
  FUN_00010364(1,3,unaff_s3 + '\x01',3,3,0xe,3);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001026e(void)

{
  char unaff_s3;
  undefined4 uStack00000000;
  
  FUN_0001026e();
  uStack00000000 = 0;
  FUN_00010288(0,3,0x12,3,0x12,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102a2(0,3,0x12,3,0x11,3,0x12,3);
  uStack00000000 = 0;
  FUN_000102bc(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102d6(0,3,0xe,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_000102f6(0,3,unaff_s3 + '\x02',3,3,3);
  uStack00000000 = 0;
  FUN_00010310(0,3,3,0xf,3,0x12,3);
  uStack00000000 = 0;
  FUN_0001032a(0,3,3,3,0x12,3);
  uStack00000000 = 0;
  FUN_00010344(0,3,3,0xd,3,3);
  uStack00000000 = 0;
  FUN_00010364(1,3,unaff_s3 + '\x01',3,3,0xe,3);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010288(void)

{
  char unaff_s3;
  undefined4 uStack00000000;
  
  FUN_00010288();
  uStack00000000 = 0;
  FUN_000102a2(0,3,0x12,3,0x11,3,0x12,3);
  uStack00000000 = 0;
  FUN_000102bc(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102d6(0,3,0xe,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_000102f6(0,3,unaff_s3 + '\x02',3,3,3);
  uStack00000000 = 0;
  FUN_00010310(0,3,3,0xf,3,0x12,3);
  uStack00000000 = 0;
  FUN_0001032a(0,3,3,3,0x12,3);
  uStack00000000 = 0;
  FUN_00010344(0,3,3,0xd,3,3);
  uStack00000000 = 0;
  FUN_00010364(1,3,unaff_s3 + '\x01',3,3,0xe,3);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000102a2(void)

{
  char unaff_s3;
  undefined4 uStack00000000;
  
  FUN_000102a2();
  uStack00000000 = 0;
  FUN_000102bc(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000102d6(0,3,0xe,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_000102f6(0,3,unaff_s3 + '\x02',3,3,3);
  uStack00000000 = 0;
  FUN_00010310(0,3,3,0xf,3,0x12,3);
  uStack00000000 = 0;
  FUN_0001032a(0,3,3,3,0x12,3);
  uStack00000000 = 0;
  FUN_00010344(0,3,3,0xd,3,3);
  uStack00000000 = 0;
  FUN_00010364(1,3,unaff_s3 + '\x01',3,3,0xe,3);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000102bc(void)

{
  char unaff_s3;
  undefined4 uStack00000000;
  
  FUN_000102bc();
  uStack00000000 = 0;
  FUN_000102d6(0,3,0xe,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_000102f6(0,3,unaff_s3 + '\x02',3,3,3);
  uStack00000000 = 0;
  FUN_00010310(0,3,3,0xf,3,0x12,3);
  uStack00000000 = 0;
  FUN_0001032a(0,3,3,3,0x12,3);
  uStack00000000 = 0;
  FUN_00010344(0,3,3,0xd,3,3);
  uStack00000000 = 0;
  FUN_00010364(1,3,unaff_s3 + '\x01',3,3,0xe,3);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000102d6(void)

{
  char unaff_s3;
  undefined4 uStack00000000;
  
  FUN_000102d6();
  uStack00000000 = 0;
  FUN_000102f6(0,3,unaff_s3 + '\x02',3,3,3);
  uStack00000000 = 0;
  FUN_00010310(0,3,3,0xf,3,0x12,3);
  uStack00000000 = 0;
  FUN_0001032a(0,3,3,3,0x12,3);
  uStack00000000 = 0;
  FUN_00010344(0,3,3,0xd,3,3);
  uStack00000000 = 0;
  FUN_00010364(1,3,unaff_s3 + '\x01',3,3,0xe,3);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000102f6(void)

{
  char unaff_s3;
  undefined4 uStack00000000;
  
  FUN_000102f6();
  uStack00000000 = 0;
  FUN_00010310(0,3,3,0xf,3,0x12,3);
  uStack00000000 = 0;
  FUN_0001032a(0,3,3,3,0x12,3);
  uStack00000000 = 0;
  FUN_00010344(0,3,3,0xd,3,3);
  uStack00000000 = 0;
  FUN_00010364(1,3,unaff_s3 + '\x01',3,3,0xe,3);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010310(void)

{
  char unaff_s3;
  undefined4 uStack00000000;
  
  FUN_00010310();
  uStack00000000 = 0;
  FUN_0001032a(0,3,3,3,0x12,3);
  uStack00000000 = 0;
  FUN_00010344(0,3,3,0xd,3,3);
  uStack00000000 = 0;
  FUN_00010364(1,3,unaff_s3 + '\x01',3,3,0xe,3);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001032a(void)

{
  char unaff_s3;
  undefined4 uStack00000000;
  
  FUN_0001032a();
  uStack00000000 = 0;
  FUN_00010344(0,3,3,0xd,3,3);
  uStack00000000 = 0;
  FUN_00010364(1,3,unaff_s3 + '\x01',3,3,0xe,3);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010344(void)

{
  char unaff_s3;
  undefined4 uStack00000000;
  
  FUN_00010344();
  uStack00000000 = 0;
  FUN_00010364(1,3,unaff_s3 + '\x01',3,3,0xe,3);
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010364(void)

{
  FUN_00010364();
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



void pka_read_result(ECC_Jacobian_Point256 *point,uint8_t idx)

{
  undefined3 in_register_0000202d;
  
  _L0(3,CONCAT31(in_register_0000202d,idx),point,8);
  FUN_000103b6(3,CONCAT31(in_register_0000202d,idx) + 1U & 0xff,&point->y,8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  char unaff_s0;
  int unaff_s1;
  
  _L0();
  FUN_000103b6(3,unaff_s0 + '\x01',unaff_s1 + 0x28,8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000103b6(void)

{
  FUN_000103b6();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void pka_cp_x2_to_x1(uint8_t x1_idx,uint8_t x2_idx)

{
  undefined3 in_register_00002029;
  undefined3 in_register_0000202d;
  
  _L0(0,3,CONCAT31(in_register_00002029,x1_idx),3,CONCAT31(in_register_0000202d,x2_idx));
  FUN_00010412(0,3,CONCAT31(in_register_00002029,x1_idx) + 1U & 0xff,3,
               CONCAT31(in_register_0000202d,x2_idx) + 1U & 0xff);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  char unaff_s0;
  char unaff_s1;
  
  _L0();
  FUN_00010412(0,3,unaff_s0 + '\x01',3,unaff_s1 + '\x01');
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010412(void)

{
  FUN_00010412();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void pka_point_inf_check(uint8_t x1_idx,uint8_t *p1_eq_inf)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined3 in_register_00002029;
  int iVar4;
  uint uVar5;
  byte abStack33 [4];
  uint8_t bitval;
  
  iVar4 = CONCAT31(in_register_00002029,x1_idx);
  uVar5 = iVar4 + 1U & 0xff;
  _L0(abStack33,3,iVar4,3,8);
  bVar1 = abStack33[0];
  _L0(abStack33,3,uVar5,3,0x13);
  uVar3 = (uint)abStack33[0];
  FUN_00010498(abStack33,3,0x14,3,uVar5);
  bVar2 = abStack33[0];
  FUN_000104ba(abStack33,3,iVar4 + 2U & 0xff,3,8);
  *p1_eq_inf = (byte)(bVar2 << 2 | (byte)((uVar3 << 0x19) >> 0x18) | bVar1 | abStack33[0] << 3) ==
               0xf;
  return;
}



void _L0(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  char unaff_s2;
  undefined4 unaff_s4;
  byte in_stack_0000000f;
  
  _L0();
  bVar1 = in_stack_0000000f;
  _L0(&stack0x0000000f,3,3,0x13);
  uVar3 = (uint)in_stack_0000000f;
  FUN_00010498(&stack0x0000000f,3,0x14,3);
  bVar2 = in_stack_0000000f;
  FUN_000104ba(&stack0x0000000f,3,unaff_s2 + '\x02',3,8);
  *(bool *)unaff_s4 =
       (byte)(bVar2 << 2 | (byte)((uVar3 << 0x19) >> 0x18) | bVar1 | in_stack_0000000f << 3) == 0xf;
  return;
}



void _L0(void)

{
  byte bVar1;
  uint uVar2;
  char unaff_s2;
  undefined4 unaff_s4;
  byte unaff_s5;
  byte in_stack_0000000f;
  
  _L0();
  uVar2 = (uint)in_stack_0000000f;
  FUN_00010498(&stack0x0000000f,3,0x14,3);
  bVar1 = in_stack_0000000f;
  FUN_000104ba(&stack0x0000000f,3,unaff_s2 + '\x02',3,8);
  *(bool *)unaff_s4 =
       (byte)(bVar1 << 2 | (byte)((uVar2 << 0x19) >> 0x18) | unaff_s5 | in_stack_0000000f << 3) ==
       0xf;
  return;
}



void FUN_00010498(void)

{
  char cVar1;
  int unaff_s1;
  char unaff_s2;
  undefined4 unaff_s4;
  byte unaff_s5;
  char in_stack_0000000f;
  
  FUN_00010498();
  cVar1 = in_stack_0000000f;
  FUN_000104ba(&stack0x0000000f,3,unaff_s2 + '\x02',3,8);
  *(bool *)unaff_s4 =
       (byte)(cVar1 << 2 | (byte)((uint)(unaff_s1 << 0x19) >> 0x18) | unaff_s5 |
             in_stack_0000000f << 3) == 0xf;
  return;
}



void FUN_000104ba(void)

{
  int unaff_s0;
  undefined4 unaff_s1;
  undefined4 unaff_s4;
  byte unaff_s5;
  char in_stack_0000000f;
  
  FUN_000104ba();
  *(bool *)unaff_s4 =
       (byte)((byte)(unaff_s0 << 2) | (byte)((uint)unaff_s1 >> 0x18) | unaff_s5 |
             in_stack_0000000f << 3) == 0xf;
  return;
}



void GF2Mont(u_int32 *numA,u_int32 *result)

{
  _L0(8,0,0,3,0x39,0);
  FUN_0001052e(8,numA,1,3,0x39,0);
  FUN_00010544(0,4,1,3,1,0x100);
  FUN_0001055a(0,3,4,4,1,3,0);
  FUN_0001056a(3,4,result,8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  _L0();
  FUN_0001052e(8,1,3,0x39,0);
  FUN_00010544(0,4,1,3,1,0x100);
  FUN_0001055a(0,3,4,4,1,3,0);
  FUN_0001056a(3,4,8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001052e(void)

{
  FUN_0001052e();
  FUN_00010544(0,4,1,3,1,0x100);
  FUN_0001055a(0,3,4,4,1,3,0);
  FUN_0001056a(3,4,8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010544(void)

{
  FUN_00010544();
  FUN_0001055a(0,3,4,4,1,3,0);
  FUN_0001056a(3,4,8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001055a(void)

{
  FUN_0001055a();
  FUN_0001056a(3,4,8);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001056a(void)

{
  FUN_0001056a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Variable defined which should be unmapped: pka_p1_eq_inf

void pka_point_double(uint8_t x_idx)

{
  uint uVar1;
  uint uVar2;
  undefined3 in_register_00002029;
  int iVar3;
  char acStack17 [4];
  uint8_t pka_p1_eq_inf;
  
  iVar3 = CONCAT31(in_register_00002029,x_idx);
  _L0(iVar3,acStack17);
  if (acStack17[0] == '\0') {
    uVar1 = iVar3 + 2U & 0xff;
    _L0(0,3,0xd,3,iVar3,3,iVar3,3);
    FUN_000105de(0,3,0xe,3,uVar1,3,uVar1,3);
    FUN_000105f8(0,3,0xd,3,0xd,3,0xe,3);
    uVar2 = iVar3 + 1U & 0xff;
    _L0(0,3,0xd,3,10,3,0xd,3);
    FUN_00010634(0,3,0xe,3,uVar2,3,uVar1,3);
    FUN_0001064e(0,3,0xf,3,iVar3,3,uVar2,3);
    FUN_00010668(0,3,uVar1,3,0xd,3,0xd,3);
    FUN_00010682(0,3,0xf,3,0xf,3,0xe,3);
    FUN_0001069c(0,3,iVar3,3,0xc,3,0xf,3);
    FUN_000106b6(0,3,uVar1,3,uVar1,3,iVar3,3);
    FUN_000106d0(0,3,iVar3,3,9,3,uVar1,3);
    FUN_000106ea(0,3,iVar3,3,iVar3,3,0xe,3);
    FUN_00010704(0,3,0xf,3,0xb,3,0xf,3);
    FUN_0001071e(0,3,0x10,3,0xe,3,0xe,3);
    FUN_00010738(0,3,0xf,3,0xf,3,uVar1,3);
    FUN_00010752(0,3,uVar2,3,uVar2,3,uVar2,3);
    FUN_0001076c(0,3,0xf,3,0xf,3,0xd,3);
    FUN_00010786(0,3,uVar2,3,0xc,3,uVar2,3);
    FUN_000107a0(0,3,uVar2,3,uVar2,3,0x10,3);
    FUN_000107ba(0,3,uVar2,3,0xf,3,uVar2,3);
    FUN_000107d4(0,3,uVar1,3,0xe,3,0x10,3);
    FUN_000107ee(1,3,uVar1,3,0xc,3,uVar1,3);
    _L0();
    _L0();
  }
  return;
}



void _L0(void)

{
  char cVar1;
  char cVar2;
  char unaff_s2;
  undefined4 uStack00000000;
  char in_stack_0000001f;
  
  _L0();
  if (in_stack_0000001f == '\0') {
    uStack00000000 = 0;
    cVar1 = unaff_s2 + '\x02';
    _L0(0,3,0xd,3,3,3);
    uStack00000000 = 0;
    FUN_000105de(0,3,0xe,3,cVar1,3,cVar1,3);
    uStack00000000 = 0;
    FUN_000105f8(0,3,0xd,3,0xd,3,0xe,3);
    uStack00000000 = 0;
    cVar2 = unaff_s2 + '\x01';
    _L0(0,3,0xd,3,10,3,0xd,3);
    uStack00000000 = 0;
    FUN_00010634(0,3,0xe,3,cVar2,3,cVar1,3);
    uStack00000000 = 0;
    FUN_0001064e(0,3,0xf,3,3,cVar2,3);
    uStack00000000 = 0;
    FUN_00010668(0,3,cVar1,3,0xd,3,0xd,3);
    uStack00000000 = 0;
    FUN_00010682(0,3,0xf,3,0xf,3,0xe,3);
    uStack00000000 = 0;
    FUN_0001069c(0,3,3,0xc,3,0xf,3);
    uStack00000000 = 0;
    FUN_000106b6(0,3,cVar1,3,cVar1,3,3);
    uStack00000000 = 0;
    FUN_000106d0(0,3,3,9,3,cVar1,3);
    uStack00000000 = 0;
    FUN_000106ea(0,3,3,3,0xe,3);
    uStack00000000 = 0;
    FUN_00010704(0,3,0xf,3,0xb,3,0xf,3);
    uStack00000000 = 0;
    FUN_0001071e(0,3,0x10,3,0xe,3,0xe,3);
    uStack00000000 = 0;
    FUN_00010738(0,3,0xf,3,0xf,3,cVar1,3);
    uStack00000000 = 0;
    FUN_00010752(0,3,cVar2,3,cVar2,3,cVar2,3);
    uStack00000000 = 0;
    FUN_0001076c(0,3,0xf,3,0xf,3,0xd,3);
    uStack00000000 = 0;
    FUN_00010786(0,3,cVar2,3,0xc,3,cVar2,3);
    uStack00000000 = 0;
    FUN_000107a0(0,3,cVar2,3,cVar2,3,0x10,3);
    uStack00000000 = 0;
    FUN_000107ba(0,3,cVar2,3,0xf,3,cVar2,3);
    uStack00000000 = 0;
    FUN_000107d4(0,3,cVar1,3,0xe,3,0x10,3);
    uStack00000000 = 0;
    FUN_000107ee(1,3,cVar1,3,0xc,3,cVar1,3);
    _L0();
    _L0();
  }
  return;
}



void _L0(void)

{
  char cVar1;
  char unaff_s2;
  undefined4 uStack00000000;
  
  _L0();
  uStack00000000 = 0;
  FUN_000105de(0,3,0xe,3,3,3);
  uStack00000000 = 0;
  FUN_000105f8(0,3,0xd,3,0xd,3,0xe,3);
  uStack00000000 = 0;
  cVar1 = unaff_s2 + '\x01';
  _L0(0,3,0xd,3,10,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010634(0,3,0xe,3,cVar1,3,3);
  uStack00000000 = 0;
  FUN_0001064e(0,3,0xf,3,3,cVar1,3);
  uStack00000000 = 0;
  FUN_00010668(0,3,3,0xd,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010682(0,3,0xf,3,0xf,3,0xe,3);
  uStack00000000 = 0;
  FUN_0001069c(0,3,3,0xc,3,0xf,3);
  uStack00000000 = 0;
  FUN_000106b6(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_000106d0(0,3,3,9,3,3);
  uStack00000000 = 0;
  FUN_000106ea(0,3,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010704(0,3,0xf,3,0xb,3,0xf,3);
  uStack00000000 = 0;
  FUN_0001071e(0,3,0x10,3,0xe,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010738(0,3,0xf,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_00010752(0,3,cVar1,3,cVar1,3,cVar1,3);
  uStack00000000 = 0;
  FUN_0001076c(0,3,0xf,3,0xf,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010786(0,3,cVar1,3,0xc,3,cVar1,3);
  uStack00000000 = 0;
  FUN_000107a0(0,3,cVar1,3,cVar1,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ba(0,3,cVar1,3,0xf,3,cVar1,3);
  uStack00000000 = 0;
  FUN_000107d4(0,3,3,0xe,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ee(1,3,3,0xc,3,3);
  _L0();
  _L0();
  return;
}



void FUN_000105de(void)

{
  char cVar1;
  char unaff_s2;
  undefined4 uStack00000000;
  
  FUN_000105de();
  uStack00000000 = 0;
  FUN_000105f8(0,3,0xd,3,0xd,3,0xe,3);
  uStack00000000 = 0;
  cVar1 = unaff_s2 + '\x01';
  _L0(0,3,0xd,3,10,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010634(0,3,0xe,3,cVar1,3,3);
  uStack00000000 = 0;
  FUN_0001064e(0,3,0xf,3,3,cVar1,3);
  uStack00000000 = 0;
  FUN_00010668(0,3,3,0xd,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010682(0,3,0xf,3,0xf,3,0xe,3);
  uStack00000000 = 0;
  FUN_0001069c(0,3,3,0xc,3,0xf,3);
  uStack00000000 = 0;
  FUN_000106b6(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_000106d0(0,3,3,9,3,3);
  uStack00000000 = 0;
  FUN_000106ea(0,3,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010704(0,3,0xf,3,0xb,3,0xf,3);
  uStack00000000 = 0;
  FUN_0001071e(0,3,0x10,3,0xe,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010738(0,3,0xf,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_00010752(0,3,cVar1,3,cVar1,3,cVar1,3);
  uStack00000000 = 0;
  FUN_0001076c(0,3,0xf,3,0xf,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010786(0,3,cVar1,3,0xc,3,cVar1,3);
  uStack00000000 = 0;
  FUN_000107a0(0,3,cVar1,3,cVar1,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ba(0,3,cVar1,3,0xf,3,cVar1,3);
  uStack00000000 = 0;
  FUN_000107d4(0,3,3,0xe,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ee(1,3,3,0xc,3,3);
  _L0();
  _L0();
  return;
}



void FUN_000105f8(void)

{
  char cVar1;
  char unaff_s2;
  undefined4 uStack00000000;
  
  FUN_000105f8();
  uStack00000000 = 0;
  cVar1 = unaff_s2 + '\x01';
  _L0(0,3,0xd,3,10,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010634(0,3,0xe,3,cVar1,3,3);
  uStack00000000 = 0;
  FUN_0001064e(0,3,0xf,3,3,cVar1,3);
  uStack00000000 = 0;
  FUN_00010668(0,3,3,0xd,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010682(0,3,0xf,3,0xf,3,0xe,3);
  uStack00000000 = 0;
  FUN_0001069c(0,3,3,0xc,3,0xf,3);
  uStack00000000 = 0;
  FUN_000106b6(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_000106d0(0,3,3,9,3,3);
  uStack00000000 = 0;
  FUN_000106ea(0,3,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010704(0,3,0xf,3,0xb,3,0xf,3);
  uStack00000000 = 0;
  FUN_0001071e(0,3,0x10,3,0xe,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010738(0,3,0xf,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_00010752(0,3,cVar1,3,cVar1,3,cVar1,3);
  uStack00000000 = 0;
  FUN_0001076c(0,3,0xf,3,0xf,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010786(0,3,cVar1,3,0xc,3,cVar1,3);
  uStack00000000 = 0;
  FUN_000107a0(0,3,cVar1,3,cVar1,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ba(0,3,cVar1,3,0xf,3,cVar1,3);
  uStack00000000 = 0;
  FUN_000107d4(0,3,3,0xe,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ee(1,3,3,0xc,3,3);
  _L0();
  _L0();
  return;
}



void _L0(void)

{
  undefined4 uStack00000000;
  
  _L0();
  uStack00000000 = 0;
  FUN_00010634(0,3,0xe,3,3,3);
  uStack00000000 = 0;
  FUN_0001064e(0,3,0xf,3,3,3);
  uStack00000000 = 0;
  FUN_00010668(0,3,3,0xd,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010682(0,3,0xf,3,0xf,3,0xe,3);
  uStack00000000 = 0;
  FUN_0001069c(0,3,3,0xc,3,0xf,3);
  uStack00000000 = 0;
  FUN_000106b6(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_000106d0(0,3,3,9,3,3);
  uStack00000000 = 0;
  FUN_000106ea(0,3,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010704(0,3,0xf,3,0xb,3,0xf,3);
  uStack00000000 = 0;
  FUN_0001071e(0,3,0x10,3,0xe,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010738(0,3,0xf,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_00010752(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_0001076c(0,3,0xf,3,0xf,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010786(0,3,3,0xc,3,3);
  uStack00000000 = 0;
  FUN_000107a0(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ba(0,3,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_000107d4(0,3,3,0xe,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ee(1,3,3,0xc,3,3);
  _L0();
  _L0();
  return;
}



void FUN_00010634(void)

{
  undefined4 uStack00000000;
  
  FUN_00010634();
  uStack00000000 = 0;
  FUN_0001064e(0,3,0xf,3,3,3);
  uStack00000000 = 0;
  FUN_00010668(0,3,3,0xd,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010682(0,3,0xf,3,0xf,3,0xe,3);
  uStack00000000 = 0;
  FUN_0001069c(0,3,3,0xc,3,0xf,3);
  uStack00000000 = 0;
  FUN_000106b6(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_000106d0(0,3,3,9,3,3);
  uStack00000000 = 0;
  FUN_000106ea(0,3,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010704(0,3,0xf,3,0xb,3,0xf,3);
  uStack00000000 = 0;
  FUN_0001071e(0,3,0x10,3,0xe,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010738(0,3,0xf,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_00010752(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_0001076c(0,3,0xf,3,0xf,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010786(0,3,3,0xc,3,3);
  uStack00000000 = 0;
  FUN_000107a0(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ba(0,3,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_000107d4(0,3,3,0xe,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ee(1,3,3,0xc,3,3);
  _L0();
  _L0();
  return;
}



void FUN_0001064e(void)

{
  undefined4 uStack00000000;
  
  FUN_0001064e();
  uStack00000000 = 0;
  FUN_00010668(0,3,3,0xd,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010682(0,3,0xf,3,0xf,3,0xe,3);
  uStack00000000 = 0;
  FUN_0001069c(0,3,3,0xc,3,0xf,3);
  uStack00000000 = 0;
  FUN_000106b6(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_000106d0(0,3,3,9,3,3);
  uStack00000000 = 0;
  FUN_000106ea(0,3,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010704(0,3,0xf,3,0xb,3,0xf,3);
  uStack00000000 = 0;
  FUN_0001071e(0,3,0x10,3,0xe,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010738(0,3,0xf,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_00010752(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_0001076c(0,3,0xf,3,0xf,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010786(0,3,3,0xc,3,3);
  uStack00000000 = 0;
  FUN_000107a0(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ba(0,3,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_000107d4(0,3,3,0xe,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ee(1,3,3,0xc,3,3);
  _L0();
  _L0();
  return;
}



void FUN_00010668(void)

{
  undefined4 uStack00000000;
  
  FUN_00010668();
  uStack00000000 = 0;
  FUN_00010682(0,3,0xf,3,0xf,3,0xe,3);
  uStack00000000 = 0;
  FUN_0001069c(0,3,3,0xc,3,0xf,3);
  uStack00000000 = 0;
  FUN_000106b6(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_000106d0(0,3,3,9,3,3);
  uStack00000000 = 0;
  FUN_000106ea(0,3,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010704(0,3,0xf,3,0xb,3,0xf,3);
  uStack00000000 = 0;
  FUN_0001071e(0,3,0x10,3,0xe,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010738(0,3,0xf,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_00010752(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_0001076c(0,3,0xf,3,0xf,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010786(0,3,3,0xc,3,3);
  uStack00000000 = 0;
  FUN_000107a0(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ba(0,3,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_000107d4(0,3,3,0xe,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ee(1,3,3,0xc,3,3);
  _L0();
  _L0();
  return;
}



void FUN_00010682(void)

{
  undefined4 uStack00000000;
  
  FUN_00010682();
  uStack00000000 = 0;
  FUN_0001069c(0,3,3,0xc,3,0xf,3);
  uStack00000000 = 0;
  FUN_000106b6(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_000106d0(0,3,3,9,3,3);
  uStack00000000 = 0;
  FUN_000106ea(0,3,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010704(0,3,0xf,3,0xb,3,0xf,3);
  uStack00000000 = 0;
  FUN_0001071e(0,3,0x10,3,0xe,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010738(0,3,0xf,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_00010752(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_0001076c(0,3,0xf,3,0xf,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010786(0,3,3,0xc,3,3);
  uStack00000000 = 0;
  FUN_000107a0(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ba(0,3,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_000107d4(0,3,3,0xe,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ee(1,3,3,0xc,3,3);
  _L0();
  _L0();
  return;
}



void FUN_0001069c(void)

{
  undefined4 uStack00000000;
  
  FUN_0001069c();
  uStack00000000 = 0;
  FUN_000106b6(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_000106d0(0,3,3,9,3,3);
  uStack00000000 = 0;
  FUN_000106ea(0,3,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010704(0,3,0xf,3,0xb,3,0xf,3);
  uStack00000000 = 0;
  FUN_0001071e(0,3,0x10,3,0xe,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010738(0,3,0xf,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_00010752(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_0001076c(0,3,0xf,3,0xf,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010786(0,3,3,0xc,3,3);
  uStack00000000 = 0;
  FUN_000107a0(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ba(0,3,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_000107d4(0,3,3,0xe,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ee(1,3,3,0xc,3,3);
  _L0();
  _L0();
  return;
}



void FUN_000106b6(void)

{
  undefined4 uStack00000000;
  
  FUN_000106b6();
  uStack00000000 = 0;
  FUN_000106d0(0,3,3,9,3,3);
  uStack00000000 = 0;
  FUN_000106ea(0,3,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010704(0,3,0xf,3,0xb,3,0xf,3);
  uStack00000000 = 0;
  FUN_0001071e(0,3,0x10,3,0xe,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010738(0,3,0xf,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_00010752(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_0001076c(0,3,0xf,3,0xf,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010786(0,3,3,0xc,3,3);
  uStack00000000 = 0;
  FUN_000107a0(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ba(0,3,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_000107d4(0,3,3,0xe,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ee(1,3,3,0xc,3,3);
  _L0();
  _L0();
  return;
}



void FUN_000106d0(void)

{
  undefined4 uStack00000000;
  
  FUN_000106d0();
  uStack00000000 = 0;
  FUN_000106ea(0,3,3,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010704(0,3,0xf,3,0xb,3,0xf,3);
  uStack00000000 = 0;
  FUN_0001071e(0,3,0x10,3,0xe,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010738(0,3,0xf,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_00010752(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_0001076c(0,3,0xf,3,0xf,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010786(0,3,3,0xc,3,3);
  uStack00000000 = 0;
  FUN_000107a0(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ba(0,3,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_000107d4(0,3,3,0xe,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ee(1,3,3,0xc,3,3);
  _L0();
  _L0();
  return;
}



void FUN_000106ea(void)

{
  undefined4 uStack00000000;
  
  FUN_000106ea();
  uStack00000000 = 0;
  FUN_00010704(0,3,0xf,3,0xb,3,0xf,3);
  uStack00000000 = 0;
  FUN_0001071e(0,3,0x10,3,0xe,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010738(0,3,0xf,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_00010752(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_0001076c(0,3,0xf,3,0xf,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010786(0,3,3,0xc,3,3);
  uStack00000000 = 0;
  FUN_000107a0(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ba(0,3,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_000107d4(0,3,3,0xe,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ee(1,3,3,0xc,3,3);
  _L0();
  _L0();
  return;
}



void FUN_00010704(void)

{
  undefined4 uStack00000000;
  
  FUN_00010704();
  uStack00000000 = 0;
  FUN_0001071e(0,3,0x10,3,0xe,3,0xe,3);
  uStack00000000 = 0;
  FUN_00010738(0,3,0xf,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_00010752(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_0001076c(0,3,0xf,3,0xf,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010786(0,3,3,0xc,3,3);
  uStack00000000 = 0;
  FUN_000107a0(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ba(0,3,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_000107d4(0,3,3,0xe,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ee(1,3,3,0xc,3,3);
  _L0();
  _L0();
  return;
}



void FUN_0001071e(void)

{
  undefined4 uStack00000000;
  
  FUN_0001071e();
  uStack00000000 = 0;
  FUN_00010738(0,3,0xf,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_00010752(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_0001076c(0,3,0xf,3,0xf,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010786(0,3,3,0xc,3,3);
  uStack00000000 = 0;
  FUN_000107a0(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ba(0,3,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_000107d4(0,3,3,0xe,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ee(1,3,3,0xc,3,3);
  _L0();
  _L0();
  return;
}



void FUN_00010738(void)

{
  undefined4 uStack00000000;
  
  FUN_00010738();
  uStack00000000 = 0;
  FUN_00010752(0,3,3,3,3);
  uStack00000000 = 0;
  FUN_0001076c(0,3,0xf,3,0xf,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010786(0,3,3,0xc,3,3);
  uStack00000000 = 0;
  FUN_000107a0(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ba(0,3,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_000107d4(0,3,3,0xe,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ee(1,3,3,0xc,3,3);
  _L0();
  _L0();
  return;
}



void FUN_00010752(void)

{
  undefined4 uStack00000000;
  
  FUN_00010752();
  uStack00000000 = 0;
  FUN_0001076c(0,3,0xf,3,0xf,3,0xd,3);
  uStack00000000 = 0;
  FUN_00010786(0,3,3,0xc,3,3);
  uStack00000000 = 0;
  FUN_000107a0(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ba(0,3,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_000107d4(0,3,3,0xe,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ee(1,3,3,0xc,3,3);
  _L0();
  _L0();
  return;
}



void FUN_0001076c(void)

{
  undefined4 uStack00000000;
  
  FUN_0001076c();
  uStack00000000 = 0;
  FUN_00010786(0,3,3,0xc,3,3);
  uStack00000000 = 0;
  FUN_000107a0(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ba(0,3,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_000107d4(0,3,3,0xe,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ee(1,3,3,0xc,3,3);
  _L0();
  _L0();
  return;
}



void FUN_00010786(void)

{
  undefined4 uStack00000000;
  
  FUN_00010786();
  uStack00000000 = 0;
  FUN_000107a0(0,3,3,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ba(0,3,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_000107d4(0,3,3,0xe,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ee(1,3,3,0xc,3,3);
  _L0();
  _L0();
  return;
}



void FUN_000107a0(void)

{
  undefined4 uStack00000000;
  
  FUN_000107a0();
  uStack00000000 = 0;
  FUN_000107ba(0,3,3,0xf,3,3);
  uStack00000000 = 0;
  FUN_000107d4(0,3,3,0xe,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ee(1,3,3,0xc,3,3);
  _L0();
  _L0();
  return;
}



void FUN_000107ba(void)

{
  undefined4 uStack00000000;
  
  FUN_000107ba();
  uStack00000000 = 0;
  FUN_000107d4(0,3,3,0xe,3,0x10,3);
  uStack00000000 = 0;
  FUN_000107ee(1,3,3,0xc,3,3);
  _L0();
  _L0();
  return;
}



void FUN_000107d4(void)

{
  undefined4 uStack00000000;
  
  FUN_000107d4();
  uStack00000000 = 0;
  FUN_000107ee(1,3,3,0xc,3,3);
  _L0();
  _L0();
  return;
}



void FUN_000107ee(void)

{
  FUN_000107ee();
  _L0();
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  return;
}



// WARNING: Variable defined which should be unmapped: pka_p1_eq_inf

void pka_addition_win(ECC_Jacobian_Point256 *src1,ECC_Jacobian_Point256 *src2,
                     ECC_Jacobian_Point256 *ret)

{
  undefined4 uVar1;
  byte bStack18;
  byte abStack17 [3];
  uint8_t pka_p1_eq_inf;
  uint8_t pka_p2_eq_inf;
  
  _L0(8,src1,0x15,3,0x39,0);
  FUN_00010848(8,&src1->y,0x16,3,0x39,0);
  FUN_00010860(8,&src1->z,0x17,3,0x39,0);
  FUN_00010876(8,src2,0x18,3,0x39,0);
  FUN_0001088e(8,&src2->y,0x19,3,0x39,0);
  FUN_000108a6(8,&src2->z,0x1a,3,0x39,0);
  FUN_000108b4(0x15,&bStack18);
  FUN_000108c2(0x18,abStack17);
  if (bStack18 == 1) {
    uVar1 = 0x18;
    if (abStack17[0] != 0) goto _L0;
  }
  else {
    if ((bStack18 | abStack17[0]) == 0) {
      FUN_000108f8(0x15,0x18,0x1b);
      goto _L0;
    }
_L0:
    uVar1 = 2;
  }
  FUN_000108e0(0x1b,uVar1);
_L0:
  FUN_00010904(ret,0x1b);
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  byte in_stack_0000000e;
  byte in_stack_0000000f;
  
  _L0();
  FUN_00010848(8,unaff_s1 + 0x28,0x16,3,0x39,0);
  FUN_00010860(8,unaff_s1 + 0x50,0x17,3,0x39,0);
  FUN_00010876(8,0x18,3,0x39,0);
  FUN_0001088e(8,unaff_s0 + 0x28,0x19,3,0x39,0);
  FUN_000108a6(8,unaff_s0 + 0x50,0x1a,3,0x39,0);
  FUN_000108b4(0x15,&stack0x0000000e);
  FUN_000108c2(0x18,&stack0x0000000f);
  if (in_stack_0000000e == 1) {
    uVar1 = 0x18;
    if (in_stack_0000000f != 0) goto _L0;
  }
  else {
    if ((in_stack_0000000e | in_stack_0000000f) == 0) {
      FUN_000108f8(0x15,0x18,0x1b);
      goto _L0;
    }
_L0:
    uVar1 = 2;
  }
  FUN_000108e0(0x1b,uVar1);
_L0:
  FUN_00010904(0x1b);
  return;
}



void FUN_00010848(void)

{
  int unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  byte in_stack_0000000e;
  byte in_stack_0000000f;
  
  FUN_00010848();
  FUN_00010860(8,unaff_s1 + 0x50,0x17,3,0x39,0);
  FUN_00010876(8,0x18,3,0x39,0);
  FUN_0001088e(8,unaff_s0 + 0x28,0x19,3,0x39,0);
  FUN_000108a6(8,unaff_s0 + 0x50,0x1a,3,0x39,0);
  FUN_000108b4(0x15,&stack0x0000000e);
  FUN_000108c2(0x18,&stack0x0000000f);
  if (in_stack_0000000e == 1) {
    uVar1 = 0x18;
    if (in_stack_0000000f != 0) goto _L0;
  }
  else {
    if ((in_stack_0000000e | in_stack_0000000f) == 0) {
      FUN_000108f8(0x15,0x18,0x1b);
      goto _L0;
    }
_L0:
    uVar1 = 2;
  }
  FUN_000108e0(0x1b,uVar1);
_L0:
  FUN_00010904(0x1b);
  return;
}



void FUN_00010860(void)

{
  int unaff_s0;
  undefined4 uVar1;
  byte in_stack_0000000e;
  byte in_stack_0000000f;
  
  FUN_00010860();
  FUN_00010876(8,0x18,3,0x39,0);
  FUN_0001088e(8,unaff_s0 + 0x28,0x19,3,0x39,0);
  FUN_000108a6(8,unaff_s0 + 0x50,0x1a,3,0x39,0);
  FUN_000108b4(0x15,&stack0x0000000e);
  FUN_000108c2(0x18,&stack0x0000000f);
  if (in_stack_0000000e == 1) {
    uVar1 = 0x18;
    if (in_stack_0000000f != 0) goto _L0;
  }
  else {
    if ((in_stack_0000000e | in_stack_0000000f) == 0) {
      FUN_000108f8(0x15,0x18,0x1b);
      goto _L0;
    }
_L0:
    uVar1 = 2;
  }
  FUN_000108e0(0x1b,uVar1);
_L0:
  FUN_00010904(0x1b);
  return;
}



void FUN_00010876(void)

{
  int unaff_s0;
  undefined4 uVar1;
  byte in_stack_0000000e;
  byte in_stack_0000000f;
  
  FUN_00010876();
  FUN_0001088e(8,unaff_s0 + 0x28,0x19,3,0x39,0);
  FUN_000108a6(8,unaff_s0 + 0x50,0x1a,3,0x39,0);
  FUN_000108b4(0x15,&stack0x0000000e);
  FUN_000108c2(0x18,&stack0x0000000f);
  if (in_stack_0000000e == 1) {
    uVar1 = 0x18;
    if (in_stack_0000000f != 0) goto _L0;
  }
  else {
    if ((in_stack_0000000e | in_stack_0000000f) == 0) {
      FUN_000108f8(0x15,0x18,0x1b);
      goto _L0;
    }
_L0:
    uVar1 = 2;
  }
  FUN_000108e0(0x1b,uVar1);
_L0:
  FUN_00010904(0x1b);
  return;
}



void FUN_0001088e(void)

{
  int unaff_s0;
  undefined4 uVar1;
  byte in_stack_0000000e;
  byte in_stack_0000000f;
  
  FUN_0001088e();
  FUN_000108a6(8,unaff_s0 + 0x50,0x1a,3,0x39,0);
  FUN_000108b4(0x15,&stack0x0000000e);
  FUN_000108c2(0x18,&stack0x0000000f);
  if (in_stack_0000000e == 1) {
    uVar1 = 0x18;
    if (in_stack_0000000f != 0) goto _L0;
  }
  else {
    if ((in_stack_0000000e | in_stack_0000000f) == 0) {
      FUN_000108f8(0x15,0x18,0x1b);
      goto _L0;
    }
_L0:
    uVar1 = 2;
  }
  FUN_000108e0(0x1b,uVar1);
_L0:
  FUN_00010904(0x1b);
  return;
}



void FUN_000108a6(void)

{
  undefined4 uVar1;
  byte in_stack_0000000e;
  byte in_stack_0000000f;
  
  FUN_000108a6();
  FUN_000108b4(0x15,&stack0x0000000e);
  FUN_000108c2(0x18,&stack0x0000000f);
  if (in_stack_0000000e == 1) {
    uVar1 = 0x18;
    if (in_stack_0000000f != 0) goto _L0;
  }
  else {
    if ((in_stack_0000000e | in_stack_0000000f) == 0) {
      FUN_000108f8(0x15,0x18,0x1b);
      goto _L0;
    }
_L0:
    uVar1 = 2;
  }
  FUN_000108e0(0x1b,uVar1);
_L0:
  FUN_00010904(0x1b);
  return;
}



void FUN_000108b4(void)

{
  undefined4 uVar1;
  byte in_stack_0000000e;
  byte in_stack_0000000f;
  
  FUN_000108b4();
  FUN_000108c2(0x18,&stack0x0000000f);
  if (in_stack_0000000e == 1) {
    uVar1 = 0x18;
    if (in_stack_0000000f != 0) goto _L0;
  }
  else {
    if ((in_stack_0000000e | in_stack_0000000f) == 0) {
      FUN_000108f8(0x15,0x18,0x1b);
      goto _L0;
    }
_L0:
    uVar1 = 2;
  }
  FUN_000108e0(0x1b,uVar1);
_L0:
  FUN_00010904(0x1b);
  return;
}



void FUN_000108c2(void)

{
  undefined4 uVar1;
  byte in_stack_0000000e;
  byte in_stack_0000000f;
  
  FUN_000108c2();
  if (in_stack_0000000e == 1) {
    uVar1 = 0x18;
    if (in_stack_0000000f != 0) goto _L0;
  }
  else {
    if ((in_stack_0000000e | in_stack_0000000f) == 0) {
      FUN_000108f8(0x15,0x18,0x1b);
      goto _L0;
    }
_L0:
    uVar1 = 2;
  }
  FUN_000108e0(0x1b,uVar1);
_L0:
  FUN_00010904(0x1b);
  return;
}



void FUN_000108e0(void)

{
  FUN_000108e0();
  FUN_00010904(0x1b);
  return;
}



void FUN_000108f8(void)

{
  FUN_000108f8();
  FUN_00010904(0x1b);
  return;
}



void FUN_00010904(void)

{
  FUN_00010904();
  return;
}



// WARNING: Could not reconcile some variable overlaps

void ecc_multiplication_event_handler(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 *puVar11;
  u_int32 *puVar12;
  byte bStack113;
  byte bStack112;
  uint8_t pka_p1_eq_inf;
  ECC_Point256 pointQ256;
  
  _L0(0);
  iVar3 = FUN_00010938(0);
  if (iVar3 == 0) goto _L0;
  if (*(int *)(iVar3 + 4) == 0) {
    if (*(short *)(iVar3 + 0x122) != 0xff) {
      puVar4 = (undefined *)FUN_00010c2a(*(undefined2 *)(iVar3 + 0x120),0xff,0x40);
      _LVL169(2);
      FUN_00010c40(3);
      (*pcRam00000000)(&stack0xffffff90,0,0x20,pcRam00000000);
      pointQ256.x.num[6] = 2;
      _L0(8,&stack0xffffff90,0xd,3,0x39,0);
      FUN_00010c82(0,3,0xd,3,0,3,0xd);
      FUN_00010c9c(1,3,0xe,3,4,3,0xd,3);
      _L0();
      _L0();
      FUN_00010cb6(0xe);
      FUN_00010cc0(2);
      FUN_00010cca(3);
      (*pcRam00000000)(&stack0xffffff90,0,0x20,pcRam00000000);
      pointQ256.x.num[7] = 0;
      pointQ256.x.len = 0;
      (*pcRam00000000)(&pointQ256.x.sign,0,0x20,pcRam00000000);
      pointQ256.y.num[7] = 0;
      pointQ256.y.len = 0;
      _L0(3,2,&stack0xffffff90,8);
      FUN_00010d0e(3,3,&pointQ256.x.sign,8);
      if (*(char *)(iVar3 + 300) == '\x02') {
        FUN_00010d22(*(undefined4 *)(iVar3 + 0x130));
        *(undefined4 *)(iVar3 + 0x130) = 0;
      }
      FUN_00010d30(iVar3);
      puVar8 = puVar4 + 0x1c;
      puVar11 = (undefined4 *)&stack0xffffff90;
      do {
        puVar8[3] = *(undefined *)((int)puVar11 + 3);
        puVar8[2] = (char)*(undefined2 *)((int)puVar11 + 2);
        puVar8[1] = (char)((uint)*puVar11 >> 8);
        *puVar8 = (char)*puVar11;
        bVar1 = puVar4 != puVar8;
        puVar8 = puVar8 + -4;
        puVar11 = puVar11 + 1;
      } while (bVar1);
      puVar8 = puVar4 + 0x3c;
      puVar12 = &pointQ256.x.sign;
      do {
        puVar9 = puVar8 + -4;
        puVar8[3] = *(undefined *)((int)puVar12 + 3);
        puVar8[2] = (char)*(undefined2 *)((int)puVar12 + 2);
        puVar8[1] = (char)(*puVar12 >> 8);
        *puVar8 = (char)*puVar12;
        puVar8 = puVar9;
        puVar12 = puVar12 + 1;
      } while (puVar9 != puVar4 + 0x1c);
      FUN_00010da0(puVar4);
    }
    goto _L0;
  }
  cVar2 = *(char *)(iVar3 + 300);
  uVar7 = *(uint *)(iVar3 + 0x128);
  if ((byte)(cVar2 - 1U) < 2) {
    if (cVar2 == '\x01') {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar3 + 0x130);
    }
    uVar6 = uVar7 & 0x1f;
    iVar10 = (((*(uint *)(((0x3f - uVar7 >> 5) + 0x3c) * 4 + iVar3 + 8) >> uVar6 & 1) * 2 +
              (*(uint *)(((0x7f - uVar7 >> 5) + 0x3c) * 4 + iVar3 + 8) >> uVar6 & 1)) * 2 +
             (*(uint *)(((0xbf - uVar7 >> 5) + 0x3c) * 4 + iVar3 + 8) >> uVar6 & 1)) * 2 +
             (*(uint *)(((0xff - uVar7 >> 5) + 0x3c) * 4 + iVar3 + 8) >> uVar6 & 1);
    if (iVar10 != 0) {
      iVar5 = iVar5 + iVar10 * 0x78 + -0x78;
      FUN_000109fc(8,iVar5,0x15,3,0x39,0);
      FUN_00010a14(8,iVar5 + 0x28,0x16,3,0x39,0);
      FUN_00010a2c(8,iVar5 + 0x50,0x17,3,0x39,0);
      FUN_00010a3a(2,&bStack113);
      FUN_00010a46(0x15,&stack0xffffff90);
      if (bStack113 == 1) {
        if (bStack112 == 0) {
          FUN_00010a62(2,0x15);
        }
      }
      else {
        if ((bStack113 | bStack112) == 0) {
          FUN_00010a9e(2,0x15,2);
        }
      }
    }
    if (*(int *)(iVar3 + 0x128) == 0) {
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    else {
      FUN_00010a72(2);
      iVar5 = *(int *)(iVar3 + 0x128) + -1;
_L0:
      *(int *)(iVar3 + 0x128) = iVar5;
    }
  }
  else {
    if (cVar2 == '\x03') {
      FUN_00010ae2(5);
      iVar5 = *(int *)(iVar3 + 0x128) + 1;
      *(int *)(iVar3 + 0x128) = iVar5;
      if (iVar5 == 0x40) {
        _L0(*(int *)(iVar3 + 0x130) + 0x78,5);
      }
      else {
        if (iVar5 == 0x80) {
          _L0(*(int *)(iVar3 + 0x130) + 0x168,5);
          return;
        }
        if (iVar5 == 0xc0) {
          FUN_00010b36(*(int *)(iVar3 + 0x130) + 0x348,5);
          *(undefined *)(iVar3 + 300) = 4;
          *(undefined4 *)(iVar3 + 0x128) = 3;
        }
      }
    }
    else {
      if (cVar2 == '\x04') {
        if (uVar7 == 3) {
          iVar5 = *(int *)(iVar3 + 0x130);
          FUN_00010b60(iVar5,iVar5 + 0x78,iVar5 + 0xf0);
          iVar5 = 5;
        }
        else {
          if (uVar7 == 5) {
            iVar5 = *(int *)(iVar3 + 0x130);
            FUN_00010b7e(iVar5,iVar5 + 0x168,iVar5 + 0x1e0);
            iVar5 = 6;
          }
          else {
            if (uVar7 == 6) {
              iVar5 = *(int *)(iVar3 + 0x130);
              FUN_00010ba0(iVar5 + 0x78,iVar5 + 0x168,iVar5 + 600);
              iVar5 = 7;
            }
            else {
              if (uVar7 == 7) {
                iVar5 = *(int *)(iVar3 + 0x130);
                FUN_00010bbe(iVar5,iVar5 + 600,iVar5 + 0x2d0);
                iVar5 = 9;
              }
              else {
                if (6 < uVar7 - 9) goto _L0;
                iVar5 = *(int *)(iVar3 + 0x130);
                FUN_00010bf0(iVar5 + 0x348,iVar5 + uVar7 * 0x78 + -0x438,
                             uVar7 * 0x78 + -0x78 + iVar5);
                if (*(int *)(iVar3 + 0x128) == 0xf) {
                  *(undefined *)(iVar3 + 300) = 2;
                  iVar5 = 0x3f;
                }
                else {
                  iVar5 = *(int *)(iVar3 + 0x128) + 1;
                }
              }
            }
          }
        }
        goto _L0;
      }
    }
  }
_L0:
  FUN_00010ab2(0,iVar3);
_L0:
  if (pcRam00000000 != (code *)0x0) {
    FUN_00010ac2(0);
  }
  return;
}



void _L0(void)

{
  bool bVar1;
  char cVar2;
  int *unaff_s1;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 *puVar11;
  byte in_stack_0000001f;
  byte in_stack_00000020;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000068;
  undefined4 in_stack_0000006c;
  
  _L0();
  iVar3 = FUN_00010938();
  if (iVar3 == 0) goto _L0;
  if (*(int *)(iVar3 + 4) == 0) {
    if (*(short *)(iVar3 + 0x122) != 0xff) {
      puVar4 = (undefined *)FUN_00010c2a(*(undefined2 *)(iVar3 + 0x120),0xff,0x40);
      _LVL169(2);
      FUN_00010c40(3);
      (*pcRam00000000)(&stack0x00000020,0,0x20,pcRam00000000);
      in_stack_0000003c = 2;
      _L0(8,&stack0x00000020,0xd,3,0x39,0);
      FUN_00010c82(0,3,0xd,3,0,3,0xd);
      FUN_00010c9c(1,3,0xe,3,4,3,0xd,3);
      _L0();
      _L0();
      FUN_00010cb6(0xe);
      FUN_00010cc0(2);
      FUN_00010cca(3);
      (*pcRam00000000)(&stack0x00000020,0,0x20,pcRam00000000);
      in_stack_00000040 = 0;
      in_stack_00000044 = 0;
      (*pcRam00000000)(&stack0x00000048,0,0x20,pcRam00000000);
      in_stack_00000068 = 0;
      in_stack_0000006c = 0;
      _L0(3,2,&stack0x00000020,8);
      FUN_00010d0e(3,3,&stack0x00000048,8);
      if (*(char *)(iVar3 + 300) == '\x02') {
        FUN_00010d22(*(undefined4 *)(iVar3 + 0x130));
        *(undefined4 *)(iVar3 + 0x130) = 0;
      }
      FUN_00010d30(iVar3);
      puVar8 = puVar4 + 0x1c;
      puVar11 = (undefined4 *)&stack0x00000020;
      do {
        puVar8[3] = *(undefined *)((int)puVar11 + 3);
        puVar8[2] = (char)*(undefined2 *)((int)puVar11 + 2);
        puVar8[1] = (char)((uint)*puVar11 >> 8);
        *puVar8 = (char)*puVar11;
        bVar1 = puVar4 != puVar8;
        puVar8 = puVar8 + -4;
        puVar11 = puVar11 + 1;
      } while (bVar1);
      puVar8 = puVar4 + 0x3c;
      puVar11 = (undefined4 *)&stack0x00000048;
      do {
        puVar9 = puVar8 + -4;
        puVar8[3] = *(undefined *)((int)puVar11 + 3);
        puVar8[2] = (char)*(undefined2 *)((int)puVar11 + 2);
        puVar8[1] = (char)((uint)*puVar11 >> 8);
        *puVar8 = (char)*puVar11;
        puVar8 = puVar9;
        puVar11 = puVar11 + 1;
      } while (puVar9 != puVar4 + 0x1c);
      FUN_00010da0(puVar4);
    }
    goto _L0;
  }
  cVar2 = *(char *)(iVar3 + 300);
  uVar7 = *(uint *)(iVar3 + 0x128);
  if ((byte)(cVar2 - 1U) < 2) {
    if (cVar2 == '\x01') {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar3 + 0x130);
    }
    uVar6 = uVar7 & 0x1f;
    iVar10 = (((*(uint *)(((0x3f - uVar7 >> 5) + 0x3c) * 4 + iVar3 + 8) >> uVar6 & 1) * 2 +
              (*(uint *)(((0x7f - uVar7 >> 5) + 0x3c) * 4 + iVar3 + 8) >> uVar6 & 1)) * 2 +
             (*(uint *)(((0xbf - uVar7 >> 5) + 0x3c) * 4 + iVar3 + 8) >> uVar6 & 1)) * 2 +
             (*(uint *)(((0xff - uVar7 >> 5) + 0x3c) * 4 + iVar3 + 8) >> uVar6 & 1);
    if (iVar10 != 0) {
      iVar5 = iVar5 + iVar10 * 0x78 + -0x78;
      FUN_000109fc(8,iVar5,0x15,3,0x39,0);
      FUN_00010a14(8,iVar5 + 0x28,0x16,3,0x39,0);
      FUN_00010a2c(8,iVar5 + 0x50,0x17,3,0x39,0);
      FUN_00010a3a(2,&stack0x0000001f);
      FUN_00010a46(0x15,&stack0x00000020);
      if (in_stack_0000001f == 1) {
        if (in_stack_00000020 == 0) {
          FUN_00010a62(2,0x15);
        }
      }
      else {
        if ((in_stack_0000001f | in_stack_00000020) == 0) {
          FUN_00010a9e(2,0x15,2);
        }
      }
    }
    if (*(int *)(iVar3 + 0x128) == 0) {
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    else {
      FUN_00010a72(2);
      iVar5 = *(int *)(iVar3 + 0x128) + -1;
_L0:
      *(int *)(iVar3 + 0x128) = iVar5;
    }
  }
  else {
    if (cVar2 == '\x03') {
      FUN_00010ae2(5);
      iVar5 = *(int *)(iVar3 + 0x128) + 1;
      *(int *)(iVar3 + 0x128) = iVar5;
      if (iVar5 == 0x40) {
        _L0(*(int *)(iVar3 + 0x130) + 0x78,5);
      }
      else {
        if (iVar5 == 0x80) {
          _L0(*(int *)(iVar3 + 0x130) + 0x168,5);
          return;
        }
        if (iVar5 == 0xc0) {
          FUN_00010b36(*(int *)(iVar3 + 0x130) + 0x348,5);
          *(undefined *)(iVar3 + 300) = 4;
          *(undefined4 *)(iVar3 + 0x128) = 3;
        }
      }
    }
    else {
      if (cVar2 == '\x04') {
        if (uVar7 == 3) {
          iVar5 = *(int *)(iVar3 + 0x130);
          FUN_00010b60(iVar5,iVar5 + 0x78,iVar5 + 0xf0);
          iVar5 = 5;
        }
        else {
          if (uVar7 == 5) {
            iVar5 = *(int *)(iVar3 + 0x130);
            FUN_00010b7e(iVar5,iVar5 + 0x168,iVar5 + 0x1e0);
            iVar5 = 6;
          }
          else {
            if (uVar7 == 6) {
              iVar5 = *(int *)(iVar3 + 0x130);
              FUN_00010ba0(iVar5 + 0x78,iVar5 + 0x168,iVar5 + 600);
              iVar5 = 7;
            }
            else {
              if (uVar7 == 7) {
                iVar5 = *(int *)(iVar3 + 0x130);
                FUN_00010bbe(iVar5,iVar5 + 600,iVar5 + 0x2d0);
                iVar5 = 9;
              }
              else {
                if (6 < uVar7 - 9) goto _L0;
                iVar5 = *(int *)(iVar3 + 0x130);
                FUN_00010bf0(iVar5 + 0x348,iVar5 + uVar7 * 0x78 + -0x438,
                             uVar7 * 0x78 + -0x78 + iVar5);
                if (*(int *)(iVar3 + 0x128) == 0xf) {
                  *(undefined *)(iVar3 + 300) = 2;
                  iVar5 = 0x3f;
                }
                else {
                  iVar5 = *(int *)(iVar3 + 0x128) + 1;
                }
              }
            }
          }
        }
        goto _L0;
      }
    }
  }
_L0:
  FUN_00010ab2(iVar3);
_L0:
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010938(void)

{
  bool bVar1;
  char cVar2;
  int *unaff_s1;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined4 *puVar11;
  byte in_stack_0000001f;
  byte in_stack_00000020;
  undefined4 in_stack_0000003c;
  undefined4 in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000068;
  undefined4 in_stack_0000006c;
  
  iVar3 = FUN_00010938();
  if (iVar3 == 0) goto _L0;
  if (*(int *)(iVar3 + 4) == 0) {
    if (*(short *)(iVar3 + 0x122) != 0xff) {
      puVar4 = (undefined *)FUN_00010c2a(*(undefined2 *)(iVar3 + 0x120),0xff,0x40);
      _LVL169(2);
      FUN_00010c40(3);
      (*pcRam00000000)(&stack0x00000020,0,0x20,pcRam00000000);
      in_stack_0000003c = 2;
      _L0(8,&stack0x00000020,0xd,3,0x39,0);
      FUN_00010c82(0,3,0xd,3,0,3,0xd);
      FUN_00010c9c(1,3,0xe,3,4,3,0xd,3);
      _L0();
      _L0();
      FUN_00010cb6(0xe);
      FUN_00010cc0(2);
      FUN_00010cca(3);
      (*pcRam00000000)(&stack0x00000020,0,0x20,pcRam00000000);
      in_stack_00000040 = 0;
      in_stack_00000044 = 0;
      (*pcRam00000000)(&stack0x00000048,0,0x20,pcRam00000000);
      in_stack_00000068 = 0;
      in_stack_0000006c = 0;
      _L0(3,2,&stack0x00000020,8);
      FUN_00010d0e(3,3,&stack0x00000048,8);
      if (*(char *)(iVar3 + 300) == '\x02') {
        FUN_00010d22(*(undefined4 *)(iVar3 + 0x130));
        *(undefined4 *)(iVar3 + 0x130) = 0;
      }
      FUN_00010d30(iVar3);
      puVar8 = puVar4 + 0x1c;
      puVar11 = (undefined4 *)&stack0x00000020;
      do {
        puVar8[3] = *(undefined *)((int)puVar11 + 3);
        puVar8[2] = (char)*(undefined2 *)((int)puVar11 + 2);
        puVar8[1] = (char)((uint)*puVar11 >> 8);
        *puVar8 = (char)*puVar11;
        bVar1 = puVar4 != puVar8;
        puVar8 = puVar8 + -4;
        puVar11 = puVar11 + 1;
      } while (bVar1);
      puVar8 = puVar4 + 0x3c;
      puVar11 = (undefined4 *)&stack0x00000048;
      do {
        puVar9 = puVar8 + -4;
        puVar8[3] = *(undefined *)((int)puVar11 + 3);
        puVar8[2] = (char)*(undefined2 *)((int)puVar11 + 2);
        puVar8[1] = (char)((uint)*puVar11 >> 8);
        *puVar8 = (char)*puVar11;
        puVar8 = puVar9;
        puVar11 = puVar11 + 1;
      } while (puVar9 != puVar4 + 0x1c);
      FUN_00010da0(puVar4);
    }
    goto _L0;
  }
  cVar2 = *(char *)(iVar3 + 300);
  uVar7 = *(uint *)(iVar3 + 0x128);
  if ((byte)(cVar2 - 1U) < 2) {
    if (cVar2 == '\x01') {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(iVar3 + 0x130);
    }
    uVar6 = uVar7 & 0x1f;
    iVar10 = (((*(uint *)(((0x3f - uVar7 >> 5) + 0x3c) * 4 + iVar3 + 8) >> uVar6 & 1) * 2 +
              (*(uint *)(((0x7f - uVar7 >> 5) + 0x3c) * 4 + iVar3 + 8) >> uVar6 & 1)) * 2 +
             (*(uint *)(((0xbf - uVar7 >> 5) + 0x3c) * 4 + iVar3 + 8) >> uVar6 & 1)) * 2 +
             (*(uint *)(((0xff - uVar7 >> 5) + 0x3c) * 4 + iVar3 + 8) >> uVar6 & 1);
    if (iVar10 != 0) {
      iVar5 = iVar5 + iVar10 * 0x78 + -0x78;
      FUN_000109fc(8,iVar5,0x15,3,0x39,0);
      FUN_00010a14(8,iVar5 + 0x28,0x16,3,0x39,0);
      FUN_00010a2c(8,iVar5 + 0x50,0x17,3,0x39,0);
      FUN_00010a3a(2,&stack0x0000001f);
      FUN_00010a46(0x15,&stack0x00000020);
      if (in_stack_0000001f == 1) {
        if (in_stack_00000020 == 0) {
          FUN_00010a62(2,0x15);
        }
      }
      else {
        if ((in_stack_0000001f | in_stack_00000020) == 0) {
          FUN_00010a9e(2,0x15,2);
        }
      }
    }
    if (*(int *)(iVar3 + 0x128) == 0) {
      *(undefined4 *)(iVar3 + 4) = 0;
    }
    else {
      FUN_00010a72(2);
      iVar5 = *(int *)(iVar3 + 0x128) + -1;
_L0:
      *(int *)(iVar3 + 0x128) = iVar5;
    }
  }
  else {
    if (cVar2 == '\x03') {
      FUN_00010ae2(5);
      iVar5 = *(int *)(iVar3 + 0x128) + 1;
      *(int *)(iVar3 + 0x128) = iVar5;
      if (iVar5 == 0x40) {
        _L0(*(int *)(iVar3 + 0x130) + 0x78,5);
      }
      else {
        if (iVar5 == 0x80) {
          _L0(*(int *)(iVar3 + 0x130) + 0x168,5);
          return;
        }
        if (iVar5 == 0xc0) {
          FUN_00010b36(*(int *)(iVar3 + 0x130) + 0x348,5);
          *(undefined *)(iVar3 + 300) = 4;
          *(undefined4 *)(iVar3 + 0x128) = 3;
        }
      }
    }
    else {
      if (cVar2 == '\x04') {
        if (uVar7 == 3) {
          iVar5 = *(int *)(iVar3 + 0x130);
          FUN_00010b60(iVar5,iVar5 + 0x78,iVar5 + 0xf0);
          iVar5 = 5;
        }
        else {
          if (uVar7 == 5) {
            iVar5 = *(int *)(iVar3 + 0x130);
            FUN_00010b7e(iVar5,iVar5 + 0x168,iVar5 + 0x1e0);
            iVar5 = 6;
          }
          else {
            if (uVar7 == 6) {
              iVar5 = *(int *)(iVar3 + 0x130);
              FUN_00010ba0(iVar5 + 0x78,iVar5 + 0x168,iVar5 + 600);
              iVar5 = 7;
            }
            else {
              if (uVar7 == 7) {
                iVar5 = *(int *)(iVar3 + 0x130);
                FUN_00010bbe(iVar5,iVar5 + 600,iVar5 + 0x2d0);
                iVar5 = 9;
              }
              else {
                if (6 < uVar7 - 9) goto _L0;
                iVar5 = *(int *)(iVar3 + 0x130);
                FUN_00010bf0(iVar5 + 0x348,iVar5 + uVar7 * 0x78 + -0x438,
                             uVar7 * 0x78 + -0x78 + iVar5);
                if (*(int *)(iVar3 + 0x128) == 0xf) {
                  *(undefined *)(iVar3 + 300) = 2;
                  iVar5 = 0x3f;
                }
                else {
                  iVar5 = *(int *)(iVar3 + 0x128) + 1;
                }
              }
            }
          }
        }
        goto _L0;
      }
    }
  }
_L0:
  FUN_00010ab2(iVar3);
_L0:
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_000109fc(void)

{
  int unaff_s0;
  int *unaff_s1;
  int unaff_s2;
  byte in_stack_0000001f;
  byte in_stack_00000020;
  
  FUN_000109fc();
  FUN_00010a14(8,unaff_s2 + 0x28,0x16,3,0x39,0);
  FUN_00010a2c(8,unaff_s2 + 0x50,0x17,3,0x39,0);
  FUN_00010a3a(2,&stack0x0000001f);
  FUN_00010a46(0x15,&stack0x00000020);
  if (in_stack_0000001f == 1) {
    if (in_stack_00000020 == 0) {
      FUN_00010a62(2,0x15);
    }
  }
  else {
    if ((in_stack_0000001f | in_stack_00000020) == 0) {
      FUN_00010a9e(2,0x15,2);
    }
  }
  if (*(int *)(unaff_s0 + 0x128) == 0) {
    *(undefined4 *)(unaff_s0 + 4) = 0;
  }
  else {
    FUN_00010a72(2);
    *(int *)(unaff_s0 + 0x128) = *(int *)(unaff_s0 + 0x128) + -1;
  }
  FUN_00010ab2();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010a14(void)

{
  int unaff_s0;
  int *unaff_s1;
  int unaff_s2;
  byte in_stack_0000001f;
  byte in_stack_00000020;
  
  FUN_00010a14();
  FUN_00010a2c(8,unaff_s2 + 0x50,0x17,3,0x39,0);
  FUN_00010a3a(2,&stack0x0000001f);
  FUN_00010a46(0x15,&stack0x00000020);
  if (in_stack_0000001f == 1) {
    if (in_stack_00000020 == 0) {
      FUN_00010a62(2,0x15);
    }
  }
  else {
    if ((in_stack_0000001f | in_stack_00000020) == 0) {
      FUN_00010a9e(2,0x15,2);
    }
  }
  if (*(int *)(unaff_s0 + 0x128) == 0) {
    *(undefined4 *)(unaff_s0 + 4) = 0;
  }
  else {
    FUN_00010a72(2);
    *(int *)(unaff_s0 + 0x128) = *(int *)(unaff_s0 + 0x128) + -1;
  }
  FUN_00010ab2();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010a2c(void)

{
  int unaff_s0;
  int *unaff_s1;
  byte in_stack_0000001f;
  byte in_stack_00000020;
  
  FUN_00010a2c();
  FUN_00010a3a(2,&stack0x0000001f);
  FUN_00010a46(0x15,&stack0x00000020);
  if (in_stack_0000001f == 1) {
    if (in_stack_00000020 == 0) {
      FUN_00010a62(2,0x15);
    }
  }
  else {
    if ((in_stack_0000001f | in_stack_00000020) == 0) {
      FUN_00010a9e(2,0x15,2);
    }
  }
  if (*(int *)(unaff_s0 + 0x128) == 0) {
    *(undefined4 *)(unaff_s0 + 4) = 0;
  }
  else {
    FUN_00010a72(2);
    *(int *)(unaff_s0 + 0x128) = *(int *)(unaff_s0 + 0x128) + -1;
  }
  FUN_00010ab2();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010a3a(void)

{
  int unaff_s0;
  int *unaff_s1;
  byte in_stack_0000001f;
  byte in_stack_00000020;
  
  FUN_00010a3a();
  FUN_00010a46(0x15,&stack0x00000020);
  if (in_stack_0000001f == 1) {
    if (in_stack_00000020 == 0) {
      FUN_00010a62(2,0x15);
    }
  }
  else {
    if ((in_stack_0000001f | in_stack_00000020) == 0) {
      FUN_00010a9e(2,0x15,2);
    }
  }
  if (*(int *)(unaff_s0 + 0x128) == 0) {
    *(undefined4 *)(unaff_s0 + 4) = 0;
  }
  else {
    FUN_00010a72(2);
    *(int *)(unaff_s0 + 0x128) = *(int *)(unaff_s0 + 0x128) + -1;
  }
  FUN_00010ab2();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010a46(void)

{
  int unaff_s0;
  int *unaff_s1;
  byte in_stack_0000001f;
  byte in_stack_00000020;
  
  FUN_00010a46();
  if (in_stack_0000001f == 1) {
    if (in_stack_00000020 == 0) {
      FUN_00010a62(2,0x15);
    }
  }
  else {
    if ((in_stack_0000001f | in_stack_00000020) == 0) {
      FUN_00010a9e(2,0x15,2);
    }
  }
  if (*(int *)(unaff_s0 + 0x128) == 0) {
    *(undefined4 *)(unaff_s0 + 4) = 0;
  }
  else {
    FUN_00010a72(2);
    *(int *)(unaff_s0 + 0x128) = *(int *)(unaff_s0 + 0x128) + -1;
  }
  FUN_00010ab2();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010a62(void)

{
  int unaff_s0;
  int *unaff_s1;
  
  FUN_00010a62();
  if (*(int *)(unaff_s0 + 0x128) == 0) {
    *(undefined4 *)(unaff_s0 + 4) = 0;
  }
  else {
    FUN_00010a72(2);
    *(int *)(unaff_s0 + 0x128) = *(int *)(unaff_s0 + 0x128) + -1;
  }
  FUN_00010ab2();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010a72(void)

{
  int unaff_s0;
  int *unaff_s1;
  
  FUN_00010a72();
  *(int *)(unaff_s0 + 0x128) = *(int *)(unaff_s0 + 0x128) + -1;
  FUN_00010ab2();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010a9e(void)

{
  int unaff_s0;
  int *unaff_s1;
  
  FUN_00010a9e();
  if (*(int *)(unaff_s0 + 0x128) == 0) {
    *(undefined4 *)(unaff_s0 + 4) = 0;
  }
  else {
    FUN_00010a72(2);
    *(int *)(unaff_s0 + 0x128) = *(int *)(unaff_s0 + 0x128) + -1;
  }
  FUN_00010ab2();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010ab2(void)

{
  int *unaff_s1;
  
  FUN_00010ab2();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010ac2(void)

{
  FUN_00010ac2();
  return;
}



void FUN_00010ae2(void)

{
  int unaff_s0;
  int *unaff_s1;
  int iVar1;
  undefined4 unaff_s2;
  
  FUN_00010ae2();
  iVar1 = *(int *)(unaff_s0 + 0x128) + 1;
  *(int *)(unaff_s0 + 0x128) = iVar1;
  if (iVar1 == 0x40) {
    _L0(*(int *)(unaff_s0 + 0x130) + 0x78,5);
  }
  else {
    if (iVar1 == 0x80) {
      _L0(*(int *)(unaff_s0 + 0x130) + 0x168,5);
      return;
    }
    if (iVar1 == 0xc0) {
      FUN_00010b36(*(int *)(unaff_s0 + 0x130) + 0x348,5);
      *(undefined *)(unaff_s0 + 300) = 4;
      *(undefined4 *)(unaff_s0 + 0x128) = unaff_s2;
    }
  }
  FUN_00010ab2();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void _L0(void)

{
  int *unaff_s1;
  
  _L0();
  FUN_00010ab2();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010b36(void)

{
  int unaff_s0;
  int *unaff_s1;
  undefined4 unaff_s2;
  
  FUN_00010b36();
  *(undefined *)(unaff_s0 + 300) = 4;
  *(undefined4 *)(unaff_s0 + 0x128) = unaff_s2;
  FUN_00010ab2();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010b60(void)

{
  int unaff_s0;
  int *unaff_s1;
  
  FUN_00010b60();
  *(undefined4 *)(unaff_s0 + 0x128) = 5;
  FUN_00010ab2();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010b7e(void)

{
  int unaff_s0;
  int *unaff_s1;
  
  FUN_00010b7e();
  *(undefined4 *)(unaff_s0 + 0x128) = 6;
  FUN_00010ab2();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010ba0(void)

{
  int unaff_s0;
  int *unaff_s1;
  
  FUN_00010ba0();
  *(undefined4 *)(unaff_s0 + 0x128) = 7;
  FUN_00010ab2();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010bbe(void)

{
  int unaff_s0;
  int *unaff_s1;
  
  FUN_00010bbe();
  *(undefined4 *)(unaff_s0 + 0x128) = 9;
  FUN_00010ab2();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010bf0(void)

{
  int unaff_s0;
  int *unaff_s1;
  int iVar1;
  
  FUN_00010bf0();
  if (*(int *)(unaff_s0 + 0x128) == 0xf) {
    *(undefined *)(unaff_s0 + 300) = 2;
    iVar1 = 0x3f;
  }
  else {
    iVar1 = *(int *)(unaff_s0 + 0x128) + 1;
  }
  *(int *)(unaff_s0 + 0x128) = iVar1;
  FUN_00010ab2();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010c2a(void)

{
  bool bVar1;
  int unaff_s0;
  int *unaff_s1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 uStack00000000;
  undefined4 uStack0000003c;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  undefined4 uStack00000068;
  undefined4 uStack0000006c;
  
  puVar2 = (undefined *)FUN_00010c2a();
  _LVL169(2);
  FUN_00010c40(3);
  (*pcRam00000000)(&stack0x00000020,0,0x20,pcRam00000000);
  uStack0000003c = 2;
  _L0(8,&stack0x00000020,0xd,3,0x39,0);
  FUN_00010c82(0,3,0xd,3,0,3,0xd);
  uStack00000000 = 0;
  FUN_00010c9c(1,3,0xe,3,4,3,0xd,3);
  _L0();
  _L0();
  FUN_00010cb6(0xe);
  FUN_00010cc0(2);
  FUN_00010cca(3);
  (*pcRam00000000)(&stack0x00000020,0,0x20,pcRam00000000);
  uStack00000040 = 0;
  uStack00000044 = 0;
  (*pcRam00000000)(&stack0x00000048,0,0x20,pcRam00000000);
  uStack00000068 = 0;
  uStack0000006c = 0;
  _L0(3,2,&stack0x00000020,8);
  FUN_00010d0e(3,3,&stack0x00000048,8);
  if (*(char *)(unaff_s0 + 300) == '\x02') {
    FUN_00010d22(*(undefined4 *)(unaff_s0 + 0x130));
    *(undefined4 *)(unaff_s0 + 0x130) = 0;
  }
  FUN_00010d30();
  puVar3 = puVar2 + 0x1c;
  puVar5 = (undefined4 *)&stack0x00000020;
  do {
    puVar3[3] = *(undefined *)((int)puVar5 + 3);
    puVar3[2] = (char)*(undefined2 *)((int)puVar5 + 2);
    puVar3[1] = (char)((uint)*puVar5 >> 8);
    *puVar3 = (char)*puVar5;
    bVar1 = puVar2 != puVar3;
    puVar3 = puVar3 + -4;
    puVar5 = puVar5 + 1;
  } while (bVar1);
  puVar3 = puVar2 + 0x3c;
  puVar5 = (undefined4 *)&stack0x00000048;
  do {
    puVar4 = puVar3 + -4;
    puVar3[3] = *(undefined *)((int)puVar5 + 3);
    puVar3[2] = (char)*(undefined2 *)((int)puVar5 + 2);
    puVar3[1] = (char)((uint)*puVar5 >> 8);
    *puVar3 = (char)*puVar5;
    puVar3 = puVar4;
    puVar5 = puVar5 + 1;
  } while (puVar4 != puVar2 + 0x1c);
  FUN_00010da0(puVar2);
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void _LVL169(void)

{
  bool bVar1;
  int unaff_s0;
  int *unaff_s1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined *unaff_s2;
  undefined4 uStack00000000;
  undefined4 uStack0000003c;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  undefined4 uStack00000068;
  undefined4 uStack0000006c;
  
  _LVL169();
  FUN_00010c40(3);
  (*pcRam00000000)(&stack0x00000020,0,0x20,pcRam00000000);
  uStack0000003c = 2;
  _L0(8,&stack0x00000020,0xd,3,0x39,0);
  FUN_00010c82(0,3,0xd,3,0,3,0xd);
  uStack00000000 = 0;
  FUN_00010c9c(1,3,0xe,3,4,3,0xd,3);
  _L0();
  _L0();
  FUN_00010cb6(0xe);
  FUN_00010cc0(2);
  FUN_00010cca(3);
  (*pcRam00000000)(&stack0x00000020,0,0x20,pcRam00000000);
  uStack00000040 = 0;
  uStack00000044 = 0;
  (*pcRam00000000)(&stack0x00000048,0,0x20,pcRam00000000);
  uStack00000068 = 0;
  uStack0000006c = 0;
  _L0(3,2,&stack0x00000020,8);
  FUN_00010d0e(3,3,&stack0x00000048,8);
  if (*(char *)(unaff_s0 + 300) == '\x02') {
    FUN_00010d22(*(undefined4 *)(unaff_s0 + 0x130));
    *(undefined4 *)(unaff_s0 + 0x130) = 0;
  }
  FUN_00010d30();
  puVar2 = unaff_s2 + 0x1c;
  puVar4 = (undefined4 *)&stack0x00000020;
  do {
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    bVar1 = unaff_s2 != puVar2;
    puVar2 = puVar2 + -4;
    puVar4 = puVar4 + 1;
  } while (bVar1);
  puVar2 = unaff_s2 + 0x3c;
  puVar4 = (undefined4 *)&stack0x00000048;
  do {
    puVar3 = puVar2 + -4;
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    puVar2 = puVar3;
    puVar4 = puVar4 + 1;
  } while (puVar3 != unaff_s2 + 0x1c);
  FUN_00010da0();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010c40(void)

{
  bool bVar1;
  int unaff_s0;
  int *unaff_s1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined *unaff_s2;
  undefined4 uStack00000000;
  undefined4 uStack0000003c;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  undefined4 uStack00000068;
  undefined4 uStack0000006c;
  
  FUN_00010c40();
  (*pcRam00000000)(&stack0x00000020,0,0x20,pcRam00000000);
  uStack0000003c = 2;
  _L0(8,&stack0x00000020,0xd,3,0x39,0);
  FUN_00010c82(0,3,0xd,3,0,3,0xd);
  uStack00000000 = 0;
  FUN_00010c9c(1,3,0xe,3,4,3,0xd,3);
  _L0();
  _L0();
  FUN_00010cb6(0xe);
  FUN_00010cc0(2);
  FUN_00010cca(3);
  (*pcRam00000000)(&stack0x00000020,0,0x20,pcRam00000000);
  uStack00000040 = 0;
  uStack00000044 = 0;
  (*pcRam00000000)(&stack0x00000048,0,0x20,pcRam00000000);
  uStack00000068 = 0;
  uStack0000006c = 0;
  _L0(3,2,&stack0x00000020,8);
  FUN_00010d0e(3,3,&stack0x00000048,8);
  if (*(char *)(unaff_s0 + 300) == '\x02') {
    FUN_00010d22(*(undefined4 *)(unaff_s0 + 0x130));
    *(undefined4 *)(unaff_s0 + 0x130) = 0;
  }
  FUN_00010d30();
  puVar2 = unaff_s2 + 0x1c;
  puVar4 = (undefined4 *)&stack0x00000020;
  do {
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    bVar1 = unaff_s2 != puVar2;
    puVar2 = puVar2 + -4;
    puVar4 = puVar4 + 1;
  } while (bVar1);
  puVar2 = unaff_s2 + 0x3c;
  puVar4 = (undefined4 *)&stack0x00000048;
  do {
    puVar3 = puVar2 + -4;
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    puVar2 = puVar3;
    puVar4 = puVar4 + 1;
  } while (puVar3 != unaff_s2 + 0x1c);
  FUN_00010da0();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void _L0(void)

{
  bool bVar1;
  int unaff_s0;
  int *unaff_s1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined *unaff_s2;
  code **unaff_s3;
  uint unaff_s4;
  undefined4 uStack00000000;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  undefined4 uStack00000068;
  undefined4 uStack0000006c;
  
  _L0();
  FUN_00010c82(0,3,0xd,3,0,3,0xd);
  uStack00000000 = 0;
  FUN_00010c9c(1,3,0xe,3,4,3,0xd,3);
  _L0();
  _L0();
  FUN_00010cb6(0xe);
  FUN_00010cc0(2);
  FUN_00010cca(3);
  (**unaff_s3)(&stack0x00000020,0,0x20,*unaff_s3);
  uStack00000040 = 0;
  uStack00000044 = 0;
  (**unaff_s3)(&stack0x00000048,0,0x20,*unaff_s3);
  uStack00000068 = 0;
  uStack0000006c = 0;
  _L0(3,2,&stack0x00000020,8);
  FUN_00010d0e(3,3,&stack0x00000048,8);
  if (*(byte *)(unaff_s0 + 300) == unaff_s4) {
    FUN_00010d22(*(undefined4 *)(unaff_s0 + 0x130));
    *(undefined4 *)(unaff_s0 + 0x130) = 0;
  }
  FUN_00010d30();
  puVar2 = unaff_s2 + 0x1c;
  puVar4 = (undefined4 *)&stack0x00000020;
  do {
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    bVar1 = unaff_s2 != puVar2;
    puVar2 = puVar2 + -4;
    puVar4 = puVar4 + 1;
  } while (bVar1);
  puVar2 = unaff_s2 + 0x3c;
  puVar4 = (undefined4 *)&stack0x00000048;
  do {
    puVar3 = puVar2 + -4;
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    puVar2 = puVar3;
    puVar4 = puVar4 + 1;
  } while (puVar3 != unaff_s2 + 0x1c);
  FUN_00010da0();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010c82(void)

{
  bool bVar1;
  int unaff_s0;
  int *unaff_s1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined *unaff_s2;
  code **unaff_s3;
  uint unaff_s4;
  undefined4 uStack00000000;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  undefined4 uStack00000068;
  undefined4 uStack0000006c;
  
  FUN_00010c82();
  uStack00000000 = 0;
  FUN_00010c9c(1,3,0xe,3,4,3,0xd,3);
  _L0();
  _L0();
  FUN_00010cb6(0xe);
  FUN_00010cc0(2);
  FUN_00010cca(3);
  (**unaff_s3)(&stack0x00000020,0,0x20,*unaff_s3);
  uStack00000040 = 0;
  uStack00000044 = 0;
  (**unaff_s3)(&stack0x00000048,0,0x20,*unaff_s3);
  uStack00000068 = 0;
  uStack0000006c = 0;
  _L0(3,2,&stack0x00000020,8);
  FUN_00010d0e(3,3,&stack0x00000048,8);
  if (*(byte *)(unaff_s0 + 300) == unaff_s4) {
    FUN_00010d22(*(undefined4 *)(unaff_s0 + 0x130));
    *(undefined4 *)(unaff_s0 + 0x130) = 0;
  }
  FUN_00010d30();
  puVar2 = unaff_s2 + 0x1c;
  puVar4 = (undefined4 *)&stack0x00000020;
  do {
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    bVar1 = unaff_s2 != puVar2;
    puVar2 = puVar2 + -4;
    puVar4 = puVar4 + 1;
  } while (bVar1);
  puVar2 = unaff_s2 + 0x3c;
  puVar4 = (undefined4 *)&stack0x00000048;
  do {
    puVar3 = puVar2 + -4;
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    puVar2 = puVar3;
    puVar4 = puVar4 + 1;
  } while (puVar3 != unaff_s2 + 0x1c);
  FUN_00010da0();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010c9c(void)

{
  bool bVar1;
  int unaff_s0;
  int *unaff_s1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined *unaff_s2;
  code **unaff_s3;
  uint unaff_s4;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  undefined4 uStack00000068;
  undefined4 uStack0000006c;
  
  FUN_00010c9c();
  _L0();
  _L0();
  FUN_00010cb6(0xe);
  FUN_00010cc0(2);
  FUN_00010cca(3);
  (**unaff_s3)(&stack0x00000020,0,0x20,*unaff_s3);
  uStack00000040 = 0;
  uStack00000044 = 0;
  (**unaff_s3)(&stack0x00000048,0,0x20,*unaff_s3);
  uStack00000068 = 0;
  uStack0000006c = 0;
  _L0(3,2,&stack0x00000020,8);
  FUN_00010d0e(3,3,&stack0x00000048,8);
  if (*(byte *)(unaff_s0 + 300) == unaff_s4) {
    FUN_00010d22(*(undefined4 *)(unaff_s0 + 0x130));
    *(undefined4 *)(unaff_s0 + 0x130) = 0;
  }
  FUN_00010d30();
  puVar2 = unaff_s2 + 0x1c;
  puVar4 = (undefined4 *)&stack0x00000020;
  do {
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    bVar1 = unaff_s2 != puVar2;
    puVar2 = puVar2 + -4;
    puVar4 = puVar4 + 1;
  } while (bVar1);
  puVar2 = unaff_s2 + 0x3c;
  puVar4 = (undefined4 *)&stack0x00000048;
  do {
    puVar3 = puVar2 + -4;
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    puVar2 = puVar3;
    puVar4 = puVar4 + 1;
  } while (puVar3 != unaff_s2 + 0x1c);
  FUN_00010da0();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void _L0(void)

{
  bool bVar1;
  int unaff_s0;
  int *unaff_s1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined *unaff_s2;
  code **unaff_s3;
  uint unaff_s4;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  undefined4 uStack00000068;
  undefined4 uStack0000006c;
  
  _L0();
  _L0();
  FUN_00010cb6(0xe);
  FUN_00010cc0(2);
  FUN_00010cca(3);
  (**unaff_s3)(&stack0x00000020,0,0x20,*unaff_s3);
  uStack00000040 = 0;
  uStack00000044 = 0;
  (**unaff_s3)(&stack0x00000048,0,0x20,*unaff_s3);
  uStack00000068 = 0;
  uStack0000006c = 0;
  _L0(3,2,&stack0x00000020,8);
  FUN_00010d0e(3,3,&stack0x00000048,8);
  if (*(byte *)(unaff_s0 + 300) == unaff_s4) {
    FUN_00010d22(*(undefined4 *)(unaff_s0 + 0x130));
    *(undefined4 *)(unaff_s0 + 0x130) = 0;
  }
  FUN_00010d30();
  puVar2 = unaff_s2 + 0x1c;
  puVar4 = (undefined4 *)&stack0x00000020;
  do {
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    bVar1 = unaff_s2 != puVar2;
    puVar2 = puVar2 + -4;
    puVar4 = puVar4 + 1;
  } while (bVar1);
  puVar2 = unaff_s2 + 0x3c;
  puVar4 = (undefined4 *)&stack0x00000048;
  do {
    puVar3 = puVar2 + -4;
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    puVar2 = puVar3;
    puVar4 = puVar4 + 1;
  } while (puVar3 != unaff_s2 + 0x1c);
  FUN_00010da0();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void _L0(void)

{
  bool bVar1;
  int unaff_s0;
  int *unaff_s1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined *unaff_s2;
  code **unaff_s3;
  uint unaff_s4;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  undefined4 uStack00000068;
  undefined4 uStack0000006c;
  
  _L0();
  FUN_00010cb6(0xe);
  FUN_00010cc0(2);
  FUN_00010cca(3);
  (**unaff_s3)(&stack0x00000020,0,0x20,*unaff_s3);
  uStack00000040 = 0;
  uStack00000044 = 0;
  (**unaff_s3)(&stack0x00000048,0,0x20,*unaff_s3);
  uStack00000068 = 0;
  uStack0000006c = 0;
  _L0(3,2,&stack0x00000020,8);
  FUN_00010d0e(3,3,&stack0x00000048,8);
  if (*(byte *)(unaff_s0 + 300) == unaff_s4) {
    FUN_00010d22(*(undefined4 *)(unaff_s0 + 0x130));
    *(undefined4 *)(unaff_s0 + 0x130) = 0;
  }
  FUN_00010d30();
  puVar2 = unaff_s2 + 0x1c;
  puVar4 = (undefined4 *)&stack0x00000020;
  do {
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    bVar1 = unaff_s2 != puVar2;
    puVar2 = puVar2 + -4;
    puVar4 = puVar4 + 1;
  } while (bVar1);
  puVar2 = unaff_s2 + 0x3c;
  puVar4 = (undefined4 *)&stack0x00000048;
  do {
    puVar3 = puVar2 + -4;
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    puVar2 = puVar3;
    puVar4 = puVar4 + 1;
  } while (puVar3 != unaff_s2 + 0x1c);
  FUN_00010da0();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010cb6(void)

{
  bool bVar1;
  int unaff_s0;
  int *unaff_s1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined *unaff_s2;
  code **unaff_s3;
  uint unaff_s4;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  undefined4 uStack00000068;
  undefined4 uStack0000006c;
  
  FUN_00010cb6();
  FUN_00010cc0(2);
  FUN_00010cca(3);
  (**unaff_s3)(&stack0x00000020,0,0x20,*unaff_s3);
  uStack00000040 = 0;
  uStack00000044 = 0;
  (**unaff_s3)(&stack0x00000048,0,0x20,*unaff_s3);
  uStack00000068 = 0;
  uStack0000006c = 0;
  _L0(3,2,&stack0x00000020,8);
  FUN_00010d0e(3,3,&stack0x00000048,8);
  if (*(byte *)(unaff_s0 + 300) == unaff_s4) {
    FUN_00010d22(*(undefined4 *)(unaff_s0 + 0x130));
    *(undefined4 *)(unaff_s0 + 0x130) = 0;
  }
  FUN_00010d30();
  puVar2 = unaff_s2 + 0x1c;
  puVar4 = (undefined4 *)&stack0x00000020;
  do {
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    bVar1 = unaff_s2 != puVar2;
    puVar2 = puVar2 + -4;
    puVar4 = puVar4 + 1;
  } while (bVar1);
  puVar2 = unaff_s2 + 0x3c;
  puVar4 = (undefined4 *)&stack0x00000048;
  do {
    puVar3 = puVar2 + -4;
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    puVar2 = puVar3;
    puVar4 = puVar4 + 1;
  } while (puVar3 != unaff_s2 + 0x1c);
  FUN_00010da0();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010cc0(void)

{
  bool bVar1;
  int unaff_s0;
  int *unaff_s1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined *unaff_s2;
  code **unaff_s3;
  uint unaff_s4;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  undefined4 uStack00000068;
  undefined4 uStack0000006c;
  
  FUN_00010cc0();
  FUN_00010cca(3);
  (**unaff_s3)(&stack0x00000020,0,0x20,*unaff_s3);
  uStack00000040 = 0;
  uStack00000044 = 0;
  (**unaff_s3)(&stack0x00000048,0,0x20,*unaff_s3);
  uStack00000068 = 0;
  uStack0000006c = 0;
  _L0(3,2,&stack0x00000020,8);
  FUN_00010d0e(3,3,&stack0x00000048,8);
  if (*(byte *)(unaff_s0 + 300) == unaff_s4) {
    FUN_00010d22(*(undefined4 *)(unaff_s0 + 0x130));
    *(undefined4 *)(unaff_s0 + 0x130) = 0;
  }
  FUN_00010d30();
  puVar2 = unaff_s2 + 0x1c;
  puVar4 = (undefined4 *)&stack0x00000020;
  do {
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    bVar1 = unaff_s2 != puVar2;
    puVar2 = puVar2 + -4;
    puVar4 = puVar4 + 1;
  } while (bVar1);
  puVar2 = unaff_s2 + 0x3c;
  puVar4 = (undefined4 *)&stack0x00000048;
  do {
    puVar3 = puVar2 + -4;
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    puVar2 = puVar3;
    puVar4 = puVar4 + 1;
  } while (puVar3 != unaff_s2 + 0x1c);
  FUN_00010da0();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010cca(void)

{
  bool bVar1;
  int unaff_s0;
  int *unaff_s1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined *unaff_s2;
  code **unaff_s3;
  uint unaff_s4;
  undefined4 uStack00000040;
  undefined4 uStack00000044;
  undefined4 uStack00000068;
  undefined4 uStack0000006c;
  
  FUN_00010cca();
  (**unaff_s3)(&stack0x00000020,0,0x20,*unaff_s3);
  uStack00000040 = 0;
  uStack00000044 = 0;
  (**unaff_s3)(&stack0x00000048,0,0x20,*unaff_s3);
  uStack00000068 = 0;
  uStack0000006c = 0;
  _L0(3,2,&stack0x00000020,8);
  FUN_00010d0e(3,3,&stack0x00000048,8);
  if (*(byte *)(unaff_s0 + 300) == unaff_s4) {
    FUN_00010d22(*(undefined4 *)(unaff_s0 + 0x130));
    *(undefined4 *)(unaff_s0 + 0x130) = 0;
  }
  FUN_00010d30();
  puVar2 = unaff_s2 + 0x1c;
  puVar4 = (undefined4 *)&stack0x00000020;
  do {
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    bVar1 = unaff_s2 != puVar2;
    puVar2 = puVar2 + -4;
    puVar4 = puVar4 + 1;
  } while (bVar1);
  puVar2 = unaff_s2 + 0x3c;
  puVar4 = (undefined4 *)&stack0x00000048;
  do {
    puVar3 = puVar2 + -4;
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    puVar2 = puVar3;
    puVar4 = puVar4 + 1;
  } while (puVar3 != unaff_s2 + 0x1c);
  FUN_00010da0();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void _L0(void)

{
  bool bVar1;
  int unaff_s0;
  int *unaff_s1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined *unaff_s2;
  uint unaff_s4;
  
  _L0();
  FUN_00010d0e(3,3,&stack0x00000048,8);
  if (*(byte *)(unaff_s0 + 300) == unaff_s4) {
    FUN_00010d22(*(undefined4 *)(unaff_s0 + 0x130));
    *(undefined4 *)(unaff_s0 + 0x130) = 0;
  }
  FUN_00010d30();
  puVar2 = unaff_s2 + 0x1c;
  puVar4 = (undefined4 *)&stack0x00000020;
  do {
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    bVar1 = unaff_s2 != puVar2;
    puVar2 = puVar2 + -4;
    puVar4 = puVar4 + 1;
  } while (bVar1);
  puVar2 = unaff_s2 + 0x3c;
  puVar4 = (undefined4 *)&stack0x00000048;
  do {
    puVar3 = puVar2 + -4;
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    puVar2 = puVar3;
    puVar4 = puVar4 + 1;
  } while (puVar3 != unaff_s2 + 0x1c);
  FUN_00010da0();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010d0e(void)

{
  bool bVar1;
  int unaff_s0;
  int *unaff_s1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined *unaff_s2;
  uint unaff_s4;
  
  FUN_00010d0e();
  if (*(byte *)(unaff_s0 + 300) == unaff_s4) {
    FUN_00010d22(*(undefined4 *)(unaff_s0 + 0x130));
    *(undefined4 *)(unaff_s0 + 0x130) = 0;
  }
  FUN_00010d30();
  puVar2 = unaff_s2 + 0x1c;
  puVar4 = (undefined4 *)&stack0x00000020;
  do {
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    bVar1 = unaff_s2 != puVar2;
    puVar2 = puVar2 + -4;
    puVar4 = puVar4 + 1;
  } while (bVar1);
  puVar2 = unaff_s2 + 0x3c;
  puVar4 = (undefined4 *)&stack0x00000048;
  do {
    puVar3 = puVar2 + -4;
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    puVar2 = puVar3;
    puVar4 = puVar4 + 1;
  } while (puVar3 != unaff_s2 + 0x1c);
  FUN_00010da0();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010d22(void)

{
  bool bVar1;
  int unaff_s0;
  int *unaff_s1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined *unaff_s2;
  
  FUN_00010d22();
  *(undefined4 *)(unaff_s0 + 0x130) = 0;
  FUN_00010d30();
  puVar2 = unaff_s2 + 0x1c;
  puVar4 = (undefined4 *)&stack0x00000020;
  do {
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    bVar1 = unaff_s2 != puVar2;
    puVar2 = puVar2 + -4;
    puVar4 = puVar4 + 1;
  } while (bVar1);
  puVar2 = unaff_s2 + 0x3c;
  puVar4 = (undefined4 *)&stack0x00000048;
  do {
    puVar3 = puVar2 + -4;
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    puVar2 = puVar3;
    puVar4 = puVar4 + 1;
  } while (puVar3 != unaff_s2 + 0x1c);
  FUN_00010da0();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010d30(void)

{
  bool bVar1;
  int *unaff_s1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined *unaff_s2;
  
  FUN_00010d30();
  puVar2 = unaff_s2 + 0x1c;
  puVar4 = (undefined4 *)&stack0x00000020;
  do {
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    bVar1 = unaff_s2 != puVar2;
    puVar2 = puVar2 + -4;
    puVar4 = puVar4 + 1;
  } while (bVar1);
  puVar2 = unaff_s2 + 0x3c;
  puVar4 = (undefined4 *)&stack0x00000048;
  do {
    puVar3 = puVar2 + -4;
    puVar2[3] = *(undefined *)((int)puVar4 + 3);
    puVar2[2] = (char)*(undefined2 *)((int)puVar4 + 2);
    puVar2[1] = (char)((uint)*puVar4 >> 8);
    *puVar2 = (char)*puVar4;
    puVar2 = puVar3;
    puVar4 = puVar4 + 1;
  } while (puVar3 != unaff_s2 + 0x1c);
  FUN_00010da0();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



void FUN_00010da0(void)

{
  int *unaff_s1;
  
  FUN_00010da0();
  if (*unaff_s1 != 0) {
    FUN_00010ac2(0);
  }
  return;
}



int notEqual256(bigHex256 *bigHexA,bigHex256 *bigHexB)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)((int)bigHexA->num + iVar1) != *(int *)((int)bigHexB->num + iVar1)) {
      return 1;
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x20);
  return 0;
}



void bigHexInversion256(bigHex256 *bigHexA,bigHex256 *pResult)

{
  code *pcVar1;
  uint uVar2;
  uint *puVar3;
  u_int32 *puVar4;
  u_int32 *puVar5;
  u_int32 *puVar6;
  uint uVar7;
  int iVar8;
  uint uStack208;
  bigHex256 u;
  bigHex256 v;
  bigHex256 A;
  bigHex256 C;
  
  pcVar1 = pcRam00000000;
  bigHexA->sign = 0;
  (*pcVar1)(&v.sign,0,0x20,pcVar1);
  A.num[7] = 0;
  A.len = 0;
  (*pcRam00000000)(&A.sign,0,0x20,pcRam00000000);
  C.num[7] = 0;
  C.len = 0;
  (*pcRam00000000)(&uStack208,bigHexA,0x20,pcRam00000000);
  u.num[7] = bigHexA->len;
  u.len = bigHexA->sign;
  (*pcRam00000000)(&u.sign,0,0x20,pcRam00000000);
  v.num[7] = 8;
  v.len = 0;
  A.num[6] = 1;
  C.num[6] = 0;
  A.num[7] = 1;
  C.num[7] = 1;
  while (u.num[7] != 0) {
    while (uVar7 = u.num[6] & 1, puVar6 = &uStack208, uVar7 == 0) {
      do {
        uVar2 = *puVar6;
        puVar4 = puVar6 + 1;
        *puVar6 = uVar2 >> 1 | uVar7 << 0x1f;
        uVar7 = uVar2 & 1;
        puVar6 = puVar4;
      } while (puVar4 != u.num + 7);
      iVar8 = 0;
      puVar3 = &uStack208;
      do {
        if (*puVar3 != 0) break;
        iVar8 = iVar8 + 1;
        puVar3 = (uint *)((int *)puVar3 + 1);
      } while (iVar8 != 8);
      u.num[7] = 8 - iVar8;
      uVar7 = A.num[6] & 1;
      if (uVar7 == 0) {
        puVar4 = &v.sign;
        puVar6 = puVar4;
        do {
          uVar2 = *puVar6;
          puVar5 = puVar6 + 1;
          *puVar6 = uVar2 >> 1 | uVar7 << 0x1f;
          uVar7 = uVar2 & 1;
          puVar6 = puVar5;
        } while (A.num + 7 != puVar5);
        iVar8 = 0;
        do {
          if (*puVar4 != 0) break;
          iVar8 = iVar8 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar8 != 8);
        A.num[7] = 8 - iVar8;
      }
      else {
        FUN_00010f78(&v.sign);
      }
    }
    while (uVar7 = v.num[6] & 1, uVar7 == 0) {
      puVar4 = &u.sign;
      puVar6 = puVar4;
      do {
        uVar2 = *puVar6;
        puVar5 = puVar6 + 1;
        *puVar6 = uVar2 >> 1 | uVar7 << 0x1f;
        uVar7 = uVar2 & 1;
        puVar6 = puVar5;
      } while (v.num + 7 != puVar5);
      iVar8 = 0;
      do {
        if (*puVar4 != 0) break;
        iVar8 = iVar8 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar8 != 8);
      v.num[7] = 8 - iVar8;
      uVar7 = C.num[6] & 1;
      if (uVar7 == 0) {
        puVar4 = &A.sign;
        puVar6 = puVar4;
        do {
          uVar2 = *puVar6;
          puVar5 = puVar6 + 1;
          *puVar6 = uVar2 >> 1 | uVar7 << 0x1f;
          uVar7 = uVar2 & 1;
          puVar6 = puVar5;
        } while (C.num + 7 != puVar5);
        iVar8 = 0;
        do {
          if (*puVar4 != 0) break;
          iVar8 = iVar8 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar8 != 8);
        C.num[7] = 8 - iVar8;
      }
      else {
        FUN_00010fec(&A.sign);
      }
    }
    if (u.num[7] <= v.num[7]) {
      if (u.num[7] < v.num[7]) {
_L0:
        _LVL279(&u.sign,&uStack208);
        _L0(&A.sign,&v.sign);
        return;
      }
      uVar7 = 8 - u.num[7];
      while (uVar7 < 8) {
        if ((&uStack208)[uVar7] < u.num[uVar7 + 9]) goto _L0;
        if (u.num[uVar7 + 9] < (&uStack208)[uVar7]) break;
        uVar7 = uVar7 + 1;
      }
    }
    FUN_00010f60(&uStack208,&u.sign);
    _L0(&v.sign,&A.sign);
  }
  if (C.len == 0) {
    if (C.num[7] < 8) goto _L0;
    puVar3 = (uint *)C.len;
    if (C.num[7] == 8) {
      do {
        if (*puVar3 < *(uint *)((int)((int)register0x00002008 + -0x58) + (int)puVar3)) break;
        if (*(uint *)((int)((int)register0x00002008 + -0x58) + (int)puVar3) < *puVar3) goto _L0;
        puVar3 = puVar3 + 1;
      } while (puVar3 != (uint *)0x20);
    }
  }
  FUN_00010e9c(&A.sign);
_L0:
  (*pcRam00000000)(pResult,&A.sign,0x20,pcRam00000000);
  pResult->len = C.num[7];
  pResult->sign = C.len;
  return;
}



void FUN_00010e9c(void)

{
  int unaff_s1;
  code **unaff_s2;
  undefined4 in_stack_00000098;
  undefined4 in_stack_0000009c;
  
  FUN_00010e9c();
  (**unaff_s2)(&stack0x00000078,0x20,*unaff_s2);
  *(undefined4 *)(unaff_s1 + 0x20) = in_stack_00000098;
  *(undefined4 *)(unaff_s1 + 0x24) = in_stack_0000009c;
  return;
}



void FUN_00010f60(undefined *param_1)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  code **unaff_s2;
  int unaff_s3;
  uint *unaff_s4;
  uint *unaff_s5;
  uint *unaff_s6;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  uint in_stack_00000044;
  uint in_stack_00000048;
  uint in_stack_0000006c;
  int in_stack_00000070;
  uint in_stack_00000094;
  uint in_stack_00000098;
  int in_stack_0000009c;
  
  while( true ) {
    FUN_00010f60(param_1);
    _L0(&stack0x00000050,&stack0x00000078);
    if (in_stack_00000020 == 0) break;
    while (uVar7 = in_stack_0000001c & 1, puVar5 = (uint *)register0x00002008, uVar7 == 0) {
      do {
        uVar1 = *puVar5;
        puVar3 = puVar5 + 1;
        *puVar5 = uVar1 >> 1 | uVar7 << 0x1f;
        uVar7 = uVar1 & 1;
        puVar5 = puVar3;
      } while (puVar3 != unaff_s4);
      iVar6 = 0;
      piVar2 = (int *)register0x00002008;
      do {
        if (*piVar2 != 0) break;
        iVar6 = iVar6 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar6 != unaff_s0);
      in_stack_00000020 = unaff_s0 - iVar6;
      uVar7 = in_stack_0000006c & 1;
      if (uVar7 == 0) {
        puVar3 = (uint *)&stack0x00000050;
        puVar5 = puVar3;
        do {
          uVar1 = *puVar5;
          puVar4 = puVar5 + 1;
          *puVar5 = uVar1 >> 1 | uVar7 << 0x1f;
          uVar7 = uVar1 & 1;
          puVar5 = puVar4;
        } while (unaff_s5 != puVar4);
        iVar6 = 0;
        do {
          if (*puVar3 != 0) break;
          iVar6 = iVar6 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar6 != unaff_s0);
        in_stack_00000070 = unaff_s0 - iVar6;
      }
      else {
        FUN_00010f78(&stack0x00000050);
      }
    }
    while (uVar7 = in_stack_00000044 & 1, uVar7 == 0) {
      puVar3 = (uint *)&stack0x00000028;
      puVar5 = puVar3;
      do {
        uVar1 = *puVar5;
        puVar4 = puVar5 + 1;
        *puVar5 = uVar1 >> 1 | uVar7 << 0x1f;
        uVar7 = uVar1 & 1;
        puVar5 = puVar4;
      } while (unaff_s6 != puVar4);
      iVar6 = 0;
      do {
        if (*puVar3 != 0) break;
        iVar6 = iVar6 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar6 != unaff_s0);
      in_stack_00000048 = unaff_s0 - iVar6;
      uVar7 = in_stack_00000094 & 1;
      if (uVar7 == 0) {
        puVar3 = (uint *)&stack0x00000078;
        puVar5 = puVar3;
        do {
          uVar1 = *puVar5;
          puVar4 = puVar5 + 1;
          *puVar5 = uVar1 >> 1 | uVar7 << 0x1f;
          uVar7 = uVar1 & 1;
          puVar5 = puVar4;
        } while ((uint *)&stack0x00000098 != puVar4);
        iVar6 = 0;
        do {
          if (*puVar3 != 0) break;
          iVar6 = iVar6 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar6 != unaff_s0);
        in_stack_00000098 = unaff_s0 - iVar6;
      }
      else {
        FUN_00010fec(&stack0x00000078);
      }
    }
    if (in_stack_00000020 <= in_stack_00000048) {
      if (in_stack_00000020 < in_stack_00000048) {
_L0:
        _LVL279(&stack0x00000028);
        _L0(&stack0x00000078,&stack0x00000050);
        return;
      }
      uVar7 = unaff_s0 - in_stack_00000020;
      while (uVar7 < 8) {
        if (*(uint *)(&stack0x00000000 + uVar7 * 4) < *(uint *)(&stack0x00000028 + uVar7 * 4))
        goto _L0;
        if (*(uint *)(&stack0x00000028 + uVar7 * 4) < *(uint *)(&stack0x00000000 + uVar7 * 4))
        break;
        uVar7 = uVar7 + 1;
      }
    }
    param_1 = &stack0x00000028;
  }
  if (in_stack_0000009c == 0) {
    if (in_stack_00000098 < 8) goto _L0;
    iVar6 = in_stack_0000009c;
    if (in_stack_00000098 == 8) {
      do {
        if (*(uint *)(unaff_s3 + iVar6) < *(uint *)(&stack0x00000078 + iVar6)) break;
        if (*(uint *)(&stack0x00000078 + iVar6) < *(uint *)(unaff_s3 + iVar6)) goto _L0;
        iVar6 = iVar6 + 4;
      } while (iVar6 != 0x20);
    }
  }
  FUN_00010e9c(&stack0x00000078);
_L0:
  (**unaff_s2)(&stack0x00000078,0x20,*unaff_s2);
  *(uint *)(unaff_s1 + 0x20) = in_stack_00000098;
  *(int *)(unaff_s1 + 0x24) = in_stack_0000009c;
  return;
}



void _L0(undefined *param_1,undefined *param_2)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  code **unaff_s2;
  int unaff_s3;
  uint *unaff_s4;
  uint *unaff_s5;
  uint *unaff_s6;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  uint in_stack_00000044;
  uint in_stack_00000048;
  uint in_stack_0000006c;
  int in_stack_00000070;
  uint in_stack_00000094;
  uint in_stack_00000098;
  int in_stack_0000009c;
  
  while (_L0(param_1,param_2), in_stack_00000020 != 0) {
    while (uVar7 = in_stack_0000001c & 1, puVar5 = (uint *)register0x00002008, uVar7 == 0) {
      do {
        uVar1 = *puVar5;
        puVar3 = puVar5 + 1;
        *puVar5 = uVar1 >> 1 | uVar7 << 0x1f;
        uVar7 = uVar1 & 1;
        puVar5 = puVar3;
      } while (puVar3 != unaff_s4);
      iVar6 = 0;
      piVar2 = (int *)register0x00002008;
      do {
        if (*piVar2 != 0) break;
        iVar6 = iVar6 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar6 != unaff_s0);
      in_stack_00000020 = unaff_s0 - iVar6;
      uVar7 = in_stack_0000006c & 1;
      if (uVar7 == 0) {
        puVar3 = (uint *)&stack0x00000050;
        puVar5 = puVar3;
        do {
          uVar1 = *puVar5;
          puVar4 = puVar5 + 1;
          *puVar5 = uVar1 >> 1 | uVar7 << 0x1f;
          uVar7 = uVar1 & 1;
          puVar5 = puVar4;
        } while (unaff_s5 != puVar4);
        iVar6 = 0;
        do {
          if (*puVar3 != 0) break;
          iVar6 = iVar6 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar6 != unaff_s0);
        in_stack_00000070 = unaff_s0 - iVar6;
      }
      else {
        FUN_00010f78(&stack0x00000050);
      }
    }
    while (uVar7 = in_stack_00000044 & 1, uVar7 == 0) {
      puVar3 = (uint *)&stack0x00000028;
      puVar5 = puVar3;
      do {
        uVar1 = *puVar5;
        puVar4 = puVar5 + 1;
        *puVar5 = uVar1 >> 1 | uVar7 << 0x1f;
        uVar7 = uVar1 & 1;
        puVar5 = puVar4;
      } while (unaff_s6 != puVar4);
      iVar6 = 0;
      do {
        if (*puVar3 != 0) break;
        iVar6 = iVar6 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar6 != unaff_s0);
      in_stack_00000048 = unaff_s0 - iVar6;
      uVar7 = in_stack_00000094 & 1;
      if (uVar7 == 0) {
        puVar3 = (uint *)&stack0x00000078;
        puVar5 = puVar3;
        do {
          uVar1 = *puVar5;
          puVar4 = puVar5 + 1;
          *puVar5 = uVar1 >> 1 | uVar7 << 0x1f;
          uVar7 = uVar1 & 1;
          puVar5 = puVar4;
        } while ((uint *)&stack0x00000098 != puVar4);
        iVar6 = 0;
        do {
          if (*puVar3 != 0) break;
          iVar6 = iVar6 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar6 != unaff_s0);
        in_stack_00000098 = unaff_s0 - iVar6;
      }
      else {
        FUN_00010fec(&stack0x00000078);
      }
    }
    if (in_stack_00000020 <= in_stack_00000048) {
      if (in_stack_00000020 < in_stack_00000048) {
_L0:
        _LVL279(&stack0x00000028);
        _L0(&stack0x00000078,&stack0x00000050);
        return;
      }
      uVar7 = unaff_s0 - in_stack_00000020;
      while (uVar7 < 8) {
        if (*(uint *)(&stack0x00000000 + uVar7 * 4) < *(uint *)(&stack0x00000028 + uVar7 * 4))
        goto _L0;
        if (*(uint *)(&stack0x00000028 + uVar7 * 4) < *(uint *)(&stack0x00000000 + uVar7 * 4))
        break;
        uVar7 = uVar7 + 1;
      }
    }
    FUN_00010f60(&stack0x00000028);
    param_2 = &stack0x00000078;
    param_1 = &stack0x00000050;
  }
  if (in_stack_0000009c == 0) {
    if (in_stack_00000098 < 8) goto _L0;
    iVar6 = in_stack_0000009c;
    if (in_stack_00000098 == 8) {
      do {
        if (*(uint *)(unaff_s3 + iVar6) < *(uint *)(&stack0x00000078 + iVar6)) break;
        if (*(uint *)(&stack0x00000078 + iVar6) < *(uint *)(unaff_s3 + iVar6)) goto _L0;
        iVar6 = iVar6 + 4;
      } while (iVar6 != 0x20);
    }
  }
  FUN_00010e9c(&stack0x00000078);
_L0:
  (**unaff_s2)(&stack0x00000078,0x20,*unaff_s2);
  *(uint *)(unaff_s1 + 0x20) = in_stack_00000098;
  *(int *)(unaff_s1 + 0x24) = in_stack_0000009c;
  return;
}



void FUN_00010f78(undefined *param_1)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  code **unaff_s2;
  int unaff_s3;
  uint *unaff_s4;
  uint *unaff_s5;
  uint *unaff_s6;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  uint in_stack_00000044;
  uint in_stack_00000048;
  uint in_stack_0000006c;
  int in_stack_00000070;
  uint in_stack_00000094;
  uint in_stack_00000098;
  int in_stack_0000009c;
  
  do {
    FUN_00010f78(param_1);
_L0:
    while (uVar7 = in_stack_0000001c & 1, puVar5 = (uint *)register0x00002008, uVar7 != 0) {
      while (uVar7 = in_stack_00000044 & 1, uVar7 == 0) {
        puVar3 = (uint *)&stack0x00000028;
        puVar5 = puVar3;
        do {
          uVar1 = *puVar5;
          puVar4 = puVar5 + 1;
          *puVar5 = uVar1 >> 1 | uVar7 << 0x1f;
          uVar7 = uVar1 & 1;
          puVar5 = puVar4;
        } while (unaff_s6 != puVar4);
        iVar6 = 0;
        do {
          if (*puVar3 != 0) break;
          iVar6 = iVar6 + 1;
          puVar3 = puVar3 + 1;
        } while (iVar6 != unaff_s0);
        in_stack_00000048 = unaff_s0 - iVar6;
        uVar7 = in_stack_00000094 & 1;
        if (uVar7 == 0) {
          puVar3 = (uint *)&stack0x00000078;
          puVar5 = puVar3;
          do {
            uVar1 = *puVar5;
            puVar4 = puVar5 + 1;
            *puVar5 = uVar1 >> 1 | uVar7 << 0x1f;
            uVar7 = uVar1 & 1;
            puVar5 = puVar4;
          } while ((uint *)&stack0x00000098 != puVar4);
          iVar6 = 0;
          do {
            if (*puVar3 != 0) break;
            iVar6 = iVar6 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar6 != unaff_s0);
          in_stack_00000098 = unaff_s0 - iVar6;
        }
        else {
          FUN_00010fec(&stack0x00000078);
        }
      }
      if (in_stack_00000020 <= in_stack_00000048) {
        if (in_stack_00000020 < in_stack_00000048) {
_L0:
          _LVL279(&stack0x00000028);
          _L0(&stack0x00000078,&stack0x00000050);
          return;
        }
        uVar7 = unaff_s0 - in_stack_00000020;
        while (uVar7 < 8) {
          if (*(uint *)(&stack0x00000000 + uVar7 * 4) < *(uint *)(&stack0x00000028 + uVar7 * 4))
          goto _L0;
          if (*(uint *)(&stack0x00000028 + uVar7 * 4) < *(uint *)(&stack0x00000000 + uVar7 * 4))
          break;
          uVar7 = uVar7 + 1;
        }
      }
      FUN_00010f60(&stack0x00000028);
      _L0(&stack0x00000050,&stack0x00000078);
      if (in_stack_00000020 == 0) {
        if (in_stack_0000009c != 0) goto _L0;
        if (in_stack_00000098 < 8) goto _L0;
        iVar6 = in_stack_0000009c;
        if (in_stack_00000098 == 8) goto _L0;
        goto _L0;
      }
    }
    do {
      uVar1 = *puVar5;
      puVar3 = puVar5 + 1;
      *puVar5 = uVar1 >> 1 | uVar7 << 0x1f;
      uVar7 = uVar1 & 1;
      puVar5 = puVar3;
    } while (puVar3 != unaff_s4);
    iVar6 = 0;
    piVar2 = (int *)register0x00002008;
    do {
      if (*piVar2 != 0) break;
      iVar6 = iVar6 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar6 != unaff_s0);
    in_stack_00000020 = unaff_s0 - iVar6;
    uVar7 = in_stack_0000006c & 1;
    if (uVar7 == 0) {
      puVar3 = (uint *)&stack0x00000050;
      puVar5 = puVar3;
      do {
        uVar1 = *puVar5;
        puVar4 = puVar5 + 1;
        *puVar5 = uVar1 >> 1 | uVar7 << 0x1f;
        uVar7 = uVar1 & 1;
        puVar5 = puVar4;
      } while (unaff_s5 != puVar4);
      iVar6 = 0;
      do {
        if (*puVar3 != 0) break;
        iVar6 = iVar6 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar6 != unaff_s0);
      in_stack_00000070 = unaff_s0 - iVar6;
      goto _L0;
    }
    param_1 = &stack0x00000050;
  } while( true );
  while( true ) {
    if (*(uint *)(&stack0x00000078 + iVar6) < *(uint *)(unaff_s3 + iVar6)) goto _L0;
    iVar6 = iVar6 + 4;
    if (iVar6 == 0x20) break;
_L0:
    if (*(uint *)(unaff_s3 + iVar6) < *(uint *)(&stack0x00000078 + iVar6)) break;
  }
_L0:
  FUN_00010e9c(&stack0x00000078);
_L0:
  (**unaff_s2)(&stack0x00000078,0x20,*unaff_s2);
  *(uint *)(unaff_s1 + 0x20) = in_stack_00000098;
  *(int *)(unaff_s1 + 0x24) = in_stack_0000009c;
  return;
}



void FUN_00010fec(undefined *param_1)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  code **unaff_s2;
  int unaff_s3;
  uint *unaff_s4;
  uint *unaff_s5;
  uint *unaff_s6;
  uint *unaff_s7;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  uint in_stack_00000044;
  uint in_stack_00000048;
  uint in_stack_0000006c;
  int in_stack_00000070;
  uint in_stack_00000094;
  uint in_stack_00000098;
  int in_stack_0000009c;
  
  do {
    FUN_00010fec(param_1);
_L0:
    while (uVar7 = in_stack_00000044 & 1, uVar7 != 0) {
      if (in_stack_00000020 <= in_stack_00000048) {
        if (in_stack_00000020 < in_stack_00000048) {
_L0:
          _LVL279(&stack0x00000028);
          _L0(&stack0x00000078,&stack0x00000050);
          return;
        }
        uVar7 = unaff_s0 - in_stack_00000020;
        while (uVar7 < 8) {
          if (*(uint *)(&stack0x00000000 + uVar7 * 4) < *(uint *)(&stack0x00000028 + uVar7 * 4))
          goto _L0;
          if (*(uint *)(&stack0x00000028 + uVar7 * 4) < *(uint *)(&stack0x00000000 + uVar7 * 4))
          break;
          uVar7 = uVar7 + 1;
        }
      }
      FUN_00010f60(&stack0x00000028);
      _L0(&stack0x00000050,&stack0x00000078);
      if (in_stack_00000020 == 0) {
        if (in_stack_0000009c != 0) goto _L0;
        if (in_stack_00000098 < 8) goto _L0;
        iVar6 = in_stack_0000009c;
        if (in_stack_00000098 == 8) goto _L0;
        goto _L0;
      }
      while (uVar7 = in_stack_0000001c & 1, puVar4 = (uint *)register0x00002008, uVar7 == 0) {
        do {
          uVar1 = *puVar4;
          puVar3 = puVar4 + 1;
          *puVar4 = uVar1 >> 1 | uVar7 << 0x1f;
          uVar7 = uVar1 & 1;
          puVar4 = puVar3;
        } while (puVar3 != unaff_s4);
        iVar6 = 0;
        piVar2 = (int *)register0x00002008;
        do {
          if (*piVar2 != 0) break;
          iVar6 = iVar6 + 1;
          piVar2 = piVar2 + 1;
        } while (iVar6 != unaff_s0);
        in_stack_00000020 = unaff_s0 - iVar6;
        uVar7 = in_stack_0000006c & 1;
        if (uVar7 == 0) {
          puVar3 = (uint *)&stack0x00000050;
          puVar4 = puVar3;
          do {
            uVar1 = *puVar4;
            puVar5 = puVar4 + 1;
            *puVar4 = uVar1 >> 1 | uVar7 << 0x1f;
            uVar7 = uVar1 & 1;
            puVar4 = puVar5;
          } while (unaff_s5 != puVar5);
          iVar6 = 0;
          do {
            if (*puVar3 != 0) break;
            iVar6 = iVar6 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar6 != unaff_s0);
          in_stack_00000070 = unaff_s0 - iVar6;
        }
        else {
          FUN_00010f78(&stack0x00000050);
        }
      }
      unaff_s7 = (uint *)&stack0x00000098;
    }
    puVar3 = (uint *)&stack0x00000028;
    puVar4 = puVar3;
    do {
      uVar1 = *puVar4;
      puVar5 = puVar4 + 1;
      *puVar4 = uVar1 >> 1 | uVar7 << 0x1f;
      uVar7 = uVar1 & 1;
      puVar4 = puVar5;
    } while (unaff_s6 != puVar5);
    iVar6 = 0;
    do {
      if (*puVar3 != 0) break;
      iVar6 = iVar6 + 1;
      puVar3 = puVar3 + 1;
    } while (iVar6 != unaff_s0);
    in_stack_00000048 = unaff_s0 - iVar6;
    uVar7 = in_stack_00000094 & 1;
    if (uVar7 == 0) {
      puVar3 = (uint *)&stack0x00000078;
      puVar4 = puVar3;
      do {
        uVar1 = *puVar4;
        puVar5 = puVar4 + 1;
        *puVar4 = uVar1 >> 1 | uVar7 << 0x1f;
        uVar7 = uVar1 & 1;
        puVar4 = puVar5;
      } while (unaff_s7 != puVar5);
      iVar6 = 0;
      do {
        if (*puVar3 != 0) break;
        iVar6 = iVar6 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar6 != unaff_s0);
      in_stack_00000098 = unaff_s0 - iVar6;
      goto _L0;
    }
    param_1 = &stack0x00000078;
  } while( true );
  while( true ) {
    if (*(uint *)(&stack0x00000078 + iVar6) < *(uint *)(unaff_s3 + iVar6)) goto _L0;
    iVar6 = iVar6 + 4;
    if (iVar6 == 0x20) break;
_L0:
    if (*(uint *)(unaff_s3 + iVar6) < *(uint *)(&stack0x00000078 + iVar6)) break;
  }
_L0:
  FUN_00010e9c(&stack0x00000078);
_L0:
  (**unaff_s2)(&stack0x00000078,0x20,*unaff_s2);
  *(uint *)(unaff_s1 + 0x20) = in_stack_00000098;
  *(int *)(unaff_s1 + 0x24) = in_stack_0000009c;
  return;
}



void _LVL279(void)

{
  _LVL279();
  _L0(&stack0x00000078,&stack0x00000050);
  return;
}



// WARNING: Variable defined which should be unmapped: inverted_Z_jacobian

void GF_Point_Jacobian_To_Affine256
               (ECC_Jacobian_Point256 *pJacPoint,bigHex256 *pX_co_ord_affine,
               bigHex256 *pY_co_ord_affine)

{
  undefined auStack56 [4];
  bigHex256 inverted_Z_jacobian;
  
  _L0(&pJacPoint->z,auStack56);
  FUN_00011046(pJacPoint,auStack56,pX_co_ord_affine);
  FUN_00011056(&pJacPoint->y,auStack56,pY_co_ord_affine);
  return;
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  FUN_00011046(&stack0x00000008);
  FUN_00011056(unaff_s0 + 0x28,&stack0x00000008);
  return;
}



void FUN_00011046(void)

{
  int unaff_s0;
  
  FUN_00011046();
  FUN_00011056(unaff_s0 + 0x28,&stack0x00000008);
  return;
}



void FUN_00011056(void)

{
  FUN_00011056();
  return;
}



void ecc_init(_Bool reset)

{
  undefined3 in_register_00002029;
  
  if (CONCAT31(in_register_00002029,reset) != 0) {
    while (iRam00000000 != 0) {
      FUN_0001109e(0);
      _L0();
    }
  }
  FUN_0001107a(0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001107a(void)

{
  FUN_0001107a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001109e(void)

{
  int *unaff_s0;
  
  do {
    FUN_0001109e();
    _L0();
  } while (*unaff_s0 != 0);
  FUN_0001107a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int *unaff_s0;
  
  while (_L0(), *unaff_s0 != 0) {
    FUN_0001109e();
  }
  FUN_0001107a();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



_Bool ecc_is_valid_point(bigHex256 *X_coord,bigHex256 *Y_coord)

{
  return true;
}



// WARNING: Variable defined which should be unmapped: PointP_Jacobian

uint8_t ecc_generate_key256(u_int8 key_type,u_int8 *secret_key,u_int8 *public_key_x,
                           u_int8 *public_key_y,ke_msg_id_t msg_id,ke_task_id_t task_id)

{
  bool bVar1;
  u_int32 *puVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  u_int32 *puVar8;
  int *piVar9;
  int iStack328;
  bigHex256 PrivateKey256;
  bigHex256 BigHex_1;
  ECC_Point256 PublicKey256;
  ECC_Jacobian_Point256 PointP_Jacobian;
  
  _L0();
  puVar8 = &BigHex_1.sign;
  iStack328 = 0;
  BigHex_1.sign = 0;
  PublicKey256.x.sign = 0;
  puVar2 = puVar8;
  pbVar4 = public_key_x + 0x1c;
  pbVar5 = public_key_y + 0x1c;
  pbVar6 = secret_key + 0x1c;
  piVar9 = &iStack328;
  do {
    *piVar9 = (uint)pbVar6[3] * 0x1000000 + (uint)pbVar6[2] * 0x10000 + (uint)*pbVar6 +
              (uint)pbVar6[1] * 0x100;
    *puVar2 = (uint)pbVar4[3] * 0x1000000 + (uint)pbVar4[2] * 0x10000 + (uint)*pbVar4 +
              (uint)pbVar4[1] * 0x100;
    puVar2[10] = (uint)pbVar5[3] * 0x1000000 + (uint)pbVar5[2] * 0x10000 + (uint)*pbVar5 +
                 (uint)pbVar5[1] * 0x100;
    bVar1 = secret_key != pbVar6;
    puVar2 = puVar2 + 1;
    pbVar4 = pbVar4 + -4;
    pbVar5 = pbVar5 + -4;
    pbVar6 = pbVar6 + -4;
    piVar9 = piVar9 + 1;
  } while (bVar1);
  iVar7 = 0;
  piVar9 = &iStack328;
  do {
    if (*piVar9 != 0) break;
    iVar7 = iVar7 + 1;
    piVar9 = piVar9 + 1;
  } while (iVar7 != 8);
  PrivateKey256.num[7] = 8 - iVar7;
  iVar7 = 0;
  puVar2 = puVar8;
  do {
    if (*puVar2 != 0) break;
    iVar7 = iVar7 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar7 != 8);
  PublicKey256.x.num[7] = 8 - iVar7;
  iVar7 = 0;
  puVar2 = puVar8;
  do {
    if (puVar2[10] != 0) break;
    iVar7 = iVar7 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar7 != 8);
  PublicKey256.y.num[7] = 8 - iVar7;
  PublicKey256.x.len = 0;
  PublicKey256.y.len = 0;
  iVar7 = _L0(0x134,0);
  *(u_int8 *)(iVar7 + 300) = key_type;
  *(ke_msg_id_t *)(iVar7 + 0x120) = msg_id;
  *(ke_task_id_t *)(iVar7 + 0x122) = task_id;
  FUN_00011204(puVar8,puVar8);
  FUN_00011210(&PublicKey256.x.sign);
  BigHex_1.num[7] = 1;
  BigHex_1.len = 0;
  (*pcRam00000000)(&PrivateKey256.sign,0,0x20,pcRam00000000);
  (*pcRam00000000)(&PrivateKey256.sign,0,0x20,pcRam00000000);
  (*pcRam00000000)(&PublicKey256.y.sign,puVar8,0x20,pcRam00000000);
  PointP_Jacobian.x.num[7] = PublicKey256.x.num[7];
  PointP_Jacobian.x.len = PublicKey256.x.len;
  (*pcRam00000000)(&PointP_Jacobian.x.sign,&PublicKey256.x.sign,0x20,pcRam00000000);
  PointP_Jacobian.y.num[7] = PublicKey256.y.num[7];
  PointP_Jacobian.y.len = PublicKey256.y.len;
  (*pcRam00000000)(&PointP_Jacobian.y.sign,&PrivateKey256.sign,0x20,pcRam00000000);
  PointP_Jacobian.z.num[7] = BigHex_1.num[7];
  PointP_Jacobian.z.len = BigHex_1.len;
  (*pcRam00000000)(iVar7 + 0x80,&PublicKey256.y.sign,0x20,pcRam00000000);
  *(u_int32 *)(iVar7 + 0xa0) = PointP_Jacobian.x.num[7];
  *(u_int32 *)(iVar7 + 0xa4) = PointP_Jacobian.x.len;
  (*pcRam00000000)(iVar7 + 0xa8,&PointP_Jacobian.x.sign,0x20,pcRam00000000);
  *(u_int32 *)(iVar7 + 200) = PointP_Jacobian.y.num[7];
  *(u_int32 *)(iVar7 + 0xcc) = PointP_Jacobian.y.len;
  (*pcRam00000000)(iVar7 + 0xd0,&PointP_Jacobian.y.sign,0x20,pcRam00000000);
  *(u_int32 *)(iVar7 + 0xf0) = PointP_Jacobian.z.num[7];
  *(u_int32 *)(iVar7 + 0xf4) = PointP_Jacobian.z.len;
  (*pcRam00000000)(iVar7 + 0xf8,&iStack328,0x20,pcRam00000000);
  *(u_int32 *)(iVar7 + 0x118) = PrivateKey256.num[7];
  *(u_int32 *)(iVar7 + 0x11c) = PrivateKey256.len;
  BigHex_1.num[7] = 1;
  BigHex_1.len = 0;
  (*pcRam00000000)(&PrivateKey256.sign,0,0x20,pcRam00000000);
  BigHex_1.num[6] = 0;
  (*pcRam00000000)(iVar7 + 8,&PrivateKey256.sign,0x20,pcRam00000000);
  *(u_int32 *)(iVar7 + 0x28) = BigHex_1.num[7];
  *(u_int32 *)(iVar7 + 0x2c) = BigHex_1.len;
  (*pcRam00000000)(&PrivateKey256.sign,0,0x20,pcRam00000000);
  (*pcRam00000000)(iVar7 + 0x30,&PrivateKey256.sign,0x20,pcRam00000000);
  *(u_int32 *)(iVar7 + 0x50) = BigHex_1.num[7];
  *(u_int32 *)(iVar7 + 0x54) = BigHex_1.len;
  (*pcRam00000000)(&PrivateKey256.sign,0,0x20,pcRam00000000);
  BigHex_1.num[6] = 0;
  (*pcRam00000000)(iVar7 + 0x58,&PrivateKey256.sign,0x20,pcRam00000000);
  *(u_int32 *)(iVar7 + 0x78) = BigHex_1.num[7];
  *(u_int32 *)(iVar7 + 0x7c) = BigHex_1.len;
  (*pcRam00000000)(&PrivateKey256.sign,0,0x20,pcRam00000000);
  BigHex_1.num[6] = 1;
  _L0(8,0,0,3,0x39,0);
  FUN_000113d2(8,0,1,3,0x39,0);
  FUN_000113e8(8,iVar7 + 8,2,3,0x39,0);
  FUN_000113fe(8,iVar7 + 0x30,3,3,0x39,0);
  FUN_00011414(8,iVar7 + 0x58,4,3,0x39,0);
  FUN_0001142a(8,iVar7 + 0x80,5,3,0x39,0);
  FUN_00011440(8,iVar7 + 0xa8,6,3,0x39,0);
  FUN_00011456(8,iVar7 + 0xd0,7,3,0x39,0);
  FUN_0001146c(8,&PrivateKey256.sign,8,3,0x39,0);
  FUN_00011488(8,0,9,3,0x39,0);
  FUN_000114a4(8,0,10,3,0x39,0);
  FUN_000114c0(8,0,0xb,3,0x39,0);
  FUN_000114dc(8,0,0xc,3,0x39,0);
  FUN_000114f8(8,0,0x13,3,0x39,0);
  FUN_00011514(8,0,0x14,3,0x39,0);
  *(undefined4 *)(iVar7 + 0x128) = 0x3f;
  *(undefined4 *)(iVar7 + 0x124) = 0;
  *(undefined4 *)(iVar7 + 4) = 8;
  if (*(char *)(iVar7 + 300) == '\x02') {
    uVar3 = FUN_0001153c(0x708,0);
    *(undefined4 *)(iVar7 + 0x130) = uVar3;
    FUN_0001154a(5);
    *(undefined *)(iVar7 + 300) = 3;
    *(undefined4 *)(iVar7 + 0x128) = 0;
  }
  FUN_00011566(0,iVar7);
  FUN_00011570(0);
  return '\0';
}



undefined4 _L0(void)

{
  bool bVar1;
  int *piVar2;
  undefined2 unaff_s1;
  undefined4 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  undefined unaff_s2;
  undefined2 unaff_s3;
  int *piVar8;
  int in_stack_00000004;
  int in_stack_00000008;
  byte *in_stack_0000000c;
  int iStack00000018;
  int iStack00000038;
  undefined4 in_stack_0000003c;
  undefined4 uStack0000005c;
  undefined4 uStack00000060;
  undefined4 uStack00000064;
  int iStack00000068;
  int iStack00000088;
  undefined4 uStack0000008c;
  undefined4 uStack00000090;
  int iStack000000b0;
  undefined4 uStack000000b4;
  int iStack000000d8;
  undefined4 uStack000000dc;
  int iStack00000100;
  undefined4 uStack00000104;
  undefined4 uStack00000128;
  undefined4 uStack0000012c;
  
  _L0();
  iStack00000018 = 0;
  iStack00000068 = 0;
  uStack00000090 = 0;
  piVar2 = (int *)&stack0x00000068;
  pbVar4 = (byte *)(in_stack_00000008 + 0x1c);
  pbVar5 = (byte *)(in_stack_00000004 + 0x1c);
  pbVar6 = in_stack_0000000c + 0x1c;
  piVar8 = (int *)&stack0x00000018;
  do {
    *piVar8 = (uint)pbVar6[3] * 0x1000000 + (uint)pbVar6[2] * 0x10000 + (uint)*pbVar6 +
              (uint)pbVar6[1] * 0x100;
    *piVar2 = (uint)pbVar4[3] * 0x1000000 + (uint)pbVar4[2] * 0x10000 + (uint)*pbVar4 +
              (uint)pbVar4[1] * 0x100;
    piVar2[10] = (uint)pbVar5[3] * 0x1000000 + (uint)pbVar5[2] * 0x10000 + (uint)*pbVar5 +
                 (uint)pbVar5[1] * 0x100;
    bVar1 = in_stack_0000000c != pbVar6;
    piVar2 = piVar2 + 1;
    pbVar4 = pbVar4 + -4;
    pbVar5 = pbVar5 + -4;
    pbVar6 = pbVar6 + -4;
    piVar8 = piVar8 + 1;
  } while (bVar1);
  iVar7 = 0;
  piVar2 = (int *)&stack0x00000018;
  do {
    if (*piVar2 != 0) break;
    iVar7 = iVar7 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar7 != 8);
  iStack00000038 = 8 - iVar7;
  iVar7 = 0;
  piVar2 = (int *)&stack0x00000068;
  do {
    if (*piVar2 != 0) break;
    iVar7 = iVar7 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar7 != 8);
  iStack00000088 = 8 - iVar7;
  iStack000000b0 = 0;
  piVar2 = (int *)&stack0x00000068;
  do {
    if (piVar2[10] != 0) break;
    iStack000000b0 = iStack000000b0 + 1;
    piVar2 = piVar2 + 1;
  } while (iStack000000b0 != 8);
  iStack000000b0 = 8 - iStack000000b0;
  uStack0000008c = 0;
  uStack000000b4 = 0;
  iVar7 = _L0(0x134,0);
  *(undefined *)(iVar7 + 300) = unaff_s2;
  *(undefined2 *)(iVar7 + 0x120) = unaff_s3;
  *(undefined2 *)(iVar7 + 0x122) = unaff_s1;
  FUN_00011204(&stack0x00000068,&stack0x00000068);
  FUN_00011210(&stack0x00000090);
  uStack00000060 = 1;
  uStack00000064 = 0;
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  (*pcRam00000000)(&stack0x000000b8,&stack0x00000068,0x20,pcRam00000000);
  iStack000000d8 = iStack00000088;
  uStack000000dc = uStack0000008c;
  (*pcRam00000000)(&stack0x000000e0,&stack0x00000090,0x20,pcRam00000000);
  iStack00000100 = iStack000000b0;
  uStack00000104 = uStack000000b4;
  (*pcRam00000000)(&stack0x00000108,&stack0x00000040,0x20,pcRam00000000);
  uStack00000128 = uStack00000060;
  uStack0000012c = uStack00000064;
  (*pcRam00000000)(iVar7 + 0x80,&stack0x000000b8,0x20,pcRam00000000);
  *(int *)(iVar7 + 0xa0) = iStack000000d8;
  *(undefined4 *)(iVar7 + 0xa4) = uStack000000dc;
  (*pcRam00000000)(iVar7 + 0xa8,&stack0x000000e0,0x20,pcRam00000000);
  *(int *)(iVar7 + 200) = iStack00000100;
  *(undefined4 *)(iVar7 + 0xcc) = uStack00000104;
  (*pcRam00000000)(iVar7 + 0xd0,&stack0x00000108,0x20,pcRam00000000);
  *(undefined4 *)(iVar7 + 0xf0) = uStack00000128;
  *(undefined4 *)(iVar7 + 0xf4) = uStack0000012c;
  (*pcRam00000000)(iVar7 + 0xf8,&stack0x00000018,0x20,pcRam00000000);
  *(int *)(iVar7 + 0x118) = iStack00000038;
  *(undefined4 *)(iVar7 + 0x11c) = in_stack_0000003c;
  uStack00000060 = 1;
  uStack00000064 = 0;
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  uStack0000005c = 0;
  (*pcRam00000000)(iVar7 + 8,&stack0x00000040,0x20,pcRam00000000);
  *(undefined4 *)(iVar7 + 0x28) = uStack00000060;
  *(undefined4 *)(iVar7 + 0x2c) = uStack00000064;
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  (*pcRam00000000)(iVar7 + 0x30,&stack0x00000040,0x20,pcRam00000000);
  *(undefined4 *)(iVar7 + 0x50) = uStack00000060;
  *(undefined4 *)(iVar7 + 0x54) = uStack00000064;
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  uStack0000005c = 0;
  (*pcRam00000000)(iVar7 + 0x58,&stack0x00000040,0x20,pcRam00000000);
  *(undefined4 *)(iVar7 + 0x78) = uStack00000060;
  *(undefined4 *)(iVar7 + 0x7c) = uStack00000064;
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  uStack0000005c = 1;
  _L0(8,0,0,3,0x39,0);
  FUN_000113d2(8,0,1,3,0x39,0);
  FUN_000113e8(8,iVar7 + 8,2,3,0x39,0);
  FUN_000113fe(8,iVar7 + 0x30,3,3,0x39,0);
  FUN_00011414(8,iVar7 + 0x58,4,3,0x39,0);
  FUN_0001142a(8,iVar7 + 0x80,5,3,0x39,0);
  FUN_00011440(8,iVar7 + 0xa8,6,3,0x39,0);
  FUN_00011456(8,iVar7 + 0xd0,7,3,0x39,0);
  FUN_0001146c(8,&stack0x00000040,8,3,0x39,0);
  FUN_00011488(8,0,9,3,0x39,0);
  FUN_000114a4(8,0,10,3,0x39,0);
  FUN_000114c0(8,0,0xb,3,0x39,0);
  FUN_000114dc(8,0,0xc,3,0x39,0);
  FUN_000114f8(8,0,0x13,3,0x39,0);
  FUN_00011514(8,0,0x14,3,0x39,0);
  *(undefined4 *)(iVar7 + 0x128) = 0x3f;
  *(undefined4 *)(iVar7 + 0x124) = 0;
  *(undefined4 *)(iVar7 + 4) = 8;
  if (*(char *)(iVar7 + 300) == '\x02') {
    uVar3 = FUN_0001153c(0x708,0);
    *(undefined4 *)(iVar7 + 0x130) = uVar3;
    FUN_0001154a(5);
    *(undefined *)(iVar7 + 300) = 3;
    *(undefined4 *)(iVar7 + 0x128) = 0;
  }
  FUN_00011566(0,iVar7);
  FUN_00011570(0);
  return 0;
}



undefined4 _L0(void)

{
  undefined2 unaff_s1;
  int iVar1;
  undefined4 uVar2;
  undefined unaff_s2;
  undefined2 unaff_s3;
  undefined4 unaff_s6;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 uStack0000005c;
  undefined4 uStack00000060;
  undefined4 uStack00000064;
  undefined4 in_stack_00000088;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b4;
  undefined4 uStack000000d8;
  undefined4 uStack000000dc;
  undefined4 uStack00000100;
  undefined4 uStack00000104;
  undefined4 uStack00000128;
  undefined4 uStack0000012c;
  
  iVar1 = _L0();
  *(undefined *)(iVar1 + 300) = unaff_s2;
  *(undefined2 *)(iVar1 + 0x120) = unaff_s3;
  *(undefined2 *)(iVar1 + 0x122) = unaff_s1;
  FUN_00011204();
  FUN_00011210(&stack0x00000090);
  uStack00000060 = 1;
  uStack00000064 = 0;
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  (*pcRam00000000)(&stack0x000000b8,0x20,pcRam00000000);
  uStack000000d8 = in_stack_00000088;
  uStack000000dc = in_stack_0000008c;
  (*pcRam00000000)(&stack0x000000e0,&stack0x00000090,0x20,pcRam00000000);
  uStack00000100 = in_stack_000000b0;
  uStack00000104 = in_stack_000000b4;
  (*pcRam00000000)(&stack0x00000108,&stack0x00000040,0x20,pcRam00000000);
  uStack00000128 = uStack00000060;
  uStack0000012c = uStack00000064;
  (*pcRam00000000)(iVar1 + 0x80,&stack0x000000b8,0x20,pcRam00000000);
  *(undefined4 *)(iVar1 + 0xa0) = uStack000000d8;
  *(undefined4 *)(iVar1 + 0xa4) = uStack000000dc;
  (*pcRam00000000)(iVar1 + 0xa8,&stack0x000000e0,0x20,pcRam00000000);
  *(undefined4 *)(iVar1 + 200) = uStack00000100;
  *(undefined4 *)(iVar1 + 0xcc) = uStack00000104;
  (*pcRam00000000)(iVar1 + 0xd0,&stack0x00000108,0x20,pcRam00000000);
  *(undefined4 *)(iVar1 + 0xf0) = uStack00000128;
  *(undefined4 *)(iVar1 + 0xf4) = uStack0000012c;
  (*pcRam00000000)(iVar1 + 0xf8,0x20,pcRam00000000);
  *(undefined4 *)(iVar1 + 0x118) = in_stack_00000038;
  *(undefined4 *)(iVar1 + 0x11c) = in_stack_0000003c;
  uStack00000060 = 1;
  uStack00000064 = 0;
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  uStack0000005c = 0;
  (*pcRam00000000)(iVar1 + 8,&stack0x00000040,0x20,pcRam00000000);
  *(undefined4 *)(iVar1 + 0x28) = uStack00000060;
  *(undefined4 *)(iVar1 + 0x2c) = uStack00000064;
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  (*pcRam00000000)(iVar1 + 0x30,&stack0x00000040,0x20,pcRam00000000);
  *(undefined4 *)(iVar1 + 0x50) = uStack00000060;
  *(undefined4 *)(iVar1 + 0x54) = uStack00000064;
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  uStack0000005c = 0;
  (*pcRam00000000)(iVar1 + 0x58,&stack0x00000040,0x20,pcRam00000000);
  *(undefined4 *)(iVar1 + 0x78) = uStack00000060;
  *(undefined4 *)(iVar1 + 0x7c) = uStack00000064;
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  uStack0000005c = 1;
  _L0(8,0,0,3,0x39,0);
  FUN_000113d2(8,0,1,3,0x39,0);
  FUN_000113e8(8,iVar1 + 8,2,3,0x39,0);
  FUN_000113fe(8,iVar1 + 0x30,3,3,0x39,0);
  FUN_00011414(8,iVar1 + 0x58,4,3,0x39,0);
  FUN_0001142a(8,iVar1 + 0x80,5,3,0x39,0);
  FUN_00011440(8,iVar1 + 0xa8,6,3,0x39,0);
  FUN_00011456(8,iVar1 + 0xd0,7,3,0x39,0);
  FUN_0001146c(8,&stack0x00000040,8,3,0x39,0);
  FUN_00011488(8,0,9,3,0x39,0);
  FUN_000114a4(8,0,10,3,0x39,0);
  FUN_000114c0(8,0,0xb,3,0x39,0);
  FUN_000114dc(8,0,0xc,3,0x39,0);
  FUN_000114f8(8,0,0x13,3,0x39,0);
  FUN_00011514(8,0,0x14,3,0x39,0);
  *(undefined4 *)(iVar1 + 0x128) = 0x3f;
  *(undefined4 *)(iVar1 + 0x124) = 0;
  *(undefined4 *)(iVar1 + 4) = unaff_s6;
  if (*(char *)(iVar1 + 300) == '\x02') {
    uVar2 = FUN_0001153c(0x708,0);
    *(undefined4 *)(iVar1 + 0x130) = uVar2;
    FUN_0001154a(5);
    *(undefined *)(iVar1 + 300) = 3;
    *(undefined4 *)(iVar1 + 0x128) = 0;
  }
  FUN_00011566(0,iVar1);
  FUN_00011570(0);
  return 0;
}



undefined4 FUN_00011204(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 unaff_s6;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 uStack0000005c;
  undefined4 uStack00000060;
  undefined4 uStack00000064;
  undefined4 in_stack_00000088;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b4;
  undefined4 uStack000000d8;
  undefined4 uStack000000dc;
  undefined4 uStack00000100;
  undefined4 uStack00000104;
  undefined4 uStack00000128;
  undefined4 uStack0000012c;
  
  FUN_00011204();
  FUN_00011210(&stack0x00000090);
  uStack00000060 = 1;
  uStack00000064 = 0;
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  (*pcRam00000000)(&stack0x000000b8,0x20,pcRam00000000);
  uStack000000d8 = in_stack_00000088;
  uStack000000dc = in_stack_0000008c;
  (*pcRam00000000)(&stack0x000000e0,&stack0x00000090,0x20,pcRam00000000);
  uStack00000100 = in_stack_000000b0;
  uStack00000104 = in_stack_000000b4;
  (*pcRam00000000)(&stack0x00000108,&stack0x00000040,0x20,pcRam00000000);
  uStack00000128 = uStack00000060;
  uStack0000012c = uStack00000064;
  (*pcRam00000000)(unaff_s0 + 0x80,&stack0x000000b8,0x20,pcRam00000000);
  *(undefined4 *)(unaff_s0 + 0xa0) = uStack000000d8;
  *(undefined4 *)(unaff_s0 + 0xa4) = uStack000000dc;
  (*pcRam00000000)(unaff_s0 + 0xa8,&stack0x000000e0,0x20,pcRam00000000);
  *(undefined4 *)(unaff_s0 + 200) = uStack00000100;
  *(undefined4 *)(unaff_s0 + 0xcc) = uStack00000104;
  (*pcRam00000000)(unaff_s0 + 0xd0,&stack0x00000108,0x20,pcRam00000000);
  *(undefined4 *)(unaff_s0 + 0xf0) = uStack00000128;
  *(undefined4 *)(unaff_s0 + 0xf4) = uStack0000012c;
  (*pcRam00000000)(unaff_s0 + 0xf8,0x20,pcRam00000000);
  *(undefined4 *)(unaff_s0 + 0x118) = in_stack_00000038;
  *(undefined4 *)(unaff_s0 + 0x11c) = in_stack_0000003c;
  uStack00000060 = 1;
  uStack00000064 = 0;
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  uStack0000005c = 0;
  (*pcRam00000000)(unaff_s0 + 8,&stack0x00000040,0x20,pcRam00000000);
  *(undefined4 *)(unaff_s0 + 0x28) = uStack00000060;
  *(undefined4 *)(unaff_s0 + 0x2c) = uStack00000064;
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  (*pcRam00000000)(unaff_s0 + 0x30,&stack0x00000040,0x20,pcRam00000000);
  *(undefined4 *)(unaff_s0 + 0x50) = uStack00000060;
  *(undefined4 *)(unaff_s0 + 0x54) = uStack00000064;
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  uStack0000005c = 0;
  (*pcRam00000000)(unaff_s0 + 0x58,&stack0x00000040,0x20,pcRam00000000);
  *(undefined4 *)(unaff_s0 + 0x78) = uStack00000060;
  *(undefined4 *)(unaff_s0 + 0x7c) = uStack00000064;
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  uStack0000005c = 1;
  _L0(8,0,0,3,0x39,0);
  FUN_000113d2(8,0,1,3,0x39,0);
  FUN_000113e8(8,unaff_s0 + 8,2,3,0x39,0);
  FUN_000113fe(8,unaff_s0 + 0x30,3,3,0x39,0);
  FUN_00011414(8,unaff_s0 + 0x58,4,3,0x39,0);
  FUN_0001142a(8,unaff_s0 + 0x80,5,3,0x39,0);
  FUN_00011440(8,unaff_s0 + 0xa8,6,3,0x39,0);
  FUN_00011456(8,unaff_s0 + 0xd0,7,3,0x39,0);
  FUN_0001146c(8,&stack0x00000040,8,3,0x39,0);
  FUN_00011488(8,0,9,3,0x39,0);
  FUN_000114a4(8,0,10,3,0x39,0);
  FUN_000114c0(8,0,0xb,3,0x39,0);
  FUN_000114dc(8,0,0xc,3,0x39,0);
  FUN_000114f8(8,0,0x13,3,0x39,0);
  FUN_00011514(8,0,0x14,3,0x39,0);
  *(undefined4 *)(unaff_s0 + 0x128) = 0x3f;
  *(undefined4 *)(unaff_s0 + 0x124) = 0;
  *(undefined4 *)(unaff_s0 + 4) = unaff_s6;
  if (*(char *)(unaff_s0 + 300) == '\x02') {
    uVar1 = FUN_0001153c(0x708,0);
    *(undefined4 *)(unaff_s0 + 0x130) = uVar1;
    FUN_0001154a(5);
    *(undefined *)(unaff_s0 + 300) = 3;
    *(undefined4 *)(unaff_s0 + 0x128) = 0;
  }
  FUN_00011566(0);
  FUN_00011570(0);
  return 0;
}



undefined4 FUN_00011210(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 unaff_s6;
  undefined4 in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined4 uStack0000005c;
  undefined4 uStack00000060;
  undefined4 uStack00000064;
  undefined4 in_stack_00000088;
  undefined4 in_stack_0000008c;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b4;
  undefined4 uStack000000d8;
  undefined4 uStack000000dc;
  undefined4 uStack00000100;
  undefined4 uStack00000104;
  undefined4 uStack00000128;
  undefined4 uStack0000012c;
  
  FUN_00011210();
  uStack00000060 = 1;
  uStack00000064 = 0;
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  (*pcRam00000000)(&stack0x000000b8,0x20,pcRam00000000);
  uStack000000d8 = in_stack_00000088;
  uStack000000dc = in_stack_0000008c;
  (*pcRam00000000)(&stack0x000000e0,&stack0x00000090,0x20,pcRam00000000);
  uStack00000100 = in_stack_000000b0;
  uStack00000104 = in_stack_000000b4;
  (*pcRam00000000)(&stack0x00000108,&stack0x00000040,0x20,pcRam00000000);
  uStack00000128 = uStack00000060;
  uStack0000012c = uStack00000064;
  (*pcRam00000000)(unaff_s0 + 0x80,&stack0x000000b8,0x20,pcRam00000000);
  *(undefined4 *)(unaff_s0 + 0xa0) = uStack000000d8;
  *(undefined4 *)(unaff_s0 + 0xa4) = uStack000000dc;
  (*pcRam00000000)(unaff_s0 + 0xa8,&stack0x000000e0,0x20,pcRam00000000);
  *(undefined4 *)(unaff_s0 + 200) = uStack00000100;
  *(undefined4 *)(unaff_s0 + 0xcc) = uStack00000104;
  (*pcRam00000000)(unaff_s0 + 0xd0,&stack0x00000108,0x20,pcRam00000000);
  *(undefined4 *)(unaff_s0 + 0xf0) = uStack00000128;
  *(undefined4 *)(unaff_s0 + 0xf4) = uStack0000012c;
  (*pcRam00000000)(unaff_s0 + 0xf8,0x20,pcRam00000000);
  *(undefined4 *)(unaff_s0 + 0x118) = in_stack_00000038;
  *(undefined4 *)(unaff_s0 + 0x11c) = in_stack_0000003c;
  uStack00000060 = 1;
  uStack00000064 = 0;
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  uStack0000005c = 0;
  (*pcRam00000000)(unaff_s0 + 8,&stack0x00000040,0x20,pcRam00000000);
  *(undefined4 *)(unaff_s0 + 0x28) = uStack00000060;
  *(undefined4 *)(unaff_s0 + 0x2c) = uStack00000064;
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  (*pcRam00000000)(unaff_s0 + 0x30,&stack0x00000040,0x20,pcRam00000000);
  *(undefined4 *)(unaff_s0 + 0x50) = uStack00000060;
  *(undefined4 *)(unaff_s0 + 0x54) = uStack00000064;
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  uStack0000005c = 0;
  (*pcRam00000000)(unaff_s0 + 0x58,&stack0x00000040,0x20,pcRam00000000);
  *(undefined4 *)(unaff_s0 + 0x78) = uStack00000060;
  *(undefined4 *)(unaff_s0 + 0x7c) = uStack00000064;
  (*pcRam00000000)(&stack0x00000040,0,0x20,pcRam00000000);
  uStack0000005c = 1;
  _L0(8,0,0,3,0x39,0);
  FUN_000113d2(8,0,1,3,0x39,0);
  FUN_000113e8(8,unaff_s0 + 8,2,3,0x39,0);
  FUN_000113fe(8,unaff_s0 + 0x30,3,3,0x39,0);
  FUN_00011414(8,unaff_s0 + 0x58,4,3,0x39,0);
  FUN_0001142a(8,unaff_s0 + 0x80,5,3,0x39,0);
  FUN_00011440(8,unaff_s0 + 0xa8,6,3,0x39,0);
  FUN_00011456(8,unaff_s0 + 0xd0,7,3,0x39,0);
  FUN_0001146c(8,&stack0x00000040,8,3,0x39,0);
  FUN_00011488(8,0,9,3,0x39,0);
  FUN_000114a4(8,0,10,3,0x39,0);
  FUN_000114c0(8,0,0xb,3,0x39,0);
  FUN_000114dc(8,0,0xc,3,0x39,0);
  FUN_000114f8(8,0,0x13,3,0x39,0);
  FUN_00011514(8,0,0x14,3,0x39,0);
  *(undefined4 *)(unaff_s0 + 0x128) = 0x3f;
  *(undefined4 *)(unaff_s0 + 0x124) = 0;
  *(undefined4 *)(unaff_s0 + 4) = unaff_s6;
  if (*(char *)(unaff_s0 + 300) == '\x02') {
    uVar1 = FUN_0001153c(0x708,0);
    *(undefined4 *)(unaff_s0 + 0x130) = uVar1;
    FUN_0001154a(5);
    *(undefined *)(unaff_s0 + 300) = 3;
    *(undefined4 *)(unaff_s0 + 0x128) = 0;
  }
  FUN_00011566(0);
  FUN_00011570(0);
  return 0;
}



undefined4 _L0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 unaff_s6;
  
  _L0();
  FUN_000113d2(8,0,1,3,0x39,0);
  FUN_000113e8(8,2,3,0x39,0);
  FUN_000113fe(8,3,3,0x39,0);
  FUN_00011414(8,4,3,0x39,0);
  FUN_0001142a(8,5,3,0x39,0);
  FUN_00011440(8,6,3,0x39,0);
  FUN_00011456(8,7,3,0x39,0);
  FUN_0001146c(8,&stack0x00000040,8,3,0x39,0);
  FUN_00011488(8,0,9,3,0x39,0);
  FUN_000114a4(8,0,10,3,0x39,0);
  FUN_000114c0(8,0,0xb,3,0x39,0);
  FUN_000114dc(8,0,0xc,3,0x39,0);
  FUN_000114f8(8,0,0x13,3,0x39,0);
  FUN_00011514(8,0,0x14,3,0x39,0);
  *(undefined4 *)(unaff_s0 + 0x128) = 0x3f;
  *(undefined4 *)(unaff_s0 + 0x124) = 0;
  *(undefined4 *)(unaff_s0 + 4) = unaff_s6;
  if (*(char *)(unaff_s0 + 300) == '\x02') {
    uVar1 = FUN_0001153c(0x708,0);
    *(undefined4 *)(unaff_s0 + 0x130) = uVar1;
    FUN_0001154a(5);
    *(undefined *)(unaff_s0 + 300) = 3;
    *(undefined4 *)(unaff_s0 + 0x128) = 0;
  }
  FUN_00011566(0);
  FUN_00011570(0);
  return 0;
}



undefined4 FUN_000113d2(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 unaff_s6;
  
  FUN_000113d2();
  FUN_000113e8(8,2,3,0x39,0);
  FUN_000113fe(8,3,3,0x39,0);
  FUN_00011414(8,4,3,0x39,0);
  FUN_0001142a(8,5,3,0x39,0);
  FUN_00011440(8,6,3,0x39,0);
  FUN_00011456(8,7,3,0x39,0);
  FUN_0001146c(8,&stack0x00000040,8,3,0x39,0);
  FUN_00011488(8,0,9,3,0x39,0);
  FUN_000114a4(8,0,10,3,0x39,0);
  FUN_000114c0(8,0,0xb,3,0x39,0);
  FUN_000114dc(8,0,0xc,3,0x39,0);
  FUN_000114f8(8,0,0x13,3,0x39,0);
  FUN_00011514(8,0,0x14,3,0x39,0);
  *(undefined4 *)(unaff_s0 + 0x128) = 0x3f;
  *(undefined4 *)(unaff_s0 + 0x124) = 0;
  *(undefined4 *)(unaff_s0 + 4) = unaff_s6;
  if (*(char *)(unaff_s0 + 300) == '\x02') {
    uVar1 = FUN_0001153c(0x708,0);
    *(undefined4 *)(unaff_s0 + 0x130) = uVar1;
    FUN_0001154a(5);
    *(undefined *)(unaff_s0 + 300) = 3;
    *(undefined4 *)(unaff_s0 + 0x128) = 0;
  }
  FUN_00011566(0);
  FUN_00011570(0);
  return 0;
}



undefined4 FUN_000113e8(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 unaff_s6;
  
  FUN_000113e8();
  FUN_000113fe(8,3,3,0x39,0);
  FUN_00011414(8,4,3,0x39,0);
  FUN_0001142a(8,5,3,0x39,0);
  FUN_00011440(8,6,3,0x39,0);
  FUN_00011456(8,7,3,0x39,0);
  FUN_0001146c(8,&stack0x00000040,8,3,0x39,0);
  FUN_00011488(8,0,9,3,0x39,0);
  FUN_000114a4(8,0,10,3,0x39,0);
  FUN_000114c0(8,0,0xb,3,0x39,0);
  FUN_000114dc(8,0,0xc,3,0x39,0);
  FUN_000114f8(8,0,0x13,3,0x39,0);
  FUN_00011514(8,0,0x14,3,0x39,0);
  *(undefined4 *)(unaff_s0 + 0x128) = 0x3f;
  *(undefined4 *)(unaff_s0 + 0x124) = 0;
  *(undefined4 *)(unaff_s0 + 4) = unaff_s6;
  if (*(char *)(unaff_s0 + 300) == '\x02') {
    uVar1 = FUN_0001153c(0x708,0);
    *(undefined4 *)(unaff_s0 + 0x130) = uVar1;
    FUN_0001154a(5);
    *(undefined *)(unaff_s0 + 300) = 3;
    *(undefined4 *)(unaff_s0 + 0x128) = 0;
  }
  FUN_00011566(0);
  FUN_00011570(0);
  return 0;
}



undefined4 FUN_000113fe(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 unaff_s6;
  
  FUN_000113fe();
  FUN_00011414(8,4,3,0x39,0);
  FUN_0001142a(8,5,3,0x39,0);
  FUN_00011440(8,6,3,0x39,0);
  FUN_00011456(8,7,3,0x39,0);
  FUN_0001146c(8,&stack0x00000040,8,3,0x39,0);
  FUN_00011488(8,0,9,3,0x39,0);
  FUN_000114a4(8,0,10,3,0x39,0);
  FUN_000114c0(8,0,0xb,3,0x39,0);
  FUN_000114dc(8,0,0xc,3,0x39,0);
  FUN_000114f8(8,0,0x13,3,0x39,0);
  FUN_00011514(8,0,0x14,3,0x39,0);
  *(undefined4 *)(unaff_s0 + 0x128) = 0x3f;
  *(undefined4 *)(unaff_s0 + 0x124) = 0;
  *(undefined4 *)(unaff_s0 + 4) = unaff_s6;
  if (*(char *)(unaff_s0 + 300) == '\x02') {
    uVar1 = FUN_0001153c(0x708,0);
    *(undefined4 *)(unaff_s0 + 0x130) = uVar1;
    FUN_0001154a(5);
    *(undefined *)(unaff_s0 + 300) = 3;
    *(undefined4 *)(unaff_s0 + 0x128) = 0;
  }
  FUN_00011566(0);
  FUN_00011570(0);
  return 0;
}



undefined4 FUN_00011414(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 unaff_s6;
  
  FUN_00011414();
  FUN_0001142a(8,5,3,0x39,0);
  FUN_00011440(8,6,3,0x39,0);
  FUN_00011456(8,7,3,0x39,0);
  FUN_0001146c(8,&stack0x00000040,8,3,0x39,0);
  FUN_00011488(8,0,9,3,0x39,0);
  FUN_000114a4(8,0,10,3,0x39,0);
  FUN_000114c0(8,0,0xb,3,0x39,0);
  FUN_000114dc(8,0,0xc,3,0x39,0);
  FUN_000114f8(8,0,0x13,3,0x39,0);
  FUN_00011514(8,0,0x14,3,0x39,0);
  *(undefined4 *)(unaff_s0 + 0x128) = 0x3f;
  *(undefined4 *)(unaff_s0 + 0x124) = 0;
  *(undefined4 *)(unaff_s0 + 4) = unaff_s6;
  if (*(char *)(unaff_s0 + 300) == '\x02') {
    uVar1 = FUN_0001153c(0x708,0);
    *(undefined4 *)(unaff_s0 + 0x130) = uVar1;
    FUN_0001154a(5);
    *(undefined *)(unaff_s0 + 300) = 3;
    *(undefined4 *)(unaff_s0 + 0x128) = 0;
  }
  FUN_00011566(0);
  FUN_00011570(0);
  return 0;
}



undefined4 FUN_0001142a(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 unaff_s6;
  
  FUN_0001142a();
  FUN_00011440(8,6,3,0x39,0);
  FUN_00011456(8,7,3,0x39,0);
  FUN_0001146c(8,&stack0x00000040,8,3,0x39,0);
  FUN_00011488(8,0,9,3,0x39,0);
  FUN_000114a4(8,0,10,3,0x39,0);
  FUN_000114c0(8,0,0xb,3,0x39,0);
  FUN_000114dc(8,0,0xc,3,0x39,0);
  FUN_000114f8(8,0,0x13,3,0x39,0);
  FUN_00011514(8,0,0x14,3,0x39,0);
  *(undefined4 *)(unaff_s0 + 0x128) = 0x3f;
  *(undefined4 *)(unaff_s0 + 0x124) = 0;
  *(undefined4 *)(unaff_s0 + 4) = unaff_s6;
  if (*(char *)(unaff_s0 + 300) == '\x02') {
    uVar1 = FUN_0001153c(0x708,0);
    *(undefined4 *)(unaff_s0 + 0x130) = uVar1;
    FUN_0001154a(5);
    *(undefined *)(unaff_s0 + 300) = 3;
    *(undefined4 *)(unaff_s0 + 0x128) = 0;
  }
  FUN_00011566(0);
  FUN_00011570(0);
  return 0;
}



undefined4 FUN_00011440(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 unaff_s6;
  
  FUN_00011440();
  FUN_00011456(8,7,3,0x39,0);
  FUN_0001146c(8,&stack0x00000040,8,3,0x39,0);
  FUN_00011488(8,0,9,3,0x39,0);
  FUN_000114a4(8,0,10,3,0x39,0);
  FUN_000114c0(8,0,0xb,3,0x39,0);
  FUN_000114dc(8,0,0xc,3,0x39,0);
  FUN_000114f8(8,0,0x13,3,0x39,0);
  FUN_00011514(8,0,0x14,3,0x39,0);
  *(undefined4 *)(unaff_s0 + 0x128) = 0x3f;
  *(undefined4 *)(unaff_s0 + 0x124) = 0;
  *(undefined4 *)(unaff_s0 + 4) = unaff_s6;
  if (*(char *)(unaff_s0 + 300) == '\x02') {
    uVar1 = FUN_0001153c(0x708,0);
    *(undefined4 *)(unaff_s0 + 0x130) = uVar1;
    FUN_0001154a(5);
    *(undefined *)(unaff_s0 + 300) = 3;
    *(undefined4 *)(unaff_s0 + 0x128) = 0;
  }
  FUN_00011566(0);
  FUN_00011570(0);
  return 0;
}



undefined4 FUN_00011456(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 unaff_s6;
  
  FUN_00011456();
  FUN_0001146c(8,&stack0x00000040,8,3,0x39,0);
  FUN_00011488(8,0,9,3,0x39,0);
  FUN_000114a4(8,0,10,3,0x39,0);
  FUN_000114c0(8,0,0xb,3,0x39,0);
  FUN_000114dc(8,0,0xc,3,0x39,0);
  FUN_000114f8(8,0,0x13,3,0x39,0);
  FUN_00011514(8,0,0x14,3,0x39,0);
  *(undefined4 *)(unaff_s0 + 0x128) = 0x3f;
  *(undefined4 *)(unaff_s0 + 0x124) = 0;
  *(undefined4 *)(unaff_s0 + 4) = unaff_s6;
  if (*(char *)(unaff_s0 + 300) == '\x02') {
    uVar1 = FUN_0001153c(0x708,0);
    *(undefined4 *)(unaff_s0 + 0x130) = uVar1;
    FUN_0001154a(5);
    *(undefined *)(unaff_s0 + 300) = 3;
    *(undefined4 *)(unaff_s0 + 0x128) = 0;
  }
  FUN_00011566(0);
  FUN_00011570(0);
  return 0;
}



undefined4 FUN_0001146c(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 unaff_s6;
  
  FUN_0001146c();
  FUN_00011488(8,0,9,3,0x39,0);
  FUN_000114a4(8,0,10,3,0x39,0);
  FUN_000114c0(8,0,0xb,3,0x39,0);
  FUN_000114dc(8,0,0xc,3,0x39,0);
  FUN_000114f8(8,0,0x13,3,0x39,0);
  FUN_00011514(8,0,0x14,3,0x39,0);
  *(undefined4 *)(unaff_s0 + 0x128) = 0x3f;
  *(undefined4 *)(unaff_s0 + 0x124) = 0;
  *(undefined4 *)(unaff_s0 + 4) = unaff_s6;
  if (*(char *)(unaff_s0 + 300) == '\x02') {
    uVar1 = FUN_0001153c(0x708,0);
    *(undefined4 *)(unaff_s0 + 0x130) = uVar1;
    FUN_0001154a(5);
    *(undefined *)(unaff_s0 + 300) = 3;
    *(undefined4 *)(unaff_s0 + 0x128) = 0;
  }
  FUN_00011566(0);
  FUN_00011570(0);
  return 0;
}



undefined4 FUN_00011488(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 unaff_s6;
  
  FUN_00011488();
  FUN_000114a4(8,0,10,3,0x39,0);
  FUN_000114c0(8,0,0xb,3,0x39,0);
  FUN_000114dc(8,0,0xc,3,0x39,0);
  FUN_000114f8(8,0,0x13,3,0x39,0);
  FUN_00011514(8,0,0x14,3,0x39,0);
  *(undefined4 *)(unaff_s0 + 0x128) = 0x3f;
  *(undefined4 *)(unaff_s0 + 0x124) = 0;
  *(undefined4 *)(unaff_s0 + 4) = unaff_s6;
  if (*(char *)(unaff_s0 + 300) == '\x02') {
    uVar1 = FUN_0001153c(0x708,0);
    *(undefined4 *)(unaff_s0 + 0x130) = uVar1;
    FUN_0001154a(5);
    *(undefined *)(unaff_s0 + 300) = 3;
    *(undefined4 *)(unaff_s0 + 0x128) = 0;
  }
  FUN_00011566(0);
  FUN_00011570(0);
  return 0;
}



undefined4 FUN_000114a4(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 unaff_s6;
  
  FUN_000114a4();
  FUN_000114c0(8,0,0xb,3,0x39,0);
  FUN_000114dc(8,0,0xc,3,0x39,0);
  FUN_000114f8(8,0,0x13,3,0x39,0);
  FUN_00011514(8,0,0x14,3,0x39,0);
  *(undefined4 *)(unaff_s0 + 0x128) = 0x3f;
  *(undefined4 *)(unaff_s0 + 0x124) = 0;
  *(undefined4 *)(unaff_s0 + 4) = unaff_s6;
  if (*(char *)(unaff_s0 + 300) == '\x02') {
    uVar1 = FUN_0001153c(0x708,0);
    *(undefined4 *)(unaff_s0 + 0x130) = uVar1;
    FUN_0001154a(5);
    *(undefined *)(unaff_s0 + 300) = 3;
    *(undefined4 *)(unaff_s0 + 0x128) = 0;
  }
  FUN_00011566(0);
  FUN_00011570(0);
  return 0;
}



undefined4 FUN_000114c0(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 unaff_s6;
  
  FUN_000114c0();
  FUN_000114dc(8,0,0xc,3,0x39,0);
  FUN_000114f8(8,0,0x13,3,0x39,0);
  FUN_00011514(8,0,0x14,3,0x39,0);
  *(undefined4 *)(unaff_s0 + 0x128) = 0x3f;
  *(undefined4 *)(unaff_s0 + 0x124) = 0;
  *(undefined4 *)(unaff_s0 + 4) = unaff_s6;
  if (*(char *)(unaff_s0 + 300) == '\x02') {
    uVar1 = FUN_0001153c(0x708,0);
    *(undefined4 *)(unaff_s0 + 0x130) = uVar1;
    FUN_0001154a(5);
    *(undefined *)(unaff_s0 + 300) = 3;
    *(undefined4 *)(unaff_s0 + 0x128) = 0;
  }
  FUN_00011566(0);
  FUN_00011570(0);
  return 0;
}



undefined4 FUN_000114dc(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 unaff_s6;
  
  FUN_000114dc();
  FUN_000114f8(8,0,0x13,3,0x39,0);
  FUN_00011514(8,0,0x14,3,0x39,0);
  *(undefined4 *)(unaff_s0 + 0x128) = 0x3f;
  *(undefined4 *)(unaff_s0 + 0x124) = 0;
  *(undefined4 *)(unaff_s0 + 4) = unaff_s6;
  if (*(char *)(unaff_s0 + 300) == '\x02') {
    uVar1 = FUN_0001153c(0x708,0);
    *(undefined4 *)(unaff_s0 + 0x130) = uVar1;
    FUN_0001154a(5);
    *(undefined *)(unaff_s0 + 300) = 3;
    *(undefined4 *)(unaff_s0 + 0x128) = 0;
  }
  FUN_00011566(0);
  FUN_00011570(0);
  return 0;
}



undefined4 FUN_000114f8(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 unaff_s6;
  
  FUN_000114f8();
  FUN_00011514(8,0,0x14,3,0x39,0);
  *(undefined4 *)(unaff_s0 + 0x128) = 0x3f;
  *(undefined4 *)(unaff_s0 + 0x124) = 0;
  *(undefined4 *)(unaff_s0 + 4) = unaff_s6;
  if (*(char *)(unaff_s0 + 300) == '\x02') {
    uVar1 = FUN_0001153c(0x708,0);
    *(undefined4 *)(unaff_s0 + 0x130) = uVar1;
    FUN_0001154a(5);
    *(undefined *)(unaff_s0 + 300) = 3;
    *(undefined4 *)(unaff_s0 + 0x128) = 0;
  }
  FUN_00011566(0);
  FUN_00011570(0);
  return 0;
}



undefined4 FUN_00011514(void)

{
  int unaff_s0;
  undefined4 uVar1;
  undefined4 unaff_s6;
  
  FUN_00011514();
  *(undefined4 *)(unaff_s0 + 0x128) = 0x3f;
  *(undefined4 *)(unaff_s0 + 0x124) = 0;
  *(undefined4 *)(unaff_s0 + 4) = unaff_s6;
  if (*(char *)(unaff_s0 + 300) == '\x02') {
    uVar1 = FUN_0001153c(0x708,0);
    *(undefined4 *)(unaff_s0 + 0x130) = uVar1;
    FUN_0001154a(5);
    *(undefined *)(unaff_s0 + 300) = 3;
    *(undefined4 *)(unaff_s0 + 0x128) = 0;
  }
  FUN_00011566(0);
  FUN_00011570(0);
  return 0;
}



undefined4 FUN_0001153c(void)

{
  int unaff_s0;
  undefined4 uVar1;
  
  uVar1 = FUN_0001153c();
  *(undefined4 *)(unaff_s0 + 0x130) = uVar1;
  FUN_0001154a(5);
  *(undefined *)(unaff_s0 + 300) = 3;
  *(undefined4 *)(unaff_s0 + 0x128) = 0;
  FUN_00011566(0);
  FUN_00011570(0);
  return 0;
}



undefined4 FUN_0001154a(void)

{
  int unaff_s0;
  
  FUN_0001154a();
  *(undefined *)(unaff_s0 + 300) = 3;
  *(undefined4 *)(unaff_s0 + 0x128) = 0;
  FUN_00011566(0);
  FUN_00011570(0);
  return 0;
}



undefined4 FUN_00011566(void)

{
  FUN_00011566();
  FUN_00011570(0);
  return 0;
}



undefined4 FUN_00011570(void)

{
  FUN_00011570();
  return 0;
}



void ecc_abort_key256_generation(ke_task_id_t task_id)

{
  int *piVar1;
  int *piVar2;
  undefined2 in_register_0000202a;
  int *piVar3;
  
  piVar1 = (int *)iRam00000000;
  piVar3 = (int *)0;
  while( true ) {
    piVar2 = piVar1;
    if (piVar2 == (int *)0x0) {
      return;
    }
    if ((uint)*(ushort *)((int)piVar2 + 0x122) == CONCAT22(in_register_0000202a,task_id)) break;
    piVar1 = (int *)*piVar2;
    piVar3 = piVar2;
  }
  FUN_000115e2(0,piVar3,piVar2);
  if ((*(char *)(piVar2 + 0x4b) == '\x02') && (piVar2[0x4c] != 0)) {
    _L0();
    piVar2[0x4c] = 0;
  }
  FUN_00011608(piVar2);
  if (iRam00000000 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000115e2(void)

{
  int unaff_s0;
  int *unaff_s1;
  
  FUN_000115e2();
  if ((*(char *)(unaff_s0 + 300) == '\x02') && (*(int *)(unaff_s0 + 0x130) != 0)) {
    _L0();
    *(undefined4 *)(unaff_s0 + 0x130) = 0;
  }
  FUN_00011608();
  if (*unaff_s1 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int *unaff_s1;
  
  _L0();
  *(undefined4 *)(unaff_s0 + 0x130) = 0;
  FUN_00011608();
  if (*unaff_s1 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011608(void)

{
  int *unaff_s1;
  
  FUN_00011608();
  if (*unaff_s1 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void ecc_gen_new_public_key(u_int8 *secret_key,ke_msg_id_t msg_id,ke_task_id_t task_id)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void ecc_gen_new_secret_key(uint8_t *secret_key256,_Bool forced)

{
  undefined4 uVar1;
  undefined3 in_register_0000202d;
  int iVar2;
  byte *pbVar3;
  
  if (CONCAT31(in_register_0000202d,forced) != 0) {
    return;
  }
  do {
    uVar1 = _L0();
    *secret_key256 = (uint8_t)uVar1;
    secret_key256[1] = (uint8_t)((uint)uVar1 >> 8);
    secret_key256[2] = (uint8_t)((uint)uVar1 >> 0x10);
    secret_key256[3] = (uint8_t)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    secret_key256[4] = (uint8_t)uVar1;
    secret_key256[5] = (uint8_t)((uint)uVar1 >> 8);
    secret_key256[6] = (uint8_t)((uint)uVar1 >> 0x10);
    secret_key256[7] = (uint8_t)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    secret_key256[8] = (uint8_t)uVar1;
    secret_key256[9] = (uint8_t)((uint)uVar1 >> 8);
    secret_key256[10] = (uint8_t)((uint)uVar1 >> 0x10);
    secret_key256[0xb] = (uint8_t)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    secret_key256[0xc] = (uint8_t)uVar1;
    secret_key256[0xd] = (uint8_t)((uint)uVar1 >> 8);
    secret_key256[0xe] = (uint8_t)((uint)uVar1 >> 0x10);
    secret_key256[0xf] = (uint8_t)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    secret_key256[0x10] = (uint8_t)uVar1;
    secret_key256[0x11] = (uint8_t)((uint)uVar1 >> 8);
    secret_key256[0x12] = (uint8_t)((uint)uVar1 >> 0x10);
    secret_key256[0x13] = (uint8_t)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    secret_key256[0x14] = (uint8_t)uVar1;
    secret_key256[0x15] = (uint8_t)((uint)uVar1 >> 8);
    secret_key256[0x16] = (uint8_t)((uint)uVar1 >> 0x10);
    secret_key256[0x17] = (uint8_t)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    secret_key256[0x18] = (uint8_t)uVar1;
    secret_key256[0x19] = (uint8_t)((uint)uVar1 >> 8);
    secret_key256[0x1a] = (uint8_t)((uint)uVar1 >> 0x10);
    secret_key256[0x1b] = (uint8_t)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    secret_key256[0x1c] = (uint8_t)uVar1;
    secret_key256[0x1d] = (uint8_t)((uint)uVar1 >> 8);
    secret_key256[0x1e] = (uint8_t)((uint)uVar1 >> 0x10);
    secret_key256[0x1f] = (uint8_t)((uint)uVar1 >> 0x18);
    iVar2 = 0x1f;
    do {
      if (secret_key256[iVar2] != '\0') goto _L0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
    if (*secret_key256 != '\0') {
_L0:
      pbVar3 = &DAT_0000001f;
      while( true ) {
        if (*pbVar3 < secret_key256[(int)pbVar3]) break;
        if ((secret_key256[(int)pbVar3] < *pbVar3) ||
           (pbVar3 = pbVar3 + -1, pbVar3 == (byte *)0xffffffff)) {
          return;
        }
      }
    }
  } while( true );
}



void _L0(void)

{
  char *unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  int unaff_s2;
  
  do {
    uVar1 = _L0();
    *unaff_s0 = (char)uVar1;
    unaff_s0[1] = (char)((uint)uVar1 >> 8);
    unaff_s0[2] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[3] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[4] = (char)uVar1;
    unaff_s0[5] = (char)((uint)uVar1 >> 8);
    unaff_s0[6] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[7] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[8] = (char)uVar1;
    unaff_s0[9] = (char)((uint)uVar1 >> 8);
    unaff_s0[10] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0xb] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0xc] = (char)uVar1;
    unaff_s0[0xd] = (char)((uint)uVar1 >> 8);
    unaff_s0[0xe] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0xf] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x10] = (char)uVar1;
    unaff_s0[0x11] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x12] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x13] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x14] = (char)uVar1;
    unaff_s0[0x15] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x16] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x17] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x18] = (char)uVar1;
    unaff_s0[0x19] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x1a] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x1b] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x1c] = (char)uVar1;
    unaff_s0[0x1d] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x1e] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x1f] = (char)((uint)uVar1 >> 0x18);
    iVar2 = 0x1f;
    do {
      if (unaff_s0[iVar2] != '\0') goto _L0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != unaff_s2);
    if (*unaff_s0 != '\0') {
_L0:
      iVar2 = 0x1f;
      while( true ) {
        if (*(byte *)(unaff_s1 + iVar2) < (byte)unaff_s0[iVar2]) break;
        if (((byte)unaff_s0[iVar2] < *(byte *)(unaff_s1 + iVar2)) ||
           (iVar2 = iVar2 + -1, iVar2 == unaff_s2)) {
          return;
        }
      }
    }
  } while( true );
}



void _L0(void)

{
  char *unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  int unaff_s2;
  
  do {
    uVar1 = _L0();
    unaff_s0[4] = (char)uVar1;
    unaff_s0[5] = (char)((uint)uVar1 >> 8);
    unaff_s0[6] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[7] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[8] = (char)uVar1;
    unaff_s0[9] = (char)((uint)uVar1 >> 8);
    unaff_s0[10] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0xb] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0xc] = (char)uVar1;
    unaff_s0[0xd] = (char)((uint)uVar1 >> 8);
    unaff_s0[0xe] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0xf] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x10] = (char)uVar1;
    unaff_s0[0x11] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x12] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x13] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x14] = (char)uVar1;
    unaff_s0[0x15] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x16] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x17] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x18] = (char)uVar1;
    unaff_s0[0x19] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x1a] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x1b] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x1c] = (char)uVar1;
    unaff_s0[0x1d] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x1e] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x1f] = (char)((uint)uVar1 >> 0x18);
    iVar2 = 0x1f;
    do {
      if (unaff_s0[iVar2] != '\0') goto _L0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != unaff_s2);
    if (*unaff_s0 != '\0') {
_L0:
      iVar2 = 0x1f;
      while( true ) {
        if (*(byte *)(unaff_s1 + iVar2) < (byte)unaff_s0[iVar2]) break;
        if (((byte)unaff_s0[iVar2] < *(byte *)(unaff_s1 + iVar2)) ||
           (iVar2 = iVar2 + -1, iVar2 == unaff_s2)) {
          return;
        }
      }
    }
    uVar1 = _L0();
    *unaff_s0 = (char)uVar1;
    unaff_s0[1] = (char)((uint)uVar1 >> 8);
    unaff_s0[2] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[3] = (char)((uint)uVar1 >> 0x18);
  } while( true );
}



void _L0(void)

{
  char *unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  int unaff_s2;
  
  do {
    uVar1 = _L0();
    unaff_s0[8] = (char)uVar1;
    unaff_s0[9] = (char)((uint)uVar1 >> 8);
    unaff_s0[10] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0xb] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0xc] = (char)uVar1;
    unaff_s0[0xd] = (char)((uint)uVar1 >> 8);
    unaff_s0[0xe] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0xf] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x10] = (char)uVar1;
    unaff_s0[0x11] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x12] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x13] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x14] = (char)uVar1;
    unaff_s0[0x15] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x16] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x17] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x18] = (char)uVar1;
    unaff_s0[0x19] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x1a] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x1b] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x1c] = (char)uVar1;
    unaff_s0[0x1d] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x1e] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x1f] = (char)((uint)uVar1 >> 0x18);
    iVar2 = 0x1f;
    do {
      if (unaff_s0[iVar2] != '\0') goto _L0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != unaff_s2);
    if (*unaff_s0 != '\0') {
_L0:
      iVar2 = 0x1f;
      while( true ) {
        if (*(byte *)(unaff_s1 + iVar2) < (byte)unaff_s0[iVar2]) break;
        if (((byte)unaff_s0[iVar2] < *(byte *)(unaff_s1 + iVar2)) ||
           (iVar2 = iVar2 + -1, iVar2 == unaff_s2)) {
          return;
        }
      }
    }
    uVar1 = _L0();
    *unaff_s0 = (char)uVar1;
    unaff_s0[1] = (char)((uint)uVar1 >> 8);
    unaff_s0[2] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[3] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[4] = (char)uVar1;
    unaff_s0[5] = (char)((uint)uVar1 >> 8);
    unaff_s0[6] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[7] = (char)((uint)uVar1 >> 0x18);
  } while( true );
}



void _L0(void)

{
  char *unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  int unaff_s2;
  
  do {
    uVar1 = _L0();
    unaff_s0[0xc] = (char)uVar1;
    unaff_s0[0xd] = (char)((uint)uVar1 >> 8);
    unaff_s0[0xe] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0xf] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x10] = (char)uVar1;
    unaff_s0[0x11] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x12] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x13] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x14] = (char)uVar1;
    unaff_s0[0x15] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x16] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x17] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x18] = (char)uVar1;
    unaff_s0[0x19] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x1a] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x1b] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x1c] = (char)uVar1;
    unaff_s0[0x1d] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x1e] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x1f] = (char)((uint)uVar1 >> 0x18);
    iVar2 = 0x1f;
    do {
      if (unaff_s0[iVar2] != '\0') goto _L0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != unaff_s2);
    if (*unaff_s0 != '\0') {
_L0:
      iVar2 = 0x1f;
      while( true ) {
        if (*(byte *)(unaff_s1 + iVar2) < (byte)unaff_s0[iVar2]) break;
        if (((byte)unaff_s0[iVar2] < *(byte *)(unaff_s1 + iVar2)) ||
           (iVar2 = iVar2 + -1, iVar2 == unaff_s2)) {
          return;
        }
      }
    }
    uVar1 = _L0();
    *unaff_s0 = (char)uVar1;
    unaff_s0[1] = (char)((uint)uVar1 >> 8);
    unaff_s0[2] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[3] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[4] = (char)uVar1;
    unaff_s0[5] = (char)((uint)uVar1 >> 8);
    unaff_s0[6] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[7] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[8] = (char)uVar1;
    unaff_s0[9] = (char)((uint)uVar1 >> 8);
    unaff_s0[10] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0xb] = (char)((uint)uVar1 >> 0x18);
  } while( true );
}



void _L0(void)

{
  char *unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  int unaff_s2;
  
  do {
    uVar1 = _L0();
    unaff_s0[0x10] = (char)uVar1;
    unaff_s0[0x11] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x12] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x13] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x14] = (char)uVar1;
    unaff_s0[0x15] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x16] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x17] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x18] = (char)uVar1;
    unaff_s0[0x19] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x1a] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x1b] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x1c] = (char)uVar1;
    unaff_s0[0x1d] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x1e] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x1f] = (char)((uint)uVar1 >> 0x18);
    iVar2 = 0x1f;
    do {
      if (unaff_s0[iVar2] != '\0') goto _L0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != unaff_s2);
    if (*unaff_s0 != '\0') {
_L0:
      iVar2 = 0x1f;
      while( true ) {
        if (*(byte *)(unaff_s1 + iVar2) < (byte)unaff_s0[iVar2]) break;
        if (((byte)unaff_s0[iVar2] < *(byte *)(unaff_s1 + iVar2)) ||
           (iVar2 = iVar2 + -1, iVar2 == unaff_s2)) {
          return;
        }
      }
    }
    uVar1 = _L0();
    *unaff_s0 = (char)uVar1;
    unaff_s0[1] = (char)((uint)uVar1 >> 8);
    unaff_s0[2] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[3] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[4] = (char)uVar1;
    unaff_s0[5] = (char)((uint)uVar1 >> 8);
    unaff_s0[6] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[7] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[8] = (char)uVar1;
    unaff_s0[9] = (char)((uint)uVar1 >> 8);
    unaff_s0[10] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0xb] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0xc] = (char)uVar1;
    unaff_s0[0xd] = (char)((uint)uVar1 >> 8);
    unaff_s0[0xe] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0xf] = (char)((uint)uVar1 >> 0x18);
  } while( true );
}



void _L0(void)

{
  char *unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  int unaff_s2;
  
  do {
    uVar1 = _L0();
    unaff_s0[0x14] = (char)uVar1;
    unaff_s0[0x15] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x16] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x17] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x18] = (char)uVar1;
    unaff_s0[0x19] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x1a] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x1b] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x1c] = (char)uVar1;
    unaff_s0[0x1d] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x1e] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x1f] = (char)((uint)uVar1 >> 0x18);
    iVar2 = 0x1f;
    do {
      if (unaff_s0[iVar2] != '\0') goto _L0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != unaff_s2);
    if (*unaff_s0 != '\0') {
_L0:
      iVar2 = 0x1f;
      while( true ) {
        if (*(byte *)(unaff_s1 + iVar2) < (byte)unaff_s0[iVar2]) break;
        if (((byte)unaff_s0[iVar2] < *(byte *)(unaff_s1 + iVar2)) ||
           (iVar2 = iVar2 + -1, iVar2 == unaff_s2)) {
          return;
        }
      }
    }
    uVar1 = _L0();
    *unaff_s0 = (char)uVar1;
    unaff_s0[1] = (char)((uint)uVar1 >> 8);
    unaff_s0[2] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[3] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[4] = (char)uVar1;
    unaff_s0[5] = (char)((uint)uVar1 >> 8);
    unaff_s0[6] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[7] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[8] = (char)uVar1;
    unaff_s0[9] = (char)((uint)uVar1 >> 8);
    unaff_s0[10] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0xb] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0xc] = (char)uVar1;
    unaff_s0[0xd] = (char)((uint)uVar1 >> 8);
    unaff_s0[0xe] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0xf] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x10] = (char)uVar1;
    unaff_s0[0x11] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x12] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x13] = (char)((uint)uVar1 >> 0x18);
  } while( true );
}



void _L0(void)

{
  char *unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  int unaff_s2;
  
  do {
    uVar1 = _L0();
    unaff_s0[0x18] = (char)uVar1;
    unaff_s0[0x19] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x1a] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x1b] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x1c] = (char)uVar1;
    unaff_s0[0x1d] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x1e] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x1f] = (char)((uint)uVar1 >> 0x18);
    iVar2 = 0x1f;
    do {
      if (unaff_s0[iVar2] != '\0') goto _L0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != unaff_s2);
    if (*unaff_s0 != '\0') {
_L0:
      iVar2 = 0x1f;
      while( true ) {
        if (*(byte *)(unaff_s1 + iVar2) < (byte)unaff_s0[iVar2]) break;
        if (((byte)unaff_s0[iVar2] < *(byte *)(unaff_s1 + iVar2)) ||
           (iVar2 = iVar2 + -1, iVar2 == unaff_s2)) {
          return;
        }
      }
    }
    uVar1 = _L0();
    *unaff_s0 = (char)uVar1;
    unaff_s0[1] = (char)((uint)uVar1 >> 8);
    unaff_s0[2] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[3] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[4] = (char)uVar1;
    unaff_s0[5] = (char)((uint)uVar1 >> 8);
    unaff_s0[6] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[7] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[8] = (char)uVar1;
    unaff_s0[9] = (char)((uint)uVar1 >> 8);
    unaff_s0[10] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0xb] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0xc] = (char)uVar1;
    unaff_s0[0xd] = (char)((uint)uVar1 >> 8);
    unaff_s0[0xe] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0xf] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x10] = (char)uVar1;
    unaff_s0[0x11] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x12] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x13] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x14] = (char)uVar1;
    unaff_s0[0x15] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x16] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x17] = (char)((uint)uVar1 >> 0x18);
  } while( true );
}



void _L0(void)

{
  char *unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  int iVar2;
  int unaff_s2;
  
  do {
    uVar1 = _L0();
    unaff_s0[0x1c] = (char)uVar1;
    unaff_s0[0x1d] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x1e] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x1f] = (char)((uint)uVar1 >> 0x18);
    iVar2 = 0x1f;
    do {
      if (unaff_s0[iVar2] != '\0') goto _L0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != unaff_s2);
    if (*unaff_s0 != '\0') {
_L0:
      iVar2 = 0x1f;
      while( true ) {
        if (*(byte *)(unaff_s1 + iVar2) < (byte)unaff_s0[iVar2]) break;
        if (((byte)unaff_s0[iVar2] < *(byte *)(unaff_s1 + iVar2)) ||
           (iVar2 = iVar2 + -1, iVar2 == unaff_s2)) {
          return;
        }
      }
    }
    uVar1 = _L0();
    *unaff_s0 = (char)uVar1;
    unaff_s0[1] = (char)((uint)uVar1 >> 8);
    unaff_s0[2] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[3] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[4] = (char)uVar1;
    unaff_s0[5] = (char)((uint)uVar1 >> 8);
    unaff_s0[6] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[7] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[8] = (char)uVar1;
    unaff_s0[9] = (char)((uint)uVar1 >> 8);
    unaff_s0[10] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0xb] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0xc] = (char)uVar1;
    unaff_s0[0xd] = (char)((uint)uVar1 >> 8);
    unaff_s0[0xe] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0xf] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x10] = (char)uVar1;
    unaff_s0[0x11] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x12] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x13] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x14] = (char)uVar1;
    unaff_s0[0x15] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x16] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x17] = (char)((uint)uVar1 >> 0x18);
    uVar1 = _L0();
    unaff_s0[0x18] = (char)uVar1;
    unaff_s0[0x19] = (char)((uint)uVar1 >> 8);
    unaff_s0[0x1a] = (char)((uint)uVar1 >> 0x10);
    unaff_s0[0x1b] = (char)((uint)uVar1 >> 0x18);
  } while( true );
}



void ecc_get_debug_Keys(uint8_t *secret_key,uint8_t *pub_key_x,uint8_t *pub_key_y)

{
  uint8_t uVar1;
  uint8_t *puVar2;
  uint8_t *puVar3;
  
  puVar3 = &DAT_0000001f;
  do {
    pub_key_x[(int)puVar3] = *puVar3;
    pub_key_y[(int)puVar3] = *puVar3;
    uVar1 = *puVar3;
    puVar2 = secret_key + (int)puVar3;
    puVar3 = puVar3 + -1;
    *puVar2 = uVar1;
  } while (puVar3 != (uint8_t *)0xffffffff);
  return;
}


