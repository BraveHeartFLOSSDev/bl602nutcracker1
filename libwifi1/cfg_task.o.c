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
typedef unsigned short    undefined2;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef ushort __uint16_t;

typedef long __int32_t;

typedef ulong __uint32_t;

typedef uchar __uint8_t;

typedef struct cfg_element_entry cfg_element_entry, *Pcfg_element_entry;

typedef enum CFG_ELEMENT_TYPE_OPS {
    CFG_ELEMENT_TYPE_OPS_SET=0,
    CFG_ELEMENT_TYPE_OPS_RESET=2,
    CFG_ELEMENT_TYPE_OPS_DUMP_DEBUG=3,
    CFG_ELEMENT_TYPE_OPS_UNKNOWN=4,
    CFG_ELEMENT_TYPE_OPS_GET=1
} CFG_ELEMENT_TYPE_OPS;

typedef __uint32_t uint32_t;

typedef __uint16_t uint16_t;

struct cfg_element_entry {
    uint32_t task;
    uint16_t element;
    uint16_t type;
    char * name;
    void * val;
    int (* set)(struct cfg_element_entry *, void *, void *);
    int (* get)(struct cfg_element_entry *, void *, void *);
    int (* notify)(struct cfg_element_entry *, void *, void *, enum CFG_ELEMENT_TYPE_OPS);
};

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictcc_for___value anon_union.conflictcc_for___value, *Panon_union.conflictcc_for___value;

typedef uint wint_t;

union anon_union.conflictcc_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflictcc_for___value __value;
};

typedef union anon_union.conflictcc anon_union.conflictcc, *Panon_union.conflictcc;

