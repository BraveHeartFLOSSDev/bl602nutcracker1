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
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct __sFILE __sFILE, *P__sFILE;

typedef int _ssize_t;

typedef struct _reent _reent, *P_reent;

typedef long _fpos_t;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict92b_for__new anon_union.conflict92b_for__new, *Panon_union.conflict92b_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef long _off_t;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict79f anon_struct.conflict79f, *Panon_struct.conflict79f;

typedef struct anon_struct.conflict8e4 anon_struct.conflict8e4, *Panon_struct.conflict8e4;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef union anon_union.conflict151_for___value anon_union.conflict151_for___value, *Panon_union.conflict151_for___value;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

typedef uint wint_t;

struct anon_struct.conflict8e4 {
    uchar * _nextf[30];
    uint _nmalloc[30];
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

union anon_union.conflict151_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflict151_for___value __value;
};

struct _rand48 {
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict79f {
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

union anon_union.conflict92b_for__new {
    struct anon_struct.conflict79f _reent;
    struct anon_struct.conflict8e4 _unused;
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
    union anon_union.conflict92b_for__new _new;
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

typedef union anon_union.conflict92b anon_union.conflict92b, *Panon_union.conflict92b;

union anon_union.conflict92b {
    struct anon_struct.conflict79f _reent;
    struct anon_struct.conflict8e4 _unused;
};

typedef struct trpc_env_tag trpc_env_tag, *Ptrpc_env_tag;

typedef char int8_t;

typedef short int16_t;

struct trpc_env_tag {
    int8_t power_dbm_max_rf;
    int8_t power_dbm_min_rf;
    int8_t power_dbm_lim_reg;
    undefined field_0x3;
    int16_t channel_freq;
    int8_t temperature;
    int8_t temperature_compensate;
};

typedef union anon_union.conflict151 anon_union.conflict151, *Panon_union.conflict151;

union anon_union.conflict151 {
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef ushort uint16_t;

struct mac_addr {
    uint16_t array[3];
};

typedef enum anon_enum_8.conflict9dc {
    AC_MAX=4,
    TID_1=1,
    TID_0=0,
    TID_3=3,
    AC_VI=2,
    TID_2=2,
    TID_5=5,
    AC_VO=3,
    TID_4=4,
    TID_7=7,
    TID_6=6,
    TID_MGT=8,
    AC_BE=1,
    TID_MAX=9,
    AC_BK=0,
    PHY_FORMATMOD_11N=2,
    PHY_FORMATMOD_11B=0,
    PHY_FORMATMOD_11G=1
} anon_enum_8.conflict9dc;

typedef struct anon_struct.conflictb93 anon_struct.conflictb93, *Panon_struct.conflictb93;

typedef ulong uint32_t;

struct anon_struct.conflictb93 {
    uint32_t vbcore;
    uint32_t iet;
    uint32_t vbcore_11n;
    uint32_t iet_11n;
    uint32_t vbcore_11g;
    uint32_t iet_11g;
    uint32_t vbcore_11b;
    uint32_t iet_11b;
    uint32_t lo_fbdv_halfstep_en;
    uint32_t lo_fbdv_halfstep_en_tx;
    uint32_t lo_fbdv_halfstep_en_rx;
    uint32_t clkpll_reset_postdiv;
    uint32_t clkpll_dither_sel;
};

typedef struct regs_to_opti regs_to_opti, *Pregs_to_opti;

struct regs_to_opti {
    uint32_t vbcore;
    uint32_t iet;
    uint32_t vbcore_11n;
    uint32_t iet_11n;
    uint32_t vbcore_11g;
    uint32_t iet_11g;
    uint32_t vbcore_11b;
    uint32_t iet_11b;
    uint32_t lo_fbdv_halfstep_en;
    uint32_t lo_fbdv_halfstep_en_tx;
    uint32_t lo_fbdv_halfstep_en_rx;
    uint32_t clkpll_reset_postdiv;
    uint32_t clkpll_dither_sel;
};

typedef struct notch_param notch_param, *Pnotch_param;

typedef long int32_t;

struct notch_param {
    uint32_t notch_en;
    int32_t spur_freq;
};

typedef struct tx_pwr_index tx_pwr_index, *Ptx_pwr_index;

struct tx_pwr_index {
    uint32_t index;
    int32_t dvga;
};

typedef struct anon_struct.conflictb05 anon_struct.conflictb05, *Panon_struct.conflictb05;

struct anon_struct.conflictb05 {
    uint32_t index;
    int32_t dvga;
};

typedef uchar uint8_t;

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




void trpc_update_power(int8_t (*power_rate_table) [8])

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int8_t *piVar5;
  
  iVar4 = 0;
  iVar2 = 0;
  do {
    iVar3 = 0;
    do {
      iVar1 = iVar3 + iVar2;
      piVar5 = (int8_t *)(iVar4 + iVar3);
      iVar3 = iVar3 + 1;
      *piVar5 = (*power_rate_table)[iVar1];
    } while (iVar3 != 8);
    iVar2 = iVar2 + 8;
    iVar4 = iVar4 + 8;
  } while (iVar2 != 0x18);
  return;
}



void trpc_power_get(int8_t *power_rate_table)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void trpc_update_power_11b(int8_t *power_rate_table)

{
  int8_t *piVar1;
  int8_t *piVar2;
  
  piVar1 = (int8_t *)0x0;
  do {
    piVar2 = piVar1 + 1;
    *piVar1 = power_rate_table[(int)piVar1];
    piVar1 = piVar2;
  } while (piVar2 != &DAT_00000004);
  return;
}



void trpc_update_power_11g(int8_t *power_rate_table)

{
  int8_t *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    piVar1 = power_rate_table + iVar2;
    iVar2 = iVar2 + 1;
    *(int8_t *)(iVar3 + 8) = *piVar1;
    iVar3 = iVar3 + 1;
  } while (iVar2 != 8);
  return;
}



void trpc_update_power_11n(int8_t *power_rate_table)

{
  int8_t *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  do {
    piVar1 = power_rate_table + iVar2;
    iVar2 = iVar2 + 1;
    *(int8_t *)(iVar3 + 0x10) = *piVar1;
    iVar3 = iVar3 + 1;
  } while (iVar2 != 8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void trpc_init(void)

{
  _DAT_00000004 = 0x98a;
  uRam00000000 = _L0();
  uRam00000001 = _L0();
  uRam00000002 = 0x1e;
  _DAT_00000006 = 0x19;
  return;
}



void _L0(void)

{
  undefined *unaff_s0;
  undefined uVar1;
  
  uVar1 = _L0();
  *unaff_s0 = uVar1;
  uVar1 = _L0();
  unaff_s0[2] = 0x1e;
  unaff_s0[1] = uVar1;
  *(undefined2 *)(unaff_s0 + 6) = 0x19;
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined uVar1;
  
  uVar1 = _L0();
  *(undefined *)(unaff_s0 + 2) = 0x1e;
  *(undefined *)(unaff_s0 + 1) = uVar1;
  *(undefined2 *)(unaff_s0 + 6) = 0x19;
  return;
}



int8_t trpc_get_rf_max_power(void)

{
  return iRam00000000;
}



int8_t trpc_get_rf_min_power(void)

{
  return iRam00000001;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint8_t trpc_get_power_idx(uint8_t formatmod,uint8_t mcs,int8_t pwr_dbm)

{
  undefined3 in_register_00002029;
  uint uVar1;
  uint uVar2;
  undefined3 in_register_0000202d;
  int iVar3;
  undefined3 in_register_00002031;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = CONCAT31(in_register_00002029,formatmod);
  uVar5 = 2;
  if (uVar1 < 3) {
    uVar5 = (uint)formatmod;
  }
  iVar7 = 3;
  if (uVar1 != 0) {
    iVar7 = 7;
  }
  uVar2 = SEXT14((char)uRam00000000);
  uVar6 = (uint)bRam00000002;
  if ((int)uVar2 < (int)(char)bRam00000002) {
    uVar6 = uVar2;
  }
  if ((int)CONCAT31(in_register_00002031,pwr_dbm) < (int)(char)uVar6) {
    uVar6 = CONCAT31(in_register_00002031,pwr_dbm);
  }
  iVar3 = CONCAT31(in_register_0000202d,mcs);
  if (iVar7 < CONCAT31(in_register_0000202d,mcs)) {
    iVar3 = iVar7;
  }
  cVar4 = *(char *)(iVar3 + uVar5 * 8);
  if ((char)uVar6 < cVar4) {
    cVar4 = (char)uVar6;
  }
  if (uRam00000000._1_1_ < cVar4) {
    uRam00000000._1_1_ = cVar4;
  }
  FUN_000101a4((int)(uRam00000000._1_1_ * -0x1fe + uVar2) / 0x200);
  FUN_000101b8(_uRam00000000,_DAT_00000004);
  uVar5 = _L0();
  iVar7 = 3;
  if (uVar1 != 0) {
    iVar7 = 0;
  }
  uVar5 = iVar7 + (uVar5 & 0xff) & 0xff;
  if (0xf < uVar5) {
    uVar5 = 0xf;
  }
  return (uint8_t)(uVar5 << 2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_000101a4(void)

{
  int unaff_s0;
  uint uVar1;
  int iVar2;
  
  FUN_000101a4();
  FUN_000101b8(uRam00000000,_DAT_00000004);
  uVar1 = _L0();
  iVar2 = 3;
  if (unaff_s0 != 0) {
    iVar2 = 0;
  }
  uVar1 = iVar2 + (uVar1 & 0xff) & 0xff;
  if (0xf < uVar1) {
    uVar1 = 0xf;
  }
  return (uVar1 & 0x3f) << 2;
}



int FUN_000101b8(void)

{
  int unaff_s0;
  uint uVar1;
  int iVar2;
  
  FUN_000101b8();
  uVar1 = _L0();
  iVar2 = 3;
  if (unaff_s0 != 0) {
    iVar2 = 0;
  }
  uVar1 = iVar2 + (uVar1 & 0xff) & 0xff;
  if (0xf < uVar1) {
    uVar1 = 0xf;
  }
  return (uVar1 & 0x3f) << 2;
}



int _L0(void)

{
  int unaff_s0;
  uint uVar1;
  int iVar2;
  
  uVar1 = _L0();
  iVar2 = 3;
  if (unaff_s0 != 0) {
    iVar2 = 0;
  }
  uVar1 = iVar2 + (uVar1 & 0xff) & 0xff;
  if (0xf < uVar1) {
    uVar1 = 0xf;
  }
  return (uVar1 & 0x3f) << 2;
}



uint8_t trpc_get_default_power_idx(uint8_t formatmod,uint8_t mcs)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void trpc_update_vs_channel(int8_t channel_MHz)

{
  undefined in_register_00002029;
  
  _DAT_00000004 = CONCAT11(in_register_00002029,channel_MHz);
  uRam00000000 = _L0();
  uRam00000001 = _L0();
  return;
}



void _L0(void)

{
  undefined *unaff_s0;
  undefined uVar1;
  
  uVar1 = _L0();
  *unaff_s0 = uVar1;
  uVar1 = _L0();
  unaff_s0[1] = uVar1;
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined uVar1;
  
  uVar1 = _L0();
  *(undefined *)(unaff_s0 + 1) = uVar1;
  return;
}



void trpc_update_vs_temperature(int8_t temperature)

{
  DAT_00000006 = temperature;
  uRam00000000 = _L0();
  uRam00000001 = _L0();
  return;
}



void _L0(void)

{
  undefined *unaff_s0;
  undefined uVar1;
  
  uVar1 = _L0();
  *unaff_s0 = uVar1;
  uVar1 = _L0();
  unaff_s0[1] = uVar1;
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined uVar1;
  
  uVar1 = _L0();
  *(undefined *)(unaff_s0 + 1) = uVar1;
  return;
}


