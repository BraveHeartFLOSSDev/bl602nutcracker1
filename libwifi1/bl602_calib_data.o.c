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
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef struct __sFILE __sFILE, *P__sFILE;

typedef int _ssize_t;

typedef struct _reent _reent, *P_reent;

typedef long _fpos_t;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict876_for__new anon_union.conflict876_for__new, *Panon_union.conflict876_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef long _off_t;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict6ea anon_struct.conflict6ea, *Panon_struct.conflict6ea;

typedef struct anon_struct.conflict82f anon_struct.conflict82f, *Panon_struct.conflict82f;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef union anon_union.conflict9c_for___value anon_union.conflict9c_for___value, *Panon_union.conflict9c_for___value;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

typedef uint wint_t;

struct _Bigint { // DWARF DIE: 124
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _rand48 { // DWARF DIE: 6a1
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue { // DWARF DIE: 65c
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct _on_exit_args { // DWARF DIE: 217
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 26c
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct __sbuf { // DWARF DIE: 2cc
    uchar * _base;
    int _size;
};

union anon_union.conflict9c_for___value { // DWARF DIE: 9c
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t { // DWARF DIE: ce
    int __count;
    union anon_union.conflict9c_for___value __value;
};

struct __sFILE { // DWARF DIE: 2fa
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

struct __tm { // DWARF DIE: 194
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

struct anon_struct.conflict6ea { // DWARF DIE: 6ea
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

struct anon_struct.conflict82f { // DWARF DIE: 82f
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict876_for__new { // DWARF DIE: 876
    struct anon_struct.conflict6ea _reent;
    struct anon_struct.conflict82f _unused;
};

struct _reent { // DWARF DIE: 466
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
    union anon_union.conflict876_for__new _new;
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

struct __locale_t { // DWARF DIE: 8ab
};

typedef union anon_union.conflict876 anon_union.conflict876, *Panon_union.conflict876;

union anon_union.conflict876 { // DWARF DIE: 876
    struct anon_struct.conflict6ea _reent;
    struct anon_struct.conflict82f _unused;
};

typedef union anon_union.conflict9c anon_union.conflict9c, *Panon_union.conflict9c;

union anon_union.conflict9c { // DWARF DIE: 9c
    wint_t __wch;
    uchar __wchb[4];
};

typedef struct regs_to_opti regs_to_opti, *Pregs_to_opti;

typedef ulong uint32_t;

struct regs_to_opti { // DWARF DIE: 9cc
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

typedef enum anon_enum_8.conflictaa2 {
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
    E_RF_RXCAL_GAIN_CNT=4,
    E_RF_TXCAL_GAIN_CNT=8,
    E_RF_TXPWR_TBL_CNT=16
} anon_enum_8.conflictaa2;

typedef struct anon_struct.conflict9cc anon_struct.conflict9cc, *Panon_struct.conflict9cc;

struct anon_struct.conflict9cc { // DWARF DIE: 9cc
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

struct notch_param { // DWARF DIE: 985
    uint32_t notch_en;
    int32_t spur_freq;
};

typedef struct anon_struct.conflict93e anon_struct.conflict93e, *Panon_struct.conflict93e;

struct anon_struct.conflict93e { // DWARF DIE: 93e
    uint32_t index;
    int32_t dvga;
};

typedef struct tx_pwr_index tx_pwr_index, *Ptx_pwr_index;

struct tx_pwr_index { // DWARF DIE: 93e
    uint32_t index;
    int32_t dvga;
};

typedef struct anon_struct.conflict985 anon_struct.conflict985, *Panon_struct.conflict985;

struct anon_struct.conflict985 { // DWARF DIE: 985
    uint32_t notch_en;
    int32_t spur_freq;
};

typedef uchar uint8_t;

typedef ushort uint16_t;

typedef struct rf_calib4_tag rf_calib4_tag, *Prf_calib4_tag;

struct rf_calib4_tag { // DWARF DIE: d38
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

struct rf_calib3_tag { // DWARF DIE: ce2
    uint32_t rosdac_i:6;
    uint32_t rosdac_q:6;
    uint32_t rx_iq_gain_comp:11;
    undefined field_0x3;
    uint32_t rx_iq_phase_comp:10;
    undefined field_0x6;
    undefined field_0x7;
};

struct rf_calib2_tag { // DWARF DIE: cac
    uint16_t fcal:8;
    uint16_t acal:5;
};

struct rf_calib1_tag { // DWARF DIE: b56
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

struct rf_calib_data_tag { // DWARF DIE: d8e
    uint32_t inited;
    struct rf_calib1_tag cal;
    struct rf_calib2_tag lo[21];
    undefined field_0x46;
    undefined field_0x47;
    struct rf_calib3_tag rxcal[4];
    struct rf_calib4_tag txcal[8];
};

typedef struct anon_struct.conflictd8e anon_struct.conflictd8e, *Panon_struct.conflictd8e;

struct anon_struct.conflictd8e { // DWARF DIE: d8e
    uint32_t inited;
    struct rf_calib1_tag cal;
    struct rf_calib2_tag lo[21];
    undefined field_0x46;
    undefined field_0x47;
    struct rf_calib3_tag rxcal[4];
    struct rf_calib4_tag txcal[8];
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




// DWARF DIE: e4b

void rf_pri_init_calib_mem(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  _L0();
  puVar1 = puRam00000000;
  iVar2 = 0;
  do {
    puVar3 = puVar1 + (iVar2 + 8) * 2;
    iVar2 += 1;
    puVar3[2] = puVar3[2] & 0xffffffc0 | 0x20;
    puVar3[2] = puVar3[2] & 0xfffff03f | 0x800;
    puVar3[2] = puVar3[2] & 0xff800fff | 0x400000;
    puVar3[3] = puVar3[3] & 0xfffffc00;
  } while (iVar2 != 4);
  puVar1[2] = puVar1[2] & 0xffffffc0 | 0x20;
  puVar1[2] = puVar1[2] & 0xfffff03f | 0x800;
  iVar2 = 0;
  puVar1[2] = puVar1[2] & 0xfffc0fff | 0x20000;
  puVar1[2] = puVar1[2] & 0xff03ffff | 0x800000;
  puVar1[3] = puVar1[3] & 0xfffff000;
  puVar1[3] = puVar1[3] & 0xff000fff;
  do {
    puVar3 = puVar1 + (iVar2 + 0xc) * 2;
    iVar2 += 1;
    puVar3[2] = puVar3[2] & 0xffffffc0 | 0x20;
    puVar3[2] = puVar3[2] & 0xfffff03f | 0x800;
    puVar3[2] = puVar3[2] & 0xff800fff | 0x400000;
    puVar3[3] = puVar3[3] & 0xfffffc00;
  } while (iVar2 != 8);
  puVar1[4] = puVar1[4] & 0xffffff8f | 0x50;
  puVar1[4] = puVar1[4] & 0xfffffc7f | 0x280;
  *puVar1 = 0;
  return;
}



void _L0(void)

{
  undefined4 *unaff_s0;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  _L0();
  puVar3 = (undefined4 *)*unaff_s0;
  iVar1 = 0;
  do {
    puVar2 = puVar3 + (iVar1 + 8) * 2;
    iVar1 += 1;
    puVar2[2] = puVar2[2] & 0xffffffc0 | 0x20;
    puVar2[2] = puVar2[2] & 0xfffff03f | 0x800;
    puVar2[2] = puVar2[2] & 0xff800fff | 0x400000;
    puVar2[3] = puVar2[3] & 0xfffffc00;
  } while (iVar1 != 4);
  puVar3[2] = puVar3[2] & 0xffffffc0 | 0x20;
  puVar3[2] = puVar3[2] & 0xfffff03f | 0x800;
  iVar1 = 0;
  puVar3[2] = puVar3[2] & 0xfffc0fff | 0x20000;
  puVar3[2] = puVar3[2] & 0xff03ffff | 0x800000;
  puVar3[3] = puVar3[3] & 0xfffff000;
  puVar3[3] = puVar3[3] & 0xff000fff;
  do {
    puVar2 = puVar3 + (iVar1 + 0xc) * 2;
    iVar1 += 1;
    puVar2[2] = puVar2[2] & 0xffffffc0 | 0x20;
    puVar2[2] = puVar2[2] & 0xfffff03f | 0x800;
    puVar2[2] = puVar2[2] & 0xff800fff | 0x400000;
    puVar2[3] = puVar2[3] & 0xfffffc00;
  } while (iVar1 != 8);
  puVar3[4] = puVar3[4] & 0xffffff8f | 0x50;
  puVar3[4] = puVar3[4] & 0xfffffc7f | 0x280;
  *puVar3 = 0;
  return;
}