union anon_union.conflictcc {
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct mac_addr mac_addr, *Pmac_addr;

struct mac_addr {
    uint16_t array[3];
};

typedef enum anon_enum_8.conflict9ab {
    AC_VI=2,
    TASK_APM=7,
    AC_VO=3,
    TASK_SCANU=4,
    CO_BUSY=8,
    TASK_MESH=9,
    TASK_API=13,
    TASK_DBG=1,
    TASK_CFG=12,
    TASK_MAX=14,
    TASK_LAST_EMB=12,
    TASK_NONE=-1,
    TASK_TDLS=3,
    TASK_RXU=11,
    CO_NOT_FOUND=5,
    TASK_SCAN=2,
    CO_OK=0,
    CO_EMPTY=2,
    AC_MAX=4,
    TID_1=1,
    TID_0=0,
    TID_3=3,
    TID_2=2,
    TID_5=5,
    TID_4=4,
    TID_7=7,
    TID_6=6,
    TID_MGT=8,
    CO_BAD_PARAM=4,
    CO_FULL=3,
    CO_NO_ELT_IN_USE=7,
    TASK_MM=0,
    AC_BE=1,
    TID_MAX=9,
    TASK_BAM=8,
    AC_BK=0,
    CO_OP_IN_PROGRESS=9,
    TASK_ME=5,
    CO_FAIL=1,
    TASK_SM=6,
    TASK_HOSTAPD_U=10,
    CO_NO_MORE_ELT_AVAILABLE=6
} anon_enum_8.conflict9ab;

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

typedef uint16_t ke_msg_id_t;

typedef uint16_t ke_task_id_t;

struct ke_msg_handler {
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler {
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct cfg_start_cfm cfg_start_cfm, *Pcfg_start_cfm;

typedef __uint8_t uint8_t;

struct cfg_start_cfm {
    uint8_t status;
};

typedef struct anon_struct.conflictc8a anon_struct.conflictc8a, *Panon_struct.conflictc8a;

struct anon_struct.conflictc8a {
    uint32_t task;
    uint32_t element;
};

typedef struct anon_struct.conflictcd2 anon_struct.conflictcd2, *Panon_struct.conflictcd2;

struct anon_struct.conflictcd2 {
    uint32_t task;
    uint32_t element;
    uint32_t type;
    uint32_t length;
    uint32_t[0] buf;
};

typedef struct cfg_start_req cfg_start_req, *Pcfg_start_req;

struct cfg_start_req { // Missing member u : anon_union.conflictd1d_for_u at offset 0x4 [exceeds parent struct len]
    uint32_t ops;
};

typedef union anon_union.conflictd1d anon_union.conflictd1d, *Panon_union.conflictd1d;

union anon_union.conflictd1d {
    undefined1 get; // Data type larger than union's declared size: anon_struct.conflictc8a[1]
    undefined1 reset; // Data type larger than union's declared size: anon_struct.conflictcae[1]
    undefined1 set; // Data type larger than union's declared size: anon_struct.conflictcd2[1]
};

typedef enum cfg_msg_tag {
    CFG_START_REQ=12288,
    CFG_START_CFM=12289
} cfg_msg_tag;

typedef struct anon_struct.conflictc3a anon_struct.conflictc3a, *Panon_struct.conflictc3a;

struct anon_struct.conflictc3a {
    uint32_t task;
    uint32_t element;
    uint32_t length;
    uint32_t[0] buf;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

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

struct anon_struct.conflict71a {
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

struct anon_struct.conflict85f {
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict8a6_for__new {
    struct anon_struct.conflict71a _reent;
    struct anon_struct.conflict85f _unused;
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

struct __locale_t {
};

typedef union anon_union.conflict8a6 anon_union.conflict8a6, *Panon_union.conflict8a6;

union anon_union.conflict8a6 {
    struct anon_struct.conflict71a _reent;
    struct anon_struct.conflict85f _unused;
};

typedef uint16_t ke_state_t;

typedef enum ke_msg_status_tag {
    KE_MSG_SAVED=2,
    KE_MSG_NO_FREE=1,
    KE_MSG_CONSUMED=0
} ke_msg_status_tag;

typedef __int32_t int32_t;

typedef int32_t BaseType_t;

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




// WARNING: Removing unreachable block (ram,0x0001007e)

void dump_cfg_entries(void)

{
  char strs [16];
  
  _L0(0);
  FUN_0001005e(0);
  return;
}



void _L0(void)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s1;
  undefined4 uVar1;
  
  _L0();
  while (unaff_s0 < unaff_s1) {
    FUN_00010084(0,unaff_s0);
    _L0(0,*unaff_s0);
    FUN_000100a4(0,*(undefined2 *)(unaff_s0 + 1));
    FUN_000100b4(0,*(undefined2 *)((int)unaff_s0 + 6));
    FUN_000100c4(0,unaff_s0[2]);
    uVar1 = FUN_000100d6(unaff_s0[3],*(undefined *)((int)unaff_s0 + 6));
    FUN_000100e4(0,uVar1);
    FUN_000100f2(0);
    FUN_00010102(0);
    unaff_s0 = unaff_s0 + 7;
  }
  FUN_0001005e(0);
  return;
}



void FUN_0001005e(void)

{
  FUN_0001005e();
  return;
}



void FUN_00010084(undefined4 *param_1)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s1;
  undefined4 uVar1;
  
  do {
    FUN_00010084(param_1);
    param_1 = unaff_s0 + 7;
    _L0(*unaff_s0);
    FUN_000100a4(*(undefined2 *)(unaff_s0 + 1));
    FUN_000100b4(*(undefined2 *)((int)unaff_s0 + 6));
    FUN_000100c4(unaff_s0[2]);
    uVar1 = FUN_000100d6(unaff_s0[3],*(undefined *)((int)unaff_s0 + 6));
    FUN_000100e4(uVar1);
    FUN_000100f2();
    FUN_00010102(0);
    unaff_s0 = param_1;
  } while (param_1 < unaff_s1);
  FUN_0001005e(0);
  return;
}



void _L0(undefined4 param_1)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s1;
  undefined4 uVar1;
  
  while( true ) {
    _L0(param_1);
    FUN_000100a4(*(undefined2 *)(unaff_s0 + -6));
    FUN_000100b4(*(undefined2 *)((int)unaff_s0 - 0x16));
    FUN_000100c4(unaff_s0[-5]);
    uVar1 = FUN_000100d6(unaff_s0[-4],*(undefined *)((int)unaff_s0 - 0x16));
    FUN_000100e4(uVar1);
    FUN_000100f2();
    FUN_00010102(0);
    if (unaff_s1 <= unaff_s0) break;
    FUN_00010084(unaff_s0);
    param_1 = *unaff_s0;
    unaff_s0 = unaff_s0 + 7;
  }
  FUN_0001005e(0);
  return;
}



void FUN_000100a4(uint param_1)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s1;
  undefined4 uVar1;
  
  while( true ) {
    FUN_000100a4(param_1);
    FUN_000100b4(*(undefined2 *)((int)unaff_s0 - 0x16));
    FUN_000100c4(unaff_s0[-5]);
    uVar1 = FUN_000100d6(unaff_s0[-4],*(undefined *)((int)unaff_s0 - 0x16));
    FUN_000100e4(uVar1);
    FUN_000100f2();
    FUN_00010102(0);
    if (unaff_s1 <= unaff_s0) break;
    FUN_00010084(unaff_s0);
    _L0(*unaff_s0);
    param_1 = (uint)*(ushort *)(unaff_s0 + 1);
    unaff_s0 = unaff_s0 + 7;
  }
  FUN_0001005e(0);
  return;
}



void FUN_000100b4(uint param_1)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s1;
  undefined4 uVar1;
  
  while( true ) {
    FUN_000100b4(param_1);
    FUN_000100c4(unaff_s0[-5]);
    uVar1 = FUN_000100d6(unaff_s0[-4],*(undefined *)((int)unaff_s0 - 0x16));
    FUN_000100e4(uVar1);
    FUN_000100f2();
    FUN_00010102(0);
    if (unaff_s1 <= unaff_s0) break;
    FUN_00010084(unaff_s0);
    _L0(*unaff_s0);
    FUN_000100a4(*(undefined2 *)(unaff_s0 + 1));
    param_1 = (uint)*(ushort *)((int)unaff_s0 + 6);
    unaff_s0 = unaff_s0 + 7;
  }
  FUN_0001005e(0);
  return;
}



void FUN_000100c4(undefined4 param_1)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s1;
  undefined4 uVar1;
  
