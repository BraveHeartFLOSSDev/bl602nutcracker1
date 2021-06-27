typedef unsigned char   undefined;

typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;
typedef unsigned long long    undefined6;
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef long __int32_t;

typedef ulong __uint32_t;

typedef ushort __uint16_t;

typedef short __int16_t;

typedef uchar __uint8_t;

typedef char __int8_t;

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflicte4_for___value anon_union.conflicte4_for___value, *Panon_union.conflicte4_for___value;

typedef uint wint_t;

union anon_union.conflicte4_for___value { // DWARF DIE: e4
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: 116
    int __count;
    union anon_union.conflicte4_for___value __value;
};

typedef union anon_union.conflicte4 anon_union.conflicte4, *Panon_union.conflicte4;

union anon_union.conflicte4 { // DWARF DIE: e4
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct regs_to_opti regs_to_opti, *Pregs_to_opti;

typedef __uint32_t uint32_t;

struct regs_to_opti { // DWARF DIE: a2c
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

typedef struct anon_struct.conflict9e5 anon_struct.conflict9e5, *Panon_struct.conflict9e5;

typedef __int32_t int32_t;

struct anon_struct.conflict9e5 { // DWARF DIE: 9e5
    uint32_t notch_en;
    int32_t spur_freq;
};

typedef struct notch_param notch_param, *Pnotch_param;

struct notch_param { // DWARF DIE: 9e5
    uint32_t notch_en;
    int32_t spur_freq;
};

typedef struct tx_pwr_index tx_pwr_index, *Ptx_pwr_index;

struct tx_pwr_index { // DWARF DIE: 99e
    uint32_t index;
    int32_t dvga;
};

typedef struct anon_struct.conflict99e anon_struct.conflict99e, *Panon_struct.conflict99e;

struct anon_struct.conflict99e { // DWARF DIE: 99e
    uint32_t index;
    int32_t dvga;
};

typedef enum anon_enum_8.conflictb02 {
    E_RF_BRANCH_I=0,
    E_RF_BRANCH_Q=1,
    E_RF_CHANNEL_2404M=0,
    E_RF_CHANNEL_2408M=1,
    E_RF_CHANNEL_2412M=2,
    E_RF_CHANNEL_2416M=3,
    E_RF_CHANNEL_2420M=4,
    E_RF_CHANNEL_2424M=5,
    E_RF_CHANNEL_2428M=6,
    E_RF_CHANNEL_2432M=7,
    E_RF_CHANNEL_2436M=8,
    E_RF_CHANNEL_2440M=9,
    E_RF_CHANNEL_2444M=10,
    E_RF_CHANNEL_2448M=11,
    E_RF_CHANNEL_2452M=12,
    E_RF_CHANNEL_2456M=13,
    E_RF_CHANNEL_2460M=14,
    E_RF_CHANNEL_2464M=15,
    E_RF_CHANNEL_2468M=16,
    E_RF_CHANNEL_2472M=17,
    E_RF_CHANNEL_2476M=18,
    E_RF_CHANNEL_2480M=19,
    E_RF_CHANNEL_2484M=20,
    E_RF_CHANNEL_NUM=21,
    E_RF_GAIN=2,
    E_RF_MODE_11B=0,
    E_RF_MODE_11G=1,
    E_RF_MODE_11N=2,
    E_RF_MODE_IDLE=0,
    E_RF_MODE_LO_ACAL=6,
    E_RF_MODE_LO_FCAL=7,
    E_RF_MODE_RCCAL=4,
    E_RF_MODE_ROSCAL=3,
    E_RF_MODE_RX=2,
    E_RF_MODE_TX=1,
    E_RF_MODE_TXCAL=5,
    E_RF_PHASE=3,
    E_RF_RXCAL_GAIN_CNT=4,
    E_RF_TXCAL_GAIN_CNT=8,
    E_RF_TXPWR_TBL_CNT=16,
    E_RF_XTAL_24M=0,
    E_RF_XTAL_26M=1,
    E_RF_XTAL_32M=2,
    E_RF_XTAL_38M4=3,
    E_RF_XTAL_40M=4,
    E_RF_XTAL_52M=5
} anon_enum_8.conflictb02;

typedef struct anon_struct.conflicta2c anon_struct.conflicta2c, *Panon_struct.conflicta2c;

struct anon_struct.conflicta2c { // DWARF DIE: a2c
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

typedef struct rf_calib4_tag rf_calib4_tag, *Prf_calib4_tag;

struct rf_calib4_tag { // DWARF DIE: e8d
    uint32_t tosdac_i:6;
    uint32_t tosdac_q:6;
    uint32_t tx_iq_gain_comp:11;
    undefined field_0x3;
    uint32_t tx_iq_phase_comp:10;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct rf_calib_data_tag rf_calib_data_tag, *Prf_calib_data_tag;

typedef struct rf_calib1_tag rf_calib1_tag, *Prf_calib1_tag;

typedef struct rf_calib2_tag rf_calib2_tag, *Prf_calib2_tag;

typedef struct rf_calib3_tag rf_calib3_tag, *Prf_calib3_tag;

typedef __uint16_t uint16_t;

struct rf_calib3_tag { // DWARF DIE: e37
    uint32_t rosdac_i:6;
    uint32_t rosdac_q:6;
    uint32_t rx_iq_gain_comp:11;
    undefined field_0x3;
    uint32_t rx_iq_phase_comp:10;
    undefined field_0x6;
    undefined field_0x7;
};

struct rf_calib2_tag { // DWARF DIE: e01
    uint16_t fcal:8;
    uint16_t acal:5;
};

struct rf_calib1_tag { // DWARF DIE: cab
    uint32_t gpadc_oscode:12;
    uint32_t rx_offset_i:10;
    uint32_t rx_offset_q:10;
    uint32_t rbb_cap1_fc_i:6;
    uint32_t rbb_cap1_fc_q:6;
    uint32_t rbb_cap2_fc_i:6;
    uint32_t rbb_cap2_fc_q:6;
    undefined field_0x7;
    uint32_t tx_dc_comp_i:12;
    uint32_t tx_dc_comp_q:12;
    uint32_t tmx_cs:3;
    uint32_t txpwr_att_rec:3;
    uint32_t pa_pwrmx_osdac:4;
    uint32_t tmx_csh:3;
    uint32_t tmx_csl:3;
    uint32_t tsen_refcode_rfcal:12;
    undefined field_0xf;
    uint32_t tsen_refcode_corner:12;
    uint32_t rc32k_code_fr_ext:10;
    uint32_t rc32m_code_fr_ext:8;
    uint32_t saradc_oscode:10;
    uint16_t fcal_4osmx:4;
    undefined field_0x16;
    undefined field_0x17;
};

struct rf_calib_data_tag { // DWARF DIE: ee3
    uint32_t inited;
    struct rf_calib1_tag cal;
    struct rf_calib2_tag lo[21];
    undefined field_0x46;
    undefined field_0x47;
    struct rf_calib3_tag rxcal[4];
    struct rf_calib4_tag txcal[8];
};

typedef struct anon_struct.conflictee3 anon_struct.conflictee3, *Panon_struct.conflictee3;

struct anon_struct.conflictee3 { // DWARF DIE: ee3
    uint32_t inited;
    struct rf_calib1_tag cal;
    struct rf_calib2_tag lo[21];
    undefined field_0x46;
    undefined field_0x47;
    struct rf_calib3_tag rxcal[4];
    struct rf_calib4_tag txcal[8];
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8be_for__new anon_union.conflict8be_for__new, *Panon_union.conflict8be_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict732 anon_struct.conflict732, *Panon_struct.conflict732;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

struct __tm { // DWARF DIE: 1dc
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

struct _rand48 { // DWARF DIE: 6e9
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct anon_struct.conflict732 { // DWARF DIE: 732
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

union anon_union.conflict8be_for__new { // DWARF DIE: 8be
    struct anon_struct.conflict732 _reent;
    struct anon_struct.conflict732 _unused;
};

struct _on_exit_args { // DWARF DIE: 25f
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 2b4
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct _Bigint { // DWARF DIE: 16c
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _glue { // DWARF DIE: 6a4
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct __sbuf { // DWARF DIE: 314
    uchar * _base;
    int _size;
};

struct __sFILE { // DWARF DIE: 342
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

struct _reent { // DWARF DIE: 4ae
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
    union anon_union.conflict8be_for__new _new;
    undefined field_0x128;
    undefined field_0x129;
    undefined field_0x12a;
    undefined field_0x12b;
    undefined field_0x12c;
    undefined field_0x12d;
    undefined field_0x12e;
    undefined field_0x12f;
    undefined field_0x130;
    undefined field_0x131;
    undefined field_0x132;
    undefined field_0x133;
    undefined field_0x134;
    undefined field_0x135;
    undefined field_0x136;
    undefined field_0x137;
    undefined field_0x138;
    undefined field_0x139;
    undefined field_0x13a;
    undefined field_0x13b;
    undefined field_0x13c;
    undefined field_0x13d;
    undefined field_0x13e;
    undefined field_0x13f;
    undefined field_0x140;
    undefined field_0x141;
    undefined field_0x142;
    undefined field_0x143;
    undefined field_0x144;
    undefined field_0x145;
    undefined field_0x146;
    undefined field_0x147;
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

struct __locale_t { // DWARF DIE: 8f3
};

typedef union anon_union.conflict8be anon_union.conflict8be, *Panon_union.conflict8be;

union anon_union.conflict8be { // DWARF DIE: 8be
    struct anon_struct.conflict732 _reent;
    struct anon_struct.conflict732 _unused;
    undefined1 field2[240]; // Automatically generated padding to match DWARF declared size
};

typedef __int16_t int16_t;

typedef __int8_t int8_t;

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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2d54

void rf_pri_set_gain_table_regs(void)

{
  _DAT_40001118 =
       ((_DAT_00000158 << 0x18 |
        (_DAT_0000015c << 0x10 |
        (_DAT_00000188 << 0xe |
        (_DAT_0000018c << 0xc |
        (_DAT_00000190 << 8 | (_DAT_40001118 & 0xffffffe0 | _DAT_00000194) & 0xfffff8ff) &
        0xffffcfff) & 0xffff3fff) & 0xffe0ffff) & 0xf8ffffff) & 0xcfffffff | _DAT_00000154 << 0x1c)
       & 0x3fffffff | _DAT_00000150 << 0x1e;
  _DAT_4000111c =
       (_DAT_000000e4 << 0x1c |
       (_DAT_000000e8 << 0x18 |
       (_DAT_000000ec << 0x10 |
       (_DAT_00000118 << 0xe |
       (_DAT_0000011c << 0xc |
       (_DAT_00000120 << 8 | (_DAT_4000111c & 0xffffffe0 | _DAT_00000124) & 0xfffff8ff) & 0xffffcfff
       ) & 0xffff3fff) & 0xffe0ffff) & 0xf8ffffff) & 0xcfffffff) & 0x3fffffff |
       _DAT_000000e0 << 0x1e;
  _DAT_40001120 =
       _DAT_00000070 << 0x1e |
       (_DAT_00000074 << 0x1c |
       (_DAT_00000078 << 0x18 |
       (_DAT_0000007c << 0x10 |
       (_DAT_000000a8 << 0xe |
       (_DAT_000000ac << 0xc |
       (_DAT_000000b0 << 8 | (_DAT_40001120 & 0xffffffe0 | _DAT_000000b4) & 0xfffff8ff) & 0xffffcfff
       ) & 0xffff3fff) & 0xffe0ffff) & 0xf8ffffff) & 0xcfffffff) & 0x3fffffff;
  _DAT_40001124 =
       (_DAT_00000004 << 0x1c |
       ((_DAT_0000000c << 0x10 |
        (_DAT_00000038 << 0xe |
        ((_DAT_00000040 << 8 | (_DAT_40001124 & 0xffffffe0 | _DAT_00000044) & 0xfffff8ff) &
         0xffffcfff | _DAT_0000003c << 0xc) & 0xffff3fff) & 0xffe0ffff) & 0xf8ffffff |
       _DAT_00000008 << 0x18) & 0xcfffffff) & 0x3fffffff | iRam00000000 << 0x1e;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 27c7

void rf_pri_manu_pu(uint32_t mode)

{
  int iVar1;
  uint uVar2;
  
  if (mode == 5) {
    _DAT_40001030 &= 0xcefff8ff;
    iVar1 = -0x39009000;
  }
  else {
    if (5 < mode) {
      if (7 < mode) goto _L0;
      _DAT_40001030 &= 0x8f090ff;
      uVar2 = 0xf00000;
      goto _L0;
    }
    if (mode != 4) {
_L0:
      _DAT_40001004 = _DAT_40001004 & 0xfffffffd;
      _DAT_4000100c = 0;
      _DAT_40001030 = _DAT_40001030 & 0x2df0feff | 0x25f06e00;
      return;
    }
    _DAT_40001030 &= 0x2cf8f8ff;
    iVar1 = 0x24f87000;
  }
  uVar2 = iVar1 - 0x800;
_L0:
  _DAT_40001004 = _DAT_40001004 & 0xfffffffd;
  _DAT_4000100c = 0;
  _DAT_40001030 = _DAT_40001030 | uVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 277c

void rf_pri_save_state_for_cal(void)

{
  uRam00000000 = _DAT_400010a4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2769

void rf_pri_restore_state_for_cal(void)

{
  _DAT_40001004 = uRam00000000;
  _DAT_4000100c = uRam00000000;
  _DAT_4000101c = uRam00000000;
  _DAT_40001030 = uRam00000000;
  _DAT_40001048 = uRam00000000;
  _DAT_40001058 = uRam00000000;
  _DAT_40001064 = uRam00000000;
  _DAT_40001070 = uRam00000000;
  _DAT_40001084 = uRam00000000;
  _DAT_4000108c = uRam00000000;
  _DAT_400010a4 = uRam00000000;
  _DAT_400010b8 = uRam00000000;
  _DAT_400010c0 = uRam00000000;
  _DAT_400010c4 = uRam00000000;
  _DAT_400010f0 = uRam00000000;
  _DAT_4000120c = uRam00000000;
  _DAT_40001214 = uRam00000000;
  _DAT_40001218 = uRam00000000;
  _DAT_40001220 = uRam00000000;
  _DAT_4000123c = uRam00000000;
  _DAT_40001240 = uRam00000000;
  _DAT_40001244 = uRam00000000;
  _DAT_40001600 = uRam00000000;
  _DAT_4000160c = uRam00000000;
  _DAT_40001618 = uRam00000000;
  _DAT_4000161c = uRam00000000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 26fd

void rf_pri_singen_start(void)

{
  _DAT_4000120c = _DAT_4000120c & 0x7fffffff | 0x80000000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2678

uint32_t rf_pri_pm_pwr(void)

{
  int iVar1;
  int iVar2;
  
  do {
  } while (-1 < (int)((_DAT_40001618 & 0xdfefffff | 0x20100000) << 3));
  iVar1 = (_DAT_40001620 << 7) >> 0x10;
  iVar2 = (_DAT_40001624 << 7) >> 0x10;
  _DAT_40001618 = _DAT_40001618 & 0xdfefffff;
  return iVar1 * iVar1 + iVar2 * iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 25a2

void rf_pri_start_txdfe(void)

{
  _DAT_40001220 = _DAT_40001220 & 0xffffe67f | 0x1182;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 24ef

int32_t rf_pri_pm_pwr_avg(uint32_t iq,uint32_t acc_len)

{
  int iVar1;
  
  do {
  } while (-1 < (int)((_DAT_40001618 & 0xdfefffff) << 3));
  iVar1 = _DAT_40001624;
  if (iq != 0) {
    iVar1 = _DAT_40001620;
  }
  _DAT_40001618 = _DAT_40001618 & 0xdfefffff;
  _DAT_4000161c = acc_len << 0x10 | _DAT_4000161c & 0xffff;
  return (iVar1 << 7) >> 7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 22b5

void rf_pri_txcal_config_hw(void)

{
  _DAT_40001180 =
       (*(uint *)(iRam00000000 + 0x70) >> 6 & 0x3f) << 0x18 |
       (*(uint *)(iRam00000000 + 0x68) >> 6 & 0x3f) << 8 |
       *(uint *)(iRam00000000 + 0x68) & 0x3f | _DAT_40001180 & 0xc0c0c0c0 |
       (*(uint *)(iRam00000000 + 0x70) & 0x3f) << 0x10;
  _DAT_40001184 =
       (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x18 |
       (*(uint *)(iRam00000000 + 0x78) >> 6 & 0x3f) << 8 |
       *(uint *)(iRam00000000 + 0x78) & 0x3f | _DAT_40001184 & 0xc0c0c0c0 |
       (*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x10;
  _DAT_40001188 =
       (*(uint *)(iRam00000000 + 0x90) >> 6 & 0x3f) << 0x18 |
       (*(uint *)(iRam00000000 + 0x88) >> 6 & 0x3f) << 8 |
       *(uint *)(iRam00000000 + 0x88) & 0x3f | _DAT_40001188 & 0xc0c0c0c0 |
       (*(uint *)(iRam00000000 + 0x90) & 0x3f) << 0x10;
  _DAT_4000118c =
       (*(uint *)(iRam00000000 + 0xa0) >> 6 & 0x3f) << 0x18 |
       (*(uint *)(iRam00000000 + 0x98) >> 6 & 0x3f) << 8 |
       *(uint *)(iRam00000000 + 0x98) & 0x3f | _DAT_4000118c & 0xc0c0c0c0 |
       (*(uint *)(iRam00000000 + 0xa0) & 0x3f) << 0x10;
  _DAT_40001190 =
       (*(uint *)(iRam00000000 + 0x68) >> 0xc & 0x7ff) << 0x10 | _DAT_40001190 & 0xf800fc00 |
       *(uint *)(iRam00000000 + 0x6c) & 0x3ff;
  _DAT_40001194 =
       (*(uint *)(iRam00000000 + 0x70) >> 0xc & 0x7ff) << 0x10 | _DAT_40001194 & 0xf800fc00 |
       *(uint *)(iRam00000000 + 0x74) & 0x3ff;
  _DAT_40001198 =
       (*(uint *)(iRam00000000 + 0x78) >> 0xc & 0x7ff) << 0x10 | _DAT_40001198 & 0xf800fc00 |
       *(uint *)(iRam00000000 + 0x7c) & 0x3ff;
  _DAT_4000119c =
       (*(uint *)(iRam00000000 + 0x80) >> 0xc & 0x7ff) << 0x10 | _DAT_4000119c & 0xf800fc00 |
       *(uint *)(iRam00000000 + 0x84) & 0x3ff;
  _DAT_400011a0 =
       (*(uint *)(iRam00000000 + 0x88) >> 0xc & 0x7ff) << 0x10 | _DAT_400011a0 & 0xf800fc00 |
       *(uint *)(iRam00000000 + 0x8c) & 0x3ff;
  _DAT_400011a4 =
       (*(uint *)(iRam00000000 + 0x90) >> 0xc & 0x7ff) << 0x10 | _DAT_400011a4 & 0xf800fc00 |
       *(uint *)(iRam00000000 + 0x94) & 0x3ff;
  _DAT_400011a8 =
       (*(uint *)(iRam00000000 + 0x98) >> 0xc & 0x7ff) << 0x10 | _DAT_400011a8 & 0xf800fc00 |
       *(uint *)(iRam00000000 + 0x9c) & 0x3ff;
  _DAT_400011ac =
       (*(uint *)(iRam00000000 + 0xa0) >> 0xc & 0x7ff) << 0x10 | _DAT_400011ac & 0xf800fc00 |
       *(uint *)(iRam00000000 + 0xa4) & 0x3ff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2000

uint16_t rf_pri_fcal_meas(uint32_t cw)

{
  _DAT_400010a0 = cw | _DAT_400010a0 & 0xffffff00;
  _LVL217();
  do {
  } while (-1 < (int)((_DAT_400010ac | 0x10) << 0xb));
  _DAT_400010ac = _DAT_400010ac & 0xffffffef;
  return (uint16_t)((uint)_DAT_400010a8 >> 0x10);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint _LVL217(void)

{
  int unaff_s0;
  
  _LVL217();
  *(uint *)(unaff_s0 + 0xac) = *(uint *)(unaff_s0 + 0xac) | 0x10;
  do {
  } while (-1 < (int)(_DAT_400010ac << 0xb));
  _DAT_400010ac = _DAT_400010ac & 0xffffffef;
  return _DAT_400010a8 >> 0x10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2db3

void rf_pri_rccal_config(uint32_t rbb_fc,uint32_t iq)

{
  _DAT_40001080 = rbb_fc << 8 | rbb_fc << 0x18 | _DAT_40001080 & 0xc0ffc0ff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2de5

void rf_pri_rccal_config(uint32_t iq,uint32_t rbb_fc)

{
  if (iq == 0) {
    _DAT_40001080 = rbb_fc << 0x10 | _DAT_40001080 & 0xffc0ffc0 | rbb_fc;
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2e2c

void rf_pri_txcal_config(uint32_t param_ind,int32_t val)

{
  uint uVar1;
  
  if (param_ind == 2) {
    _DAT_40001600 = val << 0xc | _DAT_40001600 & 0xff800fff | 0x800000;
    return;
  }
  if (param_ind != 3) {
    if (param_ind == 0) {
      _DAT_40001070 &= 0xc0ffffff;
      uVar1 = val << 0x18;
    }
    else {
      if (param_ind != 1) {
        return;
      }
      _DAT_40001070 &= 0xffc0ffff;
      uVar1 = val << 0x10;
    }
    _DAT_40001070 = uVar1 | _DAT_40001070;
    return;
  }
  if (val < 0) {
    val += 0x400;
  }
  _DAT_40001600 = val | _DAT_40001600 & 0xfffffc00 | 0x400;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 22de

int32_t rf_pri_txcal_search_core
                  (uint32_t param_ind,uint32_t center,uint32_t delta,uint32_t meas_freq)

{
  uint32_t uVar1;
  uint32_t uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  _L0();
  FUN_000109b8();
  _DAT_40001618 = meas_freq << 10 | _DAT_40001618 & 0xfff00000;
  uVar3 = _L0();
  do {
    uVar1 = center - delta;
    uVar2 = center + delta;
    if (param_ind < 2) {
      if ((int)uVar1 < 0) {
        uVar1 = 0;
      }
      if (0x3f < (int)uVar2) {
        uVar2 = 0x3f;
      }
    }
    else {
      if (param_ind == 2) {
        if ((int)uVar1 < 0) {
          uVar1 = 0;
        }
        if (0x7ff < (int)uVar2) {
          uVar2 = 0x7ff;
        }
      }
      else {
        if ((int)uVar1 < -0x200) {
          uVar1 = 0xfffffe00;
        }
        if (0x1ff < (int)uVar2) {
          uVar2 = 0x1ff;
        }
      }
    }
    FUN_00010a14(uVar1);
    delta = (int)delta >> 1;
    _L0(10);
    uVar4 = _L0();
    if (uVar3 <= uVar4) {
      _LVL285(uVar2);
      FUN_00010a44(10);
      uVar5 = _L0();
      uVar1 = center;
      uVar4 = uVar3;
      if (uVar5 < uVar3) {
        uVar1 = uVar2;
        uVar4 = uVar5;
      }
    }
    center = uVar1;
    uVar3 = uVar4;
  } while (delta != 0);
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int _L0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s10;
  int in_stack_0000000c;
  
  _L0();
  FUN_000109b8();
  _DAT_40001618 = in_stack_0000000c << 10 | _DAT_40001618 & 0xfff00000;
  uVar3 = _L0();
  do {
    iVar1 = unaff_s2 - unaff_s10;
    iVar2 = unaff_s2 + unaff_s10;
    if (unaff_s3 < 2) {
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      if (0x3f < iVar2) {
        iVar2 = 0x3f;
      }
    }
    else {
      if (unaff_s3 == 2) {
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        if (0x7ff < iVar2) {
          iVar2 = 0x7ff;
        }
      }
      else {
        if (iVar1 < -0x200) {
          iVar1 = -0x200;
        }
        if (0x1ff < iVar2) {
          iVar2 = 0x1ff;
        }
      }
    }
    FUN_00010a14(iVar1);
    unaff_s10 >>= 1;
    _L0(10);
    uVar4 = _L0();
    if (uVar3 <= uVar4) {
      _LVL285(iVar2);
      FUN_00010a44(10);
      uVar5 = _L0();
      iVar1 = unaff_s2;
      uVar4 = uVar3;
      if (uVar5 < uVar3) {
        iVar1 = iVar2;
        uVar4 = uVar5;
      }
    }
    unaff_s2 = iVar1;
    uVar3 = uVar4;
  } while (unaff_s10 != 0);
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int FUN_000109b8(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s10;
  int in_stack_0000000c;
  
  FUN_000109b8();
  _DAT_40001618 = in_stack_0000000c << 10 | _DAT_40001618 & 0xfff00000;
  uVar3 = _L0();
  do {
    iVar1 = unaff_s2 - unaff_s10;
    iVar2 = unaff_s2 + unaff_s10;
    if (unaff_s3 < 2) {
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      if (0x3f < iVar2) {
        iVar2 = 0x3f;
      }
    }
    else {
      if (unaff_s3 == 2) {
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        if (0x7ff < iVar2) {
          iVar2 = 0x7ff;
        }
      }
      else {
        if (iVar1 < -0x200) {
          iVar1 = -0x200;
        }
        if (0x1ff < iVar2) {
          iVar2 = 0x1ff;
        }
      }
    }
    FUN_00010a14(iVar1);
    unaff_s10 >>= 1;
    _L0(10);
    uVar4 = _L0();
    if (uVar3 <= uVar4) {
      _LVL285(iVar2);
      FUN_00010a44(10);
      uVar5 = _L0();
      iVar1 = unaff_s2;
      uVar4 = uVar3;
      if (uVar5 < uVar3) {
        iVar1 = iVar2;
        uVar4 = uVar5;
      }
    }
    unaff_s2 = iVar1;
    uVar3 = uVar4;
  } while (unaff_s10 != 0);
  return iVar1;
}



int _L0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s10;
  
  uVar3 = _L0();
  do {
    iVar1 = unaff_s2 - unaff_s10;
    iVar2 = unaff_s2 + unaff_s10;
    if (unaff_s3 < 2) {
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      if (0x3f < iVar2) {
        iVar2 = 0x3f;
      }
    }
    else {
      if (unaff_s3 == 2) {
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        if (0x7ff < iVar2) {
          iVar2 = 0x7ff;
        }
      }
      else {
        if (iVar1 < -0x200) {
          iVar1 = -0x200;
        }
        if (0x1ff < iVar2) {
          iVar2 = 0x1ff;
        }
      }
    }
    FUN_00010a14(iVar1);
    unaff_s10 >>= 1;
    _L0(10);
    uVar4 = _L0();
    if (uVar3 <= uVar4) {
      _LVL285(iVar2);
      FUN_00010a44(10);
      uVar5 = _L0();
      iVar1 = unaff_s2;
      uVar4 = uVar3;
      if (uVar5 < uVar3) {
        iVar1 = iVar2;
        uVar4 = uVar5;
      }
    }
    unaff_s2 = iVar1;
    uVar3 = uVar4;
  } while (unaff_s10 != 0);
  return iVar1;
}



int FUN_00010a14(int param_1)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  uint uVar2;
  int unaff_s2;
  int iVar3;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  int unaff_s10;
  uint unaff_s11;
  
  while( true ) {
    FUN_00010a14(param_1);
    unaff_s10 >>= 1;
    _L0(10);
    uVar1 = _L0();
    iVar3 = unaff_s0;
    if (unaff_s11 <= uVar1) {
      _LVL285(unaff_s1);
      FUN_00010a44(10);
      uVar2 = _L0();
      iVar3 = unaff_s2;
      uVar1 = unaff_s11;
      if (uVar2 < unaff_s11) {
        iVar3 = unaff_s1;
        uVar1 = uVar2;
      }
    }
    if (unaff_s10 == 0) break;
    unaff_s0 = iVar3 - unaff_s10;
    unaff_s1 = iVar3 + unaff_s10;
    unaff_s2 = iVar3;
    unaff_s11 = uVar1;
    if (unaff_s4 < unaff_s3) {
      if (unaff_s3 == unaff_s5) {
        if (unaff_s0 < 0) {
          unaff_s0 = 0;
        }
        param_1 = unaff_s0;
        if (unaff_s8 < unaff_s1) {
          unaff_s1 = 0x7ff;
        }
      }
      else {
        if (unaff_s0 < unaff_s6) {
          unaff_s0 = -0x200;
        }
        param_1 = unaff_s0;
        if (unaff_s7 < unaff_s1) {
          unaff_s1 = 0x1ff;
        }
      }
    }
    else {
      if (unaff_s0 < 0) {
        unaff_s0 = 0;
      }
      param_1 = unaff_s0;
      if (unaff_s9 < unaff_s1) {
        unaff_s1 = 0x3f;
      }
    }
  }
  return iVar3;
}



int _L0(undefined4 param_1)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  uint uVar2;
  int unaff_s2;
  int iVar3;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  int unaff_s10;
  uint unaff_s11;
  
  while( true ) {
    _L0(param_1);
    uVar1 = _L0();
    iVar3 = unaff_s0;
    if (unaff_s11 <= uVar1) {
      _LVL285(unaff_s1);
      FUN_00010a44(10);
      uVar2 = _L0();
      iVar3 = unaff_s2;
      uVar1 = unaff_s11;
      if (uVar2 < unaff_s11) {
        iVar3 = unaff_s1;
        uVar1 = uVar2;
      }
    }
    if (unaff_s10 == 0) break;
    unaff_s0 = iVar3 - unaff_s10;
    unaff_s1 = iVar3 + unaff_s10;
    if (unaff_s4 < unaff_s3) {
      if (unaff_s3 == unaff_s5) {
        if (unaff_s0 < 0) {
          unaff_s0 = 0;
        }
        if (unaff_s8 < unaff_s1) {
          unaff_s1 = 0x7ff;
        }
      }
      else {
        if (unaff_s0 < unaff_s6) {
          unaff_s0 = -0x200;
        }
        if (unaff_s7 < unaff_s1) {
          unaff_s1 = 0x1ff;
        }
      }
    }
    else {
      if (unaff_s0 < 0) {
        unaff_s0 = 0;
      }
      if (unaff_s9 < unaff_s1) {
        unaff_s1 = 0x3f;
      }
    }
    FUN_00010a14(unaff_s0);
    param_1 = 10;
    unaff_s10 >>= 1;
    unaff_s2 = iVar3;
    unaff_s11 = uVar1;
  }
  return iVar3;
}



int _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  uint uVar2;
  int unaff_s2;
  int iVar3;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  int unaff_s10;
  uint unaff_s11;
  
  while( true ) {
    uVar1 = _L0();
    iVar3 = unaff_s0;
    if (unaff_s11 <= uVar1) {
      _LVL285(unaff_s1);
      FUN_00010a44(10);
      uVar2 = _L0();
      iVar3 = unaff_s2;
      uVar1 = unaff_s11;
      if (uVar2 < unaff_s11) {
        iVar3 = unaff_s1;
        uVar1 = uVar2;
      }
    }
    if (unaff_s10 == 0) break;
    unaff_s0 = iVar3 - unaff_s10;
    unaff_s1 = iVar3 + unaff_s10;
    if (unaff_s4 < unaff_s3) {
      if (unaff_s3 == unaff_s5) {
        if (unaff_s0 < 0) {
          unaff_s0 = 0;
        }
        if (unaff_s8 < unaff_s1) {
          unaff_s1 = 0x7ff;
        }
      }
      else {
        if (unaff_s0 < unaff_s6) {
          unaff_s0 = -0x200;
        }
        if (unaff_s7 < unaff_s1) {
          unaff_s1 = 0x1ff;
        }
      }
    }
    else {
      if (unaff_s0 < 0) {
        unaff_s0 = 0;
      }
      if (unaff_s9 < unaff_s1) {
        unaff_s1 = 0x3f;
      }
    }
    FUN_00010a14(unaff_s0);
    unaff_s10 >>= 1;
    _L0(10);
    unaff_s2 = iVar3;
    unaff_s11 = uVar1;
  }
  return iVar3;
}



int _LVL285(int param_1)

{
  int iVar1;
  int unaff_s1;
  uint uVar2;
  uint uVar3;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  int unaff_s10;
  uint unaff_s11;
  
  do {
    _LVL285(param_1);
    FUN_00010a44(10);
    uVar3 = _L0();
    iVar1 = unaff_s2;
    uVar2 = unaff_s11;
    if (uVar3 < unaff_s11) {
      iVar1 = unaff_s1;
      uVar2 = uVar3;
    }
    do {
      unaff_s11 = uVar2;
      unaff_s2 = iVar1;
      if (unaff_s10 == 0) {
        return unaff_s2;
      }
      iVar1 = unaff_s2 - unaff_s10;
      unaff_s1 = unaff_s2 + unaff_s10;
      if (unaff_s4 < unaff_s3) {
        if (unaff_s3 == unaff_s5) {
          if (iVar1 < 0) {
            iVar1 = 0;
          }
          if (unaff_s8 < unaff_s1) {
            unaff_s1 = 0x7ff;
          }
        }
        else {
          if (iVar1 < unaff_s6) {
            iVar1 = -0x200;
          }
          if (unaff_s7 < unaff_s1) {
            unaff_s1 = 0x1ff;
          }
        }
      }
      else {
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        if (unaff_s9 < unaff_s1) {
          unaff_s1 = 0x3f;
        }
      }
      FUN_00010a14(iVar1);
      unaff_s10 >>= 1;
      _L0(10);
      uVar2 = _L0();
      param_1 = unaff_s1;
    } while (uVar2 < unaff_s11);
  } while( true );
}



int FUN_00010a44(undefined4 param_1)

{
  int iVar1;
  int unaff_s1;
  uint uVar2;
  uint uVar3;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  int unaff_s10;
  uint unaff_s11;
  
  do {
    FUN_00010a44(param_1);
    uVar3 = _L0();
    iVar1 = unaff_s2;
    uVar2 = unaff_s11;
    if (uVar3 < unaff_s11) {
      iVar1 = unaff_s1;
      uVar2 = uVar3;
    }
    do {
      unaff_s11 = uVar2;
      unaff_s2 = iVar1;
      if (unaff_s10 == 0) {
        return unaff_s2;
      }
      iVar1 = unaff_s2 - unaff_s10;
      unaff_s1 = unaff_s2 + unaff_s10;
      if (unaff_s4 < unaff_s3) {
        if (unaff_s3 == unaff_s5) {
          if (iVar1 < 0) {
            iVar1 = 0;
          }
          if (unaff_s8 < unaff_s1) {
            unaff_s1 = 0x7ff;
          }
        }
        else {
          if (iVar1 < unaff_s6) {
            iVar1 = -0x200;
          }
          if (unaff_s7 < unaff_s1) {
            unaff_s1 = 0x1ff;
          }
        }
      }
      else {
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        if (unaff_s9 < unaff_s1) {
          unaff_s1 = 0x3f;
        }
      }
      FUN_00010a14(iVar1);
      unaff_s10 >>= 1;
      _L0(10);
      uVar2 = _L0();
    } while (uVar2 < unaff_s11);
    _LVL285(unaff_s1);
    param_1 = 10;
  } while( true );
}



int _L0(void)

{
  int iVar1;
  int unaff_s1;
  uint uVar2;
  uint uVar3;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  int unaff_s9;
  int unaff_s10;
  uint unaff_s11;
  
  do {
    uVar3 = _L0();
    iVar1 = unaff_s2;
    uVar2 = unaff_s11;
    if (uVar3 < unaff_s11) {
      iVar1 = unaff_s1;
      uVar2 = uVar3;
    }
    do {
      unaff_s11 = uVar2;
      unaff_s2 = iVar1;
      if (unaff_s10 == 0) {
        return unaff_s2;
      }
      iVar1 = unaff_s2 - unaff_s10;
      unaff_s1 = unaff_s2 + unaff_s10;
      if (unaff_s4 < unaff_s3) {
        if (unaff_s3 == unaff_s5) {
          if (iVar1 < 0) {
            iVar1 = 0;
          }
          if (unaff_s8 < unaff_s1) {
            unaff_s1 = 0x7ff;
          }
        }
        else {
          if (iVar1 < unaff_s6) {
            iVar1 = -0x200;
          }
          if (unaff_s7 < unaff_s1) {
            unaff_s1 = 0x1ff;
          }
        }
      }
      else {
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        if (unaff_s9 < unaff_s1) {
          unaff_s1 = 0x3f;
        }
      }
      FUN_00010a14(iVar1);
      unaff_s10 >>= 1;
      _L0(10);
      uVar2 = _L0();
    } while (uVar2 < unaff_s11);
    _LVL285(unaff_s1);
    FUN_00010a44(10);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2e89

void rf_pri_singen_config(uint32_t fcw,uint32_t start_addr_q,uint32_t start_addr_i)

{
  _DAT_4000120c = fcw << 0x10 | _DAT_4000120c & 0xfc00ffff;
  _DAT_40001214 = _DAT_40001214 & 0x3fffff;
  _DAT_40001218 = _DAT_40001218 & 0x3fffff | 0xc0000000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2079

uint32_t rf_pri_rccal_iq(uint32_t iq)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (iq == 0) {
    _DAT_4000160c = _DAT_4000160c & 0xfbffffff | 0x400;
  }
  else {
    _DAT_4000160c = _DAT_4000160c & 0xfffffbff | 0x4000000;
  }
  _DAT_40001048 = _DAT_40001048 & 0xffff8cff | 0x3100;
  _L0();
  _DAT_40001214 = _DAT_40001214 & 0xfffff800 | 0x3ff;
  _DAT_40001218 = _DAT_40001218 & 0xfffff800 | 0x3ff;
  _L0();
  _L0();
  _DAT_40001618 = _DAT_40001618 & 0xfff00000 | 0xc00;
  FUN_00010b90();
  _L0();
  _L0();
  FUN_00010bb4();
  uVar3 = _L0();
  _DAT_40001048 = _DAT_40001048 & 0xffff8cff | 0x6200;
  _LVL345();
  _L0();
  _L0();
  _DAT_40001618 = _DAT_40001618 & 0xfff00000 | 0x2d400;
  iVar2 = 0;
  uVar1 = 6;
  uVar5 = 0x20;
  do {
    FUN_00010c16(uVar5 + iVar2);
    uVar4 = (*(code *)0x10c1e)();
    if (uVar3 < uVar4) {
      iVar2 = uVar5 + iVar2;
    }
    uVar1 -= 1;
    uVar5 >>= 1;
  } while (uVar1 != 0);
  iVar6 = 0x3f;
  do {
    _LVL361(iVar2);
    uVar5 = (*(code *)0x10c48)();
    if (uVar3 < uVar5) {
      uVar1 = uVar1 * 2 + 1 & 0xf;
      iVar2 += 1;
      if (uVar1 == 5) {
        return 3;
      }
    }
    else {
      uVar1 = uVar1 * 2 & 0xf;
      iVar2 += -1;
      if (uVar1 == 10) {
        return 3;
      }
    }
    iVar6 += -1;
  } while (iVar6 != 0);
  return 2;
}



undefined4 _L0(void)

{
  int unaff_s0;
  uint uVar1;
  uint unaff_s1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  _L0();
  *(uint *)(unaff_s0 + 0x214) = *(uint *)(unaff_s0 + 0x214) & 0xfffff800 | 0x3ff;
  *(uint *)(unaff_s0 + 0x218) = *(uint *)(unaff_s0 + 0x218) & 0xfffff800 | 0x3ff;
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x618) = *(uint *)(unaff_s0 + 0x618) & 0xfff00000 | 0xc00;
  FUN_00010b90();
  _L0();
  _L0();
  FUN_00010bb4();
  uVar3 = _L0();
  *(uint *)(unaff_s0 + 0x48) = *(uint *)(unaff_s0 + 0x48) & unaff_s1 | 0x6200;
  _LVL345();
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x618) = *(uint *)(unaff_s0 + 0x618) & 0xfff00000 | 0x2d400;
  iVar2 = 0;
  uVar1 = 6;
  uVar5 = 0x20;
  do {
    FUN_00010c16(uVar5 + iVar2);
    uVar4 = (*(code *)0x10c1e)();
    if (uVar3 < uVar4) {
      iVar2 = uVar5 + iVar2;
    }
    uVar1 -= 1;
    uVar5 >>= 1;
  } while (uVar1 != 0);
  iVar6 = 0x3f;
  do {
    _LVL361(iVar2);
    uVar5 = (*(code *)0x10c48)();
    if (uVar3 < uVar5) {
      uVar1 = uVar1 * 2 + 1 & 0xf;
      iVar2 += 1;
      if (uVar1 == 5) {
        return 3;
      }
    }
    else {
      uVar1 = uVar1 * 2 & 0xf;
      iVar2 += -1;
      if (uVar1 == 10) {
        return 3;
      }
    }
    iVar6 += -1;
  } while (iVar6 != 0);
  return 2;
}



undefined4 _L0(void)

{
  int unaff_s0;
  uint uVar1;
  uint unaff_s1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_s4;
  uint uVar5;
  int iVar6;
  
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x618) = *(uint *)(unaff_s0 + 0x618) & unaff_s4 | 0xc00;
  FUN_00010b90();
  _L0();
  _L0();
  FUN_00010bb4();
  uVar3 = _L0();
  *(uint *)(unaff_s0 + 0x48) = *(uint *)(unaff_s0 + 0x48) & unaff_s1 | 0x6200;
  _LVL345();
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x618) = *(uint *)(unaff_s0 + 0x618) & unaff_s4 | 0x2d400;
  iVar2 = 0;
  uVar1 = 6;
  uVar5 = 0x20;
  do {
    FUN_00010c16(uVar5 + iVar2);
    uVar4 = (*(code *)0x10c1e)();
    if (uVar3 < uVar4) {
      iVar2 = uVar5 + iVar2;
    }
    uVar1 -= 1;
    uVar5 >>= 1;
  } while (uVar1 != 0);
  iVar6 = 0x3f;
  do {
    _LVL361(iVar2);
    uVar5 = (*(code *)0x10c48)();
    if (uVar3 < uVar5) {
      uVar1 = uVar1 * 2 + 1 & 0xf;
      iVar2 += 1;
      if (uVar1 == 5) {
        return 3;
      }
    }
    else {
      uVar1 = uVar1 * 2 & 0xf;
      iVar2 += -1;
      if (uVar1 == 10) {
        return 3;
      }
    }
    iVar6 += -1;
  } while (iVar6 != 0);
  return 2;
}



undefined4 _L0(void)

{
  int unaff_s0;
  uint uVar1;
  uint unaff_s1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_s4;
  uint uVar5;
  int iVar6;
  
  _L0();
  *(uint *)(unaff_s0 + 0x618) = *(uint *)(unaff_s0 + 0x618) & unaff_s4 | 0xc00;
  FUN_00010b90();
  _L0();
  _L0();
  FUN_00010bb4();
  uVar3 = _L0();
  *(uint *)(unaff_s0 + 0x48) = *(uint *)(unaff_s0 + 0x48) & unaff_s1 | 0x6200;
  _LVL345();
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x618) = *(uint *)(unaff_s0 + 0x618) & unaff_s4 | 0x2d400;
  iVar2 = 0;
  uVar1 = 6;
  uVar5 = 0x20;
  do {
    FUN_00010c16(uVar5 + iVar2);
    uVar4 = (*(code *)0x10c1e)();
    if (uVar3 < uVar4) {
      iVar2 = uVar5 + iVar2;
    }
    uVar1 -= 1;
    uVar5 >>= 1;
  } while (uVar1 != 0);
  iVar6 = 0x3f;
  do {
    _LVL361(iVar2);
    uVar5 = (*(code *)0x10c48)();
    if (uVar3 < uVar5) {
      uVar1 = uVar1 * 2 + 1 & 0xf;
      iVar2 += 1;
      if (uVar1 == 5) {
        return 3;
      }
    }
    else {
      uVar1 = uVar1 * 2 & 0xf;
      iVar2 += -1;
      if (uVar1 == 10) {
        return 3;
      }
    }
    iVar6 += -1;
  } while (iVar6 != 0);
  return 2;
}



undefined4 FUN_00010b90(void)

{
  int unaff_s0;
  uint uVar1;
  uint unaff_s1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_s4;
  uint uVar5;
  int iVar6;
  
  FUN_00010b90();
  _L0();
  _L0();
  FUN_00010bb4();
  uVar3 = _L0();
  *(uint *)(unaff_s0 + 0x48) = *(uint *)(unaff_s0 + 0x48) & unaff_s1 | 0x6200;
  _LVL345();
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x618) = *(uint *)(unaff_s0 + 0x618) & unaff_s4 | 0x2d400;
  iVar2 = 0;
  uVar1 = 6;
  uVar5 = 0x20;
  do {
    FUN_00010c16(uVar5 + iVar2);
    uVar4 = (*(code *)0x10c1e)();
    if (uVar3 < uVar4) {
      iVar2 = uVar5 + iVar2;
    }
    uVar1 -= 1;
    uVar5 >>= 1;
  } while (uVar1 != 0);
  iVar6 = 0x3f;
  do {
    _LVL361(iVar2);
    uVar5 = (*(code *)0x10c48)();
    if (uVar3 < uVar5) {
      uVar1 = uVar1 * 2 + 1 & 0xf;
      iVar2 += 1;
      if (uVar1 == 5) {
        return 3;
      }
    }
    else {
      uVar1 = uVar1 * 2 & 0xf;
      iVar2 += -1;
      if (uVar1 == 10) {
        return 3;
      }
    }
    iVar6 += -1;
  } while (iVar6 != 0);
  return 2;
}



undefined4 _L0(void)

{
  int unaff_s0;
  uint uVar1;
  uint unaff_s1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_s4;
  uint uVar5;
  int iVar6;
  
  _L0();
  _L0();
  FUN_00010bb4();
  uVar3 = _L0();
  *(uint *)(unaff_s0 + 0x48) = *(uint *)(unaff_s0 + 0x48) & unaff_s1 | 0x6200;
  _LVL345();
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x618) = *(uint *)(unaff_s0 + 0x618) & unaff_s4 | 0x2d400;
  iVar2 = 0;
  uVar1 = 6;
  uVar5 = 0x20;
  do {
    FUN_00010c16(uVar5 + iVar2);
    uVar4 = (*(code *)0x10c1e)();
    if (uVar3 < uVar4) {
      iVar2 = uVar5 + iVar2;
    }
    uVar1 -= 1;
    uVar5 >>= 1;
  } while (uVar1 != 0);
  iVar6 = 0x3f;
  do {
    _LVL361(iVar2);
    uVar5 = (*(code *)0x10c48)();
    if (uVar3 < uVar5) {
      uVar1 = uVar1 * 2 + 1 & 0xf;
      iVar2 += 1;
      if (uVar1 == 5) {
        return 3;
      }
    }
    else {
      uVar1 = uVar1 * 2 & 0xf;
      iVar2 += -1;
      if (uVar1 == 10) {
        return 3;
      }
    }
    iVar6 += -1;
  } while (iVar6 != 0);
  return 2;
}



undefined4 _L0(void)

{
  int unaff_s0;
  uint uVar1;
  uint unaff_s1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_s4;
  uint uVar5;
  int iVar6;
  
  _L0();
  FUN_00010bb4();
  uVar3 = _L0();
  *(uint *)(unaff_s0 + 0x48) = *(uint *)(unaff_s0 + 0x48) & unaff_s1 | 0x6200;
  _LVL345();
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x618) = *(uint *)(unaff_s0 + 0x618) & unaff_s4 | 0x2d400;
  iVar2 = 0;
  uVar1 = 6;
  uVar5 = 0x20;
  do {
    FUN_00010c16(uVar5 + iVar2);
    uVar4 = (*(code *)0x10c1e)();
    if (uVar3 < uVar4) {
      iVar2 = uVar5 + iVar2;
    }
    uVar1 -= 1;
    uVar5 >>= 1;
  } while (uVar1 != 0);
  iVar6 = 0x3f;
  do {
    _LVL361(iVar2);
    uVar5 = (*(code *)0x10c48)();
    if (uVar3 < uVar5) {
      uVar1 = uVar1 * 2 + 1 & 0xf;
      iVar2 += 1;
      if (uVar1 == 5) {
        return 3;
      }
    }
    else {
      uVar1 = uVar1 * 2 & 0xf;
      iVar2 += -1;
      if (uVar1 == 10) {
        return 3;
      }
    }
    iVar6 += -1;
  } while (iVar6 != 0);
  return 2;
}



undefined4 FUN_00010bb4(void)

{
  int unaff_s0;
  uint uVar1;
  uint unaff_s1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_s4;
  uint uVar5;
  int iVar6;
  
  FUN_00010bb4();
  uVar3 = _L0();
  *(uint *)(unaff_s0 + 0x48) = *(uint *)(unaff_s0 + 0x48) & unaff_s1 | 0x6200;
  _LVL345();
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x618) = *(uint *)(unaff_s0 + 0x618) & unaff_s4 | 0x2d400;
  iVar2 = 0;
  uVar1 = 6;
  uVar5 = 0x20;
  do {
    FUN_00010c16(uVar5 + iVar2);
    uVar4 = (*(code *)0x10c1e)();
    if (uVar3 < uVar4) {
      iVar2 = uVar5 + iVar2;
    }
    uVar1 -= 1;
    uVar5 >>= 1;
  } while (uVar1 != 0);
  iVar6 = 0x3f;
  do {
    _LVL361(iVar2);
    uVar5 = (*(code *)0x10c48)();
    if (uVar3 < uVar5) {
      uVar1 = uVar1 * 2 + 1 & 0xf;
      iVar2 += 1;
      if (uVar1 == 5) {
        return 3;
      }
    }
    else {
      uVar1 = uVar1 * 2 & 0xf;
      iVar2 += -1;
      if (uVar1 == 10) {
        return 3;
      }
    }
    iVar6 += -1;
  } while (iVar6 != 0);
  return 2;
}



undefined4 _L0(void)

{
  int unaff_s0;
  uint uVar1;
  uint unaff_s1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_s4;
  uint uVar5;
  int iVar6;
  
  uVar3 = _L0();
  *(uint *)(unaff_s0 + 0x48) = *(uint *)(unaff_s0 + 0x48) & unaff_s1 | 0x6200;
  _LVL345();
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x618) = *(uint *)(unaff_s0 + 0x618) & unaff_s4 | 0x2d400;
  iVar2 = 0;
  uVar1 = 6;
  uVar5 = 0x20;
  do {
    FUN_00010c16(uVar5 + iVar2);
    uVar4 = (*(code *)0x10c1e)();
    if (uVar3 < uVar4) {
      iVar2 = uVar5 + iVar2;
    }
    uVar1 -= 1;
    uVar5 >>= 1;
  } while (uVar1 != 0);
  iVar6 = 0x3f;
  do {
    _LVL361(iVar2);
    uVar5 = (*(code *)0x10c48)();
    if (uVar3 < uVar5) {
      uVar1 = uVar1 * 2 + 1 & 0xf;
      iVar2 += 1;
      if (uVar1 == 5) {
        return 3;
      }
    }
    else {
      uVar1 = uVar1 * 2 & 0xf;
      iVar2 += -1;
      if (uVar1 == 10) {
        return 3;
      }
    }
    iVar6 += -1;
  } while (iVar6 != 0);
  return 2;
}



undefined4 _LVL345(void)

{
  int unaff_s0;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint unaff_s3;
  uint unaff_s4;
  uint uVar4;
  int iVar5;
  
  _LVL345();
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x618) = *(uint *)(unaff_s0 + 0x618) & unaff_s4 | 0x2d400;
  iVar2 = 0;
  uVar1 = 6;
  uVar4 = 0x20;
  do {
    FUN_00010c16(uVar4 + iVar2);
    uVar3 = (*(code *)0x10c1e)();
    if (unaff_s3 < uVar3) {
      iVar2 = uVar4 + iVar2;
    }
    uVar1 -= 1;
    uVar4 >>= 1;
  } while (uVar1 != 0);
  iVar5 = 0x3f;
  do {
    _LVL361(iVar2);
    uVar4 = (*(code *)0x10c48)();
    if (unaff_s3 < uVar4) {
      uVar1 = uVar1 * 2 + 1 & 0xf;
      iVar2 += 1;
      if (uVar1 == 5) {
        return 3;
      }
    }
    else {
      uVar1 = uVar1 * 2 & 0xf;
      iVar2 += -1;
      if (uVar1 == 10) {
        return 3;
      }
    }
    iVar5 += -1;
  } while (iVar5 != 0);
  return 2;
}



undefined4 _L0(void)

{
  int unaff_s0;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint unaff_s3;
  uint unaff_s4;
  uint uVar4;
  int iVar5;
  
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x618) = *(uint *)(unaff_s0 + 0x618) & unaff_s4 | 0x2d400;
  iVar2 = 0;
  uVar1 = 6;
  uVar4 = 0x20;
  do {
    FUN_00010c16(uVar4 + iVar2);
    uVar3 = (*(code *)0x10c1e)();
    if (unaff_s3 < uVar3) {
      iVar2 = uVar4 + iVar2;
    }
    uVar1 -= 1;
    uVar4 >>= 1;
  } while (uVar1 != 0);
  iVar5 = 0x3f;
  do {
    _LVL361(iVar2);
    uVar4 = (*(code *)0x10c48)();
    if (unaff_s3 < uVar4) {
      uVar1 = uVar1 * 2 + 1 & 0xf;
      iVar2 += 1;
      if (uVar1 == 5) {
        return 3;
      }
    }
    else {
      uVar1 = uVar1 * 2 & 0xf;
      iVar2 += -1;
      if (uVar1 == 10) {
        return 3;
      }
    }
    iVar5 += -1;
  } while (iVar5 != 0);
  return 2;
}



undefined4 _L0(void)

{
  int unaff_s0;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint unaff_s3;
  uint unaff_s4;
  uint uVar4;
  int iVar5;
  
  _L0();
  *(uint *)(unaff_s0 + 0x618) = *(uint *)(unaff_s0 + 0x618) & unaff_s4 | 0x2d400;
  iVar2 = 0;
  uVar1 = 6;
  uVar4 = 0x20;
  do {
    FUN_00010c16(uVar4 + iVar2);
    uVar3 = (*(code *)0x10c1e)();
    if (unaff_s3 < uVar3) {
      iVar2 = uVar4 + iVar2;
    }
    uVar1 -= 1;
    uVar4 >>= 1;
  } while (uVar1 != 0);
  iVar5 = 0x3f;
  do {
    _LVL361(iVar2);
    uVar4 = (*(code *)0x10c48)();
    if (unaff_s3 < uVar4) {
      uVar1 = uVar1 * 2 + 1 & 0xf;
      iVar2 += 1;
      if (uVar1 == 5) {
        return 3;
      }
    }
    else {
      uVar1 = uVar1 * 2 & 0xf;
      iVar2 += -1;
      if (uVar1 == 10) {
        return 3;
      }
    }
    iVar5 += -1;
  } while (iVar5 != 0);
  return 2;
}



undefined4 FUN_00010c16(int param_1)

{
  uint unaff_s0;
  int unaff_s1;
  uint uVar1;
  uint unaff_s3;
  uint unaff_s4;
  int iVar2;
  int unaff_s5;
  
  while( true ) {
    FUN_00010c16(param_1);
    uVar1 = (*(code *)0x10c1e)();
    if (unaff_s3 < uVar1) {
      unaff_s1 = unaff_s5;
    }
    unaff_s0 -= 1;
    unaff_s4 >>= 1;
    if (unaff_s0 == 0) break;
    param_1 = unaff_s4 + unaff_s1;
    unaff_s5 = param_1;
  }
  iVar2 = 0x3f;
  do {
    _LVL361(unaff_s1);
    uVar1 = (*(code *)0x10c48)();
    if (unaff_s3 < uVar1) {
      unaff_s0 = unaff_s0 * 2 + 1 & 0xf;
      unaff_s1 += 1;
      if (unaff_s0 == 5) {
        return 3;
      }
    }
    else {
      unaff_s0 = unaff_s0 * 2 & 0xf;
      unaff_s1 += -1;
      if (unaff_s0 == 10) {
        return 3;
      }
    }
    iVar2 += -1;
  } while (iVar2 != 0);
  return 2;
}



undefined4 _LVL361(int param_1)

{
  uint unaff_s0;
  int unaff_s1;
  uint uVar1;
  uint unaff_s3;
  int unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  
  do {
    _LVL361(param_1);
    uVar1 = (*(code *)0x10c48)();
    if (unaff_s3 < uVar1) {
      unaff_s0 = unaff_s0 * 2 + 1 & 0xf;
      unaff_s1 += 1;
      if (unaff_s0 == unaff_s6) {
        return 3;
      }
    }
    else {
      unaff_s0 = unaff_s0 * 2 & 0xf;
      unaff_s1 += -1;
      if (unaff_s0 == unaff_s5) {
        return 3;
      }
    }
    unaff_s4 += -1;
    param_1 = unaff_s1;
  } while (unaff_s4 != 0);
  return 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2ebc

void rf_pri_config_channel(uint32_t channel_index)

{
  _DAT_400010a0 =
       (*(ushort *)(iRam00000000 + 0x2e) >> 8 & 0x1f) << 0x10 |
       *(ushort *)(iRam00000000 + 0x2e) & 0xff | _DAT_400010a0 & 0xffe0ff00;
  _DAT_400010bc =
       ((*(ushort *)(iRam00000000 + 0x2e) & 0xff) >> 4) << 0x14 | _DAT_400010bc & 0xff0fffff;
  _DAT_400010c4 = _DAT_400010c4 & 0xc0000000 | _DAT_00000024;
  _DAT_400010c0 &= 0xffffefff;
  while( true ) {
    _DAT_400010b8 |= 0x10000;
    _L0(10);
    _DAT_400010b8 &= 0xfffeffff;
    _L0(0x32);
    _DAT_400010b0 |= 0x10000000;
    _L0(10);
    _DAT_400010b0 &= 0xefffffff;
    _L0(0x32);
    if ((_DAT_400010b4 & 0x1100000) == 0) break;
    FUN_00010db6();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(undefined4 param_1)

{
  int unaff_s0;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  
  while( true ) {
    _L0(param_1);
    *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & unaff_s2;
    _L0(0x32);
    *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) | unaff_s6;
    _L0(10);
    *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & unaff_s3;
    _L0(0x32);
    if ((*(uint *)(unaff_s0 + 0xb4) & unaff_s7) == 0) break;
    FUN_00010db6();
    param_1 = 10;
    *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) | unaff_s5;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(undefined4 param_1)

{
  int unaff_s0;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  
  while( true ) {
    _L0(param_1);
    *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) | unaff_s6;
    _L0(10);
    *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & unaff_s3;
    _L0(0x32);
    if ((*(uint *)(unaff_s0 + 0xb4) & unaff_s7) == 0) break;
    FUN_00010db6();
    *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) | unaff_s5;
    _L0(10);
    param_1 = 0x32;
    *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & unaff_s2;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(undefined4 param_1)

{
  int unaff_s0;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  
  while( true ) {
    _L0(param_1);
    *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & unaff_s3;
    _L0(0x32);
    if ((*(uint *)(unaff_s0 + 0xb4) & unaff_s7) == 0) break;
    FUN_00010db6();
    *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) | unaff_s5;
    _L0(10);
    *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & unaff_s2;
    _L0(0x32);
    param_1 = 10;
    *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) | unaff_s6;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(undefined4 param_1)

{
  int unaff_s0;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  
  while (_L0(param_1), (*(uint *)(unaff_s0 + 0xb4) & unaff_s7) != 0) {
    FUN_00010db6();
    *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) | unaff_s5;
    _L0(10);
    *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & unaff_s2;
    _L0(0x32);
    *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) | unaff_s6;
    _L0(10);
    param_1 = 0x32;
    *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & unaff_s3;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010db6(void)

{
  int unaff_s0;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  
  do {
    FUN_00010db6();
    *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) | unaff_s5;
    _L0(10);
    *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & unaff_s2;
    _L0(0x32);
    *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) | unaff_s6;
    _L0(10);
    *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & unaff_s3;
    _L0(0x32);
  } while ((*(uint *)(unaff_s0 + 0xb4) & unaff_s7) != 0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2fc8

uint32_t rf_pri_roscal_iq(uint32_t iq,uint32_t length,uint32_t sram_start_addr)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = 6;
  uVar3 = 0;
  uVar4 = 0x20;
  do {
    uVar6 = uVar4 + uVar3;
    if (iq == 0) {
      _DAT_4000107c = uVar6 | _DAT_4000107c & 0xffffffc0;
    }
    else {
      _DAT_4000107c = uVar6 * 0x100 | _DAT_4000107c & 0xffffc0ff;
    }
    uVar2 = FUN_00010e36(0x400);
    if ((int)uVar2 < 1) {
      uVar3 = uVar6;
    }
    uVar1 -= 1;
    uVar4 >>= 1;
  } while (uVar1 != 0);
  iVar5 = 0x3f;
  do {
    if (iq == 0) {
      _DAT_4000107c = _DAT_4000107c & 0xffffffc0 | uVar3;
    }
    else {
      _DAT_4000107c = uVar3 << 8 | _DAT_4000107c & 0xffffc0ff;
    }
    uVar4 = _LVL432(0x400);
    if ((int)uVar4 < 1) {
      uVar1 = uVar1 * 2 & 0xf;
      uVar3 += 1;
      if (uVar1 == 10) {
        return uVar3;
      }
    }
    else {
      uVar1 = uVar1 * 2 + 1 & 0xf;
      uVar3 -= 1;
      if (uVar1 == 5) {
        return uVar3;
      }
    }
    iVar5 += -1;
  } while (iVar5 != 0);
  return uVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint FUN_00010e36(undefined4 param_1)

{
  uint unaff_s0;
  int unaff_s1;
  uint uVar1;
  uint unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  int iVar2;
  uint unaff_s5;
  uint unaff_s6;
  
  while( true ) {
    uVar1 = FUN_00010e36(param_1);
    if ((int)uVar1 < 1) {
      unaff_s2 = unaff_s6;
    }
    unaff_s0 -= 1;
    unaff_s4 >>= 1;
    if (unaff_s0 == 0) break;
    unaff_s6 = unaff_s4 + unaff_s2;
    if (unaff_s3 == 0) {
      uVar1 = unaff_s6 | *(uint *)(unaff_s1 + 0x7c) & 0xffffffc0;
    }
    else {
      uVar1 = unaff_s6 * 0x100 | *(uint *)(unaff_s1 + 0x7c) & unaff_s5;
    }
    *(uint *)(unaff_s1 + 0x7c) = uVar1;
    param_1 = 0x400;
  }
  iVar2 = 0x3f;
  do {
    if (unaff_s3 == 0) {
      _DAT_4000107c = _DAT_4000107c & 0xffffffc0 | unaff_s2;
    }
    else {
      _DAT_4000107c = unaff_s2 << 8 | _DAT_4000107c & 0xffffc0ff;
    }
    uVar1 = _LVL432(0x400);
    if ((int)uVar1 < 1) {
      unaff_s0 = unaff_s0 * 2 & 0xf;
      unaff_s2 += 1;
      if (unaff_s0 == 10) {
        return unaff_s2;
      }
    }
    else {
      unaff_s0 = unaff_s0 * 2 + 1 & 0xf;
      unaff_s2 -= 1;
      if (unaff_s0 == 5) {
        return unaff_s2;
      }
    }
    iVar2 += -1;
  } while (iVar2 != 0);
  return unaff_s2;
}



uint _LVL432(undefined4 param_1)

{
  uint unaff_s0;
  int unaff_s1;
  uint uVar1;
  uint unaff_s2;
  int unaff_s3;
  int unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  
  while( true ) {
    uVar1 = _LVL432(param_1);
    if ((int)uVar1 < 1) {
      unaff_s0 = unaff_s0 * 2 & 0xf;
      unaff_s2 += 1;
      if (unaff_s0 == unaff_s6) {
        return unaff_s2;
      }
    }
    else {
      unaff_s0 = unaff_s0 * 2 + 1 & 0xf;
      unaff_s2 -= 1;
      if (unaff_s0 == unaff_s7) {
        return unaff_s2;
      }
    }
    unaff_s4 += -1;
    if (unaff_s4 == 0) break;
    if (unaff_s3 == 0) {
      uVar1 = *(uint *)(unaff_s1 + 0x7c) & 0xffffffc0 | unaff_s2;
    }
    else {
      uVar1 = unaff_s2 << 8 | *(uint *)(unaff_s1 + 0x7c) & unaff_s5;
    }
    *(uint *)(unaff_s1 + 0x7c) = uVar1;
    param_1 = 0x400;
  }
  return unaff_s2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2cf1

void rf_pri_chipv(uint8_t chipv)

{
  undefined3 in_register_00002029;
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (CONCAT31(in_register_00002029,chipv) == 0) {
    puRam00000000 = (undefined4 *)0x60003;
    _DAT_00000004 = 6;
    puVar2 = (undefined4 *)&DAT_0000001c;
    do {
      puVar4 = puVar2 + -7;
      do {
        uVar1 = *puVar4;
        *puVar4 = uVar1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      } while (puVar2 != puVar4);
      puVar2 = puVar2 + 7;
    } while (puVar2 != (undefined4 *)0x1dc);
    puVar2 = (undefined4 *)0x0;
    do {
      puVar4 = puVar2 + 1;
      *puVar2 = *puVar2;
      puVar2 = puVar4;
    } while (puVar4 != (undefined4 *)&DAT_00000038);
    puVar2 = (undefined4 *)0x0;
    puVar4 = (undefined4 *)0x0;
    do {
      puVar3 = puVar4 + 4;
      *puVar2 = *puVar4;
      puVar2[1] = puVar4[1];
      puVar2[2] = puVar4[2];
      puVar2[3] = puVar4[3];
      puVar2 = puVar2 + 4;
      puVar4 = puVar3;
    } while (puVar3 != (undefined4 *)0x80);
    *puRam00000000 = 10;
    puVar2 = puRam00000000;
    puRam00000000[1] = 3;
    puVar2[2] = 10;
    puVar2[3] = 3;
    puVar2[4] = 10;
    puVar2[5] = 3;
    puVar2[6] = 10;
    puVar2[7] = 3;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    return;
  }
  if (CONCAT31(in_register_00002029,chipv) == 1) {
    puRam00000000 = (undefined4 *)0x50005;
    _DAT_00000004 = 5;
    puVar2 = (undefined4 *)&DAT_0000001c;
    do {
      puVar4 = puVar2 + -7;
      do {
        puVar3 = puVar4;
        uVar1 = *puVar3;
        *puVar3 = uVar1;
        *puVar3 = uVar1;
        puVar4 = puVar3 + 1;
      } while (puVar3 + 1 != puVar2);
      puVar2 = puVar3 + 8;
    } while (puVar2 != (undefined4 *)0x1dc);
    puVar2 = (undefined4 *)0x0;
    do {
      puVar4 = puVar2 + 1;
      *puVar2 = *puVar2;
      puVar2 = puVar4;
    } while (puVar4 != (undefined4 *)&DAT_00000038);
    puVar2 = (undefined4 *)0x0;
    puVar4 = (undefined4 *)0x0;
    do {
      puVar3 = puVar4 + 4;
      *puVar2 = *puVar4;
      puVar2[1] = puVar4[1];
      puVar2[2] = puVar4[2];
      puVar2[3] = puVar4[3];
      puVar2 = puVar2 + 4;
      puVar4 = puVar3;
    } while (puVar3 != (undefined4 *)0x80);
    *puRam00000000 = 0xc;
    puVar2 = puRam00000000;
    puRam00000000[1] = 5;
    puVar2[2] = 0xc;
    puVar2[3] = 5;
    puVar2[4] = 0xc;
    puVar2[5] = 5;
    puVar2[6] = 0xc;
    puVar2[7] = 5;
    puVar2[8] = 1;
    puVar2[9] = 1;
    puVar2[9] = 1;
    puVar2[0xb] = 1;
    puVar2[0xc] = 2;
  }
  return;
}



// DWARF DIE: 2c50

void rf_pri_update_tx_power_offset(uint8_t channel,int8_t *power_offset)

{
  char cVar1;
  undefined3 in_register_00002029;
  int iVar2;
  int iVar3;
  
  cVar1 = power_offset[CONCAT31(in_register_00002029,channel)];
  _LVL470();
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 0x1c;
    *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x14) + (int)cVar1 % 4;
    *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + ((int)cVar1 / 4) * -10;
    iVar2 = iVar3;
  } while (iVar3 != 0x1c0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL470(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int iVar2;
  int unaff_s2;
  
  _LVL470();
  iVar1 = unaff_s0;
  do {
    iVar2 = iVar1 + 0x1c;
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + unaff_s1 % unaff_s2;
    *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + (unaff_s1 / unaff_s2) * -10;
    iVar1 = iVar2;
  } while (iVar2 != unaff_s0 + 0x1c0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 2b67

void rf_pri_init_fast(uint32_t flag)

{
  uRam00000000 = flag;
  return;
}



// DWARF DIE: 2b09

void rf_pri_get_notch_param(uint32_t chanfreq_MHz,uint8_t *ncf_on,int32_t *ncf_freq_Hz)

{
  uint uVar1;
  int32_t iVar2;
  
  uVar1 = 0xd;
  if (chanfreq_MHz < 0x9a9) {
    uVar1 = (chanfreq_MHz - 0x96c) / 5;
  }
  iVar2 = ((undefined4 *)(uVar1 * 8))[1];
  *ncf_on = (uint8_t)*(undefined4 *)(uVar1 * 8);
  *ncf_freq_Hz = iVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2a61

void rf_pri_update_param(uint32_t chanfreq_MHz)

{
  int iVar1;
  uint32_t *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  uint32_t uVar10;
  int iVar11;
  
  uRam00000000 = 0;
  if ((chanfreq_MHz < 0x96c) || (chanfreq_MHz < 0x971)) {
    iVar5 = 0;
  }
  else {
    if (chanfreq_MHz < 0x97b) {
      iVar5 = 1;
    }
    else {
      if (chanfreq_MHz < 0x98a) {
        iVar5 = 2;
      }
      else {
        if (chanfreq_MHz < 0x999) {
          iVar5 = 3;
        }
        else {
          iVar5 = 8;
          iVar6 = 7;
          if (0x9a7 < chanfreq_MHz) goto _L0;
          iVar5 = 4;
        }
      }
    }
  }
  puVar2 = (uint32_t *)(iVar5 * 4);
  uVar10 = *puVar2;
  iVar6 = 0;
  if (uVar10 != chanfreq_MHz) {
    iVar6 = chanfreq_MHz - uVar10;
  }
  piVar7 = (int *)((iVar5 + 1) * 4);
  iVar5 = ((*piVar7 - *puVar2) * iVar6) / (*piVar7 - uVar10) + *puVar2;
  iVar6 = ((*piVar7 - *puVar2) * iVar6) / (*piVar7 - uVar10) + *puVar2;
_L0:
  iVar3 = 0;
  iVar11 = 0;
  iVar9 = 0;
  iVar4 = 10;
  do {
    iVar1 = (*(int *)(iVar11 + 0x10) + iVar9) - (0x14 - iVar6);
    iVar9 = 0;
    if (iVar4 < iVar1) {
      iVar9 = iVar1 - iVar4;
      iVar1 = iVar4;
    }
    *(int *)(iVar11 + 0xc) = iVar1;
    iVar4 += -5;
    iVar11 += -4;
  } while (iVar4 != -10);
  iVar9 = 0x38;
  iVar6 = 0;
  do {
    iVar6 = (*(int *)(iVar3 + 0x14) - iVar6) + (0x14 - iVar5);
    if (0x5f < iVar6) {
      iVar6 += 5 - iVar5 / 4;
    }
    *(int *)(iVar3 + 0x18) = iVar6;
    iVar4 = *(int *)(iVar3 + 0x18);
    iVar6 = 0;
    if (iVar4 < iVar9) {
      iVar6 = iVar9 - iVar4;
      iVar4 = iVar9;
    }
    *(int *)(iVar3 + 0x18) = iVar4;
    iVar9 += 5;
    iVar3 += 4;
  } while (iVar9 != 0x5b);
  if (chanfreq_MHz < 0x986) {
  }
  else {
    uRam00000000._2_2_ = _DAT_00000004;
  }
  _DAT_4000106c = (uint)uRam00000000._2_2_ | _DAT_4000106c & 0xfffffff8;
  uVar8 = _DAT_00000018;
  if (chanfreq_MHz != 0x98a) {
    if (chanfreq_MHz < 0x98b) {
      uVar8 = _DAT_00000008;
      if (chanfreq_MHz != 0x976) {
        if (chanfreq_MHz < 0x977) {
          uVar8 = uRam00000000;
          if ((chanfreq_MHz != 0x96c) && (uVar8 = _DAT_00000004, chanfreq_MHz != 0x971)) {
            uRam00000000 = 0;
            _DAT_00000010 = 0xf;
            _DAT_00000014 = 0x33;
            return;
          }
        }
        else {
          if (chanfreq_MHz == 0x980) {
            uVar8 = 0xf;
          }
          else {
            if (chanfreq_MHz == 0x985) {
              uVar8 = 0x33;
            }
            else {
              uVar8 = _DAT_0000000c;
              if (chanfreq_MHz != 0x97b) {
                uRam00000000 = 0;
                _DAT_00000010 = 0xf;
                _DAT_00000014 = 0x33;
                return;
              }
            }
          }
        }
      }
    }
    else {
      uVar8 = _DAT_00000028;
      if (chanfreq_MHz != 0x99e) {
        if (chanfreq_MHz < 0x99f) {
          uVar8 = _DAT_00000020;
          if (((chanfreq_MHz != 0x994) && (uVar8 = _DAT_00000024, chanfreq_MHz != 0x999)) &&
             (uVar8 = _DAT_0000001c, chanfreq_MHz != 0x98f)) {
            uRam00000000 = 0;
            _DAT_00000010 = 0xf;
            _DAT_00000014 = 0x33;
            return;
          }
        }
        else {
          uVar8 = _DAT_00000030;
          if (((chanfreq_MHz != 0x9a8) && (uVar8 = _DAT_00000034, chanfreq_MHz != 0x9b4)) &&
             (uVar8 = _DAT_0000002c, chanfreq_MHz != 0x9a3)) {
            uRam00000000 = 0;
            _DAT_00000010 = 0xf;
            _DAT_00000014 = 0x33;
            return;
          }
        }
      }
    }
  }
  uRam00000000 = uVar8;
  _DAT_00000010 = 0xf;
  _DAT_00000014 = 0x33;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2a3a

void rf_pri_xtalfreq(uint32_t xtalfreq)

{
  if (xtalfreq == 0) {
    _DAT_00000020 = 1;
    _DAT_00000030 = 1;
    _DAT_00000038 = 1;
    _DAT_00000060 = 1;
    _DAT_0000000c = 7000000;
    _DAT_00000014 = 2000000;
    _DAT_0000001c = 0xffd23940;
    _DAT_00000024 = 0xff85ee00;
    _DAT_00000034 = 6000000;
    _DAT_0000003c = 1000000;
    _DAT_00000044 = 0xffc2f700;
    _DAT_0000004c = 0xff76abc0;
    uRam00000000 = 0;
    _DAT_00000050 = 0;
    _DAT_00000004 = 0;
    _DAT_00000054 = 0;
    _DAT_0000005c = 5000000;
_L0:
    _DAT_00000058 = 1;
    _DAT_00000048 = 1;
    _DAT_0000002c = 0;
    _DAT_00000028 = 0;
    _DAT_00000018 = 1;
    _DAT_00000010 = 1;
    _DAT_00000008 = 1;
_L0:
    _DAT_00000040 = 1;
    _DAT_00000064 = 0;
  }
  else {
    if (xtalfreq == 1) {
      _DAT_00000004 = 6000000;
      _DAT_0000000c = 1000000;
      _DAT_00000014 = 0xffc2f700;
      _DAT_0000001c = 0xff76abc0;
      _DAT_0000002c = 7000000;
      _DAT_00000034 = 2000000;
      _DAT_0000003c = 0xffd23940;
      _DAT_00000044 = 0xff85ee00;
      _DAT_00000054 = 8000000;
      _DAT_0000005c = 3000000;
      _DAT_00000020 = 0;
      _DAT_00000048 = 0;
      _DAT_0000004c = 0;
      _DAT_00000064 = 0xffe17b80;
      _DAT_00000040 = xtalfreq;
      _DAT_00000060 = xtalfreq;
    }
    else {
      if (xtalfreq != 2) {
        if (xtalfreq == 3) {
          uRam00000000 = 1;
          _DAT_00000050 = 1;
          _DAT_00000004 = 7200000;
          _DAT_0000000c = 2200000;
          _DAT_00000014 = 0xffd54680;
          _DAT_0000001c = 0xff88fb40;
          _DAT_00000044 = 5600000;
          _DAT_0000004c = 600000;
          _DAT_00000054 = 0xffbcdc80;
          _DAT_00000020 = 0;
          _DAT_00000030 = 0;
          _DAT_00000038 = 0;
          _DAT_00000060 = 0;
          _DAT_00000024 = 0;
          _DAT_00000034 = 0;
          _DAT_0000003c = 0;
          _DAT_0000005c = 0xff709140;
          goto _L0;
        }
        if (xtalfreq == 4) {
          uRam00000000 = 0;
          _DAT_00000004 = 0;
          _DAT_00000008 = 0;
          _DAT_0000000c = 0;
          _DAT_00000010 = 0;
          _DAT_00000014 = 0;
          _DAT_00000018 = 0;
          _DAT_0000001c = 0;
          _DAT_00000020 = 1;
          _DAT_00000024 = 8000000;
          _DAT_00000028 = 1;
          _DAT_0000002c = 3000000;
          _DAT_00000030 = 1;
          _DAT_00000034 = 0xffe17b80;
          _DAT_00000038 = 1;
          _DAT_0000003c = 0xff953040;
          _DAT_00000040 = 0;
          _DAT_00000044 = 0;
          _DAT_00000048 = 0;
          _DAT_0000004c = 0;
          _DAT_00000050 = 0;
          _DAT_00000054 = 0;
          _DAT_00000058 = 0;
          _DAT_0000005c = 0;
          _DAT_00000060 = 1;
          _DAT_00000064 = 8000000;
          _DAT_00000068 = 1;
          _DAT_0000006c = 0xffc2f700;
          return;
        }
        if (xtalfreq != 5) {
          return;
        }
        _DAT_00000028 = 1;
        _DAT_00000030 = 1;
        _DAT_00000038 = 1;
        _DAT_0000002c = 7000000;
        _DAT_00000034 = 2000000;
        _DAT_0000003c = 0xffd23940;
        uRam00000000 = 0;
        _DAT_00000008 = 0;
        _DAT_00000010 = 0;
        _DAT_00000018 = 0;
        _DAT_00000020 = 0;
        _DAT_00000048 = 0;
        _DAT_00000050 = 0;
        _DAT_00000058 = 0;
        _DAT_00000060 = 0;
        _DAT_00000004 = 0;
        _DAT_0000000c = 0;
        _DAT_00000014 = 0;
        _DAT_0000001c = 0;
        _DAT_00000024 = 0;
        _DAT_00000044 = 0xff85ee00;
        _DAT_0000004c = 0;
        _DAT_00000054 = 0;
        _DAT_0000005c = 0;
        goto _L0;
      }
      _DAT_00000020 = 1;
      _DAT_00000048 = 1;
      _DAT_00000060 = 1;
      _DAT_00000014 = 10000000;
      _DAT_0000001c = 5000000;
      _DAT_0000002c = 0xffb3b4c0;
      _DAT_00000034 = 0xff676980;
      _DAT_0000004c = 7000000;
      _DAT_00000054 = 2000000;
      _DAT_0000005c = 0xffd23940;
      _DAT_00000040 = 0;
      _DAT_00000004 = 0;
      _DAT_0000000c = 0;
      _DAT_0000003c = 0;
      _DAT_00000044 = 0;
      _DAT_00000064 = 0xff85ee00;
    }
    _DAT_00000024 = 0;
    uRam00000000 = _DAT_00000040;
    _DAT_00000008 = _DAT_00000040;
    _DAT_00000010 = _DAT_00000060;
    _DAT_00000018 = _DAT_00000060;
    _DAT_00000028 = _DAT_00000060;
    _DAT_00000030 = _DAT_00000060;
    _DAT_00000038 = _DAT_00000040;
    _DAT_00000050 = _DAT_00000060;
    _DAT_00000058 = _DAT_00000060;
  }
  _DAT_00000068 = 0;
  _DAT_0000006c = 0;
  return;
}



// DWARF DIE: 29fe

uint32_t rf_pri_get_vco_freq_cw(uint32_t chanfreq_MHz)

{
  ushort uVar1;
  undefined2 extraout_var;
  int iVar2;
  
  _L0();
  FUN_0001206c();
  uVar1 = _L0();
  iVar2 = CONCAT22(extraout_var,uVar1);
  if (0x14 < CONCAT22(extraout_var,uVar1)) {
    iVar2 = 0x14;
  }
  return *(ushort *)((iVar2 + 8) * 2 + iRam00000000 + 0xc) & 0xff;
}



ushort _L0(void)

{
  ushort uVar1;
  undefined2 extraout_var;
  int iVar2;
  
  _L0();
  FUN_0001206c();
  uVar1 = _L0();
  iVar2 = CONCAT22(extraout_var,uVar1);
  if (0x14 < CONCAT22(extraout_var,uVar1)) {
    iVar2 = 0x14;
  }
  return *(ushort *)((iVar2 + 8) * 2 + iRam00000000 + 0xc) & 0xff;
}



ushort FUN_0001206c(void)

{
  ushort uVar1;
  undefined2 extraout_var;
  int iVar2;
  
  FUN_0001206c();
  uVar1 = _L0();
  iVar2 = CONCAT22(extraout_var,uVar1);
  if (0x14 < CONCAT22(extraout_var,uVar1)) {
    iVar2 = 0x14;
  }
  return *(ushort *)((iVar2 + 8) * 2 + iRam00000000 + 0xc) & 0xff;
}



ushort _L0(void)

{
  ushort uVar1;
  undefined2 extraout_var;
  int iVar2;
  
  uVar1 = _L0();
  iVar2 = CONCAT22(extraout_var,uVar1);
  if (0x14 < CONCAT22(extraout_var,uVar1)) {
    iVar2 = 0x14;
  }
  return *(ushort *)((iVar2 + 8) * 2 + iRam00000000 + 0xc) & 0xff;
}



// DWARF DIE: 29c2

uint32_t rf_pri_get_vco_idac_cw(uint32_t chanfreq_MHz)

{
  ushort uVar1;
  undefined2 extraout_var;
  int iVar2;
  
  _L0();
  FUN_000120c2();
  uVar1 = _L0();
  iVar2 = CONCAT22(extraout_var,uVar1);
  if (0x14 < CONCAT22(extraout_var,uVar1)) {
    iVar2 = 0x14;
  }
  return *(ushort *)((iVar2 + 8) * 2 + iRam00000000 + 0xc) >> 8 & 0x1f;
}



ushort _L0(void)

{
  ushort uVar1;
  undefined2 extraout_var;
  int iVar2;
  
  _L0();
  FUN_000120c2();
  uVar1 = _L0();
  iVar2 = CONCAT22(extraout_var,uVar1);
  if (0x14 < CONCAT22(extraout_var,uVar1)) {
    iVar2 = 0x14;
  }
  return *(ushort *)((iVar2 + 8) * 2 + iRam00000000 + 0xc) >> 8 & 0x1f;
}



ushort FUN_000120c2(void)

{
  ushort uVar1;
  undefined2 extraout_var;
  int iVar2;
  
  FUN_000120c2();
  uVar1 = _L0();
  iVar2 = CONCAT22(extraout_var,uVar1);
  if (0x14 < CONCAT22(extraout_var,uVar1)) {
    iVar2 = 0x14;
  }
  return *(ushort *)((iVar2 + 8) * 2 + iRam00000000 + 0xc) >> 8 & 0x1f;
}



ushort _L0(void)

{
  ushort uVar1;
  undefined2 extraout_var;
  int iVar2;
  
  uVar1 = _L0();
  iVar2 = CONCAT22(extraout_var,uVar1);
  if (0x14 < CONCAT22(extraout_var,uVar1)) {
    iVar2 = 0x14;
  }
  return *(ushort *)((iVar2 + 8) * 2 + iRam00000000 + 0xc) >> 8 & 0x1f;
}



// DWARF DIE: 299b

void rf_pri_update_txgain_tempos(int16_t tempos)

{
  undefined2 in_register_0000202a;
  
  uRam00000000 = CONCAT22(in_register_0000202a,tempos);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2984

int32_t rf_pri_get_txgain_max(void)

{
  return _DAT_00000018 + iRam00000000 * 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 296d

int32_t rf_pri_get_txgain_min(void)

{
  return _DAT_000001bc + iRam00000000 * 2;
}



// DWARF DIE: 2920

uint32_t rf_pri_get_txgain_index(int32_t pwr,uint32_t mode)

{
  int iVar1;
  uint32_t uVar2;
  
  if (mode == 0) {
    pwr += -0x1e;
  }
  iVar1 = 0;
  uVar2 = 0;
  do {
    if (*(int *)(iVar1 + 0x18) + iRam00000000 * 2 <= pwr) {
      return uVar2;
    }
    uVar2 += 1;
    iVar1 += 0x1c;
  } while (uVar2 != 0x10);
  return 0xf;
}



// DWARF DIE: 28d4

void rf_pri_query_txgain_table(uint32_t index,uint32_t *rfg_index,uint32_t *dg)

{
  if (0xf < index) {
    index = 0xf;
  }
  *rfg_index = 7 - (index >> 1);
  *dg = *(uint32_t *)(index * 0x1c + 0x14);
  return;
}



// DWARF DIE: 289e

void rf_pri_update_dvga_os(int8_t dvga_os)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar1 = (char *)0x0;
  do {
    pcVar2 = pcVar1 + 1;
    *pcVar1 = (char)*(undefined4 *)(iVar3 + 0x14) + dvga_os;
    iVar3 += 0x1c;
    pcVar1 = pcVar2;
  } while (pcVar2 != &DAT_00000010);
  return;
}



// DWARF DIE: 2828

void rf_pri_tx_gain_comp(int32_t Tsens)

{
  int iVar1;
  int iVar2;
  
  if (iRam00000000 == 1) {
    if ((Tsens < 1) && (-4 < Tsens)) {
_L0:
      iRam00000000 *= -10;
      _L0();
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  else {
    if (((iRam00000000 == -1) && (-1 < Tsens)) && (Tsens < 4)) goto _L0;
  }
  iVar2 = 0;
  iVar1 = 0xc;
  do {
    if (*(int *)(iVar2 + 0x30) <= Tsens) break;
    iVar1 += -1;
    iVar2 += -4;
  } while (iVar1 != -1);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  iRam00000000 = iVar1 + -4;
  if ((Tsens < 0x23) && (Tsens <= *(int *)(iVar1 * 4))) {
    iRam00000000 = iVar1 + -5;
  }
  if (iRam00000000 < 1) {
    if (iRam00000000 != 0) {
      iRam00000000 = (iRam00000000 + -1) / 2;
    }
  }
  else {
    iRam00000000 = iRam00000000 + 1 >> 1;
  }
  iRam00000000 *= -10;
  _L0();
  return;
}



void _L0(void)

{
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1f6a

void rf_pri_config_bandwidth(uint32_t bw)

{
  _DAT_40001084 = bw << 0x18 | _DAT_40001084 & 0xfcffffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1a90

void rf_pri_txcal(void)

{
  uint uVar1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  _DAT_40001014 = _DAT_40001014 & 0xff0fffff | 0x500000;
  _L0();
  FUN_0001236e();
  _L0();
  _DAT_4000101c |= 0x3000;
  _DAT_40001084 |= 0x80000000;
  _DAT_40001064 |= 0x400000;
  iVar2 = 7;
  _DAT_4000106c = uRam00000000 & 0xffff | _DAT_4000106c & 0xfffffff8;
  _L0();
  piVar3 = (int *)0x0;
  piVar4 = (int *)0x0;
  do {
    _DAT_40001064 = *piVar3 << 0x1c | _DAT_40001064 & 0xfc3ffff | piVar3[2] << 0x12;
    _DAT_40001058 = piVar3[1] << 0x10 | _DAT_40001058 & 0xfff8ffff;
    _DAT_40001048 = *piVar4 << 0x1c | _DAT_40001048 & 0xce08ffff | piVar4[3] << 0x14 | 0x70000;
    _L0(10);
    uVar5 = piVar3[3];
    uVar6 = uVar5;
    do {
      uVar6 >>= 1;
      _DAT_40001214 = uVar5 | _DAT_40001214 & 0xfffff800;
      _DAT_40001218 = uVar5 | _DAT_40001218 & 0xfffff800;
      _L0();
      _L0();
      FUN_00012486(10);
      FUN_00012494(1,0x400);
      iVar7 = extraout_a0 >> 10;
      FUN_000124ae(0,uVar5,uVar6,iVar7);
      if (iVar7 < 0x141) {
        uVar1 = uVar6;
        if (0xbf < iVar7) break;
      }
      else {
        uVar1 = -uVar6;
      }
      uVar5 += uVar1;
    } while (uVar6 != 0);
    FUN_000124dc(1,0x1000);
    FUN_000124f0(0,0x20,0x10,0x3d);
    _LVL640(0,extraout_a0_00);
    FUN_00012512(1,0x20,0x10,0x3d);
    _DAT_40001070 = extraout_a0_01 << 0x10 | _DAT_40001070 & 0xffc0ffff;
    _LVL647(0,extraout_a0_00,2,0x3d);
    _LVL649(0,extraout_a0_02);
    FUN_00012558(2,0x400,0x80,0x7a);
    _LVL653(2,extraout_a0_03);
    FUN_0001257a(3,0,0x40,0x7a);
    _LVL656(3,extraout_a0_04);
    FUN_0001259a(2,extraout_a0_03,0x40,0x7a);
    _LVL659(2,extraout_a0_05);
    FUN_000125bc(3,0,0x20,0x7a);
    _LVL662(3,extraout_a0_06);
    iVar7 = (iVar2 + 0xc) * 8 + uRam00000000;
    *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) & 0xffffffc0 | extraout_a0_02 & 0x3f;
    *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) & 0xfffff03f | (extraout_a0_01 & 0x3f) << 6;
    *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
    *(uint *)(iVar7 + 0xc) = *(uint *)(iVar7 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
    FUN_0001263e(0,extraout_a0_02,extraout_a0_01,extraout_a0_05);
    iVar2 += -1;
    piVar3 = piVar3 + 4;
    piVar4 = piVar4 + 0xe;
    if (iVar2 == -1) {
      _L0();
      _DAT_4000101c &= 0xffffcfff;
      _L0();
      _DAT_40001014 = _DAT_40001014 | 0xf00000;
      _DAT_40001070 =
           (*(uint *)(uRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
           (*(uint *)(uRam00000000 + 0x80) & 0x3f) << 0x18 | _DAT_40001070 & 0xc0c0ffff;
      _DAT_40001600 =
           *(uint *)(uRam00000000 + 0x84) & 0x3ff |
           *(uint *)(uRam00000000 + 0x80) & 0x7ff000 | _DAT_40001600 & 0xff800c00;
      return;
    }
  } while( true );
}



void _L0(void)

{
  uint uVar1;
  int unaff_s0;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uStack0000000c;
  
  _L0();
  FUN_0001236e();
  _L0();
  *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) | 0x3000;
  *(uint *)(unaff_s0 + 0x84) = *(uint *)(unaff_s0 + 0x84) | 0x80000000;
  *(uint *)(unaff_s0 + 100) = *(uint *)(unaff_s0 + 100) | 0x400000;
  iVar2 = 7;
  *(uint *)(unaff_s0 + 0x6c) = uRam00000000 & 0xffff | *(uint *)(unaff_s0 + 0x6c) & 0xfffffff8;
  _L0();
  piVar3 = (int *)0x0;
  piVar4 = (int *)0x0;
  uStack0000000c = 0xfffffff;
  do {
    *(uint *)(unaff_s0 + 100) =
         *piVar3 << 0x1c | uStack0000000c & *(uint *)(unaff_s0 + 100) & 0xffc3ffff |
         piVar3[2] << 0x12;
    *(uint *)(unaff_s0 + 0x58) = piVar3[1] << 0x10 | *(uint *)(unaff_s0 + 0x58) & 0xfff8ffff;
    *(uint *)(unaff_s0 + 0x48) =
         *piVar4 << 0x1c | *(uint *)(unaff_s0 + 0x48) & 0xce08ffff | piVar4[3] << 0x14 | 0x70000;
    _L0(10);
    uVar5 = piVar3[3];
    uVar6 = uVar5;
    do {
      uVar6 >>= 1;
      *(uint *)(unaff_s0 + 0x214) = uVar5 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
      *(uint *)(unaff_s0 + 0x218) = uVar5 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
      _L0();
      _L0();
      FUN_00012486(10);
      FUN_00012494(1,0x400);
      iVar7 = extraout_a0 >> 10;
      FUN_000124ae(0,uVar5,uVar6,iVar7);
      if (iVar7 < 0x141) {
        uVar1 = uVar6;
        if (0xbf < iVar7) break;
      }
      else {
        uVar1 = -uVar6;
      }
      uVar5 += uVar1;
    } while (uVar6 != 0);
    FUN_000124dc(1,0x1000);
    FUN_000124f0(0,0x20,0x10,0x3d);
    _LVL640(0,extraout_a0_00);
    FUN_00012512(1,0x20,0x10,0x3d);
    *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & 0xffc0ffff;
    _LVL647(0,extraout_a0_00,2,0x3d);
    _LVL649(0,extraout_a0_02);
    FUN_00012558(2,0x400,0x80,0x7a);
    _LVL653(2,extraout_a0_03);
    FUN_0001257a(3,0,0x40,0x7a);
    _LVL656(3,extraout_a0_04);
    FUN_0001259a(2,extraout_a0_03,0x40,0x7a);
    _LVL659(2,extraout_a0_05);
    FUN_000125bc(3,0,0x20,0x7a);
    _LVL662(3,extraout_a0_06);
    iVar7 = (iVar2 + 0xc) * 8 + uRam00000000;
    *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) & 0xffffffc0 | extraout_a0_02 & 0x3f;
    *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) & 0xfffff03f | (extraout_a0_01 & 0x3f) << 6;
    *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
    *(uint *)(iVar7 + 0xc) = *(uint *)(iVar7 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
    FUN_0001263e(0,extraout_a0_02,extraout_a0_01,extraout_a0_05);
    iVar2 += -1;
    piVar3 = piVar3 + 4;
    piVar4 = piVar4 + 0xe;
    if (iVar2 == -1) {
      _L0();
      *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
      _L0();
      *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
      *(uint *)(unaff_s0 + 0x70) =
           (*(uint *)(uRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
           (*(uint *)(uRam00000000 + 0x80) & 0x3f) << 0x18 | *(uint *)(unaff_s0 + 0x70) & 0xc0c0ffff
      ;
      *(uint *)(unaff_s0 + 0x600) =
           *(uint *)(uRam00000000 + 0x84) & 0x3ff |
           *(uint *)(uRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
      return;
    }
  } while( true );
}



void FUN_0001236e(void)

{
  uint uVar1;
  int unaff_s0;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uStack0000000c;
  
  FUN_0001236e();
  _L0();
  *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) | 0x3000;
  *(uint *)(unaff_s0 + 0x84) = *(uint *)(unaff_s0 + 0x84) | 0x80000000;
  *(uint *)(unaff_s0 + 100) = *(uint *)(unaff_s0 + 100) | 0x400000;
  iVar2 = 7;
  *(uint *)(unaff_s0 + 0x6c) = uRam00000000 & 0xffff | *(uint *)(unaff_s0 + 0x6c) & 0xfffffff8;
  _L0();
  piVar3 = (int *)0x0;
  piVar4 = (int *)0x0;
  uStack0000000c = 0xfffffff;
  do {
    *(uint *)(unaff_s0 + 100) =
         *piVar3 << 0x1c | uStack0000000c & *(uint *)(unaff_s0 + 100) & 0xffc3ffff |
         piVar3[2] << 0x12;
    *(uint *)(unaff_s0 + 0x58) = piVar3[1] << 0x10 | *(uint *)(unaff_s0 + 0x58) & 0xfff8ffff;
    *(uint *)(unaff_s0 + 0x48) =
         *piVar4 << 0x1c | *(uint *)(unaff_s0 + 0x48) & 0xce08ffff | piVar4[3] << 0x14 | 0x70000;
    _L0(10);
    uVar5 = piVar3[3];
    uVar6 = uVar5;
    do {
      uVar6 >>= 1;
      *(uint *)(unaff_s0 + 0x214) = uVar5 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
      *(uint *)(unaff_s0 + 0x218) = uVar5 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
      _L0();
      _L0();
      FUN_00012486(10);
      FUN_00012494(1,0x400);
      iVar7 = extraout_a0 >> 10;
      FUN_000124ae(0,uVar5,uVar6,iVar7);
      if (iVar7 < 0x141) {
        uVar1 = uVar6;
        if (0xbf < iVar7) break;
      }
      else {
        uVar1 = -uVar6;
      }
      uVar5 += uVar1;
    } while (uVar6 != 0);
    FUN_000124dc(1,0x1000);
    FUN_000124f0(0,0x20,0x10,0x3d);
    _LVL640(0,extraout_a0_00);
    FUN_00012512(1,0x20,0x10,0x3d);
    *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & 0xffc0ffff;
    _LVL647(0,extraout_a0_00,2,0x3d);
    _LVL649(0,extraout_a0_02);
    FUN_00012558(2,0x400,0x80,0x7a);
    _LVL653(2,extraout_a0_03);
    FUN_0001257a(3,0,0x40,0x7a);
    _LVL656(3,extraout_a0_04);
    FUN_0001259a(2,extraout_a0_03,0x40,0x7a);
    _LVL659(2,extraout_a0_05);
    FUN_000125bc(3,0,0x20,0x7a);
    _LVL662(3,extraout_a0_06);
    iVar7 = (iVar2 + 0xc) * 8 + uRam00000000;
    *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) & 0xffffffc0 | extraout_a0_02 & 0x3f;
    *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) & 0xfffff03f | (extraout_a0_01 & 0x3f) << 6;
    *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
    *(uint *)(iVar7 + 0xc) = *(uint *)(iVar7 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
    FUN_0001263e(0,extraout_a0_02,extraout_a0_01,extraout_a0_05);
    iVar2 += -1;
    piVar3 = piVar3 + 4;
    piVar4 = piVar4 + 0xe;
    if (iVar2 == -1) {
      _L0();
      *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
      _L0();
      *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
      *(uint *)(unaff_s0 + 0x70) =
           (*(uint *)(uRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
           (*(uint *)(uRam00000000 + 0x80) & 0x3f) << 0x18 | *(uint *)(unaff_s0 + 0x70) & 0xc0c0ffff
      ;
      *(uint *)(unaff_s0 + 0x600) =
           *(uint *)(uRam00000000 + 0x84) & 0x3ff |
           *(uint *)(uRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
      return;
    }
  } while( true );
}



void _L0(void)

{
  uint uVar1;
  int unaff_s0;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uStack0000000c;
  
  _L0();
  *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) | 0x3000;
  *(uint *)(unaff_s0 + 0x84) = *(uint *)(unaff_s0 + 0x84) | 0x80000000;
  *(uint *)(unaff_s0 + 100) = *(uint *)(unaff_s0 + 100) | 0x400000;
  iVar2 = 7;
  *(uint *)(unaff_s0 + 0x6c) = uRam00000000 & 0xffff | *(uint *)(unaff_s0 + 0x6c) & 0xfffffff8;
  _L0();
  piVar3 = (int *)0x0;
  piVar4 = (int *)0x0;
  uStack0000000c = 0xfffffff;
  do {
    *(uint *)(unaff_s0 + 100) =
         *piVar3 << 0x1c | uStack0000000c & *(uint *)(unaff_s0 + 100) & 0xffc3ffff |
         piVar3[2] << 0x12;
    *(uint *)(unaff_s0 + 0x58) = piVar3[1] << 0x10 | *(uint *)(unaff_s0 + 0x58) & 0xfff8ffff;
    *(uint *)(unaff_s0 + 0x48) =
         *piVar4 << 0x1c | *(uint *)(unaff_s0 + 0x48) & 0xce08ffff | piVar4[3] << 0x14 | 0x70000;
    _L0(10);
    uVar5 = piVar3[3];
    uVar6 = uVar5;
    do {
      uVar6 >>= 1;
      *(uint *)(unaff_s0 + 0x214) = uVar5 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
      *(uint *)(unaff_s0 + 0x218) = uVar5 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
      _L0();
      _L0();
      FUN_00012486(10);
      FUN_00012494(1,0x400);
      iVar7 = extraout_a0 >> 10;
      FUN_000124ae(0,uVar5,uVar6,iVar7);
      if (iVar7 < 0x141) {
        uVar1 = uVar6;
        if (0xbf < iVar7) break;
      }
      else {
        uVar1 = -uVar6;
      }
      uVar5 += uVar1;
    } while (uVar6 != 0);
    FUN_000124dc(1,0x1000);
    FUN_000124f0(0,0x20,0x10,0x3d);
    _LVL640(0,extraout_a0_00);
    FUN_00012512(1,0x20,0x10,0x3d);
    *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & 0xffc0ffff;
    _LVL647(0,extraout_a0_00,2,0x3d);
    _LVL649(0,extraout_a0_02);
    FUN_00012558(2,0x400,0x80,0x7a);
    _LVL653(2,extraout_a0_03);
    FUN_0001257a(3,0,0x40,0x7a);
    _LVL656(3,extraout_a0_04);
    FUN_0001259a(2,extraout_a0_03,0x40,0x7a);
    _LVL659(2,extraout_a0_05);
    FUN_000125bc(3,0,0x20,0x7a);
    _LVL662(3,extraout_a0_06);
    iVar7 = (iVar2 + 0xc) * 8 + uRam00000000;
    *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) & 0xffffffc0 | extraout_a0_02 & 0x3f;
    *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) & 0xfffff03f | (extraout_a0_01 & 0x3f) << 6;
    *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
    *(uint *)(iVar7 + 0xc) = *(uint *)(iVar7 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
    FUN_0001263e(0,extraout_a0_02,extraout_a0_01,extraout_a0_05);
    iVar2 += -1;
    piVar3 = piVar3 + 4;
    piVar4 = piVar4 + 0xe;
    if (iVar2 == -1) {
      _L0();
      *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
      _L0();
      *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
      *(uint *)(unaff_s0 + 0x70) =
           (*(uint *)(uRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
           (*(uint *)(uRam00000000 + 0x80) & 0x3f) << 0x18 | *(uint *)(unaff_s0 + 0x70) & 0xc0c0ffff
      ;
      *(uint *)(unaff_s0 + 0x600) =
           *(uint *)(uRam00000000 + 0x84) & 0x3ff |
           *(uint *)(uRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
      return;
    }
  } while( true );
}



void _L0(void)

{
  uint uVar1;
  int unaff_s0;
  int unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int unaff_s2;
  int *piVar2;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uStack0000000c;
  
  _L0();
  piVar2 = (int *)0x0;
  piVar3 = (int *)0x0;
  uStack0000000c = 0xfffffff;
  do {
    *(uint *)(unaff_s0 + 100) =
         (*piVar2 << 0x1c | uStack0000000c & *(uint *)(unaff_s0 + 100)) & unaff_s4 - 1U |
         piVar2[2] << 0x12;
    *(uint *)(unaff_s0 + 0x58) = piVar2[1] << 0x10 | *(uint *)(unaff_s0 + 0x58) & unaff_s5 - 1U;
    *(uint *)(unaff_s0 + 0x48) =
         (*piVar3 << 0x1c | *(uint *)(unaff_s0 + 0x48) & unaff_s6 - 1U) & unaff_s7 - 1U |
         piVar3[3] << 0x14 | 0x70000;
    _L0(10);
    uVar4 = piVar2[3];
    uVar5 = uVar4;
    do {
      uVar5 >>= 1;
      *(uint *)(unaff_s0 + 0x214) = uVar4 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
      *(uint *)(unaff_s0 + 0x218) = uVar4 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
      _L0();
      _L0();
      FUN_00012486(10);
      FUN_00012494(1,0x400);
      iVar6 = extraout_a0 >> 10;
      FUN_000124ae(0,uVar4,uVar5,iVar6);
      if (iVar6 < 0x141) {
        uVar1 = uVar5;
        if (0xbf < iVar6) break;
      }
      else {
        uVar1 = -uVar5;
      }
      uVar4 += uVar1;
    } while (uVar5 != 0);
    FUN_000124dc(1,0x1000);
    FUN_000124f0(0,0x20,0x10,0x3d);
    _LVL640(0,extraout_a0_00);
    FUN_00012512(1,0x20,0x10,0x3d);
    *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & unaff_s1 - 1U
    ;
    _LVL647(0,extraout_a0_00,2,0x3d);
    _LVL649(0,extraout_a0_02);
    FUN_00012558(2,0x400,0x80,0x7a);
    _LVL653(2,extraout_a0_03);
    FUN_0001257a(3,0,0x40,0x7a);
    _LVL656(3,extraout_a0_04);
    FUN_0001259a(2,extraout_a0_03,0x40,0x7a);
    _LVL659(2,extraout_a0_05);
    FUN_000125bc(3,0,0x20,0x7a);
    _LVL662(3,extraout_a0_06);
    iVar6 = (unaff_s2 + 0xc) * 8 + iRam00000000;
    *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) & 0xffffffc0 | extraout_a0_02 & 0x3f;
    *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) & 0xfffff03f | (extraout_a0_01 & 0x3f) << 6;
    *(uint *)(iVar6 + 8) = *(uint *)(iVar6 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
    *(uint *)(iVar6 + 0xc) = *(uint *)(iVar6 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
    FUN_0001263e(0,extraout_a0_02,extraout_a0_01,extraout_a0_05);
    unaff_s2 += -1;
    piVar2 = piVar2 + 4;
    piVar3 = piVar3 + 0xe;
    if (unaff_s2 == -1) {
      _L0();
      *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
      _L0();
      *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
      *(uint *)(unaff_s0 + 0x70) =
           (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
           ((*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x18 |
           *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) & unaff_s1 - 1U;
      *(uint *)(unaff_s0 + 0x600) =
           *(uint *)(iRam00000000 + 0x84) & 0x3ff |
           *(uint *)(iRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
      return;
    }
  } while( true );
}



void _L0(undefined4 param_1)

{
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int *unaff_s8;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint in_stack_0000000c;
  
  do {
    _L0(param_1);
    uVar2 = unaff_s3[3];
    uVar3 = uVar2;
    do {
      uVar3 >>= 1;
      *(uint *)(unaff_s0 + 0x214) = uVar2 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
      *(uint *)(unaff_s0 + 0x218) = uVar2 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
      _L0();
      _L0();
      FUN_00012486(10);
      FUN_00012494(1,0x400);
      iVar4 = extraout_a0 >> 10;
      FUN_000124ae(0,uVar2,uVar3,iVar4);
      if (iVar4 < 0x141) {
        uVar1 = uVar3;
        if (0xbf < iVar4) break;
      }
      else {
        uVar1 = -uVar3;
      }
      uVar2 += uVar1;
    } while (uVar3 != 0);
    FUN_000124dc(1,0x1000);
    FUN_000124f0(0,0x20,0x10,0x3d);
    _LVL640(0,extraout_a0_00);
    FUN_00012512(1,0x20,0x10,0x3d);
    *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & unaff_s1;
    _LVL647(0,extraout_a0_00,2,0x3d);
    _LVL649(0,extraout_a0_02);
    FUN_00012558(2,0x400,0x80,0x7a);
    _LVL653(2,extraout_a0_03);
    FUN_0001257a(3,0,0x40,0x7a);
    _LVL656(3,extraout_a0_04);
    FUN_0001259a(2,extraout_a0_03,0x40,0x7a);
    _LVL659(2,extraout_a0_05);
    FUN_000125bc(3,0,0x20,0x7a);
    _LVL662(3,extraout_a0_06);
    iVar4 = (unaff_s2 + 0xc) * 8 + iRam00000000;
    *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) & 0xffffffc0 | extraout_a0_02 & 0x3f;
    *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) & 0xfffff03f | (extraout_a0_01 & 0x3f) << 6;
    *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
    *(uint *)(iVar4 + 0xc) = *(uint *)(iVar4 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
    FUN_0001263e(0,extraout_a0_02,extraout_a0_01,extraout_a0_05);
    unaff_s2 += -1;
    if (unaff_s2 == -1) {
      _L0();
      *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
      _L0();
      *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
      *(uint *)(unaff_s0 + 0x70) =
           (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
           ((*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x18 |
           *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) & unaff_s1;
      *(uint *)(unaff_s0 + 0x600) =
           *(uint *)(iRam00000000 + 0x84) & 0x3ff |
           *(uint *)(iRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
      return;
    }
    param_1 = 10;
    *(uint *)(unaff_s0 + 100) =
         (unaff_s3[4] << 0x1c | in_stack_0000000c & *(uint *)(unaff_s0 + 100)) & unaff_s4 |
         unaff_s3[6] << 0x12;
    *(uint *)(unaff_s0 + 0x58) = unaff_s3[5] << 0x10 | *(uint *)(unaff_s0 + 0x58) & unaff_s5;
    *(uint *)(unaff_s0 + 0x48) =
         (unaff_s8[0xe] << 0x1c | *(uint *)(unaff_s0 + 0x48) & unaff_s6) & unaff_s7 |
         unaff_s8[0x11] << 0x14 | 0x70000;
    unaff_s3 = unaff_s3 + 4;
    unaff_s8 = unaff_s8 + 0xe;
  } while( true );
}



void _L0(void)

{
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int *unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  int iVar2;
  uint in_stack_0000000c;
  
  do {
    _L0();
    _L0();
    FUN_00012486(10);
    FUN_00012494(1,0x400);
    iVar2 = extraout_a0 >> 10;
    FUN_000124ae(0,unaff_s9,unaff_s10,iVar2);
    if (iVar2 < 0x141) {
      uVar1 = unaff_s10;
      if (iVar2 < 0xc0) goto _L0;
_L0:
      FUN_000124dc(1,0x1000);
      FUN_000124f0(0,0x20,0x10,0x3d);
      _LVL640(0,extraout_a0_00);
      FUN_00012512(1,0x20,0x10,0x3d);
      *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & unaff_s1;
      _LVL647(0,extraout_a0_00,2,0x3d);
      _LVL649(0,extraout_a0_02);
      FUN_00012558(2,0x400,0x80,0x7a);
      _LVL653(2,extraout_a0_03);
      FUN_0001257a(3,0,0x40,0x7a);
      _LVL656(3,extraout_a0_04);
      FUN_0001259a(2,extraout_a0_03,0x40,0x7a);
      _LVL659(2,extraout_a0_05);
      FUN_000125bc(3,0,0x20,0x7a);
      _LVL662(3,extraout_a0_06);
      iVar2 = (unaff_s2 + 0xc) * 8 + iRam00000000;
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffffffc0 | extraout_a0_02 & 0x3f;
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffff03f | (extraout_a0_01 & 0x3f) << 6;
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
      *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
      FUN_0001263e(0,extraout_a0_02,extraout_a0_01,extraout_a0_05);
      unaff_s2 += -1;
      if (unaff_s2 == -1) {
        _L0();
        *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
        _L0();
        *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
        *(uint *)(unaff_s0 + 0x70) =
             (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
             ((*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x18 |
             *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) & unaff_s1;
        *(uint *)(unaff_s0 + 0x600) =
             *(uint *)(iRam00000000 + 0x84) & 0x3ff |
             *(uint *)(iRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
        return;
      }
      *(uint *)(unaff_s0 + 100) =
           (unaff_s3[4] << 0x1c | in_stack_0000000c & *(uint *)(unaff_s0 + 100)) & unaff_s4 |
           unaff_s3[6] << 0x12;
      *(uint *)(unaff_s0 + 0x58) = unaff_s3[5] << 0x10 | *(uint *)(unaff_s0 + 0x58) & unaff_s5;
      *(uint *)(unaff_s0 + 0x48) =
           (unaff_s8[0xe] << 0x1c | *(uint *)(unaff_s0 + 0x48) & unaff_s6) & unaff_s7 |
           unaff_s8[0x11] << 0x14 | 0x70000;
      _L0(10);
      unaff_s9 = unaff_s3[7];
      unaff_s3 = unaff_s3 + 4;
      unaff_s8 = unaff_s8 + 0xe;
      unaff_s10 = unaff_s9;
    }
    else {
      uVar1 = -unaff_s10;
_L0:
      unaff_s9 += uVar1;
      if (unaff_s10 == 0) goto _L0;
    }
    unaff_s10 >>= 1;
    *(uint *)(unaff_s0 + 0x214) = unaff_s9 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
    *(uint *)(unaff_s0 + 0x218) = unaff_s9 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
  } while( true );
}



void _L0(void)

{
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int *unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  int iVar2;
  uint in_stack_0000000c;
  
  do {
    _L0();
    FUN_00012486(10);
    FUN_00012494(1,0x400);
    iVar2 = extraout_a0 >> 10;
    FUN_000124ae(0,unaff_s9,unaff_s10,iVar2);
    if (iVar2 < 0x141) {
      uVar1 = unaff_s10;
      if (iVar2 < 0xc0) goto _L0;
_L0:
      FUN_000124dc(1,0x1000);
      FUN_000124f0(0,0x20,0x10,0x3d);
      _LVL640(0,extraout_a0_00);
      FUN_00012512(1,0x20,0x10,0x3d);
      *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & unaff_s1;
      _LVL647(0,extraout_a0_00,2,0x3d);
      _LVL649(0,extraout_a0_02);
      FUN_00012558(2,0x400,0x80,0x7a);
      _LVL653(2,extraout_a0_03);
      FUN_0001257a(3,0,0x40,0x7a);
      _LVL656(3,extraout_a0_04);
      FUN_0001259a(2,extraout_a0_03,0x40,0x7a);
      _LVL659(2,extraout_a0_05);
      FUN_000125bc(3,0,0x20,0x7a);
      _LVL662(3,extraout_a0_06);
      iVar2 = (unaff_s2 + 0xc) * 8 + iRam00000000;
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffffffc0 | extraout_a0_02 & 0x3f;
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffff03f | (extraout_a0_01 & 0x3f) << 6;
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
      *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
      FUN_0001263e(0,extraout_a0_02,extraout_a0_01,extraout_a0_05);
      unaff_s2 += -1;
      if (unaff_s2 == -1) {
        _L0();
        *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
        _L0();
        *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
        *(uint *)(unaff_s0 + 0x70) =
             (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
             ((*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x18 |
             *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) & unaff_s1;
        *(uint *)(unaff_s0 + 0x600) =
             *(uint *)(iRam00000000 + 0x84) & 0x3ff |
             *(uint *)(iRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
        return;
      }
      *(uint *)(unaff_s0 + 100) =
           (unaff_s3[4] << 0x1c | in_stack_0000000c & *(uint *)(unaff_s0 + 100)) & unaff_s4 |
           unaff_s3[6] << 0x12;
      *(uint *)(unaff_s0 + 0x58) = unaff_s3[5] << 0x10 | *(uint *)(unaff_s0 + 0x58) & unaff_s5;
      *(uint *)(unaff_s0 + 0x48) =
           (unaff_s8[0xe] << 0x1c | *(uint *)(unaff_s0 + 0x48) & unaff_s6) & unaff_s7 |
           unaff_s8[0x11] << 0x14 | 0x70000;
      _L0(10);
      unaff_s9 = unaff_s3[7];
      unaff_s3 = unaff_s3 + 4;
      unaff_s8 = unaff_s8 + 0xe;
      unaff_s10 = unaff_s9;
    }
    else {
      uVar1 = -unaff_s10;
_L0:
      unaff_s9 += uVar1;
      if (unaff_s10 == 0) goto _L0;
    }
    unaff_s10 >>= 1;
    *(uint *)(unaff_s0 + 0x214) = unaff_s9 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
    *(uint *)(unaff_s0 + 0x218) = unaff_s9 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
    _L0();
  } while( true );
}



void FUN_00012486(undefined4 param_1)

{
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int *unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  int iVar2;
  uint in_stack_0000000c;
  
  do {
    FUN_00012486(param_1);
    FUN_00012494(1,0x400);
    iVar2 = extraout_a0 >> 10;
    FUN_000124ae(0,unaff_s9,unaff_s10,iVar2);
    if (iVar2 < 0x141) {
      uVar1 = unaff_s10;
      if (iVar2 < 0xc0) goto _L0;
_L0:
      FUN_000124dc(1,0x1000);
      FUN_000124f0(0,0x20,0x10,0x3d);
      _LVL640(0,extraout_a0_00);
      FUN_00012512(1,0x20,0x10,0x3d);
      *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & unaff_s1;
      _LVL647(0,extraout_a0_00,2,0x3d);
      _LVL649(0,extraout_a0_02);
      FUN_00012558(2,0x400,0x80,0x7a);
      _LVL653(2,extraout_a0_03);
      FUN_0001257a(3,0,0x40,0x7a);
      _LVL656(3,extraout_a0_04);
      FUN_0001259a(2,extraout_a0_03,0x40,0x7a);
      _LVL659(2,extraout_a0_05);
      FUN_000125bc(3,0,0x20,0x7a);
      _LVL662(3,extraout_a0_06);
      iVar2 = (unaff_s2 + 0xc) * 8 + iRam00000000;
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffffffc0 | extraout_a0_02 & 0x3f;
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffff03f | (extraout_a0_01 & 0x3f) << 6;
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
      *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
      FUN_0001263e(0,extraout_a0_02,extraout_a0_01,extraout_a0_05);
      unaff_s2 += -1;
      if (unaff_s2 == -1) {
        _L0();
        *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
        _L0();
        *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
        *(uint *)(unaff_s0 + 0x70) =
             (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
             ((*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x18 |
             *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) & unaff_s1;
        *(uint *)(unaff_s0 + 0x600) =
             *(uint *)(iRam00000000 + 0x84) & 0x3ff |
             *(uint *)(iRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
        return;
      }
      *(uint *)(unaff_s0 + 100) =
           (unaff_s3[4] << 0x1c | in_stack_0000000c & *(uint *)(unaff_s0 + 100)) & unaff_s4 |
           unaff_s3[6] << 0x12;
      *(uint *)(unaff_s0 + 0x58) = unaff_s3[5] << 0x10 | *(uint *)(unaff_s0 + 0x58) & unaff_s5;
      *(uint *)(unaff_s0 + 0x48) =
           (unaff_s8[0xe] << 0x1c | *(uint *)(unaff_s0 + 0x48) & unaff_s6) & unaff_s7 |
           unaff_s8[0x11] << 0x14 | 0x70000;
      _L0(10);
      unaff_s9 = unaff_s3[7];
      unaff_s3 = unaff_s3 + 4;
      unaff_s8 = unaff_s8 + 0xe;
      unaff_s10 = unaff_s9;
    }
    else {
      uVar1 = -unaff_s10;
_L0:
      unaff_s9 += uVar1;
      if (unaff_s10 == 0) goto _L0;
    }
    unaff_s10 >>= 1;
    *(uint *)(unaff_s0 + 0x214) = unaff_s9 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
    *(uint *)(unaff_s0 + 0x218) = unaff_s9 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
    _L0();
    _L0();
    param_1 = 10;
  } while( true );
}



void FUN_00012494(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int *unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  int iVar2;
  uint in_stack_0000000c;
  
  do {
    FUN_00012494(param_1,param_2);
    iVar2 = extraout_a0 >> 10;
    FUN_000124ae(0,unaff_s9,unaff_s10,iVar2);
    if (iVar2 < 0x141) {
      uVar1 = unaff_s10;
      if (iVar2 < 0xc0) goto _L0;
_L0:
      FUN_000124dc(1,0x1000);
      FUN_000124f0(0,0x20,0x10,0x3d);
      _LVL640(0,extraout_a0_00);
      FUN_00012512(1,0x20,0x10,0x3d);
      *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & unaff_s1;
      _LVL647(0,extraout_a0_00,2,0x3d);
      _LVL649(0,extraout_a0_02);
      FUN_00012558(2,0x400,0x80,0x7a);
      _LVL653(2,extraout_a0_03);
      FUN_0001257a(3,0,0x40,0x7a);
      _LVL656(3,extraout_a0_04);
      FUN_0001259a(2,extraout_a0_03,0x40,0x7a);
      _LVL659(2,extraout_a0_05);
      FUN_000125bc(3,0,0x20,0x7a);
      _LVL662(3,extraout_a0_06);
      iVar2 = (unaff_s2 + 0xc) * 8 + iRam00000000;
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffffffc0 | extraout_a0_02 & 0x3f;
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffff03f | (extraout_a0_01 & 0x3f) << 6;
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
      *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
      FUN_0001263e(0,extraout_a0_02,extraout_a0_01,extraout_a0_05);
      unaff_s2 += -1;
      if (unaff_s2 == -1) {
        _L0();
        *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
        _L0();
        *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
        *(uint *)(unaff_s0 + 0x70) =
             (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
             ((*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x18 |
             *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) & unaff_s1;
        *(uint *)(unaff_s0 + 0x600) =
             *(uint *)(iRam00000000 + 0x84) & 0x3ff |
             *(uint *)(iRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
        return;
      }
      *(uint *)(unaff_s0 + 100) =
           (unaff_s3[4] << 0x1c | in_stack_0000000c & *(uint *)(unaff_s0 + 100)) & unaff_s4 |
           unaff_s3[6] << 0x12;
      *(uint *)(unaff_s0 + 0x58) = unaff_s3[5] << 0x10 | *(uint *)(unaff_s0 + 0x58) & unaff_s5;
      *(uint *)(unaff_s0 + 0x48) =
           (unaff_s8[0xe] << 0x1c | *(uint *)(unaff_s0 + 0x48) & unaff_s6) & unaff_s7 |
           unaff_s8[0x11] << 0x14 | 0x70000;
      _L0(10);
      unaff_s9 = unaff_s3[7];
      unaff_s3 = unaff_s3 + 4;
      unaff_s8 = unaff_s8 + 0xe;
      unaff_s10 = unaff_s9;
    }
    else {
      uVar1 = -unaff_s10;
_L0:
      unaff_s9 += uVar1;
      if (unaff_s10 == 0) goto _L0;
    }
    unaff_s10 >>= 1;
    *(uint *)(unaff_s0 + 0x214) = unaff_s9 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
    *(uint *)(unaff_s0 + 0x218) = unaff_s9 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
    _L0();
    _L0();
    FUN_00012486(10);
    param_2 = 0x400;
    param_1 = 1;
  } while( true );
}



void FUN_000124ae(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int iVar2;
  int unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int *unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  int unaff_s11;
  uint in_stack_0000000c;
  
  do {
    FUN_000124ae(param_1,param_2,param_3,param_4);
    if (unaff_s11 < 0x141) {
      uVar1 = unaff_s10;
      if (unaff_s11 < 0xc0) goto _L0;
_L0:
      FUN_000124dc(1,0x1000);
      FUN_000124f0(0,0x20,0x10,0x3d);
      _LVL640(0,extraout_a0_00);
      FUN_00012512(1,0x20,0x10,0x3d);
      *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & unaff_s1;
      _LVL647(0,extraout_a0_00,2,0x3d);
      _LVL649(0,extraout_a0_02);
      FUN_00012558(2,0x400,0x80,0x7a);
      _LVL653(2,extraout_a0_03);
      FUN_0001257a(3,0,0x40,0x7a);
      _LVL656(3,extraout_a0_04);
      FUN_0001259a(2,extraout_a0_03,0x40,0x7a);
      _LVL659(2,extraout_a0_05);
      FUN_000125bc(3,0,0x20,0x7a);
      _LVL662(3,extraout_a0_06);
      iVar2 = (unaff_s2 + 0xc) * 8 + iRam00000000;
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffffffc0 | extraout_a0_02 & 0x3f;
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffff03f | (extraout_a0_01 & 0x3f) << 6;
      *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
      *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
      FUN_0001263e(0,extraout_a0_02,extraout_a0_01,extraout_a0_05);
      unaff_s2 += -1;
      if (unaff_s2 == -1) {
        _L0();
        *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
        _L0();
        *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
        *(uint *)(unaff_s0 + 0x70) =
             (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
             ((*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x18 |
             *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) & unaff_s1;
        *(uint *)(unaff_s0 + 0x600) =
             *(uint *)(iRam00000000 + 0x84) & 0x3ff |
             *(uint *)(iRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
        return;
      }
      *(uint *)(unaff_s0 + 100) =
           (unaff_s3[4] << 0x1c | in_stack_0000000c & *(uint *)(unaff_s0 + 100)) & unaff_s4 |
           unaff_s3[6] << 0x12;
      *(uint *)(unaff_s0 + 0x58) = unaff_s3[5] << 0x10 | *(uint *)(unaff_s0 + 0x58) & unaff_s5;
      *(uint *)(unaff_s0 + 0x48) =
           (unaff_s8[0xe] << 0x1c | *(uint *)(unaff_s0 + 0x48) & unaff_s6) & unaff_s7 |
           unaff_s8[0x11] << 0x14 | 0x70000;
      _L0(10);
      param_2 = unaff_s3[7];
      unaff_s3 = unaff_s3 + 4;
      unaff_s8 = unaff_s8 + 0xe;
      unaff_s10 = param_2;
    }
    else {
      uVar1 = -unaff_s10;
_L0:
      param_2 = unaff_s9 + uVar1;
      if (unaff_s10 == 0) goto _L0;
    }
    param_3 = unaff_s10 >> 1;
    *(uint *)(unaff_s0 + 0x214) = param_2 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
    *(uint *)(unaff_s0 + 0x218) = param_2 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
    _L0();
    _L0();
    FUN_00012486(10);
    FUN_00012494(1,0x400);
    param_4 = extraout_a0 >> 10;
    param_1 = 0;
    unaff_s9 = param_2;
    unaff_s10 = param_3;
    unaff_s11 = param_4;
  } while( true );
}



void FUN_000124dc(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int iVar2;
  int unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int *unaff_s8;
  uint uVar3;
  uint uVar4;
  uint in_stack_0000000c;
  
  do {
    FUN_000124dc(param_1,param_2);
    FUN_000124f0(0,0x20,0x10,0x3d);
    _LVL640(0,extraout_a0_00);
    FUN_00012512(1,0x20,0x10,0x3d);
    *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & unaff_s1;
    _LVL647(0,extraout_a0_00,2,0x3d);
    _LVL649(0,extraout_a0_02);
    FUN_00012558(2,0x400,0x80,0x7a);
    _LVL653(2,extraout_a0_03);
    FUN_0001257a(3,0,0x40,0x7a);
    _LVL656(3,extraout_a0_04);
    FUN_0001259a(2,extraout_a0_03,0x40,0x7a);
    _LVL659(2,extraout_a0_05);
    FUN_000125bc(3,0,0x20,0x7a);
    _LVL662(3,extraout_a0_06);
    iVar2 = (unaff_s2 + 0xc) * 8 + iRam00000000;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffffffc0 | extraout_a0_02 & 0x3f;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffff03f | (extraout_a0_01 & 0x3f) << 6;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
    FUN_0001263e(0,extraout_a0_02,extraout_a0_01,extraout_a0_05);
    unaff_s2 += -1;
    if (unaff_s2 == -1) {
      _L0();
      *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
      _L0();
      *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
      *(uint *)(unaff_s0 + 0x70) =
           (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
           ((*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x18 |
           *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) & unaff_s1;
      *(uint *)(unaff_s0 + 0x600) =
           *(uint *)(iRam00000000 + 0x84) & 0x3ff |
           *(uint *)(iRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
      return;
    }
    *(uint *)(unaff_s0 + 100) =
         (unaff_s3[4] << 0x1c | in_stack_0000000c & *(uint *)(unaff_s0 + 100)) & unaff_s4 |
         unaff_s3[6] << 0x12;
    *(uint *)(unaff_s0 + 0x58) = unaff_s3[5] << 0x10 | *(uint *)(unaff_s0 + 0x58) & unaff_s5;
    *(uint *)(unaff_s0 + 0x48) =
         (unaff_s8[0xe] << 0x1c | *(uint *)(unaff_s0 + 0x48) & unaff_s6) & unaff_s7 |
         unaff_s8[0x11] << 0x14 | 0x70000;
    _L0(10);
    uVar3 = unaff_s3[7];
    uVar4 = uVar3;
    do {
      uVar4 >>= 1;
      *(uint *)(unaff_s0 + 0x214) = uVar3 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
      *(uint *)(unaff_s0 + 0x218) = uVar3 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
      _L0();
      _L0();
      FUN_00012486(10);
      FUN_00012494(1,0x400);
      iVar2 = extraout_a0 >> 10;
      FUN_000124ae(0,uVar3,uVar4,iVar2);
      if (iVar2 < 0x141) {
        uVar1 = uVar4;
        if (0xbf < iVar2) break;
      }
      else {
        uVar1 = -uVar4;
      }
      uVar3 += uVar1;
    } while (uVar4 != 0);
    param_2 = 0x1000;
    param_1 = 1;
    unaff_s3 = unaff_s3 + 4;
    unaff_s8 = unaff_s8 + 0xe;
  } while( true );
}



void FUN_000124f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int iVar2;
  int unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int *unaff_s8;
  uint uVar3;
  uint uVar4;
  uint in_stack_0000000c;
  
  do {
    FUN_000124f0(param_1,param_2,param_3,param_4);
    _LVL640(0,extraout_a0_00);
    FUN_00012512(1,0x20,0x10,0x3d);
    *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & unaff_s1;
    _LVL647(0,extraout_a0_00,2,0x3d);
    _LVL649(0,extraout_a0_02);
    FUN_00012558(2,0x400,0x80,0x7a);
    _LVL653(2,extraout_a0_03);
    FUN_0001257a(3,0,0x40,0x7a);
    _LVL656(3,extraout_a0_04);
    FUN_0001259a(2,extraout_a0_03,0x40,0x7a);
    _LVL659(2,extraout_a0_05);
    FUN_000125bc(3,0,0x20,0x7a);
    _LVL662(3,extraout_a0_06);
    iVar2 = (unaff_s2 + 0xc) * 8 + iRam00000000;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffffffc0 | extraout_a0_02 & 0x3f;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffff03f | (extraout_a0_01 & 0x3f) << 6;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
    FUN_0001263e(0,extraout_a0_02,extraout_a0_01,extraout_a0_05);
    unaff_s2 += -1;
    if (unaff_s2 == -1) {
      _L0();
      *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
      _L0();
      *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
      *(uint *)(unaff_s0 + 0x70) =
           (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
           ((*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x18 |
           *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) & unaff_s1;
      *(uint *)(unaff_s0 + 0x600) =
           *(uint *)(iRam00000000 + 0x84) & 0x3ff |
           *(uint *)(iRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
      return;
    }
    *(uint *)(unaff_s0 + 100) =
         (unaff_s3[4] << 0x1c | in_stack_0000000c & *(uint *)(unaff_s0 + 100)) & unaff_s4 |
         unaff_s3[6] << 0x12;
    *(uint *)(unaff_s0 + 0x58) = unaff_s3[5] << 0x10 | *(uint *)(unaff_s0 + 0x58) & unaff_s5;
    *(uint *)(unaff_s0 + 0x48) =
         (unaff_s8[0xe] << 0x1c | *(uint *)(unaff_s0 + 0x48) & unaff_s6) & unaff_s7 |
         unaff_s8[0x11] << 0x14 | 0x70000;
    _L0(10);
    uVar3 = unaff_s3[7];
    uVar4 = uVar3;
    do {
      uVar4 >>= 1;
      *(uint *)(unaff_s0 + 0x214) = uVar3 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
      *(uint *)(unaff_s0 + 0x218) = uVar3 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
      _L0();
      _L0();
      FUN_00012486(10);
      FUN_00012494(1,0x400);
      iVar2 = extraout_a0 >> 10;
      FUN_000124ae(0,uVar3,uVar4,iVar2);
      if (iVar2 < 0x141) {
        uVar1 = uVar4;
        if (0xbf < iVar2) break;
      }
      else {
        uVar1 = -uVar4;
      }
      uVar3 += uVar1;
    } while (uVar4 != 0);
    FUN_000124dc(1,0x1000);
    param_4 = 0x3d;
    param_3 = 0x10;
    param_2 = 0x20;
    param_1 = 0;
    unaff_s3 = unaff_s3 + 4;
    unaff_s8 = unaff_s8 + 0xe;
  } while( true );
}



void _LVL640(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int iVar2;
  int unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int *unaff_s8;
  uint uVar3;
  undefined4 unaff_s9;
  uint uVar4;
  uint in_stack_0000000c;
  
  do {
    _LVL640(param_1,param_2);
    FUN_00012512(1,0x20,0x10,0x3d);
    *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & unaff_s1;
    _LVL647(0,unaff_s9,2,0x3d);
    _LVL649(0,extraout_a0_02);
    FUN_00012558(2,0x400,0x80,0x7a);
    _LVL653(2,extraout_a0_03);
    FUN_0001257a(3,0,0x40,0x7a);
    _LVL656(3,extraout_a0_04);
    FUN_0001259a(2,extraout_a0_03,0x40,0x7a);
    _LVL659(2,extraout_a0_05);
    FUN_000125bc(3,0,0x20,0x7a);
    _LVL662(3,extraout_a0_06);
    iVar2 = (unaff_s2 + 0xc) * 8 + iRam00000000;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffffffc0 | extraout_a0_02 & 0x3f;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffff03f | (extraout_a0_01 & 0x3f) << 6;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
    FUN_0001263e(0,extraout_a0_02,extraout_a0_01,extraout_a0_05);
    unaff_s2 += -1;
    if (unaff_s2 == -1) {
      _L0();
      *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
      _L0();
      *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
      *(uint *)(unaff_s0 + 0x70) =
           (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
           ((*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x18 |
           *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) & unaff_s1;
      *(uint *)(unaff_s0 + 0x600) =
           *(uint *)(iRam00000000 + 0x84) & 0x3ff |
           *(uint *)(iRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
      return;
    }
    *(uint *)(unaff_s0 + 100) =
         (unaff_s3[4] << 0x1c | in_stack_0000000c & *(uint *)(unaff_s0 + 100)) & unaff_s4 |
         unaff_s3[6] << 0x12;
    *(uint *)(unaff_s0 + 0x58) = unaff_s3[5] << 0x10 | *(uint *)(unaff_s0 + 0x58) & unaff_s5;
    *(uint *)(unaff_s0 + 0x48) =
         (unaff_s8[0xe] << 0x1c | *(uint *)(unaff_s0 + 0x48) & unaff_s6) & unaff_s7 |
         unaff_s8[0x11] << 0x14 | 0x70000;
    _L0(10);
    uVar3 = unaff_s3[7];
    uVar4 = uVar3;
    do {
      uVar4 >>= 1;
      *(uint *)(unaff_s0 + 0x214) = uVar3 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
      *(uint *)(unaff_s0 + 0x218) = uVar3 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
      _L0();
      _L0();
      FUN_00012486(10);
      FUN_00012494(1,0x400);
      iVar2 = extraout_a0 >> 10;
      FUN_000124ae(0,uVar3,uVar4,iVar2);
      if (iVar2 < 0x141) {
        uVar1 = uVar4;
        if (0xbf < iVar2) break;
      }
      else {
        uVar1 = -uVar4;
      }
      uVar3 += uVar1;
    } while (uVar4 != 0);
    FUN_000124dc(1,0x1000);
    FUN_000124f0(0,0x20,0x10,0x3d);
    param_1 = 0;
    param_2 = extraout_a0_00;
    unaff_s3 = unaff_s3 + 4;
    unaff_s8 = unaff_s8 + 0xe;
    unaff_s9 = extraout_a0_00;
  } while( true );
}



void FUN_00012512(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int iVar2;
  int unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int *unaff_s8;
  uint uVar3;
  undefined4 unaff_s9;
  uint uVar4;
  uint in_stack_0000000c;
  
  do {
    FUN_00012512(param_1,param_2,param_3,param_4);
    *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & unaff_s1;
    _LVL647(0,unaff_s9,2,0x3d);
    _LVL649(0,extraout_a0_02);
    FUN_00012558(2,0x400,0x80,0x7a);
    _LVL653(2,extraout_a0_03);
    FUN_0001257a(3,0,0x40,0x7a);
    _LVL656(3,extraout_a0_04);
    FUN_0001259a(2,extraout_a0_03,0x40,0x7a);
    _LVL659(2,extraout_a0_05);
    FUN_000125bc(3,0,0x20,0x7a);
    _LVL662(3,extraout_a0_06);
    iVar2 = (unaff_s2 + 0xc) * 8 + iRam00000000;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffffffc0 | extraout_a0_02 & 0x3f;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffff03f | (extraout_a0_01 & 0x3f) << 6;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
    FUN_0001263e(0,extraout_a0_02,extraout_a0_01,extraout_a0_05);
    unaff_s2 += -1;
    if (unaff_s2 == -1) {
      _L0();
      *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
      _L0();
      *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
      *(uint *)(unaff_s0 + 0x70) =
           (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
           ((*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x18 |
           *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) & unaff_s1;
      *(uint *)(unaff_s0 + 0x600) =
           *(uint *)(iRam00000000 + 0x84) & 0x3ff |
           *(uint *)(iRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
      return;
    }
    *(uint *)(unaff_s0 + 100) =
         (unaff_s3[4] << 0x1c | in_stack_0000000c & *(uint *)(unaff_s0 + 100)) & unaff_s4 |
         unaff_s3[6] << 0x12;
    *(uint *)(unaff_s0 + 0x58) = unaff_s3[5] << 0x10 | *(uint *)(unaff_s0 + 0x58) & unaff_s5;
    *(uint *)(unaff_s0 + 0x48) =
         (unaff_s8[0xe] << 0x1c | *(uint *)(unaff_s0 + 0x48) & unaff_s6) & unaff_s7 |
         unaff_s8[0x11] << 0x14 | 0x70000;
    _L0(10);
    uVar3 = unaff_s3[7];
    uVar4 = uVar3;
    do {
      uVar4 >>= 1;
      *(uint *)(unaff_s0 + 0x214) = uVar3 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
      *(uint *)(unaff_s0 + 0x218) = uVar3 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
      _L0();
      _L0();
      FUN_00012486(10);
      FUN_00012494(1,0x400);
      iVar2 = extraout_a0 >> 10;
      FUN_000124ae(0,uVar3,uVar4,iVar2);
      if (iVar2 < 0x141) {
        uVar1 = uVar4;
        if (0xbf < iVar2) break;
      }
      else {
        uVar1 = -uVar4;
      }
      uVar3 += uVar1;
    } while (uVar4 != 0);
    FUN_000124dc(1,0x1000);
    FUN_000124f0(0,0x20,0x10,0x3d);
    _LVL640(0,extraout_a0_00);
    param_4 = 0x3d;
    param_3 = 0x10;
    param_2 = 0x20;
    param_1 = 1;
    unaff_s3 = unaff_s3 + 4;
    unaff_s8 = unaff_s8 + 0xe;
    unaff_s9 = extraout_a0_00;
  } while( true );
}



void _LVL647(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int iVar2;
  int unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int *unaff_s8;
  uint uVar3;
  uint uVar4;
  uint in_stack_0000000c;
  uint in_stack_0000001c;
  
  do {
    _LVL647(param_1,param_2,param_3,param_4);
    _LVL649(0,extraout_a0_02);
    FUN_00012558(2,0x400,0x80,0x7a);
    _LVL653(2,extraout_a0_03);
    FUN_0001257a(3,0,0x40,0x7a);
    _LVL656(3,extraout_a0_04);
    FUN_0001259a(2,extraout_a0_03,0x40,0x7a);
    _LVL659(2,extraout_a0_05);
    FUN_000125bc(3,0,0x20,0x7a);
    _LVL662(3,extraout_a0_06);
    iVar2 = (unaff_s2 + 0xc) * 8 + iRam00000000;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffffffc0 | extraout_a0_02 & 0x3f;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffff03f | (in_stack_0000001c & 0x3f) << 6;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
    FUN_0001263e(0,extraout_a0_02,in_stack_0000001c,extraout_a0_05);
    unaff_s2 += -1;
    if (unaff_s2 == -1) {
      _L0();
      *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
      _L0();
      *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
      *(uint *)(unaff_s0 + 0x70) =
           (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
           ((*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x18 |
           *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) & unaff_s1;
      *(uint *)(unaff_s0 + 0x600) =
           *(uint *)(iRam00000000 + 0x84) & 0x3ff |
           *(uint *)(iRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
      return;
    }
    *(uint *)(unaff_s0 + 100) =
         (unaff_s3[4] << 0x1c | in_stack_0000000c & *(uint *)(unaff_s0 + 100)) & unaff_s4 |
         unaff_s3[6] << 0x12;
    *(uint *)(unaff_s0 + 0x58) = unaff_s3[5] << 0x10 | *(uint *)(unaff_s0 + 0x58) & unaff_s5;
    *(uint *)(unaff_s0 + 0x48) =
         (unaff_s8[0xe] << 0x1c | *(uint *)(unaff_s0 + 0x48) & unaff_s6) & unaff_s7 |
         unaff_s8[0x11] << 0x14 | 0x70000;
    _L0(10);
    uVar3 = unaff_s3[7];
    uVar4 = uVar3;
    do {
      uVar4 >>= 1;
      *(uint *)(unaff_s0 + 0x214) = uVar3 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
      *(uint *)(unaff_s0 + 0x218) = uVar3 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
      _L0();
      _L0();
      FUN_00012486(10);
      FUN_00012494(1,0x400);
      iVar2 = extraout_a0 >> 10;
      FUN_000124ae(0,uVar3,uVar4,iVar2);
      if (iVar2 < 0x141) {
        uVar1 = uVar4;
        if (0xbf < iVar2) break;
      }
      else {
        uVar1 = -uVar4;
      }
      uVar3 += uVar1;
    } while (uVar4 != 0);
    FUN_000124dc(1,0x1000);
    FUN_000124f0(0,0x20,0x10,0x3d);
    _LVL640(0,extraout_a0_00);
    FUN_00012512(1,0x20,0x10,0x3d);
    param_4 = 0x3d;
    *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & unaff_s1;
    param_3 = 2;
    param_1 = 0;
    param_2 = extraout_a0_00;
    unaff_s3 = unaff_s3 + 4;
    unaff_s8 = unaff_s8 + 0xe;
    in_stack_0000001c = extraout_a0_01;
  } while( true );
}



void _LVL649(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int iVar2;
  int unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int *unaff_s8;
  uint uVar3;
  uint uVar4;
  uint in_stack_0000000c;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  
  do {
    _LVL649(param_1,param_2);
    FUN_00012558(2,0x400,0x80,0x7a);
    _LVL653(2,extraout_a0_03);
    FUN_0001257a(3,0,0x40,0x7a);
    _LVL656(3,extraout_a0_04);
    FUN_0001259a(2,extraout_a0_03,0x40,0x7a);
    _LVL659(2,extraout_a0_05);
    FUN_000125bc(3,0,0x20,0x7a);
    _LVL662(3,extraout_a0_06);
    iVar2 = (unaff_s2 + 0xc) * 8 + iRam00000000;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffffffc0 | in_stack_00000018 & 0x3f;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffff03f | (in_stack_0000001c & 0x3f) << 6;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
    FUN_0001263e(0,in_stack_00000018,in_stack_0000001c,extraout_a0_05);
    unaff_s2 += -1;
    if (unaff_s2 == -1) {
      _L0();
      *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
      _L0();
      *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
      *(uint *)(unaff_s0 + 0x70) =
           (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
           ((*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x18 |
           *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) & unaff_s1;
      *(uint *)(unaff_s0 + 0x600) =
           *(uint *)(iRam00000000 + 0x84) & 0x3ff |
           *(uint *)(iRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
      return;
    }
    *(uint *)(unaff_s0 + 100) =
         (unaff_s3[4] << 0x1c | in_stack_0000000c & *(uint *)(unaff_s0 + 100)) & unaff_s4 |
         unaff_s3[6] << 0x12;
    *(uint *)(unaff_s0 + 0x58) = unaff_s3[5] << 0x10 | *(uint *)(unaff_s0 + 0x58) & unaff_s5;
    *(uint *)(unaff_s0 + 0x48) =
         (unaff_s8[0xe] << 0x1c | *(uint *)(unaff_s0 + 0x48) & unaff_s6) & unaff_s7 |
         unaff_s8[0x11] << 0x14 | 0x70000;
    _L0(10);
    uVar3 = unaff_s3[7];
    uVar4 = uVar3;
    do {
      uVar4 >>= 1;
      *(uint *)(unaff_s0 + 0x214) = uVar3 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
      *(uint *)(unaff_s0 + 0x218) = uVar3 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
      _L0();
      _L0();
      FUN_00012486(10);
      FUN_00012494(1,0x400);
      iVar2 = extraout_a0 >> 10;
      FUN_000124ae(0,uVar3,uVar4,iVar2);
      if (iVar2 < 0x141) {
        uVar1 = uVar4;
        if (0xbf < iVar2) break;
      }
      else {
        uVar1 = -uVar4;
      }
      uVar3 += uVar1;
    } while (uVar4 != 0);
    FUN_000124dc(1,0x1000);
    FUN_000124f0(0,0x20,0x10,0x3d);
    _LVL640(0,extraout_a0_00);
    FUN_00012512(1,0x20,0x10,0x3d);
    *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & unaff_s1;
    _LVL647(0,extraout_a0_00,2,0x3d);
    param_1 = 0;
    param_2 = extraout_a0_02;
    unaff_s3 = unaff_s3 + 4;
    unaff_s8 = unaff_s8 + 0xe;
    in_stack_00000018 = extraout_a0_02;
    in_stack_0000001c = extraout_a0_01;
  } while( true );
}



void FUN_00012558(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int iVar2;
  int unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int *unaff_s8;
  uint uVar3;
  uint uVar4;
  uint in_stack_0000000c;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  
  do {
    FUN_00012558(param_1,param_2,param_3,param_4);
    _LVL653(2,extraout_a0_03);
    FUN_0001257a(3,0,0x40,0x7a);
    _LVL656(3,extraout_a0_04);
    FUN_0001259a(2,extraout_a0_03,0x40,0x7a);
    _LVL659(2,extraout_a0_05);
    FUN_000125bc(3,0,0x20,0x7a);
    _LVL662(3,extraout_a0_06);
    iVar2 = (unaff_s2 + 0xc) * 8 + iRam00000000;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffffffc0 | in_stack_00000018 & 0x3f;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffff03f | (in_stack_0000001c & 0x3f) << 6;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
    FUN_0001263e(0,in_stack_00000018,in_stack_0000001c,extraout_a0_05);
    unaff_s2 += -1;
    if (unaff_s2 == -1) {
      _L0();
      *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
      _L0();
      *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
      *(uint *)(unaff_s0 + 0x70) =
           (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
           ((*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x18 |
           *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) & unaff_s1;
      *(uint *)(unaff_s0 + 0x600) =
           *(uint *)(iRam00000000 + 0x84) & 0x3ff |
           *(uint *)(iRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
      return;
    }
    *(uint *)(unaff_s0 + 100) =
         (unaff_s3[4] << 0x1c | in_stack_0000000c & *(uint *)(unaff_s0 + 100)) & unaff_s4 |
         unaff_s3[6] << 0x12;
    *(uint *)(unaff_s0 + 0x58) = unaff_s3[5] << 0x10 | *(uint *)(unaff_s0 + 0x58) & unaff_s5;
    *(uint *)(unaff_s0 + 0x48) =
         (unaff_s8[0xe] << 0x1c | *(uint *)(unaff_s0 + 0x48) & unaff_s6) & unaff_s7 |
         unaff_s8[0x11] << 0x14 | 0x70000;
    _L0(10);
    uVar3 = unaff_s3[7];
    uVar4 = uVar3;
    do {
      uVar4 >>= 1;
      *(uint *)(unaff_s0 + 0x214) = uVar3 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
      *(uint *)(unaff_s0 + 0x218) = uVar3 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
      _L0();
      _L0();
      FUN_00012486(10);
      FUN_00012494(1,0x400);
      iVar2 = extraout_a0 >> 10;
      FUN_000124ae(0,uVar3,uVar4,iVar2);
      if (iVar2 < 0x141) {
        uVar1 = uVar4;
        if (0xbf < iVar2) break;
      }
      else {
        uVar1 = -uVar4;
      }
      uVar3 += uVar1;
    } while (uVar4 != 0);
    FUN_000124dc(1,0x1000);
    FUN_000124f0(0,0x20,0x10,0x3d);
    _LVL640(0,extraout_a0_00);
    FUN_00012512(1,0x20,0x10,0x3d);
    *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & unaff_s1;
    _LVL647(0,extraout_a0_00,2,0x3d);
    _LVL649(0,extraout_a0_02);
    param_4 = 0x7a;
    param_3 = 0x80;
    param_2 = 0x400;
    param_1 = 2;
    unaff_s3 = unaff_s3 + 4;
    unaff_s8 = unaff_s8 + 0xe;
    in_stack_00000018 = extraout_a0_02;
    in_stack_0000001c = extraout_a0_01;
  } while( true );
}



void _LVL653(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int iVar2;
  int unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int *unaff_s8;
  uint uVar3;
  undefined4 unaff_s9;
  uint uVar4;
  uint in_stack_0000000c;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  
  do {
    _LVL653(param_1,param_2);
    FUN_0001257a(3,0,0x40,0x7a);
    _LVL656(3,extraout_a0_04);
    FUN_0001259a(2,unaff_s9,0x40,0x7a);
    _LVL659(2,extraout_a0_05);
    FUN_000125bc(3,0,0x20,0x7a);
    _LVL662(3,extraout_a0_06);
    iVar2 = (unaff_s2 + 0xc) * 8 + iRam00000000;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffffffc0 | in_stack_00000018 & 0x3f;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffff03f | (in_stack_0000001c & 0x3f) << 6;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
    FUN_0001263e(0,in_stack_00000018,in_stack_0000001c,extraout_a0_05);
    unaff_s2 += -1;
    if (unaff_s2 == -1) {
      _L0();
      *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
      _L0();
      *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
      *(uint *)(unaff_s0 + 0x70) =
           (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
           ((*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x18 |
           *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) & unaff_s1;
      *(uint *)(unaff_s0 + 0x600) =
           *(uint *)(iRam00000000 + 0x84) & 0x3ff |
           *(uint *)(iRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
      return;
    }
    *(uint *)(unaff_s0 + 100) =
         (unaff_s3[4] << 0x1c | in_stack_0000000c & *(uint *)(unaff_s0 + 100)) & unaff_s4 |
         unaff_s3[6] << 0x12;
    *(uint *)(unaff_s0 + 0x58) = unaff_s3[5] << 0x10 | *(uint *)(unaff_s0 + 0x58) & unaff_s5;
    *(uint *)(unaff_s0 + 0x48) =
         (unaff_s8[0xe] << 0x1c | *(uint *)(unaff_s0 + 0x48) & unaff_s6) & unaff_s7 |
         unaff_s8[0x11] << 0x14 | 0x70000;
    _L0(10);
    uVar3 = unaff_s3[7];
    uVar4 = uVar3;
    do {
      uVar4 >>= 1;
      *(uint *)(unaff_s0 + 0x214) = uVar3 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
      *(uint *)(unaff_s0 + 0x218) = uVar3 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
      _L0();
      _L0();
      FUN_00012486(10);
      FUN_00012494(1,0x400);
      iVar2 = extraout_a0 >> 10;
      FUN_000124ae(0,uVar3,uVar4,iVar2);
      if (iVar2 < 0x141) {
        uVar1 = uVar4;
        if (0xbf < iVar2) break;
      }
      else {
        uVar1 = -uVar4;
      }
      uVar3 += uVar1;
    } while (uVar4 != 0);
    FUN_000124dc(1,0x1000);
    FUN_000124f0(0,0x20,0x10,0x3d);
    _LVL640(0,extraout_a0_00);
    FUN_00012512(1,0x20,0x10,0x3d);
    *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & unaff_s1;
    _LVL647(0,extraout_a0_00,2,0x3d);
    _LVL649(0,extraout_a0_02);
    FUN_00012558(2,0x400,0x80,0x7a);
    param_1 = 2;
    param_2 = extraout_a0_03;
    unaff_s3 = unaff_s3 + 4;
    unaff_s8 = unaff_s8 + 0xe;
    unaff_s9 = extraout_a0_03;
    in_stack_00000018 = extraout_a0_02;
    in_stack_0000001c = extraout_a0_01;
  } while( true );
}



void FUN_0001257a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int iVar2;
  int unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int *unaff_s8;
  uint uVar3;
  undefined4 unaff_s9;
  uint uVar4;
  uint in_stack_0000000c;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  
  do {
    FUN_0001257a(param_1,param_2,param_3,param_4);
    _LVL656(3,extraout_a0_04);
    FUN_0001259a(2,unaff_s9,0x40,0x7a);
    _LVL659(2,extraout_a0_05);
    FUN_000125bc(3,0,0x20,0x7a);
    _LVL662(3,extraout_a0_06);
    iVar2 = (unaff_s2 + 0xc) * 8 + iRam00000000;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffffffc0 | in_stack_00000018 & 0x3f;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffff03f | (in_stack_0000001c & 0x3f) << 6;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
    FUN_0001263e(0,in_stack_00000018,in_stack_0000001c,extraout_a0_05);
    unaff_s2 += -1;
    if (unaff_s2 == -1) {
      _L0();
      *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
      _L0();
      *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
      *(uint *)(unaff_s0 + 0x70) =
           (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
           ((*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x18 |
           *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) & unaff_s1;
      *(uint *)(unaff_s0 + 0x600) =
           *(uint *)(iRam00000000 + 0x84) & 0x3ff |
           *(uint *)(iRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
      return;
    }
    *(uint *)(unaff_s0 + 100) =
         (unaff_s3[4] << 0x1c | in_stack_0000000c & *(uint *)(unaff_s0 + 100)) & unaff_s4 |
         unaff_s3[6] << 0x12;
    *(uint *)(unaff_s0 + 0x58) = unaff_s3[5] << 0x10 | *(uint *)(unaff_s0 + 0x58) & unaff_s5;
    *(uint *)(unaff_s0 + 0x48) =
         (unaff_s8[0xe] << 0x1c | *(uint *)(unaff_s0 + 0x48) & unaff_s6) & unaff_s7 |
         unaff_s8[0x11] << 0x14 | 0x70000;
    _L0(10);
    uVar3 = unaff_s3[7];
    uVar4 = uVar3;
    do {
      uVar4 >>= 1;
      *(uint *)(unaff_s0 + 0x214) = uVar3 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
      *(uint *)(unaff_s0 + 0x218) = uVar3 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
      _L0();
      _L0();
      FUN_00012486(10);
      FUN_00012494(1,0x400);
      iVar2 = extraout_a0 >> 10;
      FUN_000124ae(0,uVar3,uVar4,iVar2);
      if (iVar2 < 0x141) {
        uVar1 = uVar4;
        if (0xbf < iVar2) break;
      }
      else {
        uVar1 = -uVar4;
      }
      uVar3 += uVar1;
    } while (uVar4 != 0);
    FUN_000124dc(1,0x1000);
    FUN_000124f0(0,0x20,0x10,0x3d);
    _LVL640(0,extraout_a0_00);
    FUN_00012512(1,0x20,0x10,0x3d);
    *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & unaff_s1;
    _LVL647(0,extraout_a0_00,2,0x3d);
    _LVL649(0,extraout_a0_02);
    FUN_00012558(2,0x400,0x80,0x7a);
    _LVL653(2,extraout_a0_03);
    param_4 = 0x7a;
    param_3 = 0x40;
    param_2 = 0;
    param_1 = 3;
    unaff_s3 = unaff_s3 + 4;
    unaff_s8 = unaff_s8 + 0xe;
    unaff_s9 = extraout_a0_03;
    in_stack_00000018 = extraout_a0_02;
    in_stack_0000001c = extraout_a0_01;
  } while( true );
}



void _LVL656(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int iVar2;
  int unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int *unaff_s8;
  uint uVar3;
  undefined4 unaff_s9;
  uint uVar4;
  uint in_stack_0000000c;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  
  do {
    _LVL656(param_1,param_2);
    FUN_0001259a(2,unaff_s9,0x40,0x7a);
    _LVL659(2,extraout_a0_05);
    FUN_000125bc(3,0,0x20,0x7a);
    _LVL662(3,extraout_a0_06);
    iVar2 = (unaff_s2 + 0xc) * 8 + iRam00000000;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffffffc0 | in_stack_00000018 & 0x3f;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffff03f | (in_stack_0000001c & 0x3f) << 6;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
    FUN_0001263e(0,in_stack_00000018,in_stack_0000001c,extraout_a0_05);
    unaff_s2 += -1;
    if (unaff_s2 == -1) {
      _L0();
      *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
      _L0();
      *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
      *(uint *)(unaff_s0 + 0x70) =
           (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
           ((*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x18 |
           *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) & unaff_s1;
      *(uint *)(unaff_s0 + 0x600) =
           *(uint *)(iRam00000000 + 0x84) & 0x3ff |
           *(uint *)(iRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
      return;
    }
    *(uint *)(unaff_s0 + 100) =
         (unaff_s3[4] << 0x1c | in_stack_0000000c & *(uint *)(unaff_s0 + 100)) & unaff_s4 |
         unaff_s3[6] << 0x12;
    *(uint *)(unaff_s0 + 0x58) = unaff_s3[5] << 0x10 | *(uint *)(unaff_s0 + 0x58) & unaff_s5;
    *(uint *)(unaff_s0 + 0x48) =
         (unaff_s8[0xe] << 0x1c | *(uint *)(unaff_s0 + 0x48) & unaff_s6) & unaff_s7 |
         unaff_s8[0x11] << 0x14 | 0x70000;
    _L0(10);
    uVar3 = unaff_s3[7];
    uVar4 = uVar3;
    do {
      uVar4 >>= 1;
      *(uint *)(unaff_s0 + 0x214) = uVar3 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
      *(uint *)(unaff_s0 + 0x218) = uVar3 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
      _L0();
      _L0();
      FUN_00012486(10);
      FUN_00012494(1,0x400);
      iVar2 = extraout_a0 >> 10;
      FUN_000124ae(0,uVar3,uVar4,iVar2);
      if (iVar2 < 0x141) {
        uVar1 = uVar4;
        if (0xbf < iVar2) break;
      }
      else {
        uVar1 = -uVar4;
      }
      uVar3 += uVar1;
    } while (uVar4 != 0);
    FUN_000124dc(1,0x1000);
    FUN_000124f0(0,0x20,0x10,0x3d);
    _LVL640(0,extraout_a0_00);
    FUN_00012512(1,0x20,0x10,0x3d);
    *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & unaff_s1;
    _LVL647(0,extraout_a0_00,2,0x3d);
    _LVL649(0,extraout_a0_02);
    FUN_00012558(2,0x400,0x80,0x7a);
    _LVL653(2,extraout_a0_03);
    FUN_0001257a(3,0,0x40,0x7a);
    param_1 = 3;
    param_2 = extraout_a0_04;
    unaff_s3 = unaff_s3 + 4;
    unaff_s8 = unaff_s8 + 0xe;
    unaff_s9 = extraout_a0_03;
    in_stack_00000018 = extraout_a0_02;
    in_stack_0000001c = extraout_a0_01;
  } while( true );
}



void FUN_0001259a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int iVar2;
  int unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int *unaff_s8;
  uint uVar3;
  uint uVar4;
  uint in_stack_0000000c;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  
  do {
    FUN_0001259a(param_1,param_2,param_3,param_4);
    _LVL659(2,extraout_a0_05);
    FUN_000125bc(3,0,0x20,0x7a);
    _LVL662(3,extraout_a0_06);
    iVar2 = (unaff_s2 + 0xc) * 8 + iRam00000000;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffffffc0 | in_stack_00000018 & 0x3f;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffff03f | (in_stack_0000001c & 0x3f) << 6;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
    FUN_0001263e(0,in_stack_00000018,in_stack_0000001c,extraout_a0_05);
    unaff_s2 += -1;
    if (unaff_s2 == -1) {
      _L0();
      *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
      _L0();
      *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
      *(uint *)(unaff_s0 + 0x70) =
           (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
           ((*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x18 |
           *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) & unaff_s1;
      *(uint *)(unaff_s0 + 0x600) =
           *(uint *)(iRam00000000 + 0x84) & 0x3ff |
           *(uint *)(iRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
      return;
    }
    *(uint *)(unaff_s0 + 100) =
         (unaff_s3[4] << 0x1c | in_stack_0000000c & *(uint *)(unaff_s0 + 100)) & unaff_s4 |
         unaff_s3[6] << 0x12;
    *(uint *)(unaff_s0 + 0x58) = unaff_s3[5] << 0x10 | *(uint *)(unaff_s0 + 0x58) & unaff_s5;
    *(uint *)(unaff_s0 + 0x48) =
         (unaff_s8[0xe] << 0x1c | *(uint *)(unaff_s0 + 0x48) & unaff_s6) & unaff_s7 |
         unaff_s8[0x11] << 0x14 | 0x70000;
    _L0(10);
    uVar3 = unaff_s3[7];
    uVar4 = uVar3;
    do {
      uVar4 >>= 1;
      *(uint *)(unaff_s0 + 0x214) = uVar3 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
      *(uint *)(unaff_s0 + 0x218) = uVar3 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
      _L0();
      _L0();
      FUN_00012486(10);
      FUN_00012494(1,0x400);
      iVar2 = extraout_a0 >> 10;
      FUN_000124ae(0,uVar3,uVar4,iVar2);
      if (iVar2 < 0x141) {
        uVar1 = uVar4;
        if (0xbf < iVar2) break;
      }
      else {
        uVar1 = -uVar4;
      }
      uVar3 += uVar1;
    } while (uVar4 != 0);
    FUN_000124dc(1,0x1000);
    FUN_000124f0(0,0x20,0x10,0x3d);
    _LVL640(0,extraout_a0_00);
    FUN_00012512(1,0x20,0x10,0x3d);
    *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & unaff_s1;
    _LVL647(0,extraout_a0_00,2,0x3d);
    _LVL649(0,extraout_a0_02);
    FUN_00012558(2,0x400,0x80,0x7a);
    _LVL653(2,extraout_a0_03);
    FUN_0001257a(3,0,0x40,0x7a);
    _LVL656(3,extraout_a0_04);
    param_4 = 0x7a;
    param_3 = 0x40;
    param_1 = 2;
    param_2 = extraout_a0_03;
    unaff_s3 = unaff_s3 + 4;
    unaff_s8 = unaff_s8 + 0xe;
    in_stack_00000018 = extraout_a0_02;
    in_stack_0000001c = extraout_a0_01;
  } while( true );
}



void _LVL659(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int iVar2;
  int unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int *unaff_s8;
  uint uVar3;
  uint uVar4;
  uint in_stack_0000000c;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  
  do {
    _LVL659(param_1,param_2);
    FUN_000125bc(3,0,0x20,0x7a);
    _LVL662(3,extraout_a0_06);
    iVar2 = (unaff_s2 + 0xc) * 8 + iRam00000000;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffffffc0 | in_stack_00000018 & 0x3f;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffff03f | (in_stack_0000001c & 0x3f) << 6;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff800fff | (in_stack_00000014 & 0x7ff) << 0xc;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
    FUN_0001263e(0,in_stack_00000018,in_stack_0000001c,in_stack_00000014);
    unaff_s2 += -1;
    if (unaff_s2 == -1) {
      _L0();
      *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
      _L0();
      *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
      *(uint *)(unaff_s0 + 0x70) =
           (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
           ((*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x18 |
           *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) & unaff_s1;
      *(uint *)(unaff_s0 + 0x600) =
           *(uint *)(iRam00000000 + 0x84) & 0x3ff |
           *(uint *)(iRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
      return;
    }
    *(uint *)(unaff_s0 + 100) =
         (unaff_s3[4] << 0x1c | in_stack_0000000c & *(uint *)(unaff_s0 + 100)) & unaff_s4 |
         unaff_s3[6] << 0x12;
    *(uint *)(unaff_s0 + 0x58) = unaff_s3[5] << 0x10 | *(uint *)(unaff_s0 + 0x58) & unaff_s5;
    *(uint *)(unaff_s0 + 0x48) =
         (unaff_s8[0xe] << 0x1c | *(uint *)(unaff_s0 + 0x48) & unaff_s6) & unaff_s7 |
         unaff_s8[0x11] << 0x14 | 0x70000;
    _L0(10);
    uVar3 = unaff_s3[7];
    uVar4 = uVar3;
    do {
      uVar4 >>= 1;
      *(uint *)(unaff_s0 + 0x214) = uVar3 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
      *(uint *)(unaff_s0 + 0x218) = uVar3 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
      _L0();
      _L0();
      FUN_00012486(10);
      FUN_00012494(1,0x400);
      iVar2 = extraout_a0 >> 10;
      FUN_000124ae(0,uVar3,uVar4,iVar2);
      if (iVar2 < 0x141) {
        uVar1 = uVar4;
        if (0xbf < iVar2) break;
      }
      else {
        uVar1 = -uVar4;
      }
      uVar3 += uVar1;
    } while (uVar4 != 0);
    FUN_000124dc(1,0x1000);
    FUN_000124f0(0,0x20,0x10,0x3d);
    _LVL640(0,extraout_a0_00);
    FUN_00012512(1,0x20,0x10,0x3d);
    *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & unaff_s1;
    _LVL647(0,extraout_a0_00,2,0x3d);
    _LVL649(0,extraout_a0_02);
    FUN_00012558(2,0x400,0x80,0x7a);
    _LVL653(2,extraout_a0_03);
    FUN_0001257a(3,0,0x40,0x7a);
    _LVL656(3,extraout_a0_04);
    FUN_0001259a(2,extraout_a0_03,0x40,0x7a);
    param_1 = 2;
    param_2 = extraout_a0_05;
    unaff_s3 = unaff_s3 + 4;
    unaff_s8 = unaff_s8 + 0xe;
    in_stack_00000014 = extraout_a0_05;
    in_stack_00000018 = extraout_a0_02;
    in_stack_0000001c = extraout_a0_01;
  } while( true );
}



void FUN_000125bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int iVar2;
  int unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int *unaff_s8;
  uint uVar3;
  uint uVar4;
  uint in_stack_0000000c;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  
  do {
    FUN_000125bc(param_1,param_2,param_3,param_4);
    _LVL662(3,extraout_a0_06);
    iVar2 = (unaff_s2 + 0xc) * 8 + iRam00000000;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffffffc0 | in_stack_00000018 & 0x3f;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffff03f | (in_stack_0000001c & 0x3f) << 6;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff800fff | (in_stack_00000014 & 0x7ff) << 0xc;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
    FUN_0001263e(0,in_stack_00000018,in_stack_0000001c,in_stack_00000014);
    unaff_s2 += -1;
    if (unaff_s2 == -1) {
      _L0();
      *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
      _L0();
      *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
      *(uint *)(unaff_s0 + 0x70) =
           (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
           ((*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x18 |
           *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) & unaff_s1;
      *(uint *)(unaff_s0 + 0x600) =
           *(uint *)(iRam00000000 + 0x84) & 0x3ff |
           *(uint *)(iRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
      return;
    }
    *(uint *)(unaff_s0 + 100) =
         (unaff_s3[4] << 0x1c | in_stack_0000000c & *(uint *)(unaff_s0 + 100)) & unaff_s4 |
         unaff_s3[6] << 0x12;
    *(uint *)(unaff_s0 + 0x58) = unaff_s3[5] << 0x10 | *(uint *)(unaff_s0 + 0x58) & unaff_s5;
    *(uint *)(unaff_s0 + 0x48) =
         (unaff_s8[0xe] << 0x1c | *(uint *)(unaff_s0 + 0x48) & unaff_s6) & unaff_s7 |
         unaff_s8[0x11] << 0x14 | 0x70000;
    _L0(10);
    uVar3 = unaff_s3[7];
    uVar4 = uVar3;
    do {
      uVar4 >>= 1;
      *(uint *)(unaff_s0 + 0x214) = uVar3 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
      *(uint *)(unaff_s0 + 0x218) = uVar3 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
      _L0();
      _L0();
      FUN_00012486(10);
      FUN_00012494(1,0x400);
      iVar2 = extraout_a0 >> 10;
      FUN_000124ae(0,uVar3,uVar4,iVar2);
      if (iVar2 < 0x141) {
        uVar1 = uVar4;
        if (0xbf < iVar2) break;
      }
      else {
        uVar1 = -uVar4;
      }
      uVar3 += uVar1;
    } while (uVar4 != 0);
    FUN_000124dc(1,0x1000);
    FUN_000124f0(0,0x20,0x10,0x3d);
    _LVL640(0,extraout_a0_00);
    FUN_00012512(1,0x20,0x10,0x3d);
    *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & unaff_s1;
    _LVL647(0,extraout_a0_00,2,0x3d);
    _LVL649(0,extraout_a0_02);
    FUN_00012558(2,0x400,0x80,0x7a);
    _LVL653(2,extraout_a0_03);
    FUN_0001257a(3,0,0x40,0x7a);
    _LVL656(3,extraout_a0_04);
    FUN_0001259a(2,extraout_a0_03,0x40,0x7a);
    _LVL659(2,extraout_a0_05);
    param_4 = 0x7a;
    param_3 = 0x20;
    param_2 = 0;
    param_1 = 3;
    unaff_s3 = unaff_s3 + 4;
    unaff_s8 = unaff_s8 + 0xe;
    in_stack_00000014 = extraout_a0_05;
    in_stack_00000018 = extraout_a0_02;
    in_stack_0000001c = extraout_a0_01;
  } while( true );
}



void _LVL662(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int iVar2;
  int unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int *unaff_s8;
  uint uVar3;
  uint uVar4;
  uint in_stack_0000000c;
  uint in_stack_00000010;
  uint in_stack_00000014;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  
  do {
    _LVL662(param_1,param_2);
    iVar2 = (unaff_s2 + 0xc) * 8 + iRam00000000;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffffffc0 | in_stack_00000018 & 0x3f;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xfffff03f | (in_stack_0000001c & 0x3f) << 6;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xff800fff | (in_stack_00000014 & 0x7ff) << 0xc;
    *(uint *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) & 0xfffffc00 | in_stack_00000010 & 0x3ff;
    FUN_0001263e(0,in_stack_00000018,in_stack_0000001c,in_stack_00000014);
    unaff_s2 += -1;
    if (unaff_s2 == -1) {
      _L0();
      *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
      _L0();
      *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
      *(uint *)(unaff_s0 + 0x70) =
           (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
           ((*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x18 |
           *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) & unaff_s1;
      *(uint *)(unaff_s0 + 0x600) =
           *(uint *)(iRam00000000 + 0x84) & 0x3ff |
           *(uint *)(iRam00000000 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00;
      return;
    }
    *(uint *)(unaff_s0 + 100) =
         (unaff_s3[4] << 0x1c | in_stack_0000000c & *(uint *)(unaff_s0 + 100)) & unaff_s4 |
         unaff_s3[6] << 0x12;
    *(uint *)(unaff_s0 + 0x58) = unaff_s3[5] << 0x10 | *(uint *)(unaff_s0 + 0x58) & unaff_s5;
    *(uint *)(unaff_s0 + 0x48) =
         (unaff_s8[0xe] << 0x1c | *(uint *)(unaff_s0 + 0x48) & unaff_s6) & unaff_s7 |
         unaff_s8[0x11] << 0x14 | 0x70000;
    _L0(10);
    uVar3 = unaff_s3[7];
    uVar4 = uVar3;
    do {
      uVar4 >>= 1;
      *(uint *)(unaff_s0 + 0x214) = uVar3 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
      *(uint *)(unaff_s0 + 0x218) = uVar3 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
      _L0();
      _L0();
      FUN_00012486(10);
      FUN_00012494(1,0x400);
      iVar2 = extraout_a0 >> 10;
      FUN_000124ae(0,uVar3,uVar4,iVar2);
      if (iVar2 < 0x141) {
        uVar1 = uVar4;
        if (0xbf < iVar2) break;
      }
      else {
        uVar1 = -uVar4;
      }
      uVar3 += uVar1;
    } while (uVar4 != 0);
    FUN_000124dc(1,0x1000);
    FUN_000124f0(0,0x20,0x10,0x3d);
    _LVL640(0,extraout_a0_00);
    FUN_00012512(1,0x20,0x10,0x3d);
    *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & unaff_s1;
    _LVL647(0,extraout_a0_00,2,0x3d);
    _LVL649(0,extraout_a0_02);
    FUN_00012558(2,0x400,0x80,0x7a);
    _LVL653(2,extraout_a0_03);
    FUN_0001257a(3,0,0x40,0x7a);
    _LVL656(3,extraout_a0_04);
    FUN_0001259a(2,extraout_a0_03,0x40,0x7a);
    _LVL659(2,extraout_a0_05);
    FUN_000125bc(3,0,0x20,0x7a);
    param_1 = 3;
    param_2 = extraout_a0_06;
    unaff_s3 = unaff_s3 + 4;
    unaff_s8 = unaff_s8 + 0xe;
    in_stack_00000010 = extraout_a0_06;
    in_stack_00000014 = extraout_a0_05;
    in_stack_00000018 = extraout_a0_02;
    in_stack_0000001c = extraout_a0_01;
  } while( true );
}



void FUN_0001263e(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  int extraout_a0;
  undefined4 extraout_a0_00;
  uint extraout_a0_01;
  uint extraout_a0_02;
  undefined4 extraout_a0_03;
  undefined4 extraout_a0_04;
  uint extraout_a0_05;
  uint extraout_a0_06;
  int unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int *unaff_s8;
  uint uVar2;
  uint unaff_s9;
  uint uVar3;
  int iVar4;
  int *unaff_s11;
  uint in_stack_0000000c;
  
  do {
    FUN_0001263e(param_1,param_2,param_3,param_4);
    if (unaff_s2 + -1 == -1) {
      _L0();
      *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
      _L0();
      *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
      *(uint *)(unaff_s0 + 0x70) =
           (*(uint *)(*unaff_s11 + 0x80) >> 6 & 0x3f) << 0x10 |
           ((*(uint *)(*unaff_s11 + 0x80) & 0x3f) << 0x18 | *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff)
           & unaff_s1;
      *(uint *)(unaff_s0 + 0x600) =
           *(uint *)(*unaff_s11 + 0x84) & 0x3ff |
           *(uint *)(*unaff_s11 + 0x80) & 0x7ff000 |
           *(uint *)(unaff_s0 + 0x600) & unaff_s9 & 0xfffffc00;
      return;
    }
    *(uint *)(unaff_s0 + 100) =
         (unaff_s3[4] << 0x1c | in_stack_0000000c & *(uint *)(unaff_s0 + 100)) & unaff_s4 |
         unaff_s3[6] << 0x12;
    *(uint *)(unaff_s0 + 0x58) = unaff_s3[5] << 0x10 | *(uint *)(unaff_s0 + 0x58) & unaff_s5;
    *(uint *)(unaff_s0 + 0x48) =
         (unaff_s8[0xe] << 0x1c | *(uint *)(unaff_s0 + 0x48) & unaff_s6) & unaff_s7 |
         unaff_s8[0x11] << 0x14 | 0x70000;
    _L0(10);
    uVar2 = unaff_s3[7];
    uVar3 = uVar2;
    do {
      uVar3 >>= 1;
      *(uint *)(unaff_s0 + 0x214) = uVar2 | *(uint *)(unaff_s0 + 0x214) & 0xfffff800;
      *(uint *)(unaff_s0 + 0x218) = uVar2 | *(uint *)(unaff_s0 + 0x218) & 0xfffff800;
      _L0();
      _L0();
      FUN_00012486(10);
      FUN_00012494(1,0x400);
      iVar4 = extraout_a0 >> 10;
      FUN_000124ae(0,uVar2,uVar3,iVar4);
      if (iVar4 < 0x141) {
        uVar1 = uVar3;
        if (0xbf < iVar4) break;
      }
      else {
        uVar1 = -uVar3;
      }
      uVar2 += uVar1;
    } while (uVar3 != 0);
    FUN_000124dc(1,0x1000);
    FUN_000124f0(0,0x20,0x10,0x3d);
    _LVL640(0,extraout_a0_00);
    FUN_00012512(1,0x20,0x10,0x3d);
    *(uint *)(unaff_s0 + 0x70) = extraout_a0_01 << 0x10 | *(uint *)(unaff_s0 + 0x70) & unaff_s1;
    _LVL647(0,extraout_a0_00,2,0x3d);
    _LVL649(0,extraout_a0_02);
    FUN_00012558(2,0x400,0x80,0x7a);
    _LVL653(2,extraout_a0_03);
    FUN_0001257a(3,0,0x40,0x7a);
    _LVL656(3,extraout_a0_04);
    FUN_0001259a(2,extraout_a0_03,0x40,0x7a);
    _LVL659(2,extraout_a0_05);
    FUN_000125bc(3,0,0x20,0x7a);
    _LVL662(3,extraout_a0_06);
    unaff_s11 = (int *)0x0;
    iVar4 = (unaff_s2 + 0xb) * 8 + iRam00000000;
    *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) & 0xffffffc0 | extraout_a0_02 & 0x3f;
    *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) & 0xfffff03f | (extraout_a0_01 & 0x3f) << 6;
    unaff_s9 = 0xff800fff;
    *(uint *)(iVar4 + 8) = *(uint *)(iVar4 + 8) & 0xff800fff | (extraout_a0_05 & 0x7ff) << 0xc;
    *(uint *)(iVar4 + 0xc) = *(uint *)(iVar4 + 0xc) & 0xfffffc00 | extraout_a0_06 & 0x3ff;
    param_1 = 0;
    param_2 = extraout_a0_02;
    param_3 = extraout_a0_01;
    param_4 = extraout_a0_05;
    unaff_s2 = unaff_s2 + -1;
    unaff_s3 = unaff_s3 + 4;
    unaff_s8 = unaff_s8 + 0xe;
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s9;
  int *unaff_s11;
  
  _L0();
  *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) & 0xffffcfff;
  _L0();
  *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
  *(uint *)(unaff_s0 + 0x70) =
       (*(uint *)(*unaff_s11 + 0x80) >> 6 & 0x3f) << 0x10 |
       ((*(uint *)(*unaff_s11 + 0x80) & 0x3f) << 0x18 | *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) &
       unaff_s1;
  *(uint *)(unaff_s0 + 0x600) =
       *(uint *)(*unaff_s11 + 0x84) & 0x3ff |
       *(uint *)(*unaff_s11 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & unaff_s9 & 0xfffffc00
  ;
  return;
}



void _L0(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s9;
  int *unaff_s11;
  
  _L0();
  *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xf00000;
  *(uint *)(unaff_s0 + 0x70) =
       (*(uint *)(*unaff_s11 + 0x80) >> 6 & 0x3f) << 0x10 |
       ((*(uint *)(*unaff_s11 + 0x80) & 0x3f) << 0x18 | *(uint *)(unaff_s0 + 0x70) & 0xc0ffffff) &
       unaff_s1;
  *(uint *)(unaff_s0 + 0x600) =
       *(uint *)(*unaff_s11 + 0x84) & 0x3ff |
       *(uint *)(*unaff_s11 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & unaff_s9 & 0xfffffc00
  ;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 3130

void rf_pri_roscal(void)

{
  uint extraout_a0;
  uint extraout_a0_00;
  uint uVar1;
  
  _DAT_40001014 &= 0xffff3fff;
  if ((_DAT_40001020 & 0x100) != 0) {
    _DAT_40001014 |= 0x4000;
    _L0();
    FUN_00012748();
    _DAT_4000101c |= 0x200;
    _L0();
    _DAT_40001048 = _DAT_40001048 & 0xffff8fff | 0x6300;
    FUN_0001277c();
    uVar1 = extraout_a0 & 0x3f;
    *(uint *)(iRam00000000 + 0x60) = *(uint *)(iRam00000000 + 0x60) & 0xffffffc0 | uVar1;
    _DAT_4000116c = _DAT_4000116c & 0xffc0ffff | extraout_a0 << 0x10;
    FUN_000127ba();
    *(uint *)(iRam00000000 + 0x58) = *(uint *)(iRam00000000 + 0x58) & 0xffffffc0 | uVar1;
    _DAT_4000116c = extraout_a0 | _DAT_4000116c & 0xffffffc0;
    _L0();
    *(uint *)(iRam00000000 + 0x50) = *(uint *)(iRam00000000 + 0x50) & 0xffffffc0 | uVar1;
    _DAT_40001168 = extraout_a0 << 0x10 | _DAT_40001168 & 0xffc0ffff;
    _L0();
    *(uint *)(iRam00000000 + 0x48) = *(uint *)(iRam00000000 + 0x48) & 0xffffffc0 | uVar1;
    _DAT_40001168 = extraout_a0 | _DAT_40001168 & 0xffffffc0;
    _L0();
    FUN_0001286c();
    uVar1 = (extraout_a0_00 & 0x3f) << 6;
    *(uint *)(iRam00000000 + 0x60) = *(uint *)(iRam00000000 + 0x60) & 0xfffff03f | uVar1;
    _DAT_4000116c = _DAT_4000116c & 0xc0ffffff | extraout_a0_00 << 0x18;
    FUN_000128aa();
    *(uint *)(iRam00000000 + 0x58) = *(uint *)(iRam00000000 + 0x58) & 0xfffff03f | uVar1;
    _DAT_4000116c = _DAT_4000116c & 0xffffc0ff | extraout_a0_00 << 8;
    _L0();
    *(uint *)(iRam00000000 + 0x50) = *(uint *)(iRam00000000 + 0x50) & 0xfffff03f | uVar1;
    _DAT_40001168 = extraout_a0_00 << 0x18 | _DAT_40001168 & 0xc0ffffff;
    _L0();
    *(uint *)(iRam00000000 + 0x48) = *(uint *)(iRam00000000 + 0x48) & 0xfffff03f | uVar1;
    _DAT_40001168 = extraout_a0_00 << 8 | _DAT_40001168 & 0xffffc0ff;
    _L0();
    _L0();
    _DAT_40001014 |= 0xc000;
  }
  return;
}



void _L0(void)

{
  int unaff_s0;
  uint extraout_a0;
  uint extraout_a0_00;
  uint uVar1;
  
  _L0();
  FUN_00012748();
  *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) | 0x200;
  _L0();
  *(uint *)(unaff_s0 + 0x48) = *(uint *)(unaff_s0 + 0x48) & 0xffff8fff | 0x6300;
  FUN_0001277c();
  uVar1 = extraout_a0 & 0x3f;
  *(uint *)(iRam00000000 + 0x60) = *(uint *)(iRam00000000 + 0x60) & 0xffffffc0 | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & 0xffc0ffff | extraout_a0 << 0x10;
  FUN_000127ba();
  *(uint *)(iRam00000000 + 0x58) = *(uint *)(iRam00000000 + 0x58) & 0xffffffc0 | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = extraout_a0 | *(uint *)(unaff_s0 + 0x16c) & 0xffffffc0;
  _L0();
  *(uint *)(iRam00000000 + 0x50) = *(uint *)(iRam00000000 + 0x50) & 0xffffffc0 | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0 << 0x10 | *(uint *)(unaff_s0 + 0x168) & 0xffc0ffff;
  _L0();
  *(uint *)(iRam00000000 + 0x48) = *(uint *)(iRam00000000 + 0x48) & 0xffffffc0 | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0 | *(uint *)(unaff_s0 + 0x168) & 0xffffffc0;
  _L0();
  FUN_0001286c();
  uVar1 = (extraout_a0_00 & 0x3f) << 6;
  *(uint *)(iRam00000000 + 0x60) = *(uint *)(iRam00000000 + 0x60) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & 0xc0ffffff | extraout_a0_00 << 0x18;
  FUN_000128aa();
  *(uint *)(iRam00000000 + 0x58) = *(uint *)(iRam00000000 + 0x58) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & 0xffffc0ff | extraout_a0_00 << 8;
  _L0();
  *(uint *)(iRam00000000 + 0x50) = *(uint *)(iRam00000000 + 0x50) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0_00 << 0x18 | *(uint *)(unaff_s0 + 0x168) & 0xc0ffffff;
  _L0();
  *(uint *)(iRam00000000 + 0x48) = *(uint *)(iRam00000000 + 0x48) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0_00 << 8 | *(uint *)(unaff_s0 + 0x168) & 0xffffc0ff;
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xc000;
  return;
}



void FUN_00012748(void)

{
  int unaff_s0;
  uint extraout_a0;
  uint extraout_a0_00;
  uint uVar1;
  
  FUN_00012748();
  *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) | 0x200;
  _L0();
  *(uint *)(unaff_s0 + 0x48) = *(uint *)(unaff_s0 + 0x48) & 0xffff8fff | 0x6300;
  FUN_0001277c();
  uVar1 = extraout_a0 & 0x3f;
  *(uint *)(iRam00000000 + 0x60) = *(uint *)(iRam00000000 + 0x60) & 0xffffffc0 | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & 0xffc0ffff | extraout_a0 << 0x10;
  FUN_000127ba();
  *(uint *)(iRam00000000 + 0x58) = *(uint *)(iRam00000000 + 0x58) & 0xffffffc0 | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = extraout_a0 | *(uint *)(unaff_s0 + 0x16c) & 0xffffffc0;
  _L0();
  *(uint *)(iRam00000000 + 0x50) = *(uint *)(iRam00000000 + 0x50) & 0xffffffc0 | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0 << 0x10 | *(uint *)(unaff_s0 + 0x168) & 0xffc0ffff;
  _L0();
  *(uint *)(iRam00000000 + 0x48) = *(uint *)(iRam00000000 + 0x48) & 0xffffffc0 | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0 | *(uint *)(unaff_s0 + 0x168) & 0xffffffc0;
  _L0();
  FUN_0001286c();
  uVar1 = (extraout_a0_00 & 0x3f) << 6;
  *(uint *)(iRam00000000 + 0x60) = *(uint *)(iRam00000000 + 0x60) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & 0xc0ffffff | extraout_a0_00 << 0x18;
  FUN_000128aa();
  *(uint *)(iRam00000000 + 0x58) = *(uint *)(iRam00000000 + 0x58) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & 0xffffc0ff | extraout_a0_00 << 8;
  _L0();
  *(uint *)(iRam00000000 + 0x50) = *(uint *)(iRam00000000 + 0x50) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0_00 << 0x18 | *(uint *)(unaff_s0 + 0x168) & 0xc0ffffff;
  _L0();
  *(uint *)(iRam00000000 + 0x48) = *(uint *)(iRam00000000 + 0x48) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0_00 << 8 | *(uint *)(unaff_s0 + 0x168) & 0xffffc0ff;
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xc000;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int *unaff_s1;
  uint extraout_a0;
  uint extraout_a0_00;
  uint uVar1;
  int unaff_s5;
  
  _L0();
  *(uint *)(unaff_s0 + 0x48) = *(uint *)(unaff_s0 + 0x48) & 0xffff8fff | 0x6300;
  FUN_0001277c();
  uVar1 = extraout_a0 & 0x3f;
  *(uint *)(*unaff_s1 + 0x60) = *(uint *)(*unaff_s1 + 0x60) & 0xffffffc0 | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & unaff_s5 - 1U | extraout_a0 << 0x10;
  FUN_000127ba();
  *(uint *)(*unaff_s1 + 0x58) = *(uint *)(*unaff_s1 + 0x58) & 0xffffffc0 | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = extraout_a0 | *(uint *)(unaff_s0 + 0x16c) & 0xffffffc0;
  _L0();
  *(uint *)(*unaff_s1 + 0x50) = *(uint *)(*unaff_s1 + 0x50) & 0xffffffc0 | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0 << 0x10 | *(uint *)(unaff_s0 + 0x168) & unaff_s5 - 1U;
  _L0();
  *(uint *)(*unaff_s1 + 0x48) = *(uint *)(*unaff_s1 + 0x48) & 0xffffffc0 | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0 | *(uint *)(unaff_s0 + 0x168) & 0xffffffc0;
  _L0();
  FUN_0001286c();
  uVar1 = (extraout_a0_00 & 0x3f) << 6;
  *(uint *)(*unaff_s1 + 0x60) = *(uint *)(*unaff_s1 + 0x60) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & 0xc0ffffff | extraout_a0_00 << 0x18;
  FUN_000128aa();
  *(uint *)(*unaff_s1 + 0x58) = *(uint *)(*unaff_s1 + 0x58) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & 0xffffc0ff | extraout_a0_00 << 8;
  _L0();
  *(uint *)(*unaff_s1 + 0x50) = *(uint *)(*unaff_s1 + 0x50) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0_00 << 0x18 | *(uint *)(unaff_s0 + 0x168) & 0xc0ffffff;
  _L0();
  *(uint *)(*unaff_s1 + 0x48) = *(uint *)(*unaff_s1 + 0x48) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0_00 << 8 | *(uint *)(unaff_s0 + 0x168) & 0xffffc0ff;
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xc000;
  return;
}



void FUN_0001277c(void)

{
  int unaff_s0;
  int *unaff_s1;
  uint extraout_a0;
  uint extraout_a0_00;
  uint uVar1;
  int unaff_s5;
  
  FUN_0001277c();
  uVar1 = extraout_a0 & 0x3f;
  *(uint *)(*unaff_s1 + 0x60) = *(uint *)(*unaff_s1 + 0x60) & 0xffffffc0 | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & unaff_s5 - 1U | extraout_a0 << 0x10;
  FUN_000127ba();
  *(uint *)(*unaff_s1 + 0x58) = *(uint *)(*unaff_s1 + 0x58) & 0xffffffc0 | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = extraout_a0 | *(uint *)(unaff_s0 + 0x16c) & 0xffffffc0;
  _L0();
  *(uint *)(*unaff_s1 + 0x50) = *(uint *)(*unaff_s1 + 0x50) & 0xffffffc0 | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0 << 0x10 | *(uint *)(unaff_s0 + 0x168) & unaff_s5 - 1U;
  _L0();
  *(uint *)(*unaff_s1 + 0x48) = *(uint *)(*unaff_s1 + 0x48) & 0xffffffc0 | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0 | *(uint *)(unaff_s0 + 0x168) & 0xffffffc0;
  _L0();
  FUN_0001286c();
  uVar1 = (extraout_a0_00 & 0x3f) << 6;
  *(uint *)(*unaff_s1 + 0x60) = *(uint *)(*unaff_s1 + 0x60) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & 0xc0ffffff | extraout_a0_00 << 0x18;
  FUN_000128aa();
  *(uint *)(*unaff_s1 + 0x58) = *(uint *)(*unaff_s1 + 0x58) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & 0xffffc0ff | extraout_a0_00 << 8;
  _L0();
  *(uint *)(*unaff_s1 + 0x50) = *(uint *)(*unaff_s1 + 0x50) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0_00 << 0x18 | *(uint *)(unaff_s0 + 0x168) & 0xc0ffffff;
  _L0();
  *(uint *)(*unaff_s1 + 0x48) = *(uint *)(*unaff_s1 + 0x48) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0_00 << 8 | *(uint *)(unaff_s0 + 0x168) & 0xffffc0ff;
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xc000;
  return;
}



void FUN_000127ba(void)

{
  int unaff_s0;
  int *unaff_s1;
  uint extraout_a0;
  uint unaff_s2;
  uint unaff_s3;
  uint uVar1;
  uint unaff_s4;
  uint unaff_s5;
  
  FUN_000127ba();
  *(uint *)(*unaff_s1 + 0x58) = *(uint *)(*unaff_s1 + 0x58) & 0xffffffc0 | unaff_s3;
  *(uint *)(unaff_s0 + 0x16c) = unaff_s2 | *(uint *)(unaff_s0 + 0x16c) & 0xffffffc0;
  _L0();
  *(uint *)(*unaff_s1 + 0x50) = *(uint *)(*unaff_s1 + 0x50) & 0xffffffc0 | unaff_s3;
  *(uint *)(unaff_s0 + 0x168) = unaff_s4 | *(uint *)(unaff_s0 + 0x168) & unaff_s5;
  _L0();
  *(uint *)(*unaff_s1 + 0x48) = *(uint *)(*unaff_s1 + 0x48) & 0xffffffc0 | unaff_s3;
  *(uint *)(unaff_s0 + 0x168) = unaff_s2 | *(uint *)(unaff_s0 + 0x168) & 0xffffffc0;
  _L0();
  FUN_0001286c();
  uVar1 = (extraout_a0 & 0x3f) << 6;
  *(uint *)(*unaff_s1 + 0x60) = *(uint *)(*unaff_s1 + 0x60) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & 0xc0ffffff | extraout_a0 << 0x18;
  FUN_000128aa();
  *(uint *)(*unaff_s1 + 0x58) = *(uint *)(*unaff_s1 + 0x58) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & 0xffffc0ff | extraout_a0 << 8;
  _L0();
  *(uint *)(*unaff_s1 + 0x50) = *(uint *)(*unaff_s1 + 0x50) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0 << 0x18 | *(uint *)(unaff_s0 + 0x168) & 0xc0ffffff;
  _L0();
  *(uint *)(*unaff_s1 + 0x48) = *(uint *)(*unaff_s1 + 0x48) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0 << 8 | *(uint *)(unaff_s0 + 0x168) & 0xffffc0ff;
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xc000;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int *unaff_s1;
  uint extraout_a0;
  uint unaff_s2;
  uint unaff_s3;
  uint uVar1;
  uint unaff_s4;
  uint unaff_s5;
  int unaff_s6;
  uint unaff_s8;
  
  _L0();
  *(uint *)(*unaff_s1 + 0x50) = *(uint *)(*unaff_s1 + 0x50) & 0xffffffc0 | unaff_s3;
  *(uint *)(unaff_s0 + 0x168) = unaff_s4 | *(uint *)(unaff_s0 + 0x168) & unaff_s5;
  _L0();
  *(uint *)(*unaff_s1 + 0x48) = *(uint *)(*unaff_s1 + 0x48) & 0xffffffc0 | unaff_s3;
  *(uint *)(unaff_s0 + 0x168) = unaff_s2 | *(uint *)(unaff_s0 + 0x168) & 0xffffffc0;
  _L0();
  FUN_0001286c();
  uVar1 = (extraout_a0 & 0x3f) << 6;
  *(uint *)(*unaff_s1 + 0x60) = *(uint *)(*unaff_s1 + 0x60) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & unaff_s8 | extraout_a0 << 0x18;
  FUN_000128aa();
  *(uint *)(*unaff_s1 + 0x58) = *(uint *)(*unaff_s1 + 0x58) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & unaff_s6 + 0xffU | extraout_a0 << 8;
  _L0();
  *(uint *)(*unaff_s1 + 0x50) = *(uint *)(*unaff_s1 + 0x50) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0 << 0x18 | *(uint *)(unaff_s0 + 0x168) & unaff_s8;
  _L0();
  *(uint *)(*unaff_s1 + 0x48) = *(uint *)(*unaff_s1 + 0x48) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0 << 8 | *(uint *)(unaff_s0 + 0x168) & unaff_s6 + 0xffU;
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xc000;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int *unaff_s1;
  uint extraout_a0;
  uint unaff_s2;
  uint unaff_s3;
  uint uVar1;
  uint unaff_s6;
  uint unaff_s8;
  
  _L0();
  *(uint *)(*unaff_s1 + 0x48) = *(uint *)(*unaff_s1 + 0x48) & 0xffffffc0 | unaff_s3;
  *(uint *)(unaff_s0 + 0x168) = unaff_s2 | *(uint *)(unaff_s0 + 0x168) & 0xffffffc0;
  _L0();
  FUN_0001286c();
  uVar1 = (extraout_a0 & 0x3f) << 6;
  *(uint *)(*unaff_s1 + 0x60) = *(uint *)(*unaff_s1 + 0x60) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & unaff_s8 | extraout_a0 << 0x18;
  FUN_000128aa();
  *(uint *)(*unaff_s1 + 0x58) = *(uint *)(*unaff_s1 + 0x58) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & unaff_s6 | extraout_a0 << 8;
  _L0();
  *(uint *)(*unaff_s1 + 0x50) = *(uint *)(*unaff_s1 + 0x50) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0 << 0x18 | *(uint *)(unaff_s0 + 0x168) & unaff_s8;
  _L0();
  *(uint *)(*unaff_s1 + 0x48) = *(uint *)(*unaff_s1 + 0x48) & 0xfffff03f | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0 << 8 | *(uint *)(unaff_s0 + 0x168) & unaff_s6;
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xc000;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int *unaff_s1;
  uint extraout_a0;
  uint uVar1;
  uint unaff_s4;
  uint unaff_s6;
  uint unaff_s8;
  
  _L0();
  FUN_0001286c();
  uVar1 = (extraout_a0 & 0x3f) << 6;
  *(uint *)(*unaff_s1 + 0x60) = *(uint *)(*unaff_s1 + 0x60) & unaff_s4 | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & unaff_s8 | extraout_a0 << 0x18;
  FUN_000128aa();
  *(uint *)(*unaff_s1 + 0x58) = *(uint *)(*unaff_s1 + 0x58) & unaff_s4 | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & unaff_s6 | extraout_a0 << 8;
  _L0();
  *(uint *)(*unaff_s1 + 0x50) = *(uint *)(*unaff_s1 + 0x50) & unaff_s4 | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0 << 0x18 | *(uint *)(unaff_s0 + 0x168) & unaff_s8;
  _L0();
  *(uint *)(*unaff_s1 + 0x48) = *(uint *)(*unaff_s1 + 0x48) & unaff_s4 | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0 << 8 | *(uint *)(unaff_s0 + 0x168) & unaff_s6;
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xc000;
  return;
}



void FUN_0001286c(void)

{
  int unaff_s0;
  int *unaff_s1;
  uint extraout_a0;
  uint uVar1;
  uint unaff_s4;
  uint unaff_s6;
  uint unaff_s8;
  
  FUN_0001286c();
  uVar1 = (extraout_a0 & 0x3f) << 6;
  *(uint *)(*unaff_s1 + 0x60) = *(uint *)(*unaff_s1 + 0x60) & unaff_s4 | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & unaff_s8 | extraout_a0 << 0x18;
  FUN_000128aa();
  *(uint *)(*unaff_s1 + 0x58) = *(uint *)(*unaff_s1 + 0x58) & unaff_s4 | uVar1;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & unaff_s6 | extraout_a0 << 8;
  _L0();
  *(uint *)(*unaff_s1 + 0x50) = *(uint *)(*unaff_s1 + 0x50) & unaff_s4 | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0 << 0x18 | *(uint *)(unaff_s0 + 0x168) & unaff_s8;
  _L0();
  *(uint *)(*unaff_s1 + 0x48) = *(uint *)(*unaff_s1 + 0x48) & unaff_s4 | uVar1;
  *(uint *)(unaff_s0 + 0x168) = extraout_a0 << 8 | *(uint *)(unaff_s0 + 0x168) & unaff_s6;
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xc000;
  return;
}



void FUN_000128aa(void)

{
  int unaff_s0;
  int *unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  
  FUN_000128aa();
  *(uint *)(*unaff_s1 + 0x58) = *(uint *)(*unaff_s1 + 0x58) & unaff_s4 | unaff_s3;
  *(uint *)(unaff_s0 + 0x16c) = *(uint *)(unaff_s0 + 0x16c) & unaff_s6 | unaff_s2 << 8;
  _L0();
  *(uint *)(*unaff_s1 + 0x50) = *(uint *)(*unaff_s1 + 0x50) & unaff_s4 | unaff_s3;
  *(uint *)(unaff_s0 + 0x168) = unaff_s7 | *(uint *)(unaff_s0 + 0x168) & unaff_s8;
  _L0();
  *(uint *)(*unaff_s1 + 0x48) = *(uint *)(*unaff_s1 + 0x48) & unaff_s4 | unaff_s3;
  *(uint *)(unaff_s0 + 0x168) = unaff_s2 << 8 | *(uint *)(unaff_s0 + 0x168) & unaff_s6;
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xc000;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int *unaff_s1;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  
  _L0();
  *(uint *)(*unaff_s1 + 0x50) = *(uint *)(*unaff_s1 + 0x50) & unaff_s4 | unaff_s3;
  *(uint *)(unaff_s0 + 0x168) = unaff_s7 | *(uint *)(unaff_s0 + 0x168) & unaff_s8;
  _L0();
  *(uint *)(*unaff_s1 + 0x48) = *(uint *)(*unaff_s1 + 0x48) & unaff_s4 | unaff_s3;
  *(uint *)(unaff_s0 + 0x168) = unaff_s5 | *(uint *)(unaff_s0 + 0x168) & unaff_s6;
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xc000;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int *unaff_s1;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  
  _L0();
  *(uint *)(*unaff_s1 + 0x48) = *(uint *)(*unaff_s1 + 0x48) & unaff_s4 | unaff_s3;
  *(uint *)(unaff_s0 + 0x168) = unaff_s5 | *(uint *)(unaff_s0 + 0x168) & unaff_s6;
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xc000;
  return;
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xc000;
  return;
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  *(uint *)(unaff_s0 + 0x14) = *(uint *)(unaff_s0 + 0x14) | 0xc000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 3308

void rf_pri_rccal(void)

{
  int iVar1;
  int extraout_a0;
  int extraout_a0_00;
  uint uVar2;
  uint uVar3;
  
  _DAT_40001014 &= 0xfff3ffff;
  if ((_DAT_40001020 & 0x400) != 0) {
    _DAT_40001014 |= 0x40000;
    _L0();
    FUN_000129a8();
    _DAT_40001084 = _DAT_40001084 & 0xfcffffff | 0x2000000;
    _DAT_4000108c |= 0x1000;
    _DAT_4000101c |= 0x800;
    _L0();
    FUN_000129ee();
    uVar3 = _DAT_40001080;
    iVar1 = iRam00000000;
    *(uint *)(iRam00000000 + 8) =
         *(uint *)(iRam00000000 + 8) & 0xffffffc0 | _DAT_40001080 >> 0x18 & 0x3f;
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffff03f | (uVar3 >> 0x10 & 0x3f) << 6;
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffc0fff | (uVar3 >> 8 & 0x3f) << 0xc;
    *(uint *)(iVar1 + 8) = (uVar3 & 0x3f) << 0x12 | *(uint *)(iVar1 + 8) & 0xff03ffff;
    FUN_00012a80();
    iVar1 = iRam00000000;
    uVar3 = *(uint *)(iRam00000000 + 8) & 0x3f;
    if (uVar3 < (*(uint *)(iRam00000000 + 8) >> 6 & 0x3f)) {
      uVar3 = *(uint *)(iRam00000000 + 8) >> 6 & 0x3f;
    }
    if (uVar3 < (*(uint *)(iRam00000000 + 8) >> 0xc & 0x3f)) {
      uVar3 = *(uint *)(iRam00000000 + 8) >> 0xc & 0x3f;
    }
    if (uVar3 < (*(uint *)(iRam00000000 + 8) >> 0x12 & 0x3f)) {
      uVar3 = *(uint *)(iRam00000000 + 8) >> 0x12 & 0x3f;
    }
    uVar2 = 0x18;
    if (0x27 < uVar3) {
      uVar2 = 0x3f - uVar3;
    }
    uVar2 &= 0xff;
    *(uint *)(iRam00000000 + 8) =
         *(uint *)(iRam00000000 + 8) & 0xffffffc0 | *(int *)(iRam00000000 + 8) + uVar2 & 0x3f;
    *(uint *)(iVar1 + 8) =
         ((*(uint *)(iVar1 + 8) >> 6) + uVar2 & 0x3f) << 6 | *(uint *)(iVar1 + 8) & 0xfffff03f;
    *(uint *)(iVar1 + 8) =
         ((*(uint *)(iVar1 + 8) >> 0xc) + uVar2 & 0x3f) << 0xc | *(uint *)(iVar1 + 8) & 0xfffc0fff;
    *(uint *)(iVar1 + 8) =
         ((*(uint *)(iVar1 + 8) >> 0x12) + uVar2 & 0x3f) << 0x12 | *(uint *)(iVar1 + 8) & 0xff03ffff
    ;
    _LVL772();
    FUN_00012b5e();
    FUN_00012b90();
    _L0();
    if ((extraout_a0 == 2) || (extraout_a0_00 == 2)) {
      _DAT_40001014 = _DAT_40001014 & 0xfff3ffff | 0x80000;
    }
    else {
      _DAT_40001014 |= 0xc0000;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int iVar1;
  int extraout_a0;
  int extraout_a0_00;
  uint uVar2;
  uint uVar3;
  int unaff_s2;
  
  _L0();
  FUN_000129a8();
  *(uint *)(unaff_s2 + 0x84) = *(uint *)(unaff_s2 + 0x84) & 0xfcffffff | 0x2000000;
  *(uint *)(unaff_s2 + 0x8c) = *(uint *)(unaff_s2 + 0x8c) | 0x1000;
  *(uint *)(unaff_s2 + 0x1c) = *(uint *)(unaff_s2 + 0x1c) | 0x800;
  _L0();
  FUN_000129ee();
  iVar1 = iRam00000000;
  uVar3 = *(uint *)(unaff_s2 + 0x80);
  *(uint *)(iRam00000000 + 8) = *(uint *)(iRam00000000 + 8) & 0xffffffc0 | uVar3 >> 0x18 & 0x3f;
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffff03f | (uVar3 >> 0x10 & 0x3f) << 6;
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffc0fff | (uVar3 >> 8 & 0x3f) << 0xc;
  *(uint *)(iVar1 + 8) = (uVar3 & 0x3f) << 0x12 | *(uint *)(iVar1 + 8) & 0xff03ffff;
  FUN_00012a80();
  iVar1 = iRam00000000;
  uVar3 = *(uint *)(iRam00000000 + 8) & 0x3f;
  if (uVar3 < (*(uint *)(iRam00000000 + 8) >> 6 & 0x3f)) {
    uVar3 = *(uint *)(iRam00000000 + 8) >> 6 & 0x3f;
  }
  if (uVar3 < (*(uint *)(iRam00000000 + 8) >> 0xc & 0x3f)) {
    uVar3 = *(uint *)(iRam00000000 + 8) >> 0xc & 0x3f;
  }
  if (uVar3 < (*(uint *)(iRam00000000 + 8) >> 0x12 & 0x3f)) {
    uVar3 = *(uint *)(iRam00000000 + 8) >> 0x12 & 0x3f;
  }
  uVar2 = 0x18;
  if (0x27 < uVar3) {
    uVar2 = 0x3f - uVar3;
  }
  uVar2 &= 0xff;
  *(uint *)(iRam00000000 + 8) =
       *(uint *)(iRam00000000 + 8) & 0xffffffc0 | *(int *)(iRam00000000 + 8) + uVar2 & 0x3f;
  *(uint *)(iVar1 + 8) =
       ((*(uint *)(iVar1 + 8) >> 6) + uVar2 & 0x3f) << 6 | *(uint *)(iVar1 + 8) & 0xfffff03f;
  *(uint *)(iVar1 + 8) =
       ((*(uint *)(iVar1 + 8) >> 0xc) + uVar2 & 0x3f) << 0xc | *(uint *)(iVar1 + 8) & 0xfffc0fff;
  *(uint *)(iVar1 + 8) =
       ((*(uint *)(iVar1 + 8) >> 0x12) + uVar2 & 0x3f) << 0x12 | *(uint *)(iVar1 + 8) & 0xff03ffff;
  _LVL772();
  FUN_00012b5e();
  FUN_00012b90();
  _L0();
  if ((extraout_a0 == 2) || (extraout_a0_00 == 2)) {
    _DAT_40001014 = _DAT_40001014 & 0xfff3ffff | 0x80000;
  }
  else {
    _DAT_40001014 |= 0xc0000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000129a8(void)

{
  int iVar1;
  int extraout_a0;
  int extraout_a0_00;
  uint uVar2;
  uint uVar3;
  int unaff_s2;
  
  FUN_000129a8();
  *(uint *)(unaff_s2 + 0x84) = *(uint *)(unaff_s2 + 0x84) & 0xfcffffff | 0x2000000;
  *(uint *)(unaff_s2 + 0x8c) = *(uint *)(unaff_s2 + 0x8c) | 0x1000;
  *(uint *)(unaff_s2 + 0x1c) = *(uint *)(unaff_s2 + 0x1c) | 0x800;
  _L0();
  FUN_000129ee();
  iVar1 = iRam00000000;
  uVar3 = *(uint *)(unaff_s2 + 0x80);
  *(uint *)(iRam00000000 + 8) = *(uint *)(iRam00000000 + 8) & 0xffffffc0 | uVar3 >> 0x18 & 0x3f;
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffff03f | (uVar3 >> 0x10 & 0x3f) << 6;
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffc0fff | (uVar3 >> 8 & 0x3f) << 0xc;
  *(uint *)(iVar1 + 8) = (uVar3 & 0x3f) << 0x12 | *(uint *)(iVar1 + 8) & 0xff03ffff;
  FUN_00012a80();
  iVar1 = iRam00000000;
  uVar3 = *(uint *)(iRam00000000 + 8) & 0x3f;
  if (uVar3 < (*(uint *)(iRam00000000 + 8) >> 6 & 0x3f)) {
    uVar3 = *(uint *)(iRam00000000 + 8) >> 6 & 0x3f;
  }
  if (uVar3 < (*(uint *)(iRam00000000 + 8) >> 0xc & 0x3f)) {
    uVar3 = *(uint *)(iRam00000000 + 8) >> 0xc & 0x3f;
  }
  if (uVar3 < (*(uint *)(iRam00000000 + 8) >> 0x12 & 0x3f)) {
    uVar3 = *(uint *)(iRam00000000 + 8) >> 0x12 & 0x3f;
  }
  uVar2 = 0x18;
  if (0x27 < uVar3) {
    uVar2 = 0x3f - uVar3;
  }
  uVar2 &= 0xff;
  *(uint *)(iRam00000000 + 8) =
       *(uint *)(iRam00000000 + 8) & 0xffffffc0 | *(int *)(iRam00000000 + 8) + uVar2 & 0x3f;
  *(uint *)(iVar1 + 8) =
       ((*(uint *)(iVar1 + 8) >> 6) + uVar2 & 0x3f) << 6 | *(uint *)(iVar1 + 8) & 0xfffff03f;
  *(uint *)(iVar1 + 8) =
       ((*(uint *)(iVar1 + 8) >> 0xc) + uVar2 & 0x3f) << 0xc | *(uint *)(iVar1 + 8) & 0xfffc0fff;
  *(uint *)(iVar1 + 8) =
       ((*(uint *)(iVar1 + 8) >> 0x12) + uVar2 & 0x3f) << 0x12 | *(uint *)(iVar1 + 8) & 0xff03ffff;
  _LVL772();
  FUN_00012b5e();
  FUN_00012b90();
  _L0();
  if ((extraout_a0 == 2) || (extraout_a0_00 == 2)) {
    _DAT_40001014 = _DAT_40001014 & 0xfff3ffff | 0x80000;
  }
  else {
    _DAT_40001014 |= 0xc0000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int iVar1;
  int extraout_a0;
  int extraout_a0_00;
  uint uVar2;
  uint uVar3;
  int unaff_s2;
  
  _L0();
  FUN_000129ee();
  iVar1 = iRam00000000;
  uVar3 = *(uint *)(unaff_s2 + 0x80);
  *(uint *)(iRam00000000 + 8) = *(uint *)(iRam00000000 + 8) & 0xffffffc0 | uVar3 >> 0x18 & 0x3f;
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffff03f | (uVar3 >> 0x10 & 0x3f) << 6;
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffc0fff | (uVar3 >> 8 & 0x3f) << 0xc;
  *(uint *)(iVar1 + 8) = (uVar3 & 0x3f) << 0x12 | *(uint *)(iVar1 + 8) & 0xff03ffff;
  FUN_00012a80();
  iVar1 = iRam00000000;
  uVar3 = *(uint *)(iRam00000000 + 8) & 0x3f;
  if (uVar3 < (*(uint *)(iRam00000000 + 8) >> 6 & 0x3f)) {
    uVar3 = *(uint *)(iRam00000000 + 8) >> 6 & 0x3f;
  }
  if (uVar3 < (*(uint *)(iRam00000000 + 8) >> 0xc & 0x3f)) {
    uVar3 = *(uint *)(iRam00000000 + 8) >> 0xc & 0x3f;
  }
  if (uVar3 < (*(uint *)(iRam00000000 + 8) >> 0x12 & 0x3f)) {
    uVar3 = *(uint *)(iRam00000000 + 8) >> 0x12 & 0x3f;
  }
  uVar2 = 0x18;
  if (0x27 < uVar3) {
    uVar2 = 0x3f - uVar3;
  }
  uVar2 &= 0xff;
  *(uint *)(iRam00000000 + 8) =
       *(uint *)(iRam00000000 + 8) & 0xffffffc0 | *(int *)(iRam00000000 + 8) + uVar2 & 0x3f;
  *(uint *)(iVar1 + 8) =
       ((*(uint *)(iVar1 + 8) >> 6) + uVar2 & 0x3f) << 6 | *(uint *)(iVar1 + 8) & 0xfffff03f;
  *(uint *)(iVar1 + 8) =
       ((*(uint *)(iVar1 + 8) >> 0xc) + uVar2 & 0x3f) << 0xc | *(uint *)(iVar1 + 8) & 0xfffc0fff;
  *(uint *)(iVar1 + 8) =
       ((*(uint *)(iVar1 + 8) >> 0x12) + uVar2 & 0x3f) << 0x12 | *(uint *)(iVar1 + 8) & 0xff03ffff;
  _LVL772();
  FUN_00012b5e();
  FUN_00012b90();
  _L0();
  if ((extraout_a0 == 2) || (extraout_a0_00 == 2)) {
    _DAT_40001014 = _DAT_40001014 & 0xfff3ffff | 0x80000;
  }
  else {
    _DAT_40001014 |= 0xc0000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000129ee(void)

{
  int iVar1;
  int unaff_s1;
  int extraout_a0;
  uint uVar2;
  uint uVar3;
  int unaff_s2;
  
  FUN_000129ee();
  iVar1 = iRam00000000;
  uVar3 = *(uint *)(unaff_s2 + 0x80);
  *(uint *)(iRam00000000 + 8) = *(uint *)(iRam00000000 + 8) & 0xffffffc0 | uVar3 >> 0x18 & 0x3f;
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffff03f | (uVar3 >> 0x10 & 0x3f) << 6;
  *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) & 0xfffc0fff | (uVar3 >> 8 & 0x3f) << 0xc;
  *(uint *)(iVar1 + 8) = (uVar3 & 0x3f) << 0x12 | *(uint *)(iVar1 + 8) & 0xff03ffff;
  FUN_00012a80();
  iVar1 = iRam00000000;
  uVar3 = *(uint *)(iRam00000000 + 8) & 0x3f;
  if (uVar3 < (*(uint *)(iRam00000000 + 8) >> 6 & 0x3f)) {
    uVar3 = *(uint *)(iRam00000000 + 8) >> 6 & 0x3f;
  }
  if (uVar3 < (*(uint *)(iRam00000000 + 8) >> 0xc & 0x3f)) {
    uVar3 = *(uint *)(iRam00000000 + 8) >> 0xc & 0x3f;
  }
  if (uVar3 < (*(uint *)(iRam00000000 + 8) >> 0x12 & 0x3f)) {
    uVar3 = *(uint *)(iRam00000000 + 8) >> 0x12 & 0x3f;
  }
  uVar2 = 0x18;
  if (0x27 < uVar3) {
    uVar2 = 0x3f - uVar3;
  }
  uVar2 &= 0xff;
  *(uint *)(iRam00000000 + 8) =
       *(uint *)(iRam00000000 + 8) & 0xffffffc0 | *(int *)(iRam00000000 + 8) + uVar2 & 0x3f;
  *(uint *)(iVar1 + 8) =
       ((*(uint *)(iVar1 + 8) >> 6) + uVar2 & 0x3f) << 6 | *(uint *)(iVar1 + 8) & 0xfffff03f;
  *(uint *)(iVar1 + 8) =
       ((*(uint *)(iVar1 + 8) >> 0xc) + uVar2 & 0x3f) << 0xc | *(uint *)(iVar1 + 8) & 0xfffc0fff;
  *(uint *)(iVar1 + 8) =
       ((*(uint *)(iVar1 + 8) >> 0x12) + uVar2 & 0x3f) << 0x12 | *(uint *)(iVar1 + 8) & 0xff03ffff;
  _LVL772();
  FUN_00012b5e();
  FUN_00012b90();
  _L0();
  if ((unaff_s1 == 2) || (extraout_a0 == 2)) {
    _DAT_40001014 = _DAT_40001014 & 0xfff3ffff | 0x80000;
  }
  else {
    _DAT_40001014 |= 0xc0000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00012a80(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *unaff_s2;
  
  FUN_00012a80();
  iVar2 = *unaff_s2;
  uVar3 = *(uint *)(iVar2 + 8) & 0x3f;
  if (uVar3 < (*(uint *)(iVar2 + 8) >> 6 & 0x3f)) {
    uVar3 = *(uint *)(iVar2 + 8) >> 6 & 0x3f;
  }
  if (uVar3 < (*(uint *)(iVar2 + 8) >> 0xc & 0x3f)) {
    uVar3 = *(uint *)(iVar2 + 8) >> 0xc & 0x3f;
  }
  if (uVar3 < (*(uint *)(iVar2 + 8) >> 0x12 & 0x3f)) {
    uVar3 = *(uint *)(iVar2 + 8) >> 0x12 & 0x3f;
  }
  uVar1 = 0x18;
  if (0x27 < uVar3) {
    uVar1 = 0x3f - uVar3;
  }
  uVar1 &= 0xff;
  *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) & 0xffffffc0 | *(int *)(iVar2 + 8) + uVar1 & 0x3f;
  *(uint *)(iVar2 + 8) =
       ((*(uint *)(iVar2 + 8) >> 6) + uVar1 & 0x3f) << 6 | *(uint *)(iVar2 + 8) & 0xfffff03f;
  *(uint *)(iVar2 + 8) =
       ((*(uint *)(iVar2 + 8) >> 0xc) + uVar1 & 0x3f) << 0xc | *(uint *)(iVar2 + 8) & 0xfffc0fff;
  *(uint *)(iVar2 + 8) =
       ((*(uint *)(iVar2 + 8) >> 0x12) + uVar1 & 0x3f) << 0x12 | *(uint *)(iVar2 + 8) & 0xff03ffff;
  _LVL772();
  FUN_00012b5e();
  FUN_00012b90();
  _L0();
  if ((unaff_s1 == 2) || (unaff_s0 == 2)) {
    _DAT_40001014 = _DAT_40001014 & 0xfff3ffff | 0x80000;
  }
  else {
    _DAT_40001014 |= 0xc0000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _LVL772(void)

{
  int unaff_s0;
  int unaff_s1;
  
  _LVL772();
  FUN_00012b5e();
  FUN_00012b90();
  _L0();
  if ((unaff_s1 == 2) || (unaff_s0 == 2)) {
    _DAT_40001014 = _DAT_40001014 & 0xfff3ffff | 0x80000;
  }
  else {
    _DAT_40001014 |= 0xc0000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00012b5e(void)

{
  int unaff_s0;
  int unaff_s1;
  
  FUN_00012b5e();
  FUN_00012b90();
  _L0();
  if ((unaff_s1 == 2) || (unaff_s0 == 2)) {
    _DAT_40001014 = _DAT_40001014 & 0xfff3ffff | 0x80000;
  }
  else {
    _DAT_40001014 |= 0xc0000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00012b90(void)

{
  int unaff_s0;
  int unaff_s1;
  
  FUN_00012b90();
  _L0();
  if ((unaff_s1 == 2) || (unaff_s0 == 2)) {
    _DAT_40001014 = _DAT_40001014 & 0xfff3ffff | 0x80000;
  }
  else {
    _DAT_40001014 |= 0xc0000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  
  _L0();
  if ((unaff_s1 == 2) || (unaff_s0 == 2)) {
    _DAT_40001014 = _DAT_40001014 & 0xfff3ffff | 0x80000;
  }
  else {
    _DAT_40001014 |= 0xc0000;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1890

void rf_pri_lo_acal(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  _DAT_40001014 = _DAT_40001014 & 0xffffff3f | 0x40;
  _L0();
  _L0();
  puVar3 = (undefined4 *)0x0;
  iVar2 = 0;
  do {
    _DAT_4000101c |= 0x10;
    _DAT_400010a4 = _DAT_400010a4 & 0xfffff8ff | 0x400;
    uVar1 = 0x10;
    _DAT_400010a0 =
         *(ushort *)(iRam00000000 + (iVar2 + 8) * 2 + 0xc) & 0xff |
         _DAT_400010a0 & 0xffe0ff00 | 0x100000;
    _DAT_400010c4 = *puVar3;
    _L0(1);
    for (uVar5 = 3; _DAT_400010a0 = _DAT_400010a0 & 0xffe0ffff | uVar1 << 0x10, uVar5 != 0xffffffff;
        uVar5 -= 1) {
      _L0(1);
      iVar4 = 1 << (uVar5 & 0x1f);
      if ((int)(_DAT_400010a4 << 0x13) < 0) {
        iVar4 = -iVar4;
      }
      uVar1 += iVar4;
    }
    _L0(1);
    if ((-1 < (int)(_DAT_400010a4 << 0x13)) && (uVar1 < 0x1f)) {
      uVar1 += 1;
    }
    iVar4 = (iVar2 + 8) * 2 + iRam00000000;
    *(ushort *)(iVar4 + 0xc) = *(ushort *)(iVar4 + 0xc) & 0xe0ff | (ushort)((uVar1 & 0x1f) << 8);
    FUN_00012cec(0,iVar2,uVar1);
    iVar2 += 1;
    puVar3 = puVar3 + 1;
  } while (iVar2 != 0x15);
  _L0();
  _DAT_40001014 = _DAT_40001014 | 0xc0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *unaff_s3;
  int unaff_s4;
  int iVar3;
  uint uVar4;
  
  _L0();
  _L0();
  iVar2 = 0;
  do {
    _DAT_4000101c |= 0x10;
    _DAT_400010a4 = _DAT_400010a4 & 0xfffff8ff | 0x400;
    uVar1 = 0x10;
    _DAT_400010a0 =
         *(ushort *)(iRam00000000 + (iVar2 + 8) * 2 + 0xc) & 0xff |
         _DAT_400010a0 & unaff_s4 - 1U & 0xffffff00 | 0x100000;
    _DAT_400010c4 = *unaff_s3;
    _L0(1);
    for (uVar4 = 3; _DAT_400010a0 = _DAT_400010a0 & unaff_s4 - 1U | uVar1 << 0x10,
        uVar4 != 0xffffffff; uVar4 -= 1) {
      _L0(1);
      iVar3 = 1 << (uVar4 & 0x1f);
      if ((int)(_DAT_400010a4 << 0x13) < 0) {
        iVar3 = -iVar3;
      }
      uVar1 += iVar3;
    }
    _L0(1);
    if ((-1 < (int)(_DAT_400010a4 << 0x13)) && (uVar1 < 0x1f)) {
      uVar1 += 1;
    }
    iVar3 = (iVar2 + 8) * 2 + iRam00000000;
    *(ushort *)(iVar3 + 0xc) = *(ushort *)(iVar3 + 0xc) & 0xe0ff | (ushort)((uVar1 & 0x1f) << 8);
    FUN_00012cec(0,iVar2,uVar1);
    iVar2 += 1;
    unaff_s3 = unaff_s3 + 1;
  } while (iVar2 != 0x15);
  _L0();
  _DAT_40001014 = _DAT_40001014 | 0xc0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *unaff_s3;
  int unaff_s4;
  short unaff_s5;
  int iVar3;
  uint uVar4;
  
  _L0();
  iVar2 = 0;
  do {
    _DAT_4000101c |= 0x10;
    _DAT_400010a4 = _DAT_400010a4 & 0xfffff8ff | 0x400;
    uVar1 = 0x10;
    _DAT_400010a0 =
         *(ushort *)(iRam00000000 + (iVar2 + 8) * 2 + 0xc) & 0xff |
         _DAT_400010a0 & unaff_s4 - 1U & 0xffffff00 | 0x100000;
    _DAT_400010c4 = *unaff_s3;
    _L0(1);
    for (uVar4 = 3; _DAT_400010a0 = _DAT_400010a0 & unaff_s4 - 1U | uVar1 << 0x10,
        uVar4 != 0xffffffff; uVar4 -= 1) {
      _L0(1);
      iVar3 = 1 << (uVar4 & 0x1f);
      if ((int)(_DAT_400010a4 << 0x13) < 0) {
        iVar3 = -iVar3;
      }
      uVar1 += iVar3;
    }
    _L0(1);
    if ((-1 < (int)(_DAT_400010a4 << 0x13)) && (uVar1 < 0x1f)) {
      uVar1 += 1;
    }
    iVar3 = (iVar2 + 8) * 2 + iRam00000000;
    *(ushort *)(iVar3 + 0xc) =
         *(ushort *)(iVar3 + 0xc) & unaff_s5 + 0xffU | (ushort)((uVar1 & 0x1f) << 8);
    FUN_00012cec(0,iVar2,uVar1);
    iVar2 += 1;
    unaff_s3 = unaff_s3 + 1;
  } while (iVar2 != 0x15);
  _L0();
  _DAT_40001014 = _DAT_40001014 | 0xc0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(undefined4 param_1)

{
  int unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  undefined4 *unaff_s3;
  uint unaff_s4;
  ushort unaff_s5;
  int *unaff_s6;
  int unaff_s7;
  int iVar1;
  uint unaff_s8;
  uint unaff_s9;
  
  while( true ) {
    _L0(param_1);
    for (; *(uint *)(unaff_s0 + 0xa0) = *(uint *)(unaff_s0 + 0xa0) & unaff_s4 | unaff_s1 << 0x10,
        unaff_s8 != unaff_s9; unaff_s8 -= 1) {
      _L0(1);
      iVar1 = 1 << (unaff_s8 & 0x1f);
      if (*(int *)(unaff_s0 + 0xa4) << 0x13 < 0) {
        iVar1 = -iVar1;
      }
      unaff_s1 += iVar1;
    }
    _L0(1);
    if ((-1 < *(int *)(unaff_s0 + 0xa4) << 0x13) && (unaff_s1 < 0x1f)) {
      unaff_s1 += 1;
    }
    iVar1 = unaff_s7 * 2 + *unaff_s6;
    *(ushort *)(iVar1 + 0xc) =
         *(ushort *)(iVar1 + 0xc) & unaff_s5 | (ushort)((unaff_s1 & 0x1f) << 8);
    FUN_00012cec(0,unaff_s2,unaff_s1);
    unaff_s3 = unaff_s3 + 1;
    if (unaff_s2 + 1 == 0x15) break;
    unaff_s7 = unaff_s2 + 9;
    *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) | 0x10;
    param_1 = 1;
    *(uint *)(unaff_s0 + 0xa4) = *(uint *)(unaff_s0 + 0xa4) & 0xfffff8ff | 0x400;
    unaff_s8 = 3;
    unaff_s1 = 0x10;
    *(uint *)(unaff_s0 + 0xa0) = *(uint *)(unaff_s0 + 0xa0) & unaff_s4 | 0x100000;
    unaff_s9 = 0xffffffff;
    *(uint *)(unaff_s0 + 0xa0) =
         *(ushort *)(*unaff_s6 + unaff_s7 * 2 + 0xc) & 0xff |
         *(uint *)(unaff_s0 + 0xa0) & 0xffffff00;
    *(undefined4 *)(unaff_s0 + 0xc4) = *unaff_s3;
    unaff_s2 = unaff_s2 + 1;
  }
  _L0();
  _DAT_40001014 = _DAT_40001014 | 0xc0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(undefined4 param_1)

{
  int unaff_s0;
  uint unaff_s1;
  int iVar1;
  int unaff_s2;
  undefined4 *unaff_s3;
  uint unaff_s4;
  ushort unaff_s5;
  int *unaff_s6;
  int unaff_s7;
  int iVar2;
  uint uVar3;
  
  while( true ) {
    _L0(param_1);
    if ((-1 < *(int *)(unaff_s0 + 0xa4) << 0x13) && (unaff_s1 < 0x1f)) {
      unaff_s1 += 1;
    }
    iVar2 = unaff_s7 * 2 + *unaff_s6;
    *(ushort *)(iVar2 + 0xc) =
         *(ushort *)(iVar2 + 0xc) & unaff_s5 | (ushort)((unaff_s1 & 0x1f) << 8);
    FUN_00012cec(0,unaff_s2,unaff_s1);
    iVar2 = unaff_s2 + 1;
    unaff_s3 = unaff_s3 + 1;
    if (iVar2 == 0x15) break;
    unaff_s7 = unaff_s2 + 9;
    *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) | 0x10;
    *(uint *)(unaff_s0 + 0xa4) = *(uint *)(unaff_s0 + 0xa4) & 0xfffff8ff | 0x400;
    uVar3 = 3;
    unaff_s1 = 0x10;
    *(uint *)(unaff_s0 + 0xa0) = *(uint *)(unaff_s0 + 0xa0) & unaff_s4 | 0x100000;
    *(uint *)(unaff_s0 + 0xa0) =
         *(ushort *)(*unaff_s6 + unaff_s7 * 2 + 0xc) & 0xff |
         *(uint *)(unaff_s0 + 0xa0) & 0xffffff00;
    *(undefined4 *)(unaff_s0 + 0xc4) = *unaff_s3;
    _L0(1);
    while( true ) {
      param_1 = 1;
      *(uint *)(unaff_s0 + 0xa0) = *(uint *)(unaff_s0 + 0xa0) & unaff_s4 | unaff_s1 << 0x10;
      unaff_s2 = iVar2;
      if (uVar3 == 0xffffffff) break;
      _L0(1);
      iVar1 = 1 << (uVar3 & 0x1f);
      if (*(int *)(unaff_s0 + 0xa4) << 0x13 < 0) {
        iVar1 = -iVar1;
      }
      unaff_s1 += iVar1;
      uVar3 -= 1;
    }
  }
  _L0();
  _DAT_40001014 = _DAT_40001014 | 0xc0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00012cec(undefined4 param_1,int param_2,uint param_3)

{
  int unaff_s0;
  int unaff_s2;
  undefined4 *unaff_s3;
  uint unaff_s4;
  ushort unaff_s5;
  int *unaff_s6;
  int iVar1;
  uint uVar2;
  
  while( true ) {
    FUN_00012cec(param_1,param_2,param_3);
    param_2 = unaff_s2 + 1;
    unaff_s3 = unaff_s3 + 1;
    if (param_2 == 0x15) break;
    *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) | 0x10;
    *(uint *)(unaff_s0 + 0xa4) = *(uint *)(unaff_s0 + 0xa4) & 0xfffff8ff | 0x400;
    param_3 = 0x10;
    *(uint *)(unaff_s0 + 0xa0) = *(uint *)(unaff_s0 + 0xa0) & unaff_s4 | 0x100000;
    *(uint *)(unaff_s0 + 0xa0) =
         *(ushort *)(*unaff_s6 + (unaff_s2 + 9) * 2 + 0xc) & 0xff |
         *(uint *)(unaff_s0 + 0xa0) & 0xffffff00;
    *(undefined4 *)(unaff_s0 + 0xc4) = *unaff_s3;
    _L0(1);
    for (uVar2 = 3;
        *(uint *)(unaff_s0 + 0xa0) = *(uint *)(unaff_s0 + 0xa0) & unaff_s4 | param_3 << 0x10,
        uVar2 != 0xffffffff; uVar2 -= 1) {
      _L0(1);
      iVar1 = 1 << (uVar2 & 0x1f);
      if (*(int *)(unaff_s0 + 0xa4) << 0x13 < 0) {
        iVar1 = -iVar1;
      }
      param_3 += iVar1;
    }
    _L0(1);
    if ((-1 < *(int *)(unaff_s0 + 0xa4) << 0x13) && (param_3 < 0x1f)) {
      param_3 += 1;
    }
    iVar1 = (unaff_s2 + 9) * 2 + *unaff_s6;
    *(ushort *)(iVar1 + 0xc) = *(ushort *)(iVar1 + 0xc) & unaff_s5 | (ushort)((param_3 & 0x1f) << 8)
    ;
    param_1 = 0;
    unaff_s2 = param_2;
  }
  _L0();
  _DAT_40001014 = _DAT_40001014 | 0xc0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  _L0();
  _DAT_40001014 = _DAT_40001014 | 0xc0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(undefined4 param_1)

{
  int unaff_s0;
  uint unaff_s1;
  int iVar1;
  int unaff_s2;
  undefined4 *unaff_s3;
  uint unaff_s4;
  ushort unaff_s5;
  int *unaff_s6;
  int unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  
  do {
    _L0(param_1);
    iVar1 = 1 << (unaff_s8 & 0x1f);
    if (*(int *)(unaff_s0 + 0xa4) << 0x13 < 0) {
      iVar1 = -iVar1;
    }
    unaff_s1 += iVar1;
    unaff_s8 -= 1;
    while( true ) {
      param_1 = 1;
      *(uint *)(unaff_s0 + 0xa0) = *(uint *)(unaff_s0 + 0xa0) & unaff_s4 | unaff_s1 << 0x10;
      if (unaff_s8 != unaff_s9) break;
      _L0(1);
      if ((-1 < *(int *)(unaff_s0 + 0xa4) << 0x13) && (unaff_s1 < 0x1f)) {
        unaff_s1 += 1;
      }
      iVar1 = unaff_s7 * 2 + *unaff_s6;
      *(ushort *)(iVar1 + 0xc) =
           *(ushort *)(iVar1 + 0xc) & unaff_s5 | (ushort)((unaff_s1 & 0x1f) << 8);
      FUN_00012cec(0,unaff_s2,unaff_s1);
      unaff_s3 = unaff_s3 + 1;
      if (unaff_s2 + 1 == 0x15) {
        _L0();
        _DAT_40001014 = _DAT_40001014 | 0xc0;
        return;
      }
      unaff_s7 = unaff_s2 + 9;
      *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) | 0x10;
      *(uint *)(unaff_s0 + 0xa4) = *(uint *)(unaff_s0 + 0xa4) & 0xfffff8ff | 0x400;
      unaff_s8 = 3;
      unaff_s1 = 0x10;
      *(uint *)(unaff_s0 + 0xa0) = *(uint *)(unaff_s0 + 0xa0) & unaff_s4 | 0x100000;
      unaff_s9 = 0xffffffff;
      *(uint *)(unaff_s0 + 0xa0) =
           *(ushort *)(*unaff_s6 + unaff_s7 * 2 + 0xc) & 0xff |
           *(uint *)(unaff_s0 + 0xa0) & 0xffffff00;
      *(undefined4 *)(unaff_s0 + 0xc4) = *unaff_s3;
      _L0(1);
      unaff_s2 = unaff_s2 + 1;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1643

void rf_pri_fcal(void)

{
  uint uVar1;
  uint uVar2;
  ushort extraout_a0;
  uint extraout_a0_00;
  uint extraout_a0_01;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = uRam00000000 & 0xffff;
  uVar2 = uRam00000000 >> 0x10;
  uVar6 = (uint)_DAT_00000004;
  _DAT_40001014 = _DAT_40001014 & 0xffffffcf | 0x10;
  _L0();
  FUN_00012d9a();
  _DAT_4000101c |= 8;
  _DAT_400010a0 = _DAT_400010a0 & 0xffffff00 | 0x80;
  _DAT_400010a8 = uRam00000000 & 0xffff | _DAT_400010a8 & 0xffff0000;
  _DAT_400010c4 = 0x1000000;
  _DAT_400010c0 = _DAT_400010c0 & 0xfffeffff | 0x1000;
  _DAT_400010b8 = _DAT_400010b8 & 0xffffcfff | 0x10000;
  _L0();
  _DAT_400010c0 |= 0x10000;
  _DAT_400010b8 &= 0xfffeffff;
  _L0();
  _DAT_400010a4 = _DAT_400010a4 & 0xfffffffc | 2;
  _L0();
  do {
    uVar1 = 0x80;
    for (uVar5 = 6; uVar5 != 0xffffffff; uVar5 -= 1) {
      FUN_00012e66(uVar1);
      if (extraout_a0_00 < uVar7) {
        iVar8 = -(1 << (uVar5 & 0x1f));
      }
      else {
        if (extraout_a0_00 <= uVar2) break;
        iVar8 = 1 << (uVar5 & 0x1f);
      }
      uVar1 = uVar1 + iVar8 & 0xffff;
    }
    if (0xe < uVar1) break;
    _L0(uVar1);
    _DAT_400010c0 &= 0xfffeffff;
    _DAT_400010b8 |= 0x10000;
    _L0(0x32);
    _DAT_400010c0 |= 0x10000;
    _DAT_400010b8 &= 0xfffeffff;
    _L0(0x32);
  } while( true );
  uVar2 = uVar1 + 1 & 0xffff;
  FUN_00012e84();
  uRam00000000 = uRam00000000 & 0xffff0000 | (uint)extraout_a0;
  iVar8 = 0;
  do {
    uVar2 = uVar2 - 1 & 0xffff;
    _LVL878(uVar2);
    *(short *)(iVar8 + 2) = (short)extraout_a0_01;
    if (uVar6 < extraout_a0_01) break;
    iVar8 += 2;
  } while (uVar2 != (uVar1 - 0x26 & 0xffff));
  puVar3 = (ushort *)0x0;
  uVar2 = 0;
  do {
    while (uVar6 = uVar2 & 0xffff, *(ushort *)(uVar2 * 2) < *puVar3) {
      uVar2 = (int)((uVar6 + 1) * 0x10000) >> 0x10;
    }
    *puVar3 = ((short)uVar1 + 2) - (short)uVar6;
    if ((int)uVar2 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = (int)((uVar6 - 1) * 0x10000) >> 0x10;
    }
    puVar3 = puVar3 + 1;
  } while (puVar3 != (ushort *)0x2a);
  puVar3 = (ushort *)0x0;
  _LVL910();
  iVar8 = 0;
  do {
    iVar4 = uRam00000000 + (iVar8 + 8) * 2;
    iVar8 += 1;
    *(ushort *)(iVar4 + 0xc) = *(ushort *)(iVar4 + 0xc) & 0xff00 | *puVar3 & 0xff;
    FUN_00012fd2(iVar8);
    puVar3 = puVar3 + 1;
  } while (iVar8 != 0x15);
  _DAT_40001014 = _DAT_40001014 | 0x30;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  uint uVar1;
  uint unaff_s1;
  uint uVar2;
  ushort extraout_a0;
  uint extraout_a0_00;
  uint extraout_a0_01;
  ushort *puVar3;
  int iVar4;
  uint unaff_s2;
  uint uVar5;
  uint unaff_s3;
  uint unaff_s4;
  int iVar6;
  uint unaff_s5;
  
  _L0();
  FUN_00012d9a();
  *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) | 8;
  *(uint *)(unaff_s0 + 0xa0) = *(uint *)(unaff_s0 + 0xa0) & 0xffffff00 | 0x80;
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & 0xffffcfff;
  uVar2 = unaff_s1 - 1;
  *(uint *)(unaff_s0 + 0xa8) = uRam00000000 & 0xffff | *(uint *)(unaff_s0 + 0xa8) & unaff_s1;
  *(undefined4 *)(unaff_s0 + 0xc4) = 0x1000000;
  *(uint *)(unaff_s0 + 0xc0) = *(uint *)(unaff_s0 + 0xc0) | 0x1000;
  *(uint *)(unaff_s0 + 0xc0) = *(uint *)(unaff_s0 + 0xc0) & uVar2;
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) | unaff_s2;
  _L0();
  *(uint *)(unaff_s0 + 0xc0) = *(uint *)(unaff_s0 + 0xc0) | unaff_s2;
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & uVar2;
  _L0();
  *(uint *)(unaff_s0 + 0xa4) = *(uint *)(unaff_s0 + 0xa4) & 0xfffffffc | 2;
  _L0();
  do {
    uVar1 = 0x80;
    for (uVar5 = 6; uVar5 != 0xffffffff; uVar5 -= 1) {
      FUN_00012e66(uVar1);
      if (extraout_a0_00 < unaff_s4) {
        iVar6 = -(1 << (uVar5 & 0x1f));
      }
      else {
        if (extraout_a0_00 <= unaff_s5) break;
        iVar6 = 1 << (uVar5 & 0x1f);
      }
      uVar1 = uVar1 + iVar6 & 0xffff;
    }
    if (0xe < uVar1) break;
    _L0(uVar1);
    _DAT_400010c0 &= uVar2;
    _DAT_400010b8 |= 0x10000;
    _L0(0x32);
    _DAT_400010c0 |= 0x10000;
    _DAT_400010b8 &= uVar2;
    _L0(0x32);
  } while( true );
  uVar2 = uVar1 + 1 & 0xffff;
  FUN_00012e84();
  uRam00000000 = uRam00000000 & 0xffff0000 | (uint)extraout_a0;
  iVar6 = 0;
  do {
    uVar2 = uVar2 - 1 & 0xffff;
    _LVL878(uVar2);
    *(short *)(iVar6 + 2) = (short)extraout_a0_01;
    if (unaff_s3 < extraout_a0_01) break;
    iVar6 += 2;
  } while (uVar2 != (uVar1 - 0x26 & 0xffff));
  puVar3 = (ushort *)0x0;
  uVar2 = 0;
  do {
    while (uVar5 = uVar2 & 0xffff, *(ushort *)(uVar2 * 2) < *puVar3) {
      uVar2 = (int)((uVar5 + 1) * 0x10000) >> 0x10;
    }
    *puVar3 = ((short)uVar1 + 2) - (short)uVar5;
    if ((int)uVar2 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = (int)((uVar5 - 1) * 0x10000) >> 0x10;
    }
    puVar3 = puVar3 + 1;
  } while (puVar3 != (ushort *)0x2a);
  puVar3 = (ushort *)0x0;
  _LVL910();
  iVar6 = 0;
  do {
    iVar4 = uRam00000000 + (iVar6 + 8) * 2;
    iVar6 += 1;
    *(ushort *)(iVar4 + 0xc) = *(ushort *)(iVar4 + 0xc) & 0xff00 | *puVar3 & 0xff;
    FUN_00012fd2(iVar6);
    puVar3 = puVar3 + 1;
  } while (iVar6 != 0x15);
  _DAT_40001014 = _DAT_40001014 | 0x30;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00012d9a(void)

{
  int unaff_s0;
  uint uVar1;
  uint unaff_s1;
  uint uVar2;
  ushort extraout_a0;
  uint extraout_a0_00;
  uint extraout_a0_01;
  ushort *puVar3;
  int iVar4;
  uint unaff_s2;
  uint uVar5;
  uint unaff_s3;
  uint unaff_s4;
  int iVar6;
  uint unaff_s5;
  
  FUN_00012d9a();
  *(uint *)(unaff_s0 + 0x1c) = *(uint *)(unaff_s0 + 0x1c) | 8;
  *(uint *)(unaff_s0 + 0xa0) = *(uint *)(unaff_s0 + 0xa0) & 0xffffff00 | 0x80;
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & 0xffffcfff;
  uVar2 = unaff_s1 - 1;
  *(uint *)(unaff_s0 + 0xa8) = uRam00000000 & 0xffff | *(uint *)(unaff_s0 + 0xa8) & unaff_s1;
  *(undefined4 *)(unaff_s0 + 0xc4) = 0x1000000;
  *(uint *)(unaff_s0 + 0xc0) = *(uint *)(unaff_s0 + 0xc0) | 0x1000;
  *(uint *)(unaff_s0 + 0xc0) = *(uint *)(unaff_s0 + 0xc0) & uVar2;
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) | unaff_s2;
  _L0();
  *(uint *)(unaff_s0 + 0xc0) = *(uint *)(unaff_s0 + 0xc0) | unaff_s2;
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & uVar2;
  _L0();
  *(uint *)(unaff_s0 + 0xa4) = *(uint *)(unaff_s0 + 0xa4) & 0xfffffffc | 2;
  _L0();
  do {
    uVar1 = 0x80;
    for (uVar5 = 6; uVar5 != 0xffffffff; uVar5 -= 1) {
      FUN_00012e66(uVar1);
      if (extraout_a0_00 < unaff_s4) {
        iVar6 = -(1 << (uVar5 & 0x1f));
      }
      else {
        if (extraout_a0_00 <= unaff_s5) break;
        iVar6 = 1 << (uVar5 & 0x1f);
      }
      uVar1 = uVar1 + iVar6 & 0xffff;
    }
    if (0xe < uVar1) break;
    _L0(uVar1);
    _DAT_400010c0 &= uVar2;
    _DAT_400010b8 |= 0x10000;
    _L0(0x32);
    _DAT_400010c0 |= 0x10000;
    _DAT_400010b8 &= uVar2;
    _L0(0x32);
  } while( true );
  uVar2 = uVar1 + 1 & 0xffff;
  FUN_00012e84();
  uRam00000000 = uRam00000000 & 0xffff0000 | (uint)extraout_a0;
  iVar6 = 0;
  do {
    uVar2 = uVar2 - 1 & 0xffff;
    _LVL878(uVar2);
    *(short *)(iVar6 + 2) = (short)extraout_a0_01;
    if (unaff_s3 < extraout_a0_01) break;
    iVar6 += 2;
  } while (uVar2 != (uVar1 - 0x26 & 0xffff));
  puVar3 = (ushort *)0x0;
  uVar2 = 0;
  do {
    while (uVar5 = uVar2 & 0xffff, *(ushort *)(uVar2 * 2) < *puVar3) {
      uVar2 = (int)((uVar5 + 1) * 0x10000) >> 0x10;
    }
    *puVar3 = ((short)uVar1 + 2) - (short)uVar5;
    if ((int)uVar2 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = (int)((uVar5 - 1) * 0x10000) >> 0x10;
    }
    puVar3 = puVar3 + 1;
  } while (puVar3 != (ushort *)0x2a);
  puVar3 = (ushort *)0x0;
  _LVL910();
  iVar6 = 0;
  do {
    iVar4 = uRam00000000 + (iVar6 + 8) * 2;
    iVar6 += 1;
    *(ushort *)(iVar4 + 0xc) = *(ushort *)(iVar4 + 0xc) & 0xff00 | *puVar3 & 0xff;
    FUN_00012fd2(iVar6);
    puVar3 = puVar3 + 1;
  } while (iVar6 != 0x15);
  _DAT_40001014 = _DAT_40001014 | 0x30;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  uint uVar1;
  uint unaff_s1;
  ushort extraout_a0;
  uint extraout_a0_00;
  uint extraout_a0_01;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  uint unaff_s2;
  uint uVar5;
  uint unaff_s3;
  uint unaff_s4;
  int iVar6;
  uint unaff_s5;
  int unaff_s6;
  uint unaff_s8;
  uint unaff_s9;
  
  _L0();
  *(uint *)(unaff_s0 + 0xc0) = *(uint *)(unaff_s0 + 0xc0) | unaff_s2;
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & unaff_s1;
  _L0();
  *(uint *)(unaff_s0 + 0xa4) = *(uint *)(unaff_s0 + 0xa4) & 0xfffffffc | 2;
  _L0();
  do {
    uVar1 = 0x80;
    for (uVar5 = 6; uVar5 != unaff_s9; uVar5 -= 1) {
      FUN_00012e66(uVar1);
      if (extraout_a0_00 < unaff_s4) {
        iVar6 = -(unaff_s6 << (uVar5 & 0x1f));
      }
      else {
        if (extraout_a0_00 <= unaff_s5) break;
        iVar6 = unaff_s6 << (uVar5 & 0x1f);
      }
      uVar1 = uVar1 + iVar6 & 0xffff;
    }
    if (unaff_s8 < uVar1) break;
    _L0(uVar1);
    _DAT_400010c0 &= unaff_s1;
    _DAT_400010b8 |= 0x10000;
    _L0(0x32);
    _DAT_400010c0 |= 0x10000;
    _DAT_400010b8 &= unaff_s1;
    _L0(0x32);
  } while( true );
  uVar5 = uVar1 + 1 & 0xffff;
  FUN_00012e84();
  uRam00000000 = uRam00000000 & 0xffff0000 | (uint)extraout_a0;
  iVar6 = 0;
  do {
    uVar5 = uVar5 - 1 & 0xffff;
    _LVL878(uVar5);
    *(short *)(iVar6 + 2) = (short)extraout_a0_01;
    if (unaff_s3 < extraout_a0_01) break;
    iVar6 += 2;
  } while (uVar5 != (uVar1 - 0x26 & 0xffff));
  puVar2 = (ushort *)0x0;
  uVar5 = 0;
  do {
    while (uVar3 = uVar5 & 0xffff, *(ushort *)(uVar5 * 2) < *puVar2) {
      uVar5 = (int)((uVar3 + 1) * 0x10000) >> 0x10;
    }
    *puVar2 = ((short)uVar1 + 2) - (short)uVar3;
    if ((int)uVar5 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = (int)((uVar3 - 1) * 0x10000) >> 0x10;
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 != (ushort *)0x2a);
  puVar2 = (ushort *)0x0;
  _LVL910();
  iVar6 = 0;
  do {
    iVar4 = uRam00000000 + (iVar6 + 8) * 2;
    iVar6 += 1;
    *(ushort *)(iVar4 + 0xc) = *(ushort *)(iVar4 + 0xc) & 0xff00 | *puVar2 & 0xff;
    FUN_00012fd2(iVar6);
    puVar2 = puVar2 + 1;
  } while (iVar6 != 0x15);
  _DAT_40001014 = _DAT_40001014 | 0x30;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  uint uVar1;
  uint unaff_s1;
  ushort extraout_a0;
  uint extraout_a0_00;
  uint extraout_a0_01;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint unaff_s3;
  uint unaff_s4;
  int iVar6;
  uint unaff_s5;
  int unaff_s6;
  uint unaff_s8;
  uint unaff_s9;
  
  _L0();
  *(uint *)(unaff_s0 + 0xa4) = *(uint *)(unaff_s0 + 0xa4) & 0xfffffffc | 2;
  _L0();
  do {
    uVar1 = 0x80;
    for (uVar5 = 6; uVar5 != unaff_s9; uVar5 -= 1) {
      FUN_00012e66(uVar1);
      if (extraout_a0_00 < unaff_s4) {
        iVar6 = -(unaff_s6 << (uVar5 & 0x1f));
      }
      else {
        if (extraout_a0_00 <= unaff_s5) break;
        iVar6 = unaff_s6 << (uVar5 & 0x1f);
      }
      uVar1 = uVar1 + iVar6 & 0xffff;
    }
    if (unaff_s8 < uVar1) break;
    _L0(uVar1);
    _DAT_400010c0 &= unaff_s1;
    _DAT_400010b8 |= 0x10000;
    _L0(0x32);
    _DAT_400010c0 |= 0x10000;
    _DAT_400010b8 &= unaff_s1;
    _L0(0x32);
  } while( true );
  uVar5 = uVar1 + 1 & 0xffff;
  FUN_00012e84();
  uRam00000000 = uRam00000000 & 0xffff0000 | (uint)extraout_a0;
  iVar6 = 0;
  do {
    uVar5 = uVar5 - 1 & 0xffff;
    _LVL878(uVar5);
    *(short *)(iVar6 + 2) = (short)extraout_a0_01;
    if (unaff_s3 < extraout_a0_01) break;
    iVar6 += 2;
  } while (uVar5 != (uVar1 - 0x26 & 0xffff));
  puVar2 = (ushort *)0x0;
  uVar5 = 0;
  do {
    while (uVar3 = uVar5 & 0xffff, *(ushort *)(uVar5 * 2) < *puVar2) {
      uVar5 = (int)((uVar3 + 1) * 0x10000) >> 0x10;
    }
    *puVar2 = ((short)uVar1 + 2) - (short)uVar3;
    if ((int)uVar5 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = (int)((uVar3 - 1) * 0x10000) >> 0x10;
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 != (ushort *)0x2a);
  puVar2 = (ushort *)0x0;
  _LVL910();
  iVar6 = 0;
  do {
    iVar4 = uRam00000000 + (iVar6 + 8) * 2;
    iVar6 += 1;
    *(ushort *)(iVar4 + 0xc) = *(ushort *)(iVar4 + 0xc) & 0xff00 | *puVar2 & 0xff;
    FUN_00012fd2(iVar6);
    puVar2 = puVar2 + 1;
  } while (iVar6 != 0x15);
  _DAT_40001014 = _DAT_40001014 | 0x30;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  uint uVar1;
  uint unaff_s1;
  ushort extraout_a0;
  uint extraout_a0_00;
  uint extraout_a0_01;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint unaff_s3;
  uint unaff_s4;
  int iVar6;
  uint unaff_s5;
  int unaff_s6;
  uint unaff_s8;
  uint unaff_s9;
  
  _L0();
  do {
    uVar1 = 0x80;
    for (uVar5 = 6; uVar5 != unaff_s9; uVar5 -= 1) {
      FUN_00012e66(uVar1);
      if (extraout_a0_00 < unaff_s4) {
        iVar6 = -(unaff_s6 << (uVar5 & 0x1f));
      }
      else {
        if (extraout_a0_00 <= unaff_s5) break;
        iVar6 = unaff_s6 << (uVar5 & 0x1f);
      }
      uVar1 = uVar1 + iVar6 & 0xffff;
    }
    if (unaff_s8 < uVar1) break;
    _L0(uVar1);
    _DAT_400010c0 &= unaff_s1;
    _DAT_400010b8 |= 0x10000;
    _L0(0x32);
    _DAT_400010c0 |= 0x10000;
    _DAT_400010b8 &= unaff_s1;
    _L0(0x32);
  } while( true );
  uVar5 = uVar1 + 1 & 0xffff;
  FUN_00012e84();
  uRam00000000 = uRam00000000 & 0xffff0000 | (uint)extraout_a0;
  iVar6 = 0;
  do {
    uVar5 = uVar5 - 1 & 0xffff;
    _LVL878(uVar5);
    *(short *)(iVar6 + 2) = (short)extraout_a0_01;
    if (unaff_s3 < extraout_a0_01) break;
    iVar6 += 2;
  } while (uVar5 != (uVar1 - 0x26 & 0xffff));
  puVar2 = (ushort *)0x0;
  uVar5 = 0;
  do {
    while (uVar3 = uVar5 & 0xffff, *(ushort *)(uVar5 * 2) < *puVar2) {
      uVar5 = (int)((uVar3 + 1) * 0x10000) >> 0x10;
    }
    *puVar2 = ((short)uVar1 + 2) - (short)uVar3;
    if ((int)uVar5 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = (int)((uVar3 - 1) * 0x10000) >> 0x10;
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 != (ushort *)0x2a);
  puVar2 = (ushort *)0x0;
  _LVL910();
  iVar6 = 0;
  do {
    iVar4 = uRam00000000 + (iVar6 + 8) * 2;
    iVar6 += 1;
    *(ushort *)(iVar4 + 0xc) = *(ushort *)(iVar4 + 0xc) & 0xff00 | *puVar2 & 0xff;
    FUN_00012fd2(iVar6);
    puVar2 = puVar2 + 1;
  } while (iVar6 != 0x15);
  _DAT_40001014 = _DAT_40001014 | 0x30;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00012e66(uint param_1)

{
  uint unaff_s0;
  uint unaff_s1;
  uint uVar1;
  ushort extraout_a0;
  uint extraout_a0_00;
  uint extraout_a0_01;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  int iVar5;
  uint unaff_s5;
  int unaff_s6;
  uint unaff_s8;
  uint unaff_s9;
  
  do {
    FUN_00012e66(param_1);
    if (extraout_a0_00 < unaff_s4) {
      iVar5 = -(unaff_s6 << (unaff_s2 & 0x1f));
_L0:
      unaff_s0 = unaff_s0 + iVar5 & 0xffff;
      unaff_s2 -= 1;
      goto _L0;
    }
    if (unaff_s5 < extraout_a0_00) {
      iVar5 = unaff_s6 << (unaff_s2 & 0x1f);
      goto _L0;
    }
    do {
      if (unaff_s8 < unaff_s0) {
        uVar1 = unaff_s0 + 1 & 0xffff;
        FUN_00012e84();
        uRam00000000 = uRam00000000 & 0xffff0000 | (uint)extraout_a0;
        iVar5 = 0;
        goto _L0;
      }
      _L0(unaff_s0);
      _DAT_400010c0 &= unaff_s1;
      _DAT_400010b8 |= 0x10000;
      _L0(0x32);
      _DAT_400010c0 |= 0x10000;
      _DAT_400010b8 &= unaff_s1;
      _L0(0x32);
      unaff_s2 = 6;
      unaff_s0 = 0x80;
_L0:
      param_1 = unaff_s0;
    } while (unaff_s2 == unaff_s9);
  } while( true );
  while (iVar5 += 2, uVar1 != (unaff_s0 - 0x26 & 0xffff)) {
_L0:
    uVar1 = uVar1 - 1 & 0xffff;
    _LVL878(uVar1);
    *(short *)(iVar5 + 2) = (short)extraout_a0_01;
    if (unaff_s3 < extraout_a0_01) break;
  }
  puVar2 = (ushort *)0x0;
  uVar1 = 0;
  do {
    while (uVar3 = uVar1 & 0xffff, *(ushort *)(uVar1 * 2) < *puVar2) {
      uVar1 = (int)((uVar3 + 1) * 0x10000) >> 0x10;
    }
    *puVar2 = ((short)unaff_s0 + 2) - (short)uVar3;
    if ((int)uVar1 < 1) {
      uVar1 = 0;
    }
    else {
      uVar1 = (int)((uVar3 - 1) * 0x10000) >> 0x10;
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 != (ushort *)0x2a);
  puVar2 = (ushort *)0x0;
  _LVL910();
  iVar5 = 0;
  do {
    iVar4 = uRam00000000 + (iVar5 + 8) * 2;
    iVar5 += 1;
    *(ushort *)(iVar4 + 0xc) = *(ushort *)(iVar4 + 0xc) & 0xff00 | *puVar2 & 0xff;
    FUN_00012fd2(iVar5);
    puVar2 = puVar2 + 1;
  } while (iVar5 != 0x15);
  _DAT_40001014 = _DAT_40001014 | 0x30;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00012e84(void)

{
  short unaff_s0;
  uint unaff_s1;
  ushort extraout_a0;
  uint extraout_a0_00;
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint unaff_s3;
  int iVar5;
  
  FUN_00012e84();
  uRam00000000 = uRam00000000 & 0xffff0000 | (uint)extraout_a0;
  iVar5 = 0;
  do {
    unaff_s1 = unaff_s1 - 1 & 0xffff;
    _LVL878(unaff_s1);
    *(short *)(iVar5 + 2) = (short)extraout_a0_00;
    if (unaff_s3 < extraout_a0_00) break;
    iVar5 += 2;
  } while (unaff_s1 != (ushort)(unaff_s0 - 0x26));
  puVar1 = (ushort *)0x0;
  uVar4 = 0;
  do {
    while (uVar2 = uVar4 & 0xffff, *(ushort *)(uVar4 * 2) < *puVar1) {
      uVar4 = (int)((uVar2 + 1) * 0x10000) >> 0x10;
    }
    *puVar1 = (unaff_s0 + 2) - (short)uVar2;
    if ((int)uVar4 < 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = (int)((uVar2 - 1) * 0x10000) >> 0x10;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 != (ushort *)0x2a);
  puVar1 = (ushort *)0x0;
  _LVL910();
  iVar5 = 0;
  do {
    iVar3 = uRam00000000 + (iVar5 + 8) * 2;
    iVar5 += 1;
    *(ushort *)(iVar3 + 0xc) = *(ushort *)(iVar3 + 0xc) & 0xff00 | *puVar1 & 0xff;
    FUN_00012fd2(iVar5);
    puVar1 = puVar1 + 1;
  } while (iVar5 != 0x15);
  _DAT_40001014 = _DAT_40001014 | 0x30;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _LVL878(uint param_1)

{
  short unaff_s0;
  uint unaff_s1;
  int iVar1;
  uint extraout_a0;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  
  while( true ) {
    _LVL878(param_1);
    *(short *)(unaff_s4 + 2) = (short)extraout_a0;
    if ((unaff_s3 < extraout_a0) || (unaff_s4 += 2, unaff_s1 == unaff_s2)) break;
    unaff_s1 = unaff_s1 - 1 & 0xffff;
    param_1 = unaff_s1;
  }
  puVar2 = (ushort *)0x0;
  uVar5 = 0;
  do {
    while (uVar3 = uVar5 & 0xffff, *(ushort *)(uVar5 * 2 + unaff_s5) < *puVar2) {
      uVar5 = (int)((uVar3 + 1) * 0x10000) >> 0x10;
    }
    *puVar2 = (unaff_s0 + 2) - (short)uVar3;
    if ((int)uVar5 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = (int)((uVar3 - 1) * 0x10000) >> 0x10;
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 != (ushort *)0x2a);
  puVar2 = (ushort *)0x0;
  _LVL910();
  iVar1 = 0;
  do {
    iVar4 = iRam00000000 + (iVar1 + 8) * 2;
    iVar1 += 1;
    *(ushort *)(iVar4 + 0xc) = *(ushort *)(iVar4 + 0xc) & 0xff00 | *puVar2 & 0xff;
    FUN_00012fd2(iVar1);
    puVar2 = puVar2 + 1;
  } while (iVar1 != 0x15);
  _DAT_40001014 = _DAT_40001014 | 0x30;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(uint param_1)

{
  int unaff_s0;
  uint unaff_s1;
  ushort extraout_a0;
  uint extraout_a0_00;
  uint extraout_a0_01;
  ushort *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint unaff_s3;
  int iVar5;
  uint unaff_s4;
  uint unaff_s5;
  int unaff_s6;
  uint unaff_s8;
  uint unaff_s9;
  
  do {
    _L0(param_1);
    *(uint *)(unaff_s0 + 0xc0) = *(uint *)(unaff_s0 + 0xc0) & unaff_s1;
    *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) | 0x10000;
    _L0(0x32);
    *(uint *)(unaff_s0 + 0xc0) = *(uint *)(unaff_s0 + 0xc0) | 0x10000;
    *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & unaff_s1;
    _L0(0x32);
    param_1 = 0x80;
    for (uVar4 = 6; uVar4 != unaff_s9; uVar4 -= 1) {
      FUN_00012e66(param_1);
      if (extraout_a0_00 < unaff_s4) {
        iVar5 = -(unaff_s6 << (uVar4 & 0x1f));
      }
      else {
        if (extraout_a0_00 <= unaff_s5) break;
        iVar5 = unaff_s6 << (uVar4 & 0x1f);
      }
      param_1 = param_1 + iVar5 & 0xffff;
    }
    if (unaff_s8 < param_1) break;
    unaff_s0 = 0x40001000;
  } while( true );
  uVar4 = param_1 + 1 & 0xffff;
  FUN_00012e84();
  uRam00000000 = uRam00000000 & 0xffff0000 | (uint)extraout_a0;
  iVar5 = 0;
  do {
    uVar4 = uVar4 - 1 & 0xffff;
    _LVL878(uVar4);
    *(short *)(iVar5 + 2) = (short)extraout_a0_01;
    if (unaff_s3 < extraout_a0_01) break;
    iVar5 += 2;
  } while (uVar4 != (param_1 - 0x26 & 0xffff));
  puVar1 = (ushort *)0x0;
  uVar4 = 0;
  do {
    while (uVar2 = uVar4 & 0xffff, *(ushort *)(uVar4 * 2) < *puVar1) {
      uVar4 = (int)((uVar2 + 1) * 0x10000) >> 0x10;
    }
    *puVar1 = ((short)param_1 + 2) - (short)uVar2;
    if ((int)uVar4 < 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = (int)((uVar2 - 1) * 0x10000) >> 0x10;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 != (ushort *)0x2a);
  puVar1 = (ushort *)0x0;
  _LVL910();
  iVar5 = 0;
  do {
    iVar3 = uRam00000000 + (iVar5 + 8) * 2;
    iVar5 += 1;
    *(ushort *)(iVar3 + 0xc) = *(ushort *)(iVar3 + 0xc) & 0xff00 | *puVar1 & 0xff;
    FUN_00012fd2(iVar5);
    puVar1 = puVar1 + 1;
  } while (iVar5 != 0x15);
  _DAT_40001014 = _DAT_40001014 | 0x30;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(undefined4 param_1)

{
  uint uVar1;
  int unaff_s0;
  uint unaff_s1;
  ushort extraout_a0;
  uint extraout_a0_00;
  uint extraout_a0_01;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint unaff_s2;
  uint unaff_s3;
  int iVar6;
  uint unaff_s4;
  uint unaff_s5;
  int unaff_s6;
  uint unaff_s8;
  uint unaff_s9;
  
  do {
    _L0(param_1);
    *(uint *)(unaff_s0 + 0xc0) = *(uint *)(unaff_s0 + 0xc0) | unaff_s2;
    *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & unaff_s1;
    _L0(0x32);
    uVar1 = 0x80;
    for (uVar5 = 6; uVar5 != unaff_s9; uVar5 -= 1) {
      FUN_00012e66(uVar1);
      if (extraout_a0_00 < unaff_s4) {
        iVar6 = -(unaff_s6 << (uVar5 & 0x1f));
      }
      else {
        if (extraout_a0_00 <= unaff_s5) break;
        iVar6 = unaff_s6 << (uVar5 & 0x1f);
      }
      uVar1 = uVar1 + iVar6 & 0xffff;
    }
    if (unaff_s8 < uVar1) break;
    unaff_s0 = 0x40001000;
    _L0(uVar1);
    unaff_s2 = 0x10000;
    param_1 = 0x32;
    _DAT_400010c0 &= unaff_s1;
    _DAT_400010b8 |= 0x10000;
  } while( true );
  uVar5 = uVar1 + 1 & 0xffff;
  FUN_00012e84();
  uRam00000000 = uRam00000000 & 0xffff0000 | (uint)extraout_a0;
  iVar6 = 0;
  do {
    uVar5 = uVar5 - 1 & 0xffff;
    _LVL878(uVar5);
    *(short *)(iVar6 + 2) = (short)extraout_a0_01;
    if (unaff_s3 < extraout_a0_01) break;
    iVar6 += 2;
  } while (uVar5 != (uVar1 - 0x26 & 0xffff));
  puVar2 = (ushort *)0x0;
  uVar5 = 0;
  do {
    while (uVar3 = uVar5 & 0xffff, *(ushort *)(uVar5 * 2) < *puVar2) {
      uVar5 = (int)((uVar3 + 1) * 0x10000) >> 0x10;
    }
    *puVar2 = ((short)uVar1 + 2) - (short)uVar3;
    if ((int)uVar5 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = (int)((uVar3 - 1) * 0x10000) >> 0x10;
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 != (ushort *)0x2a);
  puVar2 = (ushort *)0x0;
  _LVL910();
  iVar6 = 0;
  do {
    iVar4 = uRam00000000 + (iVar6 + 8) * 2;
    iVar6 += 1;
    *(ushort *)(iVar4 + 0xc) = *(ushort *)(iVar4 + 0xc) & 0xff00 | *puVar2 & 0xff;
    FUN_00012fd2(iVar6);
    puVar2 = puVar2 + 1;
  } while (iVar6 != 0x15);
  _DAT_40001014 = _DAT_40001014 | 0x30;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(undefined4 param_1)

{
  uint uVar1;
  uint unaff_s1;
  ushort extraout_a0;
  uint extraout_a0_00;
  uint extraout_a0_01;
  ushort *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint unaff_s3;
  int iVar6;
  uint unaff_s4;
  uint unaff_s5;
  int unaff_s6;
  uint unaff_s8;
  uint unaff_s9;
  
  do {
    _L0(param_1);
    uVar1 = 0x80;
    for (uVar5 = 6; uVar5 != unaff_s9; uVar5 -= 1) {
      FUN_00012e66(uVar1);
      if (extraout_a0_00 < unaff_s4) {
        iVar6 = -(unaff_s6 << (uVar5 & 0x1f));
      }
      else {
        if (extraout_a0_00 <= unaff_s5) break;
        iVar6 = unaff_s6 << (uVar5 & 0x1f);
      }
      uVar1 = uVar1 + iVar6 & 0xffff;
    }
    if (unaff_s8 < uVar1) break;
    _L0(uVar1);
    _DAT_400010c0 &= unaff_s1;
    _DAT_400010b8 |= 0x10000;
    _L0(0x32);
    param_1 = 0x32;
    _DAT_400010c0 |= 0x10000;
    _DAT_400010b8 &= unaff_s1;
  } while( true );
  uVar5 = uVar1 + 1 & 0xffff;
  FUN_00012e84();
  uRam00000000 = uRam00000000 & 0xffff0000 | (uint)extraout_a0;
  iVar6 = 0;
  do {
    uVar5 = uVar5 - 1 & 0xffff;
    _LVL878(uVar5);
    *(short *)(iVar6 + 2) = (short)extraout_a0_01;
    if (unaff_s3 < extraout_a0_01) break;
    iVar6 += 2;
  } while (uVar5 != (uVar1 - 0x26 & 0xffff));
  puVar2 = (ushort *)0x0;
  uVar5 = 0;
  do {
    while (uVar3 = uVar5 & 0xffff, *(ushort *)(uVar5 * 2) < *puVar2) {
      uVar5 = (int)((uVar3 + 1) * 0x10000) >> 0x10;
    }
    *puVar2 = ((short)uVar1 + 2) - (short)uVar3;
    if ((int)uVar5 < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = (int)((uVar3 - 1) * 0x10000) >> 0x10;
    }
    puVar2 = puVar2 + 1;
  } while (puVar2 != (ushort *)0x2a);
  puVar2 = (ushort *)0x0;
  _LVL910();
  iVar6 = 0;
  do {
    iVar4 = uRam00000000 + (iVar6 + 8) * 2;
    iVar6 += 1;
    *(ushort *)(iVar4 + 0xc) = *(ushort *)(iVar4 + 0xc) & 0xff00 | *puVar2 & 0xff;
    FUN_00012fd2(iVar6);
    puVar2 = puVar2 + 1;
  } while (iVar6 != 0x15);
  _DAT_40001014 = _DAT_40001014 | 0x30;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _LVL910(void)

{
  ushort *unaff_s0;
  int iVar1;
  int iVar2;
  
  _LVL910();
  iVar1 = 0;
  do {
    iVar2 = iRam00000000 + (iVar1 + 8) * 2;
    iVar1 += 1;
    *(ushort *)(iVar2 + 0xc) = *(ushort *)(iVar2 + 0xc) & 0xff00 | *unaff_s0 & 0xff;
    FUN_00012fd2(iVar1);
    unaff_s0 = unaff_s0 + 1;
  } while (iVar1 != 0x15);
  _DAT_40001014 = _DAT_40001014 | 0x30;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00012fd2(int param_1)

{
  ushort *unaff_s0;
  int unaff_s1;
  int iVar1;
  int unaff_s2;
  int *unaff_s4;
  
  while( true ) {
    FUN_00012fd2(param_1);
    unaff_s0 = unaff_s0 + 1;
    if (unaff_s1 == unaff_s2) break;
    iVar1 = *unaff_s4 + (unaff_s1 + 8) * 2;
    unaff_s1 += 1;
    *(ushort *)(iVar1 + 0xc) = *(ushort *)(iVar1 + 0xc) & 0xff00 | *unaff_s0 & 0xff;
    param_1 = unaff_s1;
  }
  _DAT_40001014 = _DAT_40001014 | 0x30;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 155d

void rf_pri_full_cal(void)

{
  _DAT_40001220 = _DAT_40001220 & 0xffffff9f | 0x61;
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _DAT_4000100c = _DAT_4000100c | 6;
  _DAT_40001220 = _DAT_40001220 & 0xffffe61c;
  return;
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 6;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xffffff9e;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xffffe67d;
  return;
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  _L0();
  _L0();
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 6;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xffffff9e;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xffffe67d;
  return;
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  _L0();
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 6;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xffffff9e;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xffffe67d;
  return;
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 6;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xffffff9e;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xffffe67d;
  return;
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  _L0();
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 6;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xffffff9e;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xffffe67d;
  return;
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 6;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xffffff9e;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xffffe67d;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 152b

void rf_pri_restore_cal_reg(void)

{
  _DAT_40001168 =
       (*(uint *)(iRam00000000 + 0x50) >> 6 & 0x3f) << 0x18 |
       (*(uint *)(iRam00000000 + 0x48) >> 6 & 0x3f) << 8 |
       *(uint *)(iRam00000000 + 0x48) & 0x3f | _DAT_40001168 & 0xc0c0c0c0 |
       (*(uint *)(iRam00000000 + 0x50) & 0x3f) << 0x10;
  _DAT_4000116c =
       (*(uint *)(iRam00000000 + 0x60) >> 6 & 0x3f) << 0x18 |
       (*(uint *)(iRam00000000 + 0x58) >> 6 & 0x3f) << 8 |
       *(uint *)(iRam00000000 + 0x58) & 0x3f | _DAT_4000116c & 0xc0c0c0c0 |
       (*(uint *)(iRam00000000 + 0x60) & 0x3f) << 0x10;
  _DAT_40001080 =
       (*(uint *)(iRam00000000 + 8) >> 6 & 0x3f) << 0x10 |
       (*(uint *)(iRam00000000 + 8) >> 0xc & 0x3f) << 8 |
       (*(uint *)(iRam00000000 + 8) & 0x3f) << 0x18 | _DAT_40001080 & 0xc0c0c0c0 |
       *(uint *)(iRam00000000 + 8) >> 0x12 & 0x3f;
  _L0();
  _DAT_40001070 =
       (*(uint *)(iRam00000000 + 0x80) >> 6 & 0x3f) << 0x10 |
       (*(uint *)(iRam00000000 + 0x80) & 0x3f) << 0x18 | _DAT_40001070 & 0xc0c0ffff;
  _DAT_40001600 =
       *(uint *)(iRam00000000 + 0x80) & 0x7ff000 | _DAT_40001600 & 0xff800c00 |
       *(uint *)(iRam00000000 + 0x84) & 0x3ff;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int *unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  
  _L0();
  *(uint *)(unaff_s0 + 0x70) =
       (*(uint *)(*unaff_s1 + 0x80) >> 6 & 0x3f) << 0x10 |
       ((*(uint *)(*unaff_s1 + 0x80) & 0x3f) << 0x18 | *(uint *)(unaff_s0 + 0x70) & unaff_s3) &
       unaff_s2;
  *(uint *)(unaff_s0 + 0x600) =
       *(uint *)(*unaff_s1 + 0x80) & 0x7ff000 | *(uint *)(unaff_s0 + 0x600) & 0xff800c00 |
       *(uint *)(*unaff_s1 + 0x84) & 0x3ff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 2b8e

void rf_pri_init(uint8_t reset,uint8_t chipv)

{
  undefined3 in_register_00002029;
  
  _L0();
  piRam00000000 = (int *)(uint)(CONCAT31(in_register_00002029,reset) == 0);
  _DAT_4000f814 = _DAT_4000f814 & 0xfffff0ff | 0x300;
  _DAT_4000f030 = _DAT_4000f030 & 0xf0ffffff | 0x8000000;
  _DAT_40001030 |= 0x1001;
  _DAT_4000f884 |= 4;
  if (piRam00000000 == (int *)0x0) {
    FUN_0001326e();
  }
  _DAT_40001064 = _DAT_40001064 & 0xffff8008 | *piRam00000000 << 8 | piRam00000000[1] << 4 | 0x4002;
  _DAT_40001128 =
       _DAT_40001128 & 0xff800fff | piRam00000000[2] << 0x10 | piRam00000000[3] << 0xc | 0x400000;
  _DAT_4000112c =
       (_DAT_4000112c & 0xfffff800 | piRam00000000[4] << 4 | piRam00000000[5]) & 0xff800fff | 0x400
       | piRam00000000[6] << 0x10 | piRam00000000[7] << 0xc | 0x400000;
  _DAT_40001090 |= 0x10000;
  _DAT_400010b8 = piRam00000000[8] << 4 | _DAT_400010b8 & 0xffffffef;
  _DAT_40001138 =
       (_DAT_40001138 & 0xfffffffc | piRam00000000[9] << 1 | piRam00000000[9]) & 0xfffcfff7 | 0x300;
  _DAT_40001130 &= 0xfffefffe;
  _DAT_4000e400 = piRam00000000[0xb] << 1 | _DAT_4000e400 & 0xfffffffd;
  _DAT_4000e418 = piRam00000000[0xc] << 0x18 | _DAT_4000e418 & 0xfcffffff;
  _DAT_4000108c = _DAT_4000108c & 0xfffffffc | 2;
  _DAT_4000f030 = _DAT_4000f030 & 0xfff0ffff | 0xc0000;
  _L0();
  if (CONCAT31(in_register_00002029,reset) != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  
  _L0();
  piRam00000000 = (int *)(uint)(unaff_s0 == 0);
  _DAT_4000f814 = _DAT_4000f814 & 0xfffff0ff | 0x300;
  _DAT_4000f030 = _DAT_4000f030 & 0xf0ffffff | 0x8000000;
  _DAT_40001030 |= 0x1001;
  _DAT_4000f884 |= 4;
  if (piRam00000000 == (int *)0x0) {
    FUN_0001326e();
  }
  _DAT_40001064 = _DAT_40001064 & 0xffff8008 | *piRam00000000 << 8 | piRam00000000[1] << 4 | 0x4002;
  _DAT_40001128 =
       _DAT_40001128 & 0xff800fff | piRam00000000[2] << 0x10 | piRam00000000[3] << 0xc | 0x400000;
  _DAT_4000112c =
       (_DAT_4000112c & 0xfffff800 | piRam00000000[4] << 4 | piRam00000000[5]) & 0xff800fff | 0x400
       | piRam00000000[6] << 0x10 | piRam00000000[7] << 0xc | 0x400000;
  _DAT_40001090 |= 0x10000;
  _DAT_400010b8 = piRam00000000[8] << 4 | _DAT_400010b8 & 0xffffffef;
  _DAT_40001138 =
       (_DAT_40001138 & 0xfffffffc | piRam00000000[9] << 1 | piRam00000000[9]) & 0xfffcfff7 | 0x300;
  _DAT_40001130 &= 0xfffefffe;
  _DAT_4000e400 = piRam00000000[0xb] << 1 | _DAT_4000e400 & 0xfffffffd;
  _DAT_4000e418 = piRam00000000[0xc] << 0x18 | _DAT_4000e418 & 0xfcffffff;
  _DAT_4000108c = _DAT_4000108c & 0xfffffffc | 2;
  _DAT_4000f030 = _DAT_4000f030 & 0xfff0ffff | 0xc0000;
  _L0();
  if (unaff_s0 != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001326e(void)

{
  int unaff_s0;
  
  FUN_0001326e();
  _DAT_40001064 = _DAT_40001064 & 0xffff8008 | *piRam00000000 << 8 | piRam00000000[1] << 4 | 0x4002;
  _DAT_40001128 =
       _DAT_40001128 & 0xff800fff | piRam00000000[2] << 0x10 | piRam00000000[3] << 0xc | 0x400000;
  _DAT_4000112c =
       (_DAT_4000112c & 0xfffff800 | piRam00000000[4] << 4 | piRam00000000[5]) & 0xff800fff | 0x400
       | piRam00000000[6] << 0x10 | piRam00000000[7] << 0xc | 0x400000;
  _DAT_40001090 |= 0x10000;
  _DAT_400010b8 = piRam00000000[8] << 4 | _DAT_400010b8 & 0xffffffef;
  _DAT_40001138 =
       (_DAT_40001138 & 0xfffffffc | piRam00000000[9] << 1 | piRam00000000[9]) & 0xfffcfff7 | 0x300;
  _DAT_40001130 &= 0xfffefffe;
  _DAT_4000e400 = piRam00000000[0xb] << 1 | _DAT_4000e400 & 0xfffffffd;
  _DAT_4000e418 = piRam00000000[0xc] << 0x18 | _DAT_4000e418 & 0xfcffffff;
  _DAT_4000108c = _DAT_4000108c & 0xfffffffc | 2;
  _DAT_4000f030 = _DAT_4000f030 & 0xfff0ffff | 0xc0000;
  _L0();
  if (unaff_s0 != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  uint unaff_s2;
  
  _L0();
  *(uint *)(unaff_s1 + 0x404) = *(uint *)(unaff_s1 + 0x404) | unaff_s2;
  *(uint *)(unaff_s1 + 0x41c) = *(uint *)(unaff_s1 + 0x41c) | 0xff;
  if (unaff_s0 != 0) {
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 14f3

void rf_pri_update_power_offset(int32_t *power_offset)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  do {
    uVar1 = *(undefined4 *)((int)power_offset + (int)puVar2);
    *puVar2 = uVar1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (puVar2 != (undefined4 *)&DAT_00000038);
  return;
}