  while( true ) {
    FUN_000100c4(param_1);
    uVar1 = FUN_000100d6(unaff_s0[-4],*(undefined *)((int)unaff_s0 - 0x16));
    FUN_000100e4(uVar1);
    FUN_000100f2();
    FUN_00010102(0);
    if (unaff_s1 <= unaff_s0) break;
    FUN_00010084(unaff_s0);
    _L0(*unaff_s0);
    FUN_000100a4(*(undefined2 *)(unaff_s0 + 1));
    FUN_000100b4(*(undefined2 *)((int)unaff_s0 + 6));
    param_1 = unaff_s0[2];
    unaff_s0 = unaff_s0 + 7;
  }
  FUN_0001005e(0);
  return;
}



void FUN_000100d6(undefined4 param_1,uint param_2)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s1;
  undefined4 uVar1;
  
  while( true ) {
    uVar1 = FUN_000100d6(param_1,param_2);
    FUN_000100e4(uVar1);
    FUN_000100f2();
    FUN_00010102(0);
    if (unaff_s1 <= unaff_s0) break;
    FUN_00010084(unaff_s0);
    _L0(*unaff_s0);
    FUN_000100a4(*(undefined2 *)(unaff_s0 + 1));
    FUN_000100b4(*(undefined2 *)((int)unaff_s0 + 6));
    FUN_000100c4(unaff_s0[2]);
    param_2 = (uint)*(byte *)((int)unaff_s0 + 6);
    param_1 = unaff_s0[3];
    unaff_s0 = unaff_s0 + 7;
  }
  FUN_0001005e(0);
  return;
}



void FUN_000100e4(undefined4 param_1)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s1;
  
  while( true ) {
    FUN_000100e4(param_1);
    FUN_000100f2();
    FUN_00010102(0);
    if (unaff_s1 <= unaff_s0) break;
    FUN_00010084(unaff_s0);
    _L0(*unaff_s0);
    FUN_000100a4(*(undefined2 *)(unaff_s0 + 1));
    FUN_000100b4(*(undefined2 *)((int)unaff_s0 + 6));
    FUN_000100c4(unaff_s0[2]);
    param_1 = FUN_000100d6(unaff_s0[3],*(undefined *)((int)unaff_s0 + 6));
    unaff_s0 = unaff_s0 + 7;
  }
  FUN_0001005e(0);
  return;
}



void FUN_000100f2(void)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s1;
  undefined4 uVar1;
  
  while( true ) {
    FUN_000100f2();
    FUN_00010102(0);
    if (unaff_s1 <= unaff_s0) break;
    FUN_00010084(unaff_s0);
    _L0(*unaff_s0);
    FUN_000100a4(*(undefined2 *)(unaff_s0 + 1));
    FUN_000100b4(*(undefined2 *)((int)unaff_s0 + 6));
    FUN_000100c4(unaff_s0[2]);
    uVar1 = FUN_000100d6(unaff_s0[3],*(undefined *)((int)unaff_s0 + 6));
    FUN_000100e4(uVar1);
    unaff_s0 = unaff_s0 + 7;
  }
  FUN_0001005e(0);
  return;
}



void FUN_00010102(undefined4 param_1)

{
  undefined4 *unaff_s0;
  undefined4 *unaff_s1;
  undefined4 uVar1;
  
  while (FUN_00010102(param_1), unaff_s0 < unaff_s1) {
    FUN_00010084(unaff_s0);
    _L0(*unaff_s0);
    FUN_000100a4(*(undefined2 *)(unaff_s0 + 1));
    FUN_000100b4(*(undefined2 *)((int)unaff_s0 + 6));
    FUN_000100c4(unaff_s0[2]);
    uVar1 = FUN_000100d6(unaff_s0[3],*(undefined *)((int)unaff_s0 + 6));
    FUN_000100e4(uVar1);
    FUN_000100f2();
    param_1 = 0;
    unaff_s0 = unaff_s0 + 7;
  }
  FUN_0001005e(0);
  return;
}



// WARNING: Variable defined which should be unmapped: val

int cfg_start_req_handler
              (ke_msg_id_t msgid,cfg_start_req *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined2 in_register_0000202a;
  undefined *puVar1;
  undefined4 uVar2;
  undefined2 in_register_00002032;
  undefined2 in_register_00002036;
  undefined4 uStack20;
  uint32_t val [1];
  
  if (param->ops == 0) {
    uVar2 = _LVL24(param + 5,param[4].ops,*(undefined2 *)&param[3].ops,&uStack20);
    FUN_00010172(0,uVar2,uStack20);
    FUN_00010184(param[1].ops,param[2].ops,param[3].ops,&uStack20,0);
  }
  else {
    if (2 < param->ops) {
      _L0(CONCAT22(in_register_0000202a,msgid),CONCAT22(in_register_00002032,dest_id),
          CONCAT22(in_register_00002036,src_id));
    }
  }
  puVar1 = (undefined *)
           FUN_0001012e(0x3001,CONCAT22(in_register_00002036,src_id),
                        CONCAT22(in_register_00002032,dest_id),1);
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 FUN_0001012e(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)FUN_0001012e();
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



undefined4 _LVL24(void)

{
  int unaff_s0;
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 in_stack_0000000c;
  
  uVar2 = _LVL24();
  FUN_00010172(0,uVar2,in_stack_0000000c);
  FUN_00010184(*(undefined4 *)(unaff_s0 + 4),*(undefined4 *)(unaff_s0 + 8),
               *(undefined4 *)(unaff_s0 + 0xc),&stack0x0000000c,0);
  puVar1 = (undefined *)FUN_0001012e(0x3001,1);
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 FUN_00010172(void)

{
  int unaff_s0;
  undefined *puVar1;
  
  FUN_00010172();
  FUN_00010184(*(undefined4 *)(unaff_s0 + 4),*(undefined4 *)(unaff_s0 + 8),
               *(undefined4 *)(unaff_s0 + 0xc),&stack0x0000000c,0);
  puVar1 = (undefined *)FUN_0001012e(0x3001,1);
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 FUN_00010184(void)

{
  undefined *puVar1;
  
  FUN_00010184();
  puVar1 = (undefined *)FUN_0001012e(0x3001,1);
  *puVar1 = 0;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  undefined *puVar1;
  
  _L0();
  puVar1 = (undefined *)FUN_0001012e(0x3001,1);
  *puVar1 = 0;
  _L0();
  return 0;
}


