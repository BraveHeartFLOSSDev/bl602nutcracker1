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

typedef long __int32_t;

typedef ulonglong __uint64_t;

typedef ulong __uint32_t;

typedef longlong __int64_t;

typedef ushort __uint16_t;

typedef short __int16_t;

typedef uchar __uint8_t;

typedef char __int8_t;

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflict10a_for___value anon_union.conflict10a_for___value, *Panon_union.conflict10a_for___value;

typedef uint wint_t;

union anon_union.conflict10a_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflict10a_for___value __value;
};

typedef union anon_union.conflict10a anon_union.conflict10a, *Panon_union.conflict10a;

union anon_union.conflict10a {
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _off_t;

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

typedef __uint32_t uint32_t;

struct la_mem_format {
    uint32_t word[4];
};

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef __uint16_t uint16_t;

struct mac_addr {
    uint16_t array[3];
};

typedef enum anon_enum_8.conflict9ff {
    RFC_RC_RXON=3,
    E_RF_MODE_11N=2,
    RFC_FORMATMOD_11G=1,
    RFC_FORMATMOD_11N=2,
    RFC_SG_RAMP=2,
    E_RF_XTAL_26M=1,
    RFC_RC_RX2ON=1,
    RFC_SG_SINGLE_TONE=0,
    TID_1=1,
    TID_0=0,
    TID_3=3,
    TID_2=2,
    TID_5=5,
    RFC_PC_AUTO=0,
    RFC_BW_20M=0,
    TID_4=4,
    TID_7=7,
    TID_6=6,
    TID_MGT=8,
    RFC_FSM_RX=3,
    AC_BE=1,
    AC_BK=0,
    RFC_RC_TX2PAON=4,
    RFC_PC_WLAN_11N=3,
    RFC_FSM_SB=1,
    RFC_PC_WLAN_11B=1,
    RFC_PC_WLAN_11G=2,
    RFC_PC_BT_BLE=4,
    AC_VI=2,
    AC_VO=3,
    E_RF_XTAL_38M4=3,
    RFC_RC_IDLE=0,
    E_RF_XTAL_24M=0,
    E_RF_XTAL_32M=2,
    RFC_RC_FORCE_OFF=15,
    E_RF_XTAL_52M=5,
    E_RF_XTAL_40M=4,
    RFC_SG_TWO_TONE=1,
    AC_MAX=4,
    RFC_BW_10M=1,
    RFC_FSM_PD=0,
    RFC_FSM_FORCE_OFF=15,
    TID_MAX=9,
    RFC_FSM_LO=2,
    E_RF_MODE_11B=0,
    RFC_RC_TXPAON=7,
    RFC_FSM_TX=4,
    RFC_RC_TX2ON=2,
    E_RF_MODE_11G=1,
    RFC_FORMATMOD_11B=0
} anon_enum_8.conflict9ff;

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

typedef struct anon_struct.conflictfe9 anon_struct.conflictfe9, *Panon_struct.conflictfe9;

struct anon_struct.conflictfe9 {
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

typedef struct tx_pwr_index tx_pwr_index, *Ptx_pwr_index;

typedef __int32_t int32_t;

struct tx_pwr_index {
    uint32_t index;
    int32_t dvga;
};

typedef struct notch_param notch_param, *Pnotch_param;

struct notch_param {
    uint32_t notch_en;
    int32_t spur_freq;
};

typedef struct anon_struct.conflictf5b anon_struct.conflictf5b, *Panon_struct.conflictf5b;

struct anon_struct.conflictf5b {
    uint32_t index;
    int32_t dvga;
};

typedef struct rfc_status_tag rfc_status_tag, *Prfc_status_tag;

struct rfc_status_tag {
    uint32_t pkdet_out_raw:1;
    uint32_t dig_xtal_clk_dbg:1;
    uint32_t clk_ble_16m_dbg:1;
    uint32_t clk_rc_dbg0:1;
    uint32_t clk_adcpow_dbg:1;
    uint32_t clk_fetx_dbg:1;
    uint32_t clk_ferx_dbg:1;
    uint32_t clkpll_postdiv_outclk_dbg:1;
    uint32_t clk_soc_480m_dbg:1;
    uint32_t clk_soc_240m_dbg:1;
    uint32_t clk_soc_192m_dbg:1;
    uint32_t clk_soc_160m_dbg:1;
    uint32_t clk_soc_120m_dbg:1;
    uint32_t clk_soc_96m_dbg:1;
    uint32_t clk_soc_80m_dbg:1;
    uint32_t clk_soc_48m_dbg:1;
    uint32_t clk_soc_32m_dbg:1;
    uint32_t pad_pkdet_out:1;
    uint32_t pad_agc_ctrl:10;
    uint32_t rf_pkdet_rst_hw:1;
    uint32_t rf_cbw_wifi:2;
    uint32_t lo_unlocked:1;
    uint32_t fsm_pu_txbuf:1;
    uint32_t fsm_pu_rxbuf:1;
    uint32_t fsm_pu_tosdac:1;
    uint32_t fsm_pu_dac:1;
    uint32_t fsm_trsw_en:1;
    uint32_t fsm_pu_adc:1;
    uint32_t fsm_pu_pkdet:1;
    uint32_t fsm_pu_rbb:1;
    uint32_t fsm_pu_rmx:1;
    uint32_t fsm_pu_rmxgm:1;
    uint32_t fsm_pu_lna:1;
    uint32_t clk_rc_dbg2:1;
    uint32_t rf_lna_ind_hw:4;
    uint32_t rf_rbb_ind_hw:4;
    uint32_t rf_tx_pow_lvl_hw:4;
    uint32_t rf_rc_lo_rdy:1;
    uint32_t rf_fsm_state:3;
    uint32_t rf_rc_state:3;
    uint32_t clk_rc_dbg:1;
};

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag {
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8e4_for__new anon_union.conflict8e4_for__new, *Panon_union.conflict8e4_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict758 anon_struct.conflict758, *Panon_struct.conflict758;

typedef struct anon_struct.conflict89d anon_struct.conflict89d, *Panon_struct.conflict89d;

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

struct anon_struct.conflict758 {
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

struct anon_struct.conflict89d {
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflict8e4_for__new {
    struct anon_struct.conflict758 _reent;
    struct anon_struct.conflict89d _unused;
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
    union anon_union.conflict8e4_for__new _new;
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

typedef union anon_union.conflict8e4 anon_union.conflict8e4, *Panon_union.conflict8e4;

union anon_union.conflict8e4 {
    struct anon_struct.conflict758 _reent;
    struct anon_struct.conflict89d _unused;
};

typedef __uint8_t uint8_t;

typedef __uint64_t uint64_t;

typedef __int8_t int8_t;

typedef __int16_t int16_t;

typedef __int64_t int64_t;

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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_fsm_ctrl_en_setf(uint32_t x)

{
  _DAT_40001004 = x << 1 | _DAT_40001004 & 0xfffffffd;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_gc_tbb_setf(uint32_t x)

{
  _DAT_40001048 = (x & 0x1f) << 0x14 | _DAT_40001048 & 0xfe0fffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_gc_tmx_setf(uint32_t x)

{
  _DAT_40001048 = (x & 7) << 0x10 | _DAT_40001048 & 0xfff8ffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_pa_ib_fix_setf(uint32_t x)

{
  _DAT_40001064 = x << 0x10 | _DAT_40001064 & 0xfffeffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_pa_vbcas_setf(uint32_t x)

{
  _DAT_40001064 = x << 0xc | _DAT_40001064 & 0xffff8fff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_pa_vbcore_setf(uint32_t x)

{
  _DAT_40001064 = x << 8 | _DAT_40001064 & 0xfffff0ff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_pa_iet_setf(uint32_t x)

{
  _DAT_40001064 = x << 4 | _DAT_40001064 & 0xffffff0f;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_tmx_cs_setf(uint32_t x)

{
  _DAT_4000106c = x | _DAT_4000106c & 0xfffffff8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_fsm_st_dbg_en_setf(uint32_t x)

{
  _DAT_4000126c = x << 3 | _DAT_4000126c & 0xfffffff7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_tx_dvga_gain_qdb_gc3_setf(uint32_t x)

{
  _DAT_40001630 = (x & 0x7f) << 0x18 | _DAT_40001630 & 0x80ffffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_tx_dvga_gain_qdb_gc2_setf(uint32_t x)

{
  _DAT_40001630 = (x & 0x7f) << 0x10 | _DAT_40001630 & 0xff80ffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_tx_dvga_gain_qdb_gc1_setf(uint32_t x)

{
  _DAT_40001630 = (x & 0x7f) << 8 | _DAT_40001630 & 0xffff80ff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_tx_dvga_gain_qdb_gc0_setf(uint32_t x)

{
  _DAT_40001630 = x & 0x7f | _DAT_40001630 & 0xffffff80;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_tx_dvga_gain_qdb_gc7_setf(uint32_t x)

{
  _DAT_40001634 = (x & 0x7f) << 0x18 | _DAT_40001634 & 0x80ffffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_tx_dvga_gain_qdb_gc6_setf(uint32_t x)

{
  _DAT_40001634 = (x & 0x7f) << 0x10 | _DAT_40001634 & 0xff80ffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_tx_dvga_gain_qdb_gc5_setf(uint32_t x)

{
  _DAT_40001634 = (x & 0x7f) << 8 | _DAT_40001634 & 0xffff80ff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_tx_dvga_gain_qdb_gc4_setf(uint32_t x)

{
  _DAT_40001634 = x & 0x7f | _DAT_40001634 & 0xffffff80;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_tx_dvga_gain_qdb_gc11_setf(uint32_t x)

{
  _DAT_40001638 = (x & 0x7f) << 0x18 | _DAT_40001638 & 0x80ffffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_tx_dvga_gain_qdb_gc10_setf(uint32_t x)

{
  _DAT_40001638 = (x & 0x7f) << 0x10 | _DAT_40001638 & 0xff80ffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_tx_dvga_gain_qdb_gc9_setf(uint32_t x)

{
  _DAT_40001638 = (x & 0x7f) << 8 | _DAT_40001638 & 0xffff80ff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_tx_dvga_gain_qdb_gc8_setf(uint32_t x)

{
  _DAT_40001638 = x & 0x7f | _DAT_40001638 & 0xffffff80;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_tx_dvga_gain_qdb_gc15_setf(uint32_t x)

{
  _DAT_4000163c = (x & 0x7f) << 0x18 | _DAT_4000163c & 0x80ffffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_tx_dvga_gain_qdb_gc14_setf(uint32_t x)

{
  _DAT_4000163c = (x & 0x7f) << 0x10 | _DAT_4000163c & 0xff80ffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_tx_dvga_gain_qdb_gc13_setf(uint32_t x)

{
  _DAT_4000163c = (x & 0x7f) << 8 | _DAT_4000163c & 0xffff80ff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_tx_dvga_gain_qdb_gc12_setf(uint32_t x)

{
  _DAT_4000163c = x & 0x7f | _DAT_4000163c & 0xffffff80;
  return;
}



void wait_us(uint32_t us)

{
  bool bVar1;
  uint32_t n;
  int iStack4;
  
  iStack4 = us << 4;
  do {
    bVar1 = iStack4 != 0;
    iStack4 = iStack4 + -1;
  } while (bVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_pa_etb_en_setf(void)

{
  _DAT_40001064 = _DAT_40001064 & 0xfffffff7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rf_pa_half_on_setf(void)

{
  _DAT_40001064 = _DAT_40001064 & 0xffff7fff | 0x8000;
  return;
}



uint32_t rfc_read_reg(uint32_t addr)

{
  return *(uint32_t *)addr;
}



void rfc_write_reg(uint32_t addr,uint32_t value)

{
  *(uint32_t *)addr = value;
  return;
}



void rfc_write_reg_bits(uint32_t addr,uint8_t high_bit,uint8_t low_bit,uint32_t wdata)

{
  undefined3 in_register_0000202d;
  undefined3 in_register_00002031;
  uint uVar1;
  
  if (CONCAT31(in_register_00002031,low_bit) <= CONCAT31(in_register_0000202d,high_bit)) {
    uVar1 = (1 << ((CONCAT31(in_register_0000202d,high_bit) - CONCAT31(in_register_00002031,low_bit)
                   ) + 1 & 0x1f)) - 1;
    *(uint *)addr =
         ~(uVar1 << (low_bit & 0x1f)) & *(uint *)addr | (wdata & uVar1) << (low_bit & 0x1f);
  }
  return;
}



void _print_channel_info(void)

{
  int iVar1;
  
  iVar1 = 8;
  do {
    iVar1 = iVar1 + -1;
    _LVL146(1000);
  } while (iVar1 != 0);
  iVar1 = 8;
  do {
    iVar1 = iVar1 + -1;
    _LVL149(1000);
  } while (iVar1 != 0);
  return;
}



void _LVL146(undefined4 param_1)

{
  int unaff_s0;
  int iVar1;
  
  while (_LVL146(param_1), unaff_s0 != 0) {
    param_1 = 1000;
    unaff_s0 = unaff_s0 + -1;
  }
  iVar1 = 8;
  do {
    iVar1 = iVar1 + -1;
    _LVL149(1000);
  } while (iVar1 != 0);
  return;
}



void _LVL149(undefined4 param_1)

{
  int unaff_s0;
  
  while (_LVL149(param_1), unaff_s0 != 0) {
    param_1 = 1000;
    unaff_s0 = unaff_s0 + -1;
  }
  return;
}



void _check_config(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_init(uint32_t xtalfreq_hz)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  uint uVar5;
  uint extraout_a0;
  int iVar6;
  uint extraout_a0_00;
  uint uVar7;
  undefined4 extraout_a1;
  uint uVar8;
  undefined4 extraout_fa0;
  uint uStack88;
  uint32_t rfg_index;
  uint32_t dg;
  
  _DAT_40001220 = _DAT_40001220 & 0xf3ffffff | 0x8000000;
  if (xtalfreq_hz == 32000000) {
    uVar3 = 2;
    goto _L0;
  }
  if (xtalfreq_hz < 0x1e84801) {
    uVar3 = 0;
    if ((xtalfreq_hz == 24000000) || (uVar3 = 1, xtalfreq_hz == 26000000)) goto _L0;
  }
  else {
    if (xtalfreq_hz != 40000000) {
      uVar3 = 5;
      if (xtalfreq_hz == 52000000) goto _L0;
      if (xtalfreq_hz == 38400000) {
        uVar3 = 3;
        goto _L0;
      }
    }
  }
  uVar3 = 4;
_L0:
  uVar3 = _L0(uVar3);
  uVar3 = FUN_000103fc(fRam00000000._0_1_ == '\0',1,uVar3);
  fRam00000000 = (float)CONCAT31(fRam00000000._1_3_,1);
  fVar4 = (float)FUN_00010418(xtalfreq_hz / 1000000,uVar3);
  fVar1 = (float)(xtalfreq_hz / 1000000);
  uVar8 = _DAT_400011c4 & 0xe0000000;
  iVar2 = 0x964;
  fRam00000000 = fVar4;
  _DAT_00000004 = extraout_a1;
  uVar3 = _LVL178((((fVar4 * fVar4) / fVar4) / fVar1) * fVar4);
  uVar3 = FUN_000104b4(fRam00000000,_DAT_00000004,uVar3);
  uVar5 = _L0(uVar3);
  _DAT_400011c4 = uVar5 & 0x1fffffff | uVar8;
  uVar8 = _DAT_400011c8 & 0xfff00000;
  uVar3 = _LVL187((fRam00000000 / fVar1) * fVar4);
  uVar3 = FUN_000104fe(fRam00000000,_DAT_00000004,uVar3);
  uVar5 = _L0(uVar3);
  _DAT_400011c8 = uVar5 & 0xfffff | uVar8;
  uVar5 = _DAT_400011cc & 0xfff00000;
  uVar3 = _LVL196((fRam00000000 / fVar1) * fVar4);
  uVar8 = 0;
  uVar3 = _L0(fRam00000000,_DAT_00000004,uVar3);
  uVar3 = _L0(uVar3);
  _DAT_400011cc = extraout_a0 & 0xfffff | uVar5;
  uVar5 = 0;
  do {
    iVar6 = FUN_0001056e(iVar2,uVar3);
    uVar3 = _LVL205(iVar2,extraout_fa0);
    if (iVar2 == 0x964) {
      iVar6 = iVar6 + 1;
    }
    uVar7 = iVar6 << 8 | extraout_a0_00;
    if ((uVar8 & 1) != 0) {
      uVar7 = uVar5 | uVar7 << 0x10;
      *(uint *)(&DAT_4000113c + ((int)uVar8 >> 1) * 4) = uVar7;
    }
    if (iVar2 == 0x9b4) {
      *(uint *)(&DAT_4000113c + ((int)uVar8 >> 1) * 4) = uVar7;
    }
    iVar2 = iVar2 + 4;
    uVar8 = uVar8 + 1;
    uVar5 = uVar7;
  } while (iVar2 != 0x9b8);
  uVar3 = _L0(0,&uStack88,&rfg_index,uVar3);
  _DAT_40001640 = uStack88 & 7 | _DAT_40001640 & 0xfffffff8;
  uVar3 = _L0(rfg_index,uVar3);
  uVar3 = FUN_00010604(1,&uStack88,&rfg_index,uVar3);
  _DAT_40001640 = (uStack88 & 7) << 4 | _DAT_40001640 & 0xffffff8f;
  uVar3 = _L0(rfg_index,uVar3);
  uVar3 = FUN_00010646(2,&uStack88,&rfg_index,uVar3);
  _DAT_40001640 = (uStack88 & 7) << 8 | _DAT_40001640 & 0xfffff8ff;
  uVar3 = FUN_00010674(rfg_index,uVar3);
  uVar3 = FUN_00010682(3,&uStack88,&rfg_index,uVar3);
  _DAT_40001640 = (uStack88 & 7) << 0xc | _DAT_40001640 & 0xffff8fff;
  uVar3 = FUN_000106a2(rfg_index,uVar3);
  uVar3 = FUN_000106b0(4,&uStack88,&rfg_index,uVar3);
  _DAT_40001640 = (uStack88 & 7) << 0x10 | _DAT_40001640 & 0xfff8ffff;
  uVar3 = FUN_000106d0(rfg_index,uVar3);
  uVar3 = FUN_000106de(5,&uStack88,&rfg_index,uVar3);
  _DAT_40001640 = (uStack88 & 7) << 0x14 | _DAT_40001640 & 0xff8fffff;
  uVar3 = FUN_000106fe(rfg_index,uVar3);
  uVar3 = FUN_0001070c(6,&uStack88,&rfg_index,uVar3);
  _DAT_40001640 = (uStack88 & 7) << 0x18 | _DAT_40001640 & 0xf8ffffff;
  uVar3 = FUN_0001072c(rfg_index,uVar3);
  uVar3 = FUN_0001073a(7,&uStack88,&rfg_index,uVar3);
  _DAT_40001640 = (uStack88 & 7) << 0x1c | _DAT_40001640 & 0x8fffffff;
  uVar3 = FUN_00010758(rfg_index,uVar3);
  uVar3 = FUN_00010766(8,&uStack88,&rfg_index,uVar3);
  _DAT_40001644 = uStack88 & 7 | _DAT_40001644 & 0xfffffff8;
  uVar3 = FUN_00010782(rfg_index,uVar3);
  uVar3 = FUN_00010790(9,&uStack88,&rfg_index,uVar3);
  _DAT_40001644 = (uStack88 & 7) << 4 | _DAT_40001644 & 0xffffff8f;
  uVar3 = FUN_000107b0(rfg_index,uVar3);
  uVar3 = FUN_000107be(10,&uStack88,&rfg_index,uVar3);
  _DAT_40001644 = (uStack88 & 7) << 8 | _DAT_40001644 & 0xfffff8ff;
  uVar3 = FUN_000107de(rfg_index,uVar3);
  uVar3 = FUN_000107ec(0xb,&uStack88,&rfg_index,uVar3);
  _DAT_40001644 = (uStack88 & 7) << 0xc | _DAT_40001644 & 0xffff8fff;
  uVar3 = FUN_0001080e(rfg_index,uVar3);
  uVar3 = FUN_0001081c(0xc,&uStack88,&rfg_index,uVar3);
  _DAT_40001644 = (uStack88 & 7) << 0x10 | _DAT_40001644 & 0xfff8ffff;
  uVar3 = FUN_0001083e(rfg_index,uVar3);
  uVar3 = FUN_0001084c(0xd,&uStack88,&rfg_index,uVar3);
  _DAT_40001644 = (uStack88 & 7) << 0x14 | _DAT_40001644 & 0xff8fffff;
  uVar3 = FUN_0001086e(rfg_index,uVar3);
  uVar3 = FUN_0001087c(0xe,&uStack88,&rfg_index,uVar3);
  _DAT_40001644 = (uStack88 & 7) << 0x18 | _DAT_40001644 & 0xf8ffffff;
  uVar3 = FUN_0001089e(rfg_index,uVar3);
  uVar3 = FUN_000108ac(0xf,&uStack88,&rfg_index,uVar3);
  _DAT_40001644 = (uStack88 & 7) << 0x1c | _DAT_40001644 & 0x8fffffff;
  uVar3 = _L0(rfg_index,uVar3);
  _DAT_40001004 = _DAT_40001004 & 0xfffff7ff;
  uVar3 = FUN_000108e4(0,uVar3);
  _DAT_40001268 = _DAT_40001268 & 0xffff0000 | 0x1040;
  uVar3 = _L0(1,uVar3);
  _DAT_40001600 = _DAT_40001600 & 0x80ffffff | 0x80000000;
  _DAT_4000100c = _DAT_4000100c | 0x26;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  _DAT_40001220 = _DAT_40001220 & 0xf7ffffff;
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  uVar3 = _L0(1,uVar3);
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3 | 4;
  _L0(1,uVar3);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  float fVar1;
  char *unaff_s0;
  uint unaff_s1;
  int iVar2;
  float fVar3;
  uint uVar4;
  uint extraout_a0;
  int iVar5;
  uint extraout_a0_00;
  uint uVar6;
  undefined4 extraout_a1;
  uint uVar7;
  undefined4 uVar8;
  undefined4 extraout_fa0;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  uVar8 = _L0();
  uVar8 = FUN_000103fc(*unaff_s0 == '\0',1,uVar8);
  *unaff_s0 = '\x01';
  fVar3 = (float)FUN_00010418(unaff_s1 / 1000000,uVar8);
  fVar1 = (float)(unaff_s1 / 1000000);
  uVar7 = _DAT_400011c4 & 0xe0000000;
  iVar2 = 0x964;
  fRam00000000 = fVar3;
  _DAT_00000004 = extraout_a1;
  uVar8 = _LVL178((((fVar3 * fVar3) / fVar3) / fVar1) * fVar3);
  uVar8 = FUN_000104b4(fRam00000000,_DAT_00000004,uVar8);
  uVar4 = _L0(uVar8);
  _DAT_400011c4 = uVar4 & 0x1fffffff | uVar7;
  uVar7 = _DAT_400011c8 & 0xfff00000;
  uVar8 = _LVL187((fRam00000000 / fVar1) * fVar3);
  uVar8 = FUN_000104fe(fRam00000000,_DAT_00000004,uVar8);
  uVar4 = _L0(uVar8);
  _DAT_400011c8 = uVar4 & 0xfffff | uVar7;
  uVar4 = _DAT_400011cc & 0xfff00000;
  uVar8 = _LVL196((fRam00000000 / fVar1) * fVar3);
  uVar7 = 0;
  uVar8 = _L0(fRam00000000,_DAT_00000004,uVar8);
  uVar8 = _L0(uVar8);
  _DAT_400011cc = extraout_a0 & 0xfffff | uVar4;
  uVar4 = 0;
  do {
    iVar5 = FUN_0001056e(iVar2,uVar8);
    uVar8 = _LVL205(iVar2,extraout_fa0);
    if (iVar2 == 0x964) {
      iVar5 = iVar5 + 1;
    }
    uVar6 = iVar5 << 8 | extraout_a0_00;
    if ((uVar7 & 1) != 0) {
      uVar6 = uVar4 | uVar6 << 0x10;
      *(uint *)(&DAT_4000113c + ((int)uVar7 >> 1) * 4) = uVar6;
    }
    if (iVar2 == 0x9b4) {
      *(uint *)(&DAT_4000113c + ((int)uVar7 >> 1) * 4) = uVar6;
    }
    iVar2 = iVar2 + 4;
    uVar7 = uVar7 + 1;
    uVar4 = uVar6;
  } while (iVar2 != 0x9b8);
  uVar8 = _L0(0,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001640 = in_stack_00000008 & 7 | _DAT_40001640 & 0xfffffff8;
  uVar8 = _L0(in_stack_0000000c,uVar8);
  uVar8 = FUN_00010604(1,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001640 = (in_stack_00000008 & 7) << 4 | _DAT_40001640 & 0xffffff8f;
  uVar8 = _L0(in_stack_0000000c,uVar8);
  uVar8 = FUN_00010646(2,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001640 = (in_stack_00000008 & 7) << 8 | _DAT_40001640 & 0xfffff8ff;
  uVar8 = FUN_00010674(in_stack_0000000c,uVar8);
  uVar8 = FUN_00010682(3,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0xc | _DAT_40001640 & 0xffff8fff;
  uVar8 = FUN_000106a2(in_stack_0000000c,uVar8);
  uVar8 = FUN_000106b0(4,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001640 & 0xfff8ffff;
  uVar8 = FUN_000106d0(in_stack_0000000c,uVar8);
  uVar8 = FUN_000106de(5,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001640 & 0xff8fffff;
  uVar8 = FUN_000106fe(in_stack_0000000c,uVar8);
  uVar8 = FUN_0001070c(6,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001640 & 0xf8ffffff;
  uVar8 = FUN_0001072c(in_stack_0000000c,uVar8);
  uVar8 = FUN_0001073a(7,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001640 & 0x8fffffff;
  uVar8 = FUN_00010758(in_stack_0000000c,uVar8);
  uVar8 = FUN_00010766(8,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001644 = in_stack_00000008 & 7 | _DAT_40001644 & 0xfffffff8;
  uVar8 = FUN_00010782(in_stack_0000000c,uVar8);
  uVar8 = FUN_00010790(9,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001644 = (in_stack_00000008 & 7) << 4 | _DAT_40001644 & 0xffffff8f;
  uVar8 = FUN_000107b0(in_stack_0000000c,uVar8);
  uVar8 = FUN_000107be(10,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001644 = (in_stack_00000008 & 7) << 8 | _DAT_40001644 & 0xfffff8ff;
  uVar8 = FUN_000107de(in_stack_0000000c,uVar8);
  uVar8 = FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0xc | _DAT_40001644 & 0xffff8fff;
  uVar8 = FUN_0001080e(in_stack_0000000c,uVar8);
  uVar8 = FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001644 & 0xfff8ffff;
  uVar8 = FUN_0001083e(in_stack_0000000c,uVar8);
  uVar8 = FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001644 & 0xff8fffff;
  uVar8 = FUN_0001086e(in_stack_0000000c,uVar8);
  uVar8 = FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001644 & 0xf8ffffff;
  uVar8 = FUN_0001089e(in_stack_0000000c,uVar8);
  uVar8 = FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001644 & 0x8fffffff;
  uVar8 = _L0(in_stack_0000000c,uVar8);
  _DAT_40001004 = _DAT_40001004 & 0xfffff7ff;
  uVar8 = FUN_000108e4(0,uVar8);
  _DAT_40001268 = _DAT_40001268 & 0xffff0000 | 0x1040;
  uVar8 = _L0(1,uVar8);
  _DAT_40001600 = _DAT_40001600 & 0x80ffffff | 0x80000000;
  _DAT_4000100c = _DAT_4000100c | 0x26;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  _DAT_40001220 = _DAT_40001220 & 0xf7ffffff;
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  uVar8 = _L0(1,uVar8);
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3 | 4;
  _L0(1,uVar8);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000103fc(void)

{
  float fVar1;
  float fVar2;
  undefined *unaff_s0;
  uint unaff_s1;
  int iVar3;
  uint uVar4;
  uint extraout_a0;
  int iVar5;
  uint extraout_a0_00;
  uint uVar6;
  undefined4 extraout_a1;
  undefined4 *unaff_s2;
  uint uVar7;
  undefined4 uVar8;
  undefined4 extraout_fa0;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  uVar8 = FUN_000103fc();
  *unaff_s0 = 1;
  uVar8 = FUN_00010418(unaff_s1 / 1000000,uVar8);
  *unaff_s2 = uVar8;
  unaff_s2[1] = extraout_a1;
  fVar2 = fRam00000000;
  fVar1 = (float)(unaff_s1 / 1000000);
  uVar7 = _DAT_400011c4 & 0xe0000000;
  iVar3 = 0x964;
  uVar8 = _LVL178((((fRam00000000 * fRam00000000) / fRam00000000) / fVar1) * fRam00000000);
  uVar8 = FUN_000104b4(fRam00000000,_DAT_00000004,uVar8);
  uVar4 = _L0(uVar8);
  _DAT_400011c4 = uVar4 & 0x1fffffff | uVar7;
  uVar7 = _DAT_400011c8 & 0xfff00000;
  uVar8 = _LVL187((fRam00000000 / fVar1) * fVar2);
  uVar8 = FUN_000104fe(fRam00000000,_DAT_00000004,uVar8);
  uVar4 = _L0(uVar8);
  _DAT_400011c8 = uVar4 & 0xfffff | uVar7;
  uVar4 = _DAT_400011cc & 0xfff00000;
  uVar8 = _LVL196((fRam00000000 / fVar1) * fVar2);
  uVar7 = 0;
  uVar8 = _L0(fRam00000000,_DAT_00000004,uVar8);
  uVar8 = _L0(uVar8);
  _DAT_400011cc = extraout_a0 & 0xfffff | uVar4;
  uVar4 = 0;
  do {
    iVar5 = FUN_0001056e(iVar3,uVar8);
    uVar8 = _LVL205(iVar3,extraout_fa0);
    if (iVar3 == 0x964) {
      iVar5 = iVar5 + 1;
    }
    uVar6 = iVar5 << 8 | extraout_a0_00;
    if ((uVar7 & 1) != 0) {
      uVar6 = uVar4 | uVar6 << 0x10;
      *(uint *)(&DAT_4000113c + ((int)uVar7 >> 1) * 4) = uVar6;
    }
    if (iVar3 == 0x9b4) {
      *(uint *)(&DAT_4000113c + ((int)uVar7 >> 1) * 4) = uVar6;
    }
    iVar3 = iVar3 + 4;
    uVar7 = uVar7 + 1;
    uVar4 = uVar6;
  } while (iVar3 != 0x9b8);
  uVar8 = _L0(0,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001640 = in_stack_00000008 & 7 | _DAT_40001640 & 0xfffffff8;
  uVar8 = _L0(in_stack_0000000c,uVar8);
  uVar8 = FUN_00010604(1,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001640 = (in_stack_00000008 & 7) << 4 | _DAT_40001640 & 0xffffff8f;
  uVar8 = _L0(in_stack_0000000c,uVar8);
  uVar8 = FUN_00010646(2,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001640 = (in_stack_00000008 & 7) << 8 | _DAT_40001640 & 0xfffff8ff;
  uVar8 = FUN_00010674(in_stack_0000000c,uVar8);
  uVar8 = FUN_00010682(3,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0xc | _DAT_40001640 & 0xffff8fff;
  uVar8 = FUN_000106a2(in_stack_0000000c,uVar8);
  uVar8 = FUN_000106b0(4,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001640 & 0xfff8ffff;
  uVar8 = FUN_000106d0(in_stack_0000000c,uVar8);
  uVar8 = FUN_000106de(5,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001640 & 0xff8fffff;
  uVar8 = FUN_000106fe(in_stack_0000000c,uVar8);
  uVar8 = FUN_0001070c(6,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001640 & 0xf8ffffff;
  uVar8 = FUN_0001072c(in_stack_0000000c,uVar8);
  uVar8 = FUN_0001073a(7,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001640 & 0x8fffffff;
  uVar8 = FUN_00010758(in_stack_0000000c,uVar8);
  uVar8 = FUN_00010766(8,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001644 = in_stack_00000008 & 7 | _DAT_40001644 & 0xfffffff8;
  uVar8 = FUN_00010782(in_stack_0000000c,uVar8);
  uVar8 = FUN_00010790(9,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001644 = (in_stack_00000008 & 7) << 4 | _DAT_40001644 & 0xffffff8f;
  uVar8 = FUN_000107b0(in_stack_0000000c,uVar8);
  uVar8 = FUN_000107be(10,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001644 = (in_stack_00000008 & 7) << 8 | _DAT_40001644 & 0xfffff8ff;
  uVar8 = FUN_000107de(in_stack_0000000c,uVar8);
  uVar8 = FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0xc | _DAT_40001644 & 0xffff8fff;
  uVar8 = FUN_0001080e(in_stack_0000000c,uVar8);
  uVar8 = FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001644 & 0xfff8ffff;
  uVar8 = FUN_0001083e(in_stack_0000000c,uVar8);
  uVar8 = FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001644 & 0xff8fffff;
  uVar8 = FUN_0001086e(in_stack_0000000c,uVar8);
  uVar8 = FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001644 & 0xf8ffffff;
  uVar8 = FUN_0001089e(in_stack_0000000c,uVar8);
  uVar8 = FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c,uVar8);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001644 & 0x8fffffff;
  uVar8 = _L0(in_stack_0000000c,uVar8);
  _DAT_40001004 = _DAT_40001004 & 0xfffff7ff;
  uVar8 = FUN_000108e4(0,uVar8);
  _DAT_40001268 = _DAT_40001268 & 0xffff0000 | 0x1040;
  uVar8 = _L0(1,uVar8);
  _DAT_40001600 = _DAT_40001600 & 0x80ffffff | 0x80000000;
  _DAT_4000100c = _DAT_4000100c | 0x26;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  _DAT_40001220 = _DAT_40001220 & 0xf7ffffff;
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  uVar8 = _L0(1,uVar8);
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3 | 4;
  _L0(1,uVar8);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010418(void)

{
  float fVar1;
  float fVar2;
  int unaff_s0;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint extraout_a0;
  int iVar6;
  uint extraout_a0_00;
  uint uVar7;
  undefined4 extraout_a1;
  undefined4 *unaff_s2;
  uint uVar8;
  undefined4 extraout_fa0;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  uVar4 = FUN_00010418();
  *unaff_s2 = uVar4;
  unaff_s2[1] = extraout_a1;
  fVar2 = fRam00000000;
  fVar1 = (float)unaff_s0;
  uVar8 = _DAT_400011c4 & 0xe0000000;
  iVar3 = 0x964;
  uVar4 = _LVL178((((fRam00000000 * fRam00000000) / fRam00000000) / fVar1) * fRam00000000);
  uVar4 = FUN_000104b4(fRam00000000,_DAT_00000004,uVar4);
  uVar5 = _L0(uVar4);
  _DAT_400011c4 = uVar5 & 0x1fffffff | uVar8;
  uVar8 = _DAT_400011c8 & 0xfff00000;
  uVar4 = _LVL187((fRam00000000 / fVar1) * fVar2);
  uVar4 = FUN_000104fe(fRam00000000,_DAT_00000004,uVar4);
  uVar5 = _L0(uVar4);
  _DAT_400011c8 = uVar5 & 0xfffff | uVar8;
  uVar5 = _DAT_400011cc & 0xfff00000;
  uVar4 = _LVL196((fRam00000000 / fVar1) * fVar2);
  uVar8 = 0;
  uVar4 = _L0(fRam00000000,_DAT_00000004,uVar4);
  uVar4 = _L0(uVar4);
  _DAT_400011cc = extraout_a0 & 0xfffff | uVar5;
  uVar5 = 0;
  do {
    iVar6 = FUN_0001056e(iVar3,uVar4);
    uVar4 = _LVL205(iVar3,extraout_fa0);
    if (iVar3 == 0x964) {
      iVar6 = iVar6 + 1;
    }
    uVar7 = iVar6 << 8 | extraout_a0_00;
    if ((uVar8 & 1) != 0) {
      uVar7 = uVar5 | uVar7 << 0x10;
      *(uint *)(&DAT_4000113c + ((int)uVar8 >> 1) * 4) = uVar7;
    }
    if (iVar3 == 0x9b4) {
      *(uint *)(&DAT_4000113c + ((int)uVar8 >> 1) * 4) = uVar7;
    }
    iVar3 = iVar3 + 4;
    uVar8 = uVar8 + 1;
    uVar5 = uVar7;
  } while (iVar3 != 0x9b8);
  uVar4 = _L0(0,&stack0x00000008,&stack0x0000000c,uVar4);
  _DAT_40001640 = in_stack_00000008 & 7 | _DAT_40001640 & 0xfffffff8;
  uVar4 = _L0(in_stack_0000000c,uVar4);
  uVar4 = FUN_00010604(1,&stack0x00000008,&stack0x0000000c,uVar4);
  _DAT_40001640 = (in_stack_00000008 & 7) << 4 | _DAT_40001640 & 0xffffff8f;
  uVar4 = _L0(in_stack_0000000c,uVar4);
  uVar4 = FUN_00010646(2,&stack0x00000008,&stack0x0000000c,uVar4);
  _DAT_40001640 = (in_stack_00000008 & 7) << 8 | _DAT_40001640 & 0xfffff8ff;
  uVar4 = FUN_00010674(in_stack_0000000c,uVar4);
  uVar4 = FUN_00010682(3,&stack0x00000008,&stack0x0000000c,uVar4);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0xc | _DAT_40001640 & 0xffff8fff;
  uVar4 = FUN_000106a2(in_stack_0000000c,uVar4);
  uVar4 = FUN_000106b0(4,&stack0x00000008,&stack0x0000000c,uVar4);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001640 & 0xfff8ffff;
  uVar4 = FUN_000106d0(in_stack_0000000c,uVar4);
  uVar4 = FUN_000106de(5,&stack0x00000008,&stack0x0000000c,uVar4);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001640 & 0xff8fffff;
  uVar4 = FUN_000106fe(in_stack_0000000c,uVar4);
  uVar4 = FUN_0001070c(6,&stack0x00000008,&stack0x0000000c,uVar4);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001640 & 0xf8ffffff;
  uVar4 = FUN_0001072c(in_stack_0000000c,uVar4);
  uVar4 = FUN_0001073a(7,&stack0x00000008,&stack0x0000000c,uVar4);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001640 & 0x8fffffff;
  uVar4 = FUN_00010758(in_stack_0000000c,uVar4);
  uVar4 = FUN_00010766(8,&stack0x00000008,&stack0x0000000c,uVar4);
  _DAT_40001644 = in_stack_00000008 & 7 | _DAT_40001644 & 0xfffffff8;
  uVar4 = FUN_00010782(in_stack_0000000c,uVar4);
  uVar4 = FUN_00010790(9,&stack0x00000008,&stack0x0000000c,uVar4);
  _DAT_40001644 = (in_stack_00000008 & 7) << 4 | _DAT_40001644 & 0xffffff8f;
  uVar4 = FUN_000107b0(in_stack_0000000c,uVar4);
  uVar4 = FUN_000107be(10,&stack0x00000008,&stack0x0000000c,uVar4);
  _DAT_40001644 = (in_stack_00000008 & 7) << 8 | _DAT_40001644 & 0xfffff8ff;
  uVar4 = FUN_000107de(in_stack_0000000c,uVar4);
  uVar4 = FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c,uVar4);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0xc | _DAT_40001644 & 0xffff8fff;
  uVar4 = FUN_0001080e(in_stack_0000000c,uVar4);
  uVar4 = FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c,uVar4);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001644 & 0xfff8ffff;
  uVar4 = FUN_0001083e(in_stack_0000000c,uVar4);
  uVar4 = FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c,uVar4);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001644 & 0xff8fffff;
  uVar4 = FUN_0001086e(in_stack_0000000c,uVar4);
  uVar4 = FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c,uVar4);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001644 & 0xf8ffffff;
  uVar4 = FUN_0001089e(in_stack_0000000c,uVar4);
  uVar4 = FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c,uVar4);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001644 & 0x8fffffff;
  uVar4 = _L0(in_stack_0000000c,uVar4);
  _DAT_40001004 = _DAT_40001004 & 0xfffff7ff;
  uVar4 = FUN_000108e4(0,uVar4);
  _DAT_40001268 = _DAT_40001268 & 0xffff0000 | 0x1040;
  uVar4 = _L0(1,uVar4);
  _DAT_40001600 = _DAT_40001600 & 0x80ffffff | 0x80000000;
  _DAT_4000100c = _DAT_4000100c | 0x26;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  _DAT_40001220 = _DAT_40001220 & 0xf7ffffff;
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  uVar4 = _L0(1,uVar4);
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3 | 4;
  _L0(1,uVar4);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _LVL178(void)

{
  float fVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  uint uVar3;
  uint extraout_a0;
  int iVar4;
  uint extraout_a0_00;
  uint uVar5;
  uint unaff_s2;
  uint unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s7;
  float unaff_fs0;
  float unaff_fs1;
  undefined4 uVar6;
  undefined4 extraout_fa0;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  uVar6 = _LVL178();
  uVar6 = FUN_000104b4(*unaff_s4,unaff_s4[1],uVar6);
  uVar2 = _L0(uVar6);
  fVar1 = fRam00000000 / unaff_fs0;
  *(uint *)(unaff_s0 + 0x88) = uVar2 & 0x1fffffff | unaff_s2;
  uVar2 = *(uint *)(unaff_s0 + 0x8c);
  uVar6 = _LVL187(fVar1 * unaff_fs1);
  uVar6 = FUN_000104fe(*unaff_s4,unaff_s4[1],uVar6);
  uVar3 = _L0(uVar6);
  fVar1 = fRam00000000 / unaff_fs0;
  *(uint *)(unaff_s0 + 0x8c) = uVar3 & 0xfffff | uVar2 & unaff_s3;
  uVar2 = *(uint *)(unaff_s0 + 0x90);
  uVar6 = _LVL196(fVar1 * unaff_fs1);
  uVar3 = 0;
  uVar6 = _L0(*unaff_s4,unaff_s4[1],uVar6);
  uVar6 = _L0(uVar6);
  *(uint *)(unaff_s0 + 0x90) = extraout_a0 & 0xfffff | uVar2 & unaff_s3;
  uVar2 = 0;
  do {
    iVar4 = FUN_0001056e(unaff_s1,uVar6);
    uVar6 = _LVL205(unaff_s1,extraout_fa0);
    if (unaff_s1 == unaff_s7) {
      iVar4 = iVar4 + 1;
    }
    uVar5 = iVar4 << 8 | extraout_a0_00;
    if ((uVar3 & 1) != 0) {
      uVar5 = uVar2 | uVar5 << 0x10;
      *(uint *)(((int)uVar3 >> 1) * 4 + unaff_s0) = uVar5;
    }
    if (unaff_s1 == 0x9b4) {
      *(uint *)(((int)uVar3 >> 1) * 4 + unaff_s0) = uVar5;
    }
    unaff_s1 = unaff_s1 + 4;
    uVar3 = uVar3 + 1;
    uVar2 = uVar5;
  } while (unaff_s1 != 0x9b8);
  uVar6 = _L0(0,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = in_stack_00000008 & 7 | _DAT_40001640 & 0xfffffff8;
  uVar6 = _L0(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010604(1,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 4 | _DAT_40001640 & 0xffffff8f;
  uVar6 = _L0(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010646(2,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 8 | _DAT_40001640 & 0xfffff8ff;
  uVar6 = FUN_00010674(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010682(3,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0xc | _DAT_40001640 & 0xffff8fff;
  uVar6 = FUN_000106a2(in_stack_0000000c,uVar6);
  uVar6 = FUN_000106b0(4,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001640 & 0xfff8ffff;
  uVar6 = FUN_000106d0(in_stack_0000000c,uVar6);
  uVar6 = FUN_000106de(5,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001640 & 0xff8fffff;
  uVar6 = FUN_000106fe(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001070c(6,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001640 & 0xf8ffffff;
  uVar6 = FUN_0001072c(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001073a(7,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001640 & 0x8fffffff;
  uVar6 = FUN_00010758(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010766(8,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = in_stack_00000008 & 7 | _DAT_40001644 & 0xfffffff8;
  uVar6 = FUN_00010782(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010790(9,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 4 | _DAT_40001644 & 0xffffff8f;
  uVar6 = FUN_000107b0(in_stack_0000000c,uVar6);
  uVar6 = FUN_000107be(10,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 8 | _DAT_40001644 & 0xfffff8ff;
  uVar6 = FUN_000107de(in_stack_0000000c,uVar6);
  uVar6 = FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0xc | _DAT_40001644 & 0xffff8fff;
  uVar6 = FUN_0001080e(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001644 & 0xfff8ffff;
  uVar6 = FUN_0001083e(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001644 & 0xff8fffff;
  uVar6 = FUN_0001086e(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001644 & 0xf8ffffff;
  uVar6 = FUN_0001089e(in_stack_0000000c,uVar6);
  uVar6 = FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001644 & 0x8fffffff;
  uVar6 = _L0(in_stack_0000000c,uVar6);
  _DAT_40001004 = _DAT_40001004 & 0xfffff7ff;
  uVar6 = FUN_000108e4(0,uVar6);
  _DAT_40001268 = _DAT_40001268 & 0xffff0000 | 0x1040;
  uVar6 = _L0(1,uVar6);
  _DAT_40001600 = _DAT_40001600 & 0x80ffffff | 0x80000000;
  _DAT_4000100c = _DAT_4000100c | 0x26;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  _DAT_40001220 = _DAT_40001220 & 0xf7ffffff;
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  uVar6 = _L0(1,uVar6);
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3 | 4;
  _L0(1,uVar6);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000104b4(void)

{
  float fVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  uint uVar3;
  uint extraout_a0;
  int iVar4;
  uint extraout_a0_00;
  uint uVar5;
  uint unaff_s2;
  uint unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s7;
  float unaff_fs0;
  float unaff_fs1;
  undefined4 uVar6;
  undefined4 extraout_fa0;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  uVar6 = FUN_000104b4();
  uVar2 = _L0(uVar6);
  fVar1 = fRam00000000 / unaff_fs0;
  *(uint *)(unaff_s0 + 0x88) = uVar2 & 0x1fffffff | unaff_s2;
  uVar2 = *(uint *)(unaff_s0 + 0x8c);
  uVar6 = _LVL187(fVar1 * unaff_fs1);
  uVar6 = FUN_000104fe(*unaff_s4,unaff_s4[1],uVar6);
  uVar3 = _L0(uVar6);
  fVar1 = fRam00000000 / unaff_fs0;
  *(uint *)(unaff_s0 + 0x8c) = uVar3 & 0xfffff | uVar2 & unaff_s3;
  uVar2 = *(uint *)(unaff_s0 + 0x90);
  uVar6 = _LVL196(fVar1 * unaff_fs1);
  uVar3 = 0;
  uVar6 = _L0(*unaff_s4,unaff_s4[1],uVar6);
  uVar6 = _L0(uVar6);
  *(uint *)(unaff_s0 + 0x90) = extraout_a0 & 0xfffff | uVar2 & unaff_s3;
  uVar2 = 0;
  do {
    iVar4 = FUN_0001056e(unaff_s1,uVar6);
    uVar6 = _LVL205(unaff_s1,extraout_fa0);
    if (unaff_s1 == unaff_s7) {
      iVar4 = iVar4 + 1;
    }
    uVar5 = iVar4 << 8 | extraout_a0_00;
    if ((uVar3 & 1) != 0) {
      uVar5 = uVar2 | uVar5 << 0x10;
      *(uint *)(((int)uVar3 >> 1) * 4 + unaff_s0) = uVar5;
    }
    if (unaff_s1 == 0x9b4) {
      *(uint *)(((int)uVar3 >> 1) * 4 + unaff_s0) = uVar5;
    }
    unaff_s1 = unaff_s1 + 4;
    uVar3 = uVar3 + 1;
    uVar2 = uVar5;
  } while (unaff_s1 != 0x9b8);
  uVar6 = _L0(0,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = in_stack_00000008 & 7 | _DAT_40001640 & 0xfffffff8;
  uVar6 = _L0(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010604(1,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 4 | _DAT_40001640 & 0xffffff8f;
  uVar6 = _L0(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010646(2,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 8 | _DAT_40001640 & 0xfffff8ff;
  uVar6 = FUN_00010674(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010682(3,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0xc | _DAT_40001640 & 0xffff8fff;
  uVar6 = FUN_000106a2(in_stack_0000000c,uVar6);
  uVar6 = FUN_000106b0(4,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001640 & 0xfff8ffff;
  uVar6 = FUN_000106d0(in_stack_0000000c,uVar6);
  uVar6 = FUN_000106de(5,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001640 & 0xff8fffff;
  uVar6 = FUN_000106fe(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001070c(6,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001640 & 0xf8ffffff;
  uVar6 = FUN_0001072c(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001073a(7,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001640 & 0x8fffffff;
  uVar6 = FUN_00010758(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010766(8,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = in_stack_00000008 & 7 | _DAT_40001644 & 0xfffffff8;
  uVar6 = FUN_00010782(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010790(9,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 4 | _DAT_40001644 & 0xffffff8f;
  uVar6 = FUN_000107b0(in_stack_0000000c,uVar6);
  uVar6 = FUN_000107be(10,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 8 | _DAT_40001644 & 0xfffff8ff;
  uVar6 = FUN_000107de(in_stack_0000000c,uVar6);
  uVar6 = FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0xc | _DAT_40001644 & 0xffff8fff;
  uVar6 = FUN_0001080e(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001644 & 0xfff8ffff;
  uVar6 = FUN_0001083e(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001644 & 0xff8fffff;
  uVar6 = FUN_0001086e(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001644 & 0xf8ffffff;
  uVar6 = FUN_0001089e(in_stack_0000000c,uVar6);
  uVar6 = FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001644 & 0x8fffffff;
  uVar6 = _L0(in_stack_0000000c,uVar6);
  _DAT_40001004 = _DAT_40001004 & 0xfffff7ff;
  uVar6 = FUN_000108e4(0,uVar6);
  _DAT_40001268 = _DAT_40001268 & 0xffff0000 | 0x1040;
  uVar6 = _L0(1,uVar6);
  _DAT_40001600 = _DAT_40001600 & 0x80ffffff | 0x80000000;
  _DAT_4000100c = _DAT_4000100c | 0x26;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  _DAT_40001220 = _DAT_40001220 & 0xf7ffffff;
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  uVar6 = _L0(1,uVar6);
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3 | 4;
  _L0(1,uVar6);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  float fVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  uint uVar3;
  uint extraout_a0;
  int iVar4;
  uint extraout_a0_00;
  uint uVar5;
  uint unaff_s2;
  uint unaff_s3;
  undefined4 *unaff_s4;
  int unaff_s7;
  float unaff_fs0;
  float unaff_fs1;
  undefined4 uVar6;
  undefined4 extraout_fa0;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  uVar2 = _L0();
  fVar1 = fRam00000000 / unaff_fs0;
  *(uint *)(unaff_s0 + 0x88) = uVar2 & 0x1fffffff | unaff_s2;
  uVar2 = *(uint *)(unaff_s0 + 0x8c);
  uVar6 = _LVL187(fVar1 * unaff_fs1);
  uVar6 = FUN_000104fe(*unaff_s4,unaff_s4[1],uVar6);
  uVar3 = _L0(uVar6);
  fVar1 = fRam00000000 / unaff_fs0;
  *(uint *)(unaff_s0 + 0x8c) = uVar3 & 0xfffff | uVar2 & unaff_s3;
  uVar2 = *(uint *)(unaff_s0 + 0x90);
  uVar6 = _LVL196(fVar1 * unaff_fs1);
  uVar3 = 0;
  uVar6 = _L0(*unaff_s4,unaff_s4[1],uVar6);
  uVar6 = _L0(uVar6);
  *(uint *)(unaff_s0 + 0x90) = extraout_a0 & 0xfffff | uVar2 & unaff_s3;
  uVar2 = 0;
  do {
    iVar4 = FUN_0001056e(unaff_s1,uVar6);
    uVar6 = _LVL205(unaff_s1,extraout_fa0);
    if (unaff_s1 == unaff_s7) {
      iVar4 = iVar4 + 1;
    }
    uVar5 = iVar4 << 8 | extraout_a0_00;
    if ((uVar3 & 1) != 0) {
      uVar5 = uVar2 | uVar5 << 0x10;
      *(uint *)(((int)uVar3 >> 1) * 4 + unaff_s0) = uVar5;
    }
    if (unaff_s1 == 0x9b4) {
      *(uint *)(((int)uVar3 >> 1) * 4 + unaff_s0) = uVar5;
    }
    unaff_s1 = unaff_s1 + 4;
    uVar3 = uVar3 + 1;
    uVar2 = uVar5;
  } while (unaff_s1 != 0x9b8);
  uVar6 = _L0(0,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = in_stack_00000008 & 7 | _DAT_40001640 & 0xfffffff8;
  uVar6 = _L0(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010604(1,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 4 | _DAT_40001640 & 0xffffff8f;
  uVar6 = _L0(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010646(2,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 8 | _DAT_40001640 & 0xfffff8ff;
  uVar6 = FUN_00010674(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010682(3,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0xc | _DAT_40001640 & 0xffff8fff;
  uVar6 = FUN_000106a2(in_stack_0000000c,uVar6);
  uVar6 = FUN_000106b0(4,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001640 & 0xfff8ffff;
  uVar6 = FUN_000106d0(in_stack_0000000c,uVar6);
  uVar6 = FUN_000106de(5,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001640 & 0xff8fffff;
  uVar6 = FUN_000106fe(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001070c(6,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001640 & 0xf8ffffff;
  uVar6 = FUN_0001072c(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001073a(7,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001640 & 0x8fffffff;
  uVar6 = FUN_00010758(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010766(8,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = in_stack_00000008 & 7 | _DAT_40001644 & 0xfffffff8;
  uVar6 = FUN_00010782(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010790(9,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 4 | _DAT_40001644 & 0xffffff8f;
  uVar6 = FUN_000107b0(in_stack_0000000c,uVar6);
  uVar6 = FUN_000107be(10,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 8 | _DAT_40001644 & 0xfffff8ff;
  uVar6 = FUN_000107de(in_stack_0000000c,uVar6);
  uVar6 = FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0xc | _DAT_40001644 & 0xffff8fff;
  uVar6 = FUN_0001080e(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001644 & 0xfff8ffff;
  uVar6 = FUN_0001083e(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001644 & 0xff8fffff;
  uVar6 = FUN_0001086e(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001644 & 0xf8ffffff;
  uVar6 = FUN_0001089e(in_stack_0000000c,uVar6);
  uVar6 = FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001644 & 0x8fffffff;
  uVar6 = _L0(in_stack_0000000c,uVar6);
  _DAT_40001004 = _DAT_40001004 & 0xfffff7ff;
  uVar6 = FUN_000108e4(0,uVar6);
  _DAT_40001268 = _DAT_40001268 & 0xffff0000 | 0x1040;
  uVar6 = _L0(1,uVar6);
  _DAT_40001600 = _DAT_40001600 & 0x80ffffff | 0x80000000;
  _DAT_4000100c = _DAT_4000100c | 0x26;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  _DAT_40001220 = _DAT_40001220 & 0xf7ffffff;
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  uVar6 = _L0(1,uVar6);
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3 | 4;
  _L0(1,uVar6);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _LVL187(void)

{
  float fVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  uint extraout_a0;
  int iVar3;
  uint extraout_a0_00;
  uint uVar4;
  uint unaff_s2;
  uint unaff_s3;
  undefined4 *unaff_s4;
  uint uVar5;
  uint unaff_s5;
  int unaff_s7;
  float unaff_fs0;
  float unaff_fs1;
  undefined4 uVar6;
  undefined4 extraout_fa0;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  uVar6 = _LVL187();
  uVar6 = FUN_000104fe(*unaff_s4,unaff_s4[1],uVar6);
  uVar2 = _L0(uVar6);
  fVar1 = fRam00000000 / unaff_fs0;
  *(uint *)(unaff_s0 + 0x8c) = uVar2 & unaff_s2 | unaff_s5;
  uVar2 = *(uint *)(unaff_s0 + 0x90);
  uVar6 = _LVL196(fVar1 * unaff_fs1);
  uVar5 = 0;
  uVar6 = _L0(*unaff_s4,unaff_s4[1],uVar6);
  uVar6 = _L0(uVar6);
  *(uint *)(unaff_s0 + 0x90) = extraout_a0 & unaff_s2 | uVar2 & unaff_s3;
  uVar2 = 0;
  do {
    iVar3 = FUN_0001056e(unaff_s1,uVar6);
    uVar6 = _LVL205(unaff_s1,extraout_fa0);
    if (unaff_s1 == unaff_s7) {
      iVar3 = iVar3 + 1;
    }
    uVar4 = iVar3 << 8 | extraout_a0_00;
    if ((uVar5 & 1) != 0) {
      uVar4 = uVar2 | uVar4 << 0x10;
      *(uint *)(((int)uVar5 >> 1) * 4 + unaff_s0) = uVar4;
    }
    if (unaff_s1 == 0x9b4) {
      *(uint *)(((int)uVar5 >> 1) * 4 + unaff_s0) = uVar4;
    }
    unaff_s1 = unaff_s1 + 4;
    uVar5 = uVar5 + 1;
    uVar2 = uVar4;
  } while (unaff_s1 != 0x9b8);
  uVar6 = _L0(0,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = in_stack_00000008 & 7 | _DAT_40001640 & 0xfffffff8;
  uVar6 = _L0(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010604(1,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 4 | _DAT_40001640 & 0xffffff8f;
  uVar6 = _L0(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010646(2,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 8 | _DAT_40001640 & 0xfffff8ff;
  uVar6 = FUN_00010674(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010682(3,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0xc | _DAT_40001640 & 0xffff8fff;
  uVar6 = FUN_000106a2(in_stack_0000000c,uVar6);
  uVar6 = FUN_000106b0(4,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001640 & 0xfff8ffff;
  uVar6 = FUN_000106d0(in_stack_0000000c,uVar6);
  uVar6 = FUN_000106de(5,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001640 & 0xff8fffff;
  uVar6 = FUN_000106fe(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001070c(6,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001640 & 0xf8ffffff;
  uVar6 = FUN_0001072c(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001073a(7,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001640 & 0x8fffffff;
  uVar6 = FUN_00010758(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010766(8,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = in_stack_00000008 & 7 | _DAT_40001644 & 0xfffffff8;
  uVar6 = FUN_00010782(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010790(9,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 4 | _DAT_40001644 & 0xffffff8f;
  uVar6 = FUN_000107b0(in_stack_0000000c,uVar6);
  uVar6 = FUN_000107be(10,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 8 | _DAT_40001644 & 0xfffff8ff;
  uVar6 = FUN_000107de(in_stack_0000000c,uVar6);
  uVar6 = FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0xc | _DAT_40001644 & 0xffff8fff;
  uVar6 = FUN_0001080e(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001644 & 0xfff8ffff;
  uVar6 = FUN_0001083e(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001644 & 0xff8fffff;
  uVar6 = FUN_0001086e(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001644 & 0xf8ffffff;
  uVar6 = FUN_0001089e(in_stack_0000000c,uVar6);
  uVar6 = FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001644 & 0x8fffffff;
  uVar6 = _L0(in_stack_0000000c,uVar6);
  _DAT_40001004 = _DAT_40001004 & 0xfffff7ff;
  uVar6 = FUN_000108e4(0,uVar6);
  _DAT_40001268 = _DAT_40001268 & 0xffff0000 | 0x1040;
  uVar6 = _L0(1,uVar6);
  _DAT_40001600 = _DAT_40001600 & 0x80ffffff | 0x80000000;
  _DAT_4000100c = _DAT_4000100c | 0x26;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  _DAT_40001220 = _DAT_40001220 & 0xf7ffffff;
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  uVar6 = _L0(1,uVar6);
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3 | 4;
  _L0(1,uVar6);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000104fe(void)

{
  float fVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  uint extraout_a0;
  int iVar3;
  uint extraout_a0_00;
  uint uVar4;
  uint unaff_s2;
  uint unaff_s3;
  undefined4 *unaff_s4;
  uint uVar5;
  uint unaff_s5;
  int unaff_s7;
  float unaff_fs0;
  float unaff_fs1;
  undefined4 uVar6;
  undefined4 extraout_fa0;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  uVar6 = FUN_000104fe();
  uVar2 = _L0(uVar6);
  fVar1 = fRam00000000 / unaff_fs0;
  *(uint *)(unaff_s0 + 0x8c) = uVar2 & unaff_s2 | unaff_s5;
  uVar2 = *(uint *)(unaff_s0 + 0x90);
  uVar6 = _LVL196(fVar1 * unaff_fs1);
  uVar5 = 0;
  uVar6 = _L0(*unaff_s4,unaff_s4[1],uVar6);
  uVar6 = _L0(uVar6);
  *(uint *)(unaff_s0 + 0x90) = extraout_a0 & unaff_s2 | uVar2 & unaff_s3;
  uVar2 = 0;
  do {
    iVar3 = FUN_0001056e(unaff_s1,uVar6);
    uVar6 = _LVL205(unaff_s1,extraout_fa0);
    if (unaff_s1 == unaff_s7) {
      iVar3 = iVar3 + 1;
    }
    uVar4 = iVar3 << 8 | extraout_a0_00;
    if ((uVar5 & 1) != 0) {
      uVar4 = uVar2 | uVar4 << 0x10;
      *(uint *)(((int)uVar5 >> 1) * 4 + unaff_s0) = uVar4;
    }
    if (unaff_s1 == 0x9b4) {
      *(uint *)(((int)uVar5 >> 1) * 4 + unaff_s0) = uVar4;
    }
    unaff_s1 = unaff_s1 + 4;
    uVar5 = uVar5 + 1;
    uVar2 = uVar4;
  } while (unaff_s1 != 0x9b8);
  uVar6 = _L0(0,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = in_stack_00000008 & 7 | _DAT_40001640 & 0xfffffff8;
  uVar6 = _L0(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010604(1,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 4 | _DAT_40001640 & 0xffffff8f;
  uVar6 = _L0(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010646(2,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 8 | _DAT_40001640 & 0xfffff8ff;
  uVar6 = FUN_00010674(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010682(3,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0xc | _DAT_40001640 & 0xffff8fff;
  uVar6 = FUN_000106a2(in_stack_0000000c,uVar6);
  uVar6 = FUN_000106b0(4,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001640 & 0xfff8ffff;
  uVar6 = FUN_000106d0(in_stack_0000000c,uVar6);
  uVar6 = FUN_000106de(5,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001640 & 0xff8fffff;
  uVar6 = FUN_000106fe(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001070c(6,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001640 & 0xf8ffffff;
  uVar6 = FUN_0001072c(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001073a(7,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001640 & 0x8fffffff;
  uVar6 = FUN_00010758(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010766(8,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = in_stack_00000008 & 7 | _DAT_40001644 & 0xfffffff8;
  uVar6 = FUN_00010782(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010790(9,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 4 | _DAT_40001644 & 0xffffff8f;
  uVar6 = FUN_000107b0(in_stack_0000000c,uVar6);
  uVar6 = FUN_000107be(10,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 8 | _DAT_40001644 & 0xfffff8ff;
  uVar6 = FUN_000107de(in_stack_0000000c,uVar6);
  uVar6 = FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0xc | _DAT_40001644 & 0xffff8fff;
  uVar6 = FUN_0001080e(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001644 & 0xfff8ffff;
  uVar6 = FUN_0001083e(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001644 & 0xff8fffff;
  uVar6 = FUN_0001086e(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001644 & 0xf8ffffff;
  uVar6 = FUN_0001089e(in_stack_0000000c,uVar6);
  uVar6 = FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001644 & 0x8fffffff;
  uVar6 = _L0(in_stack_0000000c,uVar6);
  _DAT_40001004 = _DAT_40001004 & 0xfffff7ff;
  uVar6 = FUN_000108e4(0,uVar6);
  _DAT_40001268 = _DAT_40001268 & 0xffff0000 | 0x1040;
  uVar6 = _L0(1,uVar6);
  _DAT_40001600 = _DAT_40001600 & 0x80ffffff | 0x80000000;
  _DAT_4000100c = _DAT_4000100c | 0x26;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  _DAT_40001220 = _DAT_40001220 & 0xf7ffffff;
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  uVar6 = _L0(1,uVar6);
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3 | 4;
  _L0(1,uVar6);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  float fVar1;
  int unaff_s0;
  int unaff_s1;
  uint uVar2;
  uint extraout_a0;
  int iVar3;
  uint extraout_a0_00;
  uint uVar4;
  uint unaff_s2;
  uint unaff_s3;
  undefined4 *unaff_s4;
  uint uVar5;
  uint unaff_s5;
  int unaff_s7;
  float unaff_fs0;
  float unaff_fs1;
  undefined4 uVar6;
  undefined4 extraout_fa0;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  uVar2 = _L0();
  fVar1 = fRam00000000 / unaff_fs0;
  *(uint *)(unaff_s0 + 0x8c) = uVar2 & unaff_s2 | unaff_s5;
  uVar2 = *(uint *)(unaff_s0 + 0x90);
  uVar6 = _LVL196(fVar1 * unaff_fs1);
  uVar5 = 0;
  uVar6 = _L0(*unaff_s4,unaff_s4[1],uVar6);
  uVar6 = _L0(uVar6);
  *(uint *)(unaff_s0 + 0x90) = extraout_a0 & unaff_s2 | uVar2 & unaff_s3;
  uVar2 = 0;
  do {
    iVar3 = FUN_0001056e(unaff_s1,uVar6);
    uVar6 = _LVL205(unaff_s1,extraout_fa0);
    if (unaff_s1 == unaff_s7) {
      iVar3 = iVar3 + 1;
    }
    uVar4 = iVar3 << 8 | extraout_a0_00;
    if ((uVar5 & 1) != 0) {
      uVar4 = uVar2 | uVar4 << 0x10;
      *(uint *)(((int)uVar5 >> 1) * 4 + unaff_s0) = uVar4;
    }
    if (unaff_s1 == 0x9b4) {
      *(uint *)(((int)uVar5 >> 1) * 4 + unaff_s0) = uVar4;
    }
    unaff_s1 = unaff_s1 + 4;
    uVar5 = uVar5 + 1;
    uVar2 = uVar4;
  } while (unaff_s1 != 0x9b8);
  uVar6 = _L0(0,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = in_stack_00000008 & 7 | _DAT_40001640 & 0xfffffff8;
  uVar6 = _L0(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010604(1,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 4 | _DAT_40001640 & 0xffffff8f;
  uVar6 = _L0(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010646(2,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 8 | _DAT_40001640 & 0xfffff8ff;
  uVar6 = FUN_00010674(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010682(3,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0xc | _DAT_40001640 & 0xffff8fff;
  uVar6 = FUN_000106a2(in_stack_0000000c,uVar6);
  uVar6 = FUN_000106b0(4,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001640 & 0xfff8ffff;
  uVar6 = FUN_000106d0(in_stack_0000000c,uVar6);
  uVar6 = FUN_000106de(5,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001640 & 0xff8fffff;
  uVar6 = FUN_000106fe(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001070c(6,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001640 & 0xf8ffffff;
  uVar6 = FUN_0001072c(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001073a(7,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001640 & 0x8fffffff;
  uVar6 = FUN_00010758(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010766(8,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = in_stack_00000008 & 7 | _DAT_40001644 & 0xfffffff8;
  uVar6 = FUN_00010782(in_stack_0000000c,uVar6);
  uVar6 = FUN_00010790(9,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 4 | _DAT_40001644 & 0xffffff8f;
  uVar6 = FUN_000107b0(in_stack_0000000c,uVar6);
  uVar6 = FUN_000107be(10,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 8 | _DAT_40001644 & 0xfffff8ff;
  uVar6 = FUN_000107de(in_stack_0000000c,uVar6);
  uVar6 = FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0xc | _DAT_40001644 & 0xffff8fff;
  uVar6 = FUN_0001080e(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001644 & 0xfff8ffff;
  uVar6 = FUN_0001083e(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001644 & 0xff8fffff;
  uVar6 = FUN_0001086e(in_stack_0000000c,uVar6);
  uVar6 = FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001644 & 0xf8ffffff;
  uVar6 = FUN_0001089e(in_stack_0000000c,uVar6);
  uVar6 = FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c,uVar6);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001644 & 0x8fffffff;
  uVar6 = _L0(in_stack_0000000c,uVar6);
  _DAT_40001004 = _DAT_40001004 & 0xfffff7ff;
  uVar6 = FUN_000108e4(0,uVar6);
  _DAT_40001268 = _DAT_40001268 & 0xffff0000 | 0x1040;
  uVar6 = _L0(1,uVar6);
  _DAT_40001600 = _DAT_40001600 & 0x80ffffff | 0x80000000;
  _DAT_4000100c = _DAT_4000100c | 0x26;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  _DAT_40001220 = _DAT_40001220 & 0xf7ffffff;
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  uVar6 = _L0(1,uVar6);
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3 | 4;
  _L0(1,uVar6);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _LVL196(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  int iVar2;
  uint unaff_s2;
  uint unaff_s3;
  undefined4 *unaff_s4;
  uint uVar3;
  uint unaff_s5;
  int unaff_s7;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  _LVL196();
  uVar3 = 0;
  _L0(*unaff_s4,unaff_s4[1]);
  uVar1 = _L0();
  *(uint *)(unaff_s0 + 0x90) = uVar1 & unaff_s2 | unaff_s3;
  do {
    iVar2 = FUN_0001056e(unaff_s1);
    uVar1 = _LVL205(unaff_s1);
    if (unaff_s1 == unaff_s7) {
      iVar2 = iVar2 + 1;
    }
    uVar1 = iVar2 << 8 | uVar1;
    if ((uVar3 & 1) != 0) {
      uVar1 = unaff_s5 | uVar1 << 0x10;
      *(uint *)(((int)uVar3 >> 1) * 4 + unaff_s0) = uVar1;
    }
    if (unaff_s1 == 0x9b4) {
      *(uint *)(((int)uVar3 >> 1) * 4 + unaff_s0) = uVar1;
    }
    unaff_s1 = unaff_s1 + 4;
    uVar3 = uVar3 + 1;
    unaff_s5 = uVar1;
  } while (unaff_s1 != 0x9b8);
  _L0(0,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = in_stack_00000008 & 7 | _DAT_40001640 & 0xfffffff8;
  _L0(in_stack_0000000c);
  FUN_00010604(1,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 4 | _DAT_40001640 & 0xffffff8f;
  _L0(in_stack_0000000c);
  FUN_00010646(2,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 8 | _DAT_40001640 & 0xfffff8ff;
  FUN_00010674(in_stack_0000000c);
  FUN_00010682(3,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0xc | _DAT_40001640 & 0xffff8fff;
  FUN_000106a2(in_stack_0000000c);
  FUN_000106b0(4,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001640 & 0xfff8ffff;
  FUN_000106d0(in_stack_0000000c);
  FUN_000106de(5,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001640 & 0xff8fffff;
  FUN_000106fe(in_stack_0000000c);
  FUN_0001070c(6,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001640 & 0xf8ffffff;
  FUN_0001072c(in_stack_0000000c);
  FUN_0001073a(7,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001640 & 0x8fffffff;
  FUN_00010758(in_stack_0000000c);
  FUN_00010766(8,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = in_stack_00000008 & 7 | _DAT_40001644 & 0xfffffff8;
  FUN_00010782(in_stack_0000000c);
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 4 | _DAT_40001644 & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 8 | _DAT_40001644 & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0xc | _DAT_40001644 & 0xffff8fff;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001644 & 0xfff8ffff;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001644 & 0xff8fffff;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001644 & 0xf8ffffff;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001644 & 0x8fffffff;
  _L0(in_stack_0000000c);
  _DAT_40001004 = _DAT_40001004 & 0xfffff7ff;
  FUN_000108e4(0);
  _DAT_40001268 = _DAT_40001268 & 0xffff0000 | 0x1040;
  _L0(1);
  _DAT_40001600 = _DAT_40001600 & 0x80ffffff | 0x80000000;
  _DAT_4000100c = _DAT_4000100c | 0x26;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  _DAT_40001220 = _DAT_40001220 & 0xf7ffffff;
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  int iVar2;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  int unaff_s7;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  _L0();
  uVar1 = _L0();
  *(uint *)(unaff_s0 + 0x90) = uVar1 & unaff_s2 | unaff_s3;
  do {
    iVar2 = FUN_0001056e(unaff_s1);
    uVar1 = _LVL205(unaff_s1);
    if (unaff_s1 == unaff_s7) {
      iVar2 = iVar2 + 1;
    }
    uVar1 = iVar2 << 8 | uVar1;
    if ((unaff_s4 & 1) != 0) {
      uVar1 = unaff_s5 | uVar1 << 0x10;
      *(uint *)(((int)unaff_s4 >> 1) * 4 + unaff_s0) = uVar1;
    }
    if (unaff_s1 == 0x9b4) {
      *(uint *)(((int)unaff_s4 >> 1) * 4 + unaff_s0) = uVar1;
    }
    unaff_s1 = unaff_s1 + 4;
    unaff_s4 = unaff_s4 + 1;
    unaff_s5 = uVar1;
  } while (unaff_s1 != 0x9b8);
  _L0(0,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = in_stack_00000008 & 7 | _DAT_40001640 & 0xfffffff8;
  _L0(in_stack_0000000c);
  FUN_00010604(1,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 4 | _DAT_40001640 & 0xffffff8f;
  _L0(in_stack_0000000c);
  FUN_00010646(2,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 8 | _DAT_40001640 & 0xfffff8ff;
  FUN_00010674(in_stack_0000000c);
  FUN_00010682(3,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0xc | _DAT_40001640 & 0xffff8fff;
  FUN_000106a2(in_stack_0000000c);
  FUN_000106b0(4,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001640 & 0xfff8ffff;
  FUN_000106d0(in_stack_0000000c);
  FUN_000106de(5,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001640 & 0xff8fffff;
  FUN_000106fe(in_stack_0000000c);
  FUN_0001070c(6,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001640 & 0xf8ffffff;
  FUN_0001072c(in_stack_0000000c);
  FUN_0001073a(7,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001640 & 0x8fffffff;
  FUN_00010758(in_stack_0000000c);
  FUN_00010766(8,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = in_stack_00000008 & 7 | _DAT_40001644 & 0xfffffff8;
  FUN_00010782(in_stack_0000000c);
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 4 | _DAT_40001644 & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 8 | _DAT_40001644 & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0xc | _DAT_40001644 & 0xffff8fff;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001644 & 0xfff8ffff;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001644 & 0xff8fffff;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001644 & 0xf8ffffff;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001644 & 0x8fffffff;
  _L0(in_stack_0000000c);
  _DAT_40001004 = _DAT_40001004 & 0xfffff7ff;
  FUN_000108e4(0);
  _DAT_40001268 = _DAT_40001268 & 0xffff0000 | 0x1040;
  _L0(1);
  _DAT_40001600 = _DAT_40001600 & 0x80ffffff | 0x80000000;
  _DAT_4000100c = _DAT_4000100c | 0x26;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  _DAT_40001220 = _DAT_40001220 & 0xf7ffffff;
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  int iVar2;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  int unaff_s7;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  uVar1 = _L0();
  *(uint *)(unaff_s0 + 0x90) = uVar1 & unaff_s2 | unaff_s3;
  do {
    iVar2 = FUN_0001056e(unaff_s1);
    uVar1 = _LVL205(unaff_s1);
    if (unaff_s1 == unaff_s7) {
      iVar2 = iVar2 + 1;
    }
    uVar1 = iVar2 << 8 | uVar1;
    if ((unaff_s4 & 1) != 0) {
      uVar1 = unaff_s5 | uVar1 << 0x10;
      *(uint *)(((int)unaff_s4 >> 1) * 4 + unaff_s0) = uVar1;
    }
    if (unaff_s1 == 0x9b4) {
      *(uint *)(((int)unaff_s4 >> 1) * 4 + unaff_s0) = uVar1;
    }
    unaff_s1 = unaff_s1 + 4;
    unaff_s4 = unaff_s4 + 1;
    unaff_s5 = uVar1;
  } while (unaff_s1 != 0x9b8);
  _L0(0,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = in_stack_00000008 & 7 | _DAT_40001640 & 0xfffffff8;
  _L0(in_stack_0000000c);
  FUN_00010604(1,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 4 | _DAT_40001640 & 0xffffff8f;
  _L0(in_stack_0000000c);
  FUN_00010646(2,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 8 | _DAT_40001640 & 0xfffff8ff;
  FUN_00010674(in_stack_0000000c);
  FUN_00010682(3,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0xc | _DAT_40001640 & 0xffff8fff;
  FUN_000106a2(in_stack_0000000c);
  FUN_000106b0(4,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001640 & 0xfff8ffff;
  FUN_000106d0(in_stack_0000000c);
  FUN_000106de(5,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001640 & 0xff8fffff;
  FUN_000106fe(in_stack_0000000c);
  FUN_0001070c(6,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001640 & 0xf8ffffff;
  FUN_0001072c(in_stack_0000000c);
  FUN_0001073a(7,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001640 & 0x8fffffff;
  FUN_00010758(in_stack_0000000c);
  FUN_00010766(8,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = in_stack_00000008 & 7 | _DAT_40001644 & 0xfffffff8;
  FUN_00010782(in_stack_0000000c);
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 4 | _DAT_40001644 & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 8 | _DAT_40001644 & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0xc | _DAT_40001644 & 0xffff8fff;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001644 & 0xfff8ffff;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001644 & 0xff8fffff;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001644 & 0xf8ffffff;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001644 & 0x8fffffff;
  _L0(in_stack_0000000c);
  _DAT_40001004 = _DAT_40001004 & 0xfffff7ff;
  FUN_000108e4(0);
  _DAT_40001268 = _DAT_40001268 & 0xffff0000 | 0x1040;
  _L0(1);
  _DAT_40001600 = _DAT_40001600 & 0x80ffffff | 0x80000000;
  _DAT_4000100c = _DAT_4000100c | 0x26;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  _DAT_40001220 = _DAT_40001220 & 0xf7ffffff;
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001056e(int param_1)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  uint uVar2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  do {
    iVar1 = FUN_0001056e(param_1);
    uVar2 = _LVL205(unaff_s1);
    if (unaff_s1 == unaff_s7) {
      iVar1 = iVar1 + 1;
    }
    uVar2 = iVar1 << 8 | uVar2;
    if ((unaff_s4 & 1) != 0) {
      uVar2 = unaff_s5 | uVar2 << 0x10;
      *(uint *)(((int)unaff_s4 >> 1) * 4 + unaff_s0) = uVar2;
    }
    if (unaff_s1 == unaff_s8) {
      *(uint *)(((int)unaff_s4 >> 1) * 4 + unaff_s0) = uVar2;
    }
    unaff_s1 = unaff_s1 + 4;
    unaff_s4 = unaff_s4 + 1;
    param_1 = unaff_s1;
    unaff_s5 = uVar2;
  } while (unaff_s1 != unaff_s6);
  _L0(0,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = in_stack_00000008 & 7 | _DAT_40001640 & 0xfffffff8;
  _L0(in_stack_0000000c);
  FUN_00010604(1,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 4 | _DAT_40001640 & 0xffffff8f;
  _L0(in_stack_0000000c);
  FUN_00010646(2,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 8 | _DAT_40001640 & 0xfffff8ff;
  FUN_00010674(in_stack_0000000c);
  FUN_00010682(3,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0xc | _DAT_40001640 & 0xffff8fff;
  FUN_000106a2(in_stack_0000000c);
  FUN_000106b0(4,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001640 & 0xfff8ffff;
  FUN_000106d0(in_stack_0000000c);
  FUN_000106de(5,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001640 & 0xff8fffff;
  FUN_000106fe(in_stack_0000000c);
  FUN_0001070c(6,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001640 & 0xf8ffffff;
  FUN_0001072c(in_stack_0000000c);
  FUN_0001073a(7,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001640 & 0x8fffffff;
  FUN_00010758(in_stack_0000000c);
  FUN_00010766(8,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = in_stack_00000008 & 7 | _DAT_40001644 & 0xfffffff8;
  FUN_00010782(in_stack_0000000c);
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 4 | _DAT_40001644 & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 8 | _DAT_40001644 & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0xc | _DAT_40001644 & 0xffff8fff;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001644 & 0xfff8ffff;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001644 & 0xff8fffff;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001644 & 0xf8ffffff;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001644 & 0x8fffffff;
  _L0(in_stack_0000000c);
  _DAT_40001004 = _DAT_40001004 & 0xfffff7ff;
  FUN_000108e4(0);
  _DAT_40001268 = _DAT_40001268 & 0xffff0000 | unaff_s3 + 0x40U;
  _L0(1);
  _DAT_40001600 = _DAT_40001600 & 0x80ffffff | 0x80000000;
  _DAT_4000100c = _DAT_4000100c | 0x26;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  _DAT_40001220 = _DAT_40001220 & 0xf7ffffff;
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _LVL205(int param_1)

{
  int unaff_s0;
  int unaff_s1;
  uint uVar1;
  int unaff_s2;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  int unaff_s6;
  int unaff_s7;
  int unaff_s8;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  while( true ) {
    uVar1 = _LVL205(param_1);
    if (unaff_s1 == unaff_s7) {
      unaff_s2 = unaff_s2 + 1;
    }
    uVar1 = unaff_s2 << 8 | uVar1;
    if ((unaff_s4 & 1) != 0) {
      uVar1 = unaff_s5 | uVar1 << 0x10;
      *(uint *)(((int)unaff_s4 >> 1) * 4 + unaff_s0) = uVar1;
    }
    if (unaff_s1 == unaff_s8) {
      *(uint *)(((int)unaff_s4 >> 1) * 4 + unaff_s0) = uVar1;
    }
    unaff_s1 = unaff_s1 + 4;
    unaff_s4 = unaff_s4 + 1;
    if (unaff_s1 == unaff_s6) break;
    unaff_s2 = FUN_0001056e(unaff_s1);
    param_1 = unaff_s1;
    unaff_s5 = uVar1;
  }
  _L0(0,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = in_stack_00000008 & 7 | _DAT_40001640 & 0xfffffff8;
  _L0(in_stack_0000000c);
  FUN_00010604(1,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 4 | _DAT_40001640 & 0xffffff8f;
  _L0(in_stack_0000000c);
  FUN_00010646(2,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 8 | _DAT_40001640 & 0xfffff8ff;
  FUN_00010674(in_stack_0000000c);
  FUN_00010682(3,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0xc | _DAT_40001640 & 0xffff8fff;
  FUN_000106a2(in_stack_0000000c);
  FUN_000106b0(4,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001640 & 0xfff8ffff;
  FUN_000106d0(in_stack_0000000c);
  FUN_000106de(5,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001640 & 0xff8fffff;
  FUN_000106fe(in_stack_0000000c);
  FUN_0001070c(6,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001640 & 0xf8ffffff;
  FUN_0001072c(in_stack_0000000c);
  FUN_0001073a(7,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001640 & 0x8fffffff;
  FUN_00010758(in_stack_0000000c);
  FUN_00010766(8,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = in_stack_00000008 & 7 | _DAT_40001644 & 0xfffffff8;
  FUN_00010782(in_stack_0000000c);
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 4 | _DAT_40001644 & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 8 | _DAT_40001644 & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0xc | _DAT_40001644 & 0xffff8fff;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001644 & 0xfff8ffff;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001644 & 0xff8fffff;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001644 & 0xf8ffffff;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001644 & 0x8fffffff;
  _L0(in_stack_0000000c);
  _DAT_40001004 = _DAT_40001004 & 0xfffff7ff;
  FUN_000108e4(0);
  _DAT_40001268 = _DAT_40001268 & 0xffff0000 | unaff_s3 + 0x40U;
  _L0(1);
  _DAT_40001600 = _DAT_40001600 & 0x80ffffff | 0x80000000;
  _DAT_4000100c = _DAT_4000100c | 0x26;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  _DAT_40001220 = _DAT_40001220 & 0xf7ffffff;
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  _DAT_40001004 = _DAT_40001004 & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int unaff_s3;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  _L0();
  *(uint *)(unaff_s0 + 0x640) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x640) & 0xfffffff8;
  _L0(in_stack_0000000c);
  FUN_00010604(1,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x640) & 0xffffff8f;
  _L0(in_stack_0000000c);
  FUN_00010646(2,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x640) & 0xfffff8ff;
  FUN_00010674(in_stack_0000000c);
  FUN_00010682(3,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0xc | *(uint *)(unaff_s0 + 0x640) & 0xffff8fff;
  FUN_000106a2(in_stack_0000000c);
  FUN_000106b0(4,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x10 | *(uint *)(unaff_s0 + 0x640) & 0xfff8ffff;
  FUN_000106d0(in_stack_0000000c);
  FUN_000106de(5,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x14 | *(uint *)(unaff_s0 + 0x640) & 0xff8fffff;
  FUN_000106fe(in_stack_0000000c);
  FUN_0001070c(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x18 | *(uint *)(unaff_s0 + 0x640) & 0xf8ffffff;
  FUN_0001072c(in_stack_0000000c);
  FUN_0001073a(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x1c | *(uint *)(unaff_s0 + 0x640) & 0x8fffffff;
  FUN_00010758(in_stack_0000000c);
  FUN_00010766(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00010782(in_stack_0000000c);
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0xc | *(uint *)(unaff_s0 + 0x644) & 0xffff8fff;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x10 | *(uint *)(unaff_s0 + 0x644) & 0xfff8ffff;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x14 | *(uint *)(unaff_s0 + 0x644) & 0xff8fffff;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x18 | *(uint *)(unaff_s0 + 0x644) & 0xf8ffffff;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x1c | *(uint *)(unaff_s0 + 0x644) & 0x8fffffff;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3 + 0x40U;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int unaff_s3;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  _L0();
  FUN_00010604(1,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x640) & 0xffffff8f;
  _L0(in_stack_0000000c);
  FUN_00010646(2,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x640) & 0xfffff8ff;
  FUN_00010674(in_stack_0000000c);
  FUN_00010682(3,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x640) & unaff_s11;
  FUN_000106a2(in_stack_0000000c);
  FUN_000106b0(4,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x640) & unaff_s9;
  FUN_000106d0(in_stack_0000000c);
  FUN_000106de(5,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x14 | *(uint *)(unaff_s0 + 0x640) & 0xff8fffff;
  FUN_000106fe(in_stack_0000000c);
  FUN_0001070c(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x18 | *(uint *)(unaff_s0 + 0x640) & 0xf8ffffff;
  FUN_0001072c(in_stack_0000000c);
  FUN_0001073a(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x1c | *(uint *)(unaff_s0 + 0x640) & 0x8fffffff;
  FUN_00010758(in_stack_0000000c);
  FUN_00010766(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00010782(in_stack_0000000c);
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x644) & unaff_s11;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x14 | *(uint *)(unaff_s0 + 0x644) & 0xff8fffff;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x18 | *(uint *)(unaff_s0 + 0x644) & 0xf8ffffff;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x1c | *(uint *)(unaff_s0 + 0x644) & 0x8fffffff;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3 + 0x40U;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010604(void)

{
  int unaff_s0;
  int unaff_s3;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00010604();
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x640) & 0xffffff8f;
  _L0(in_stack_0000000c);
  FUN_00010646(2,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x640) & 0xfffff8ff;
  FUN_00010674(in_stack_0000000c);
  FUN_00010682(3,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x640) & unaff_s11;
  FUN_000106a2(in_stack_0000000c);
  FUN_000106b0(4,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x640) & unaff_s9;
  FUN_000106d0(in_stack_0000000c);
  FUN_000106de(5,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x14 | *(uint *)(unaff_s0 + 0x640) & 0xff8fffff;
  FUN_000106fe(in_stack_0000000c);
  FUN_0001070c(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x18 | *(uint *)(unaff_s0 + 0x640) & 0xf8ffffff;
  FUN_0001072c(in_stack_0000000c);
  FUN_0001073a(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x1c | *(uint *)(unaff_s0 + 0x640) & 0x8fffffff;
  FUN_00010758(in_stack_0000000c);
  FUN_00010766(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00010782(in_stack_0000000c);
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x644) & unaff_s11;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x14 | *(uint *)(unaff_s0 + 0x644) & 0xff8fffff;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x18 | *(uint *)(unaff_s0 + 0x644) & 0xf8ffffff;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x1c | *(uint *)(unaff_s0 + 0x644) & 0x8fffffff;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3 + 0x40U;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  _L0();
  FUN_00010646(2,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x640) & 0xfffff8ff;
  FUN_00010674(in_stack_0000000c);
  FUN_00010682(3,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x640) & unaff_s11;
  FUN_000106a2(in_stack_0000000c);
  FUN_000106b0(4,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x640) & unaff_s9;
  FUN_000106d0(in_stack_0000000c);
  FUN_000106de(5,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x640) & unaff_s7;
  FUN_000106fe(in_stack_0000000c);
  FUN_0001070c(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x640) & unaff_s5;
  FUN_0001072c(in_stack_0000000c);
  FUN_0001073a(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x1c | *(uint *)(unaff_s0 + 0x640) & 0x8fffffff;
  FUN_00010758(in_stack_0000000c);
  FUN_00010766(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00010782(in_stack_0000000c);
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x644) & unaff_s11;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x1c | *(uint *)(unaff_s0 + 0x644) & 0x8fffffff;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3 + 0x40U;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010646(void)

{
  int unaff_s0;
  int unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00010646();
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x640) & 0xfffff8ff;
  FUN_00010674(in_stack_0000000c);
  FUN_00010682(3,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x640) & unaff_s11;
  FUN_000106a2(in_stack_0000000c);
  FUN_000106b0(4,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x640) & unaff_s9;
  FUN_000106d0(in_stack_0000000c);
  FUN_000106de(5,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x640) & unaff_s7;
  FUN_000106fe(in_stack_0000000c);
  FUN_0001070c(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x640) & unaff_s5;
  FUN_0001072c(in_stack_0000000c);
  FUN_0001073a(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x1c | *(uint *)(unaff_s0 + 0x640) & 0x8fffffff;
  FUN_00010758(in_stack_0000000c);
  FUN_00010766(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00010782(in_stack_0000000c);
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x644) & unaff_s11;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x1c | *(uint *)(unaff_s0 + 0x644) & 0x8fffffff;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3 + 0x40U;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010674(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00010674();
  FUN_00010682(3,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x640) & unaff_s11;
  FUN_000106a2(in_stack_0000000c);
  FUN_000106b0(4,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x640) & unaff_s9;
  FUN_000106d0(in_stack_0000000c);
  FUN_000106de(5,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x640) & unaff_s7;
  FUN_000106fe(in_stack_0000000c);
  FUN_0001070c(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x640) & unaff_s5;
  FUN_0001072c(in_stack_0000000c);
  FUN_0001073a(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x640) & unaff_s2;
  FUN_00010758(in_stack_0000000c);
  FUN_00010766(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00010782(in_stack_0000000c);
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x644) & unaff_s11;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010682(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00010682();
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x640) & unaff_s11;
  FUN_000106a2(in_stack_0000000c);
  FUN_000106b0(4,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x640) & unaff_s9;
  FUN_000106d0(in_stack_0000000c);
  FUN_000106de(5,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x640) & unaff_s7;
  FUN_000106fe(in_stack_0000000c);
  FUN_0001070c(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x640) & unaff_s5;
  FUN_0001072c(in_stack_0000000c);
  FUN_0001073a(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x640) & unaff_s2;
  FUN_00010758(in_stack_0000000c);
  FUN_00010766(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00010782(in_stack_0000000c);
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x644) & unaff_s11;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000106a2(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_000106a2();
  FUN_000106b0(4,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x640) & unaff_s9;
  FUN_000106d0(in_stack_0000000c);
  FUN_000106de(5,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x640) & unaff_s7;
  FUN_000106fe(in_stack_0000000c);
  FUN_0001070c(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x640) & unaff_s5;
  FUN_0001072c(in_stack_0000000c);
  FUN_0001073a(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x640) & unaff_s2;
  FUN_00010758(in_stack_0000000c);
  FUN_00010766(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00010782(in_stack_0000000c);
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x644) & unaff_s11;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000106b0(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_000106b0();
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x640) & unaff_s9;
  FUN_000106d0(in_stack_0000000c);
  FUN_000106de(5,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x640) & unaff_s7;
  FUN_000106fe(in_stack_0000000c);
  FUN_0001070c(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x640) & unaff_s5;
  FUN_0001072c(in_stack_0000000c);
  FUN_0001073a(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x640) & unaff_s2;
  FUN_00010758(in_stack_0000000c);
  FUN_00010766(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00010782(in_stack_0000000c);
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x644) & unaff_s11;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000106d0(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_000106d0();
  FUN_000106de(5,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x640) & unaff_s7;
  FUN_000106fe(in_stack_0000000c);
  FUN_0001070c(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x640) & unaff_s5;
  FUN_0001072c(in_stack_0000000c);
  FUN_0001073a(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x640) & unaff_s2;
  FUN_00010758(in_stack_0000000c);
  FUN_00010766(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00010782(in_stack_0000000c);
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x644) & unaff_s11;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000106de(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_000106de();
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x640) & unaff_s7;
  FUN_000106fe(in_stack_0000000c);
  FUN_0001070c(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x640) & unaff_s5;
  FUN_0001072c(in_stack_0000000c);
  FUN_0001073a(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x640) & unaff_s2;
  FUN_00010758(in_stack_0000000c);
  FUN_00010766(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00010782(in_stack_0000000c);
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x644) & unaff_s11;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000106fe(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_000106fe();
  FUN_0001070c(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x640) & unaff_s5;
  FUN_0001072c(in_stack_0000000c);
  FUN_0001073a(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x640) & unaff_s2;
  FUN_00010758(in_stack_0000000c);
  FUN_00010766(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00010782(in_stack_0000000c);
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x644) & unaff_s11;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001070c(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_0001070c();
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x640) & unaff_s5;
  FUN_0001072c(in_stack_0000000c);
  FUN_0001073a(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x640) & unaff_s2;
  FUN_00010758(in_stack_0000000c);
  FUN_00010766(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00010782(in_stack_0000000c);
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x644) & unaff_s11;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001072c(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_0001072c();
  FUN_0001073a(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x640) & unaff_s2;
  FUN_00010758(in_stack_0000000c);
  FUN_00010766(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00010782(in_stack_0000000c);
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x644) & unaff_s11;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001073a(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_0001073a();
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x640) & unaff_s2;
  FUN_00010758(in_stack_0000000c);
  FUN_00010766(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00010782(in_stack_0000000c);
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x644) & unaff_s11;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010758(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00010758();
  FUN_00010766(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00010782(in_stack_0000000c);
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x644) & unaff_s11;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010766(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00010766();
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00010782(in_stack_0000000c);
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x644) & unaff_s11;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010782(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00010782();
  FUN_00010790(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x644) & unaff_s11;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010790(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00010790();
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_000107b0(in_stack_0000000c);
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x644) & unaff_s11;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000107b0(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_000107b0();
  FUN_000107be(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x644) & unaff_s11;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000107be(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_000107be();
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_000107de(in_stack_0000000c);
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x644) & unaff_s11;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000107de(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_000107de();
  FUN_000107ec(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x644) & unaff_s11;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000107ec(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint unaff_s11;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_000107ec();
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s10 | *(uint *)(unaff_s0 + 0x644) & unaff_s11;
  FUN_0001080e(in_stack_0000000c);
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001080e(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_0001080e();
  FUN_0001081c(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001081c(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_0001081c();
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s8 | *(uint *)(unaff_s0 + 0x644) & unaff_s9;
  FUN_0001083e(in_stack_0000000c);
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001083e(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_0001083e();
  FUN_0001084c(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001084c(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_0001084c();
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s6 | *(uint *)(unaff_s0 + 0x644) & unaff_s7;
  FUN_0001086e(in_stack_0000000c);
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001086e(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_0001086e();
  FUN_0001087c(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001087c(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_0001087c();
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s4 | *(uint *)(unaff_s0 + 0x644) & unaff_s5;
  FUN_0001089e(in_stack_0000000c);
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001089e(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_0001089e();
  FUN_000108ac(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000108ac(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_000108ac();
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  _L0(in_stack_0000000c);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & 0xffff0000 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & 0xffff0000;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s3;
  
  _L0();
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  FUN_000108e4(0);
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & unaff_s1 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & unaff_s1;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000108e4(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s3;
  
  FUN_000108e4();
  *(uint *)(unaff_s0 + 0x268) = *(uint *)(unaff_s0 + 0x268) & unaff_s1 | unaff_s3;
  _L0(1);
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & unaff_s1;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  uint unaff_s1;
  
  _L0();
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 4;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) | 0x80000000;
  *(uint *)(unaff_s0 + 0x600) = *(uint *)(unaff_s0 + 0x600) & 0x80ffffff;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 0x20;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) | 2;
  _DAT_44c0c218 = _DAT_44c0c218 & unaff_s1;
  _DAT_44c03030 = 0;
  _DAT_44c03034 = 0xa027f7f;
  _DAT_44c03038 = 0x23282317;
  _DAT_44c0303c = 0x7f020a17;
  _DAT_44c03040 = 0x7f;
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xf7ffffff;
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3;
  _DAT_4000e41c = _DAT_4000e41c & 0xffffffbf;
  _L0(1);
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  _DAT_4000e41c = _DAT_4000e41c | 0x40;
  return;
}



void _L0(void)

{
  int unaff_s0;
  int unaff_s1;
  
  _L0();
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffffff3 | 4;
  _L0(1);
  *(uint *)(unaff_s1 + 0x41c) = *(uint *)(unaff_s1 + 0x41c) | 0x40;
  return;
}



void _L0(void)

{
  int unaff_s1;
  
  _L0();
  *(uint *)(unaff_s1 + 0x41c) = *(uint *)(unaff_s1 + 0x41c) | 0x40;
  return;
}



void rfc_reset(void)

{
  uRam00000000 = 0;
  return;
}



void rfc_ver_set(uint8_t ver)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_txdfe_start(void)

{
  _DAT_40001220 = _DAT_40001220 | 0x80;
  _L0(1);
  _DAT_40001220 = _DAT_40001220 | 0x100;
  return;
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) | 0x100;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_txdfe_stop(void)

{
  _DAT_40001220 = _DAT_40001220 & 0xffffff7f;
  _L0(1);
  _DAT_40001220 = _DAT_40001220 & 0xfffffeff;
  return;
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  *(uint *)(unaff_s0 + 0x220) = *(uint *)(unaff_s0 + 0x220) & 0xfffffeff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_txdfe_mux(int8_t signal_source)

{
  _DAT_40001220 = ((byte)signal_source & 3) << 0xb | _DAT_40001220 & 0xffffe7ff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_txdfe_set_dvga(int8_t dvga_qdb)

{
  if ((byte)(dvga_qdb + 0x30U) < 0x49) {
    _DAT_40001600 = ((byte)dvga_qdb & 0x7f) << 0x18 | _DAT_40001600 & 0x80ffffff;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_txdfe_set_iqgaincomp(uint8_t en,uint16_t coeff)

{
  _DAT_40001600 = (coeff & 0x7ff) << 0xc | (en & 1) << 0x17 | _DAT_40001600 & 0xff000fff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_txdfe_set_iqphasecomp(uint8_t en,int16_t coeff)

{
  _DAT_40001600 = (ushort)coeff & 0x3ff | (en & 1) << 10 | _DAT_40001600 & 0xfffff800;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_txdfe_set_dccomp(int16_t dcc_i,int16_t dcc_q)

{
  _DAT_40001604 =
       ((ushort)dcc_q & 0xfff) << 0x10 | (ushort)dcc_i & 0xfff | _DAT_40001604 & 0xf000f000;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_txdfe_set_iqswap(uint8_t swap_on)

{
  _DAT_40001604 = _DAT_40001604 & 0x7fffffff | (uint)swap_on << 0x1f;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_rxdfe_start(void)

{
  _DAT_40001220 = _DAT_40001220 | 0x60;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_rxdfe_stop(void)

{
  _DAT_40001220 = _DAT_40001220 & 0xffffff9f;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_rxdfe_set_iqgaincomp(uint8_t en,uint16_t coeff)

{
  _DAT_40001614 = (coeff & 0x7ff) << 0xc | (en & 1) << 0x17 | _DAT_40001614 & 0xff000fff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_rxdfe_set_iqphasecomp(uint8_t en,int16_t coeff)

{
  _DAT_40001614 = (ushort)coeff & 0x3ff | (en & 1) << 10 | _DAT_40001614 & 0xfffff800;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_rxdfe_set_dccomp(int16_t dcc_i,int16_t dcc_q)

{
  _DAT_40001608 =
       ((ushort)dcc_q & 0x3ff) << 0x10 | (ushort)dcc_i & 0x3ff | _DAT_40001608 & 0xfc00fc00;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_rxdfe_set_iqswap(uint8_t swap_on)

{
  _DAT_40001608 = _DAT_40001608 & 0x7fffffff | (uint)swap_on << 0x1f;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_rxdfe_set_notch0(uint8_t en,uint8_t alpha,int8_t nrmfc)

{
  _DAT_40001700 = (en & 1) << 6 | (uint)(byte)nrmfc << 8 | alpha & 7 | _DAT_40001700 & 0xffff00b8;
  return;
}



// WARNING: Variable defined which should be unmapped: ncf_freq_hz
// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_config_channel(uint32_t channel_freq)

{
  char cVar1;
  undefined uStack21;
  uint8_t ncf_on;
  undefined4 uStack20;
  int32_t ncf_freq_hz;
  
  _DAT_40001228 = _DAT_40001228 | 8;
  _DAT_4000100c = _DAT_4000100c | 0x241;
  _DAT_40001264 = channel_freq & 0xfff | _DAT_40001264 & 0xfffff000;
  _DAT_40001268 = _DAT_40001268 & 0xfffdffff | 0x20000;
  _L0(10);
  _DAT_40001268 = _DAT_40001268 & 0xfffdffff;
  _L0(10);
  FUN_00010d10(0);
  FUN_00010d1a(10);
  FUN_00010d24(1);
  FUN_00010d2e(10);
  _DAT_4000126c = _DAT_4000126c & 0xfffffff8 | 1;
  _L0(10);
  FUN_00010d50(1);
  FUN_00010d5a(10);
  _DAT_4000126c = _DAT_4000126c & 0xfffffff8 | 2;
  _L0(100);
  FUN_00010d7e(0);
  FUN_00010d88(10);
  _L0();
  FUN_00010d9a(channel_freq);
  FUN_00010daa(channel_freq,&uStack21,&stack0xffffffec);
  FUN_00010db4(uStack20);
  FUN_00010dc8(uRam00000000,_DAT_00000004);
  FUN_00010ddc(uRam00000000,_DAT_00000004);
  FUN_00010df0(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_00010e0c(uStack21,1,(int)cVar1);
  _DAT_40001228 = _DAT_40001228 & 0xfffffff7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  uint unaff_s1;
  char cVar1;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  _L0();
  *(uint *)(unaff_s0 + 0x268) = unaff_s1 & *(uint *)(unaff_s0 + 0x268);
  _L0(10);
  FUN_00010d10(0);
  FUN_00010d1a(10);
  FUN_00010d24(1);
  FUN_00010d2e(10);
  *(uint *)(unaff_s0 + 0x26c) = *(uint *)(unaff_s0 + 0x26c) & 0xfffffff8 | 1;
  _L0(10);
  FUN_00010d50(1);
  FUN_00010d5a(10);
  *(uint *)(unaff_s0 + 0x26c) = *(uint *)(unaff_s0 + 0x26c) & 0xfffffff8 | 2;
  _L0(100);
  FUN_00010d7e(0);
  FUN_00010d88(10);
  _L0();
  FUN_00010d9a();
  FUN_00010daa(&stack0x0000000b,&stack0x0000000c);
  FUN_00010db4(in_stack_0000000c);
  FUN_00010dc8(uRam00000000,_DAT_00000004);
  FUN_00010ddc(uRam00000000,_DAT_00000004);
  FUN_00010df0(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_00010e0c(in_stack_0000000b,1,(int)cVar1);
  *(uint *)(unaff_s0 + 0x228) = *(uint *)(unaff_s0 + 0x228) & 0xfffffff7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  char cVar1;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  _L0();
  FUN_00010d10(0);
  FUN_00010d1a(10);
  FUN_00010d24(1);
  FUN_00010d2e(10);
  *(uint *)(unaff_s0 + 0x26c) = *(uint *)(unaff_s0 + 0x26c) & 0xfffffff8 | 1;
  _L0(10);
  FUN_00010d50(1);
  FUN_00010d5a(10);
  *(uint *)(unaff_s0 + 0x26c) = *(uint *)(unaff_s0 + 0x26c) & 0xfffffff8 | 2;
  _L0(100);
  FUN_00010d7e(0);
  FUN_00010d88(10);
  _L0();
  FUN_00010d9a();
  FUN_00010daa(&stack0x0000000b,&stack0x0000000c);
  FUN_00010db4(in_stack_0000000c);
  FUN_00010dc8(uRam00000000,_DAT_00000004);
  FUN_00010ddc(uRam00000000,_DAT_00000004);
  FUN_00010df0(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_00010e0c(in_stack_0000000b,1,(int)cVar1);
  *(uint *)(unaff_s0 + 0x228) = *(uint *)(unaff_s0 + 0x228) & 0xfffffff7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010d10(void)

{
  int unaff_s0;
  char cVar1;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  FUN_00010d10();
  FUN_00010d1a(10);
  FUN_00010d24(1);
  FUN_00010d2e(10);
  *(uint *)(unaff_s0 + 0x26c) = *(uint *)(unaff_s0 + 0x26c) & 0xfffffff8 | 1;
  _L0(10);
  FUN_00010d50(1);
  FUN_00010d5a(10);
  *(uint *)(unaff_s0 + 0x26c) = *(uint *)(unaff_s0 + 0x26c) & 0xfffffff8 | 2;
  _L0(100);
  FUN_00010d7e(0);
  FUN_00010d88(10);
  _L0();
  FUN_00010d9a();
  FUN_00010daa(&stack0x0000000b,&stack0x0000000c);
  FUN_00010db4(in_stack_0000000c);
  FUN_00010dc8(uRam00000000,_DAT_00000004);
  FUN_00010ddc(uRam00000000,_DAT_00000004);
  FUN_00010df0(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_00010e0c(in_stack_0000000b,1,(int)cVar1);
  *(uint *)(unaff_s0 + 0x228) = *(uint *)(unaff_s0 + 0x228) & 0xfffffff7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010d1a(void)

{
  int unaff_s0;
  char cVar1;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  FUN_00010d1a();
  FUN_00010d24(1);
  FUN_00010d2e(10);
  *(uint *)(unaff_s0 + 0x26c) = *(uint *)(unaff_s0 + 0x26c) & 0xfffffff8 | 1;
  _L0(10);
  FUN_00010d50(1);
  FUN_00010d5a(10);
  *(uint *)(unaff_s0 + 0x26c) = *(uint *)(unaff_s0 + 0x26c) & 0xfffffff8 | 2;
  _L0(100);
  FUN_00010d7e(0);
  FUN_00010d88(10);
  _L0();
  FUN_00010d9a();
  FUN_00010daa(&stack0x0000000b,&stack0x0000000c);
  FUN_00010db4(in_stack_0000000c);
  FUN_00010dc8(uRam00000000,_DAT_00000004);
  FUN_00010ddc(uRam00000000,_DAT_00000004);
  FUN_00010df0(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_00010e0c(in_stack_0000000b,1,(int)cVar1);
  *(uint *)(unaff_s0 + 0x228) = *(uint *)(unaff_s0 + 0x228) & 0xfffffff7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010d24(void)

{
  int unaff_s0;
  char cVar1;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  FUN_00010d24();
  FUN_00010d2e(10);
  *(uint *)(unaff_s0 + 0x26c) = *(uint *)(unaff_s0 + 0x26c) & 0xfffffff8 | 1;
  _L0(10);
  FUN_00010d50(1);
  FUN_00010d5a(10);
  *(uint *)(unaff_s0 + 0x26c) = *(uint *)(unaff_s0 + 0x26c) & 0xfffffff8 | 2;
  _L0(100);
  FUN_00010d7e(0);
  FUN_00010d88(10);
  _L0();
  FUN_00010d9a();
  FUN_00010daa(&stack0x0000000b,&stack0x0000000c);
  FUN_00010db4(in_stack_0000000c);
  FUN_00010dc8(uRam00000000,_DAT_00000004);
  FUN_00010ddc(uRam00000000,_DAT_00000004);
  FUN_00010df0(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_00010e0c(in_stack_0000000b,1,(int)cVar1);
  *(uint *)(unaff_s0 + 0x228) = *(uint *)(unaff_s0 + 0x228) & 0xfffffff7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010d2e(void)

{
  int unaff_s0;
  char cVar1;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  FUN_00010d2e();
  *(uint *)(unaff_s0 + 0x26c) = *(uint *)(unaff_s0 + 0x26c) & 0xfffffff8 | 1;
  _L0(10);
  FUN_00010d50(1);
  FUN_00010d5a(10);
  *(uint *)(unaff_s0 + 0x26c) = *(uint *)(unaff_s0 + 0x26c) & 0xfffffff8 | 2;
  _L0(100);
  FUN_00010d7e(0);
  FUN_00010d88(10);
  _L0();
  FUN_00010d9a();
  FUN_00010daa(&stack0x0000000b,&stack0x0000000c);
  FUN_00010db4(in_stack_0000000c);
  FUN_00010dc8(uRam00000000,_DAT_00000004);
  FUN_00010ddc(uRam00000000,_DAT_00000004);
  FUN_00010df0(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_00010e0c(in_stack_0000000b,1,(int)cVar1);
  *(uint *)(unaff_s0 + 0x228) = *(uint *)(unaff_s0 + 0x228) & 0xfffffff7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  char cVar1;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  _L0();
  FUN_00010d50(1);
  FUN_00010d5a(10);
  *(uint *)(unaff_s0 + 0x26c) = *(uint *)(unaff_s0 + 0x26c) & 0xfffffff8 | 2;
  _L0(100);
  FUN_00010d7e(0);
  FUN_00010d88(10);
  _L0();
  FUN_00010d9a();
  FUN_00010daa(&stack0x0000000b,&stack0x0000000c);
  FUN_00010db4(in_stack_0000000c);
  FUN_00010dc8(uRam00000000,_DAT_00000004);
  FUN_00010ddc(uRam00000000,_DAT_00000004);
  FUN_00010df0(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_00010e0c(in_stack_0000000b,1,(int)cVar1);
  *(uint *)(unaff_s0 + 0x228) = *(uint *)(unaff_s0 + 0x228) & 0xfffffff7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010d50(void)

{
  int unaff_s0;
  char cVar1;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  FUN_00010d50();
  FUN_00010d5a(10);
  *(uint *)(unaff_s0 + 0x26c) = *(uint *)(unaff_s0 + 0x26c) & 0xfffffff8 | 2;
  _L0(100);
  FUN_00010d7e(0);
  FUN_00010d88(10);
  _L0();
  FUN_00010d9a();
  FUN_00010daa(&stack0x0000000b,&stack0x0000000c);
  FUN_00010db4(in_stack_0000000c);
  FUN_00010dc8(uRam00000000,_DAT_00000004);
  FUN_00010ddc(uRam00000000,_DAT_00000004);
  FUN_00010df0(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_00010e0c(in_stack_0000000b,1,(int)cVar1);
  *(uint *)(unaff_s0 + 0x228) = *(uint *)(unaff_s0 + 0x228) & 0xfffffff7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010d5a(void)

{
  int unaff_s0;
  char cVar1;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  FUN_00010d5a();
  *(uint *)(unaff_s0 + 0x26c) = *(uint *)(unaff_s0 + 0x26c) & 0xfffffff8 | 2;
  _L0(100);
  FUN_00010d7e(0);
  FUN_00010d88(10);
  _L0();
  FUN_00010d9a();
  FUN_00010daa(&stack0x0000000b,&stack0x0000000c);
  FUN_00010db4(in_stack_0000000c);
  FUN_00010dc8(uRam00000000,_DAT_00000004);
  FUN_00010ddc(uRam00000000,_DAT_00000004);
  FUN_00010df0(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_00010e0c(in_stack_0000000b,1,(int)cVar1);
  *(uint *)(unaff_s0 + 0x228) = *(uint *)(unaff_s0 + 0x228) & 0xfffffff7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  char cVar1;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  _L0();
  FUN_00010d7e(0);
  FUN_00010d88(10);
  _L0();
  FUN_00010d9a();
  FUN_00010daa(&stack0x0000000b,&stack0x0000000c);
  FUN_00010db4(in_stack_0000000c);
  FUN_00010dc8(uRam00000000,_DAT_00000004);
  FUN_00010ddc(uRam00000000,_DAT_00000004);
  FUN_00010df0(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_00010e0c(in_stack_0000000b,1,(int)cVar1);
  *(uint *)(unaff_s0 + 0x228) = *(uint *)(unaff_s0 + 0x228) & 0xfffffff7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010d7e(void)

{
  int unaff_s0;
  char cVar1;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  FUN_00010d7e();
  FUN_00010d88(10);
  _L0();
  FUN_00010d9a();
  FUN_00010daa(&stack0x0000000b,&stack0x0000000c);
  FUN_00010db4(in_stack_0000000c);
  FUN_00010dc8(uRam00000000,_DAT_00000004);
  FUN_00010ddc(uRam00000000,_DAT_00000004);
  FUN_00010df0(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_00010e0c(in_stack_0000000b,1,(int)cVar1);
  *(uint *)(unaff_s0 + 0x228) = *(uint *)(unaff_s0 + 0x228) & 0xfffffff7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010d88(void)

{
  int unaff_s0;
  char cVar1;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  FUN_00010d88();
  _L0();
  FUN_00010d9a();
  FUN_00010daa(&stack0x0000000b,&stack0x0000000c);
  FUN_00010db4(in_stack_0000000c);
  FUN_00010dc8(uRam00000000,_DAT_00000004);
  FUN_00010ddc(uRam00000000,_DAT_00000004);
  FUN_00010df0(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_00010e0c(in_stack_0000000b,1,(int)cVar1);
  *(uint *)(unaff_s0 + 0x228) = *(uint *)(unaff_s0 + 0x228) & 0xfffffff7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  char cVar1;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  _L0();
  FUN_00010d9a();
  FUN_00010daa(&stack0x0000000b,&stack0x0000000c);
  FUN_00010db4(in_stack_0000000c);
  FUN_00010dc8(uRam00000000,_DAT_00000004);
  FUN_00010ddc(uRam00000000,_DAT_00000004);
  FUN_00010df0(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_00010e0c(in_stack_0000000b,1,(int)cVar1);
  *(uint *)(unaff_s0 + 0x228) = *(uint *)(unaff_s0 + 0x228) & 0xfffffff7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010d9a(void)

{
  int unaff_s0;
  char cVar1;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  FUN_00010d9a();
  FUN_00010daa(&stack0x0000000b,&stack0x0000000c);
  FUN_00010db4(in_stack_0000000c);
  FUN_00010dc8(uRam00000000,_DAT_00000004);
  FUN_00010ddc(uRam00000000,_DAT_00000004);
  FUN_00010df0(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_00010e0c(in_stack_0000000b,1,(int)cVar1);
  *(uint *)(unaff_s0 + 0x228) = *(uint *)(unaff_s0 + 0x228) & 0xfffffff7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010daa(void)

{
  int unaff_s0;
  char cVar1;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  FUN_00010daa();
  FUN_00010db4(in_stack_0000000c);
  FUN_00010dc8(uRam00000000,_DAT_00000004);
  FUN_00010ddc(uRam00000000,_DAT_00000004);
  FUN_00010df0(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_00010e0c(in_stack_0000000b,1,(int)cVar1);
  *(uint *)(unaff_s0 + 0x228) = *(uint *)(unaff_s0 + 0x228) & 0xfffffff7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010db4(void)

{
  int unaff_s0;
  char cVar1;
  undefined in_stack_0000000b;
  
  FUN_00010db4();
  FUN_00010dc8(uRam00000000,_DAT_00000004);
  FUN_00010ddc(uRam00000000,_DAT_00000004);
  FUN_00010df0(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_00010e0c(in_stack_0000000b,1,(int)cVar1);
  *(uint *)(unaff_s0 + 0x228) = *(uint *)(unaff_s0 + 0x228) & 0xfffffff7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010dc8(void)

{
  int unaff_s0;
  char cVar1;
  undefined in_stack_0000000b;
  
  FUN_00010dc8();
  FUN_00010ddc(uRam00000000,_DAT_00000004);
  FUN_00010df0(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_00010e0c(in_stack_0000000b,1,(int)cVar1);
  *(uint *)(unaff_s0 + 0x228) = *(uint *)(unaff_s0 + 0x228) & 0xfffffff7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010ddc(void)

{
  int unaff_s0;
  char cVar1;
  undefined in_stack_0000000b;
  
  FUN_00010ddc();
  FUN_00010df0(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_00010e0c(in_stack_0000000b,1,(int)cVar1);
  *(uint *)(unaff_s0 + 0x228) = *(uint *)(unaff_s0 + 0x228) & 0xfffffff7;
  return;
}



void FUN_00010df0(void)

{
  int unaff_s0;
  char cVar1;
  undefined in_stack_0000000b;
  
  FUN_00010df0();
  cVar1 = _L0();
  FUN_00010e0c(in_stack_0000000b,1,(int)cVar1);
  *(uint *)(unaff_s0 + 0x228) = *(uint *)(unaff_s0 + 0x228) & 0xfffffff7;
  return;
}



void _L0(void)

{
  int unaff_s0;
  char cVar1;
  undefined in_stack_0000000b;
  
  cVar1 = _L0();
  FUN_00010e0c(in_stack_0000000b,1,(int)cVar1);
  *(uint *)(unaff_s0 + 0x228) = *(uint *)(unaff_s0 + 0x228) & 0xfffffff7;
  return;
}



void FUN_00010e0c(void)

{
  int unaff_s0;
  
  FUN_00010e0c();
  *(uint *)(unaff_s0 + 0x228) = *(uint *)(unaff_s0 + 0x228) & 0xfffffff7;
  return;
}



// WARNING: Variable defined which should be unmapped: ncf_freq_hz
// WARNING: Could not reconcile some variable overlaps
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_config_channel_sw(uint32_t channel_freq)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined uStack21;
  uint8_t ncf_on;
  undefined4 uStack20;
  int32_t ncf_freq_hz;
  
  _DAT_4000100c = _DAT_4000100c & 0xfffffdbe;
  _L0();
  FUN_00010e64(uRam00000000,_DAT_00000004);
  FUN_00010e78(uRam00000000,_DAT_00000004);
  FUN_00010e8c(uRam00000000,_DAT_00000004);
  FUN_00010ea0(uRam00000000,_DAT_00000004);
  uVar2 = _L0();
  _DAT_40001030 = _DAT_40001030 & 0xff0fffff | 0xf00000;
  _DAT_4000100c = _DAT_4000100c & 0xfffffdbe;
  uVar3 = _L0(channel_freq);
  _DAT_400010a0 = uVar3 & 0xff | _DAT_400010a0 & 0xffffff00;
  uVar3 = FUN_00010f2e(channel_freq);
  _DAT_400010a0 = (uVar3 & 0x1f) << 0x10 | _DAT_400010a0 & 0xffe0ffff;
  uVar3 = FUN_00010f52(channel_freq);
  _DAT_400010bc = (uVar3 & 0xf0) << 0x10 | _DAT_400010bc & 0xff0fffff;
  _DAT_400010c4 = uVar2 & 0x3fffffff | _DAT_400010c4 & 0xc0000000;
  _DAT_400010c0 = _DAT_400010c0 & 0xffffefff;
  _DAT_400010b8 = _DAT_400010b8 & 0xfffeffff | 0x10000;
  FUN_00010fac(10);
  _DAT_400010b8 = _DAT_400010b8 & 0xfffeffff;
  _L0(0x32);
  _DAT_400010b0 = _DAT_400010b0 & 0xefffffff | 0x10000000;
  FUN_00010fe2(10);
  _DAT_400010b0 = _DAT_400010b0 & 0xefffffff;
  _L0(0x32);
  _L0();
  FUN_0001100a(channel_freq);
  FUN_0001101a(channel_freq,&uStack21,&stack0xffffffec);
  FUN_00011024(uStack20);
  FUN_00011038(uRam00000000,_DAT_00000004);
  FUN_0001104c(uRam00000000,_DAT_00000004);
  FUN_00011060(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_0001107c(uStack21,1,(int)cVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  _L0();
  FUN_00010e64(uRam00000000,_DAT_00000004);
  FUN_00010e78(uRam00000000,_DAT_00000004);
  FUN_00010e8c(uRam00000000,_DAT_00000004);
  FUN_00010ea0(uRam00000000,_DAT_00000004);
  uVar2 = _L0();
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) & 0xffffffbf;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) & 0xfffffdff;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xffefffff | 0x100000;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xffdfffff | 0x200000;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xffbfffff | 0x400000;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xff7fffff | 0x800000;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) & 0xfffffffe;
  uVar3 = _L0();
  *(uint *)(unaff_s0 + 0xa0) = uVar3 & 0xff | *(uint *)(unaff_s0 + 0xa0) & 0xffffff00;
  uVar3 = FUN_00010f2e();
  *(uint *)(unaff_s0 + 0xa0) = (uVar3 & 0x1f) << 0x10 | *(uint *)(unaff_s0 + 0xa0) & 0xffe0ffff;
  uVar3 = FUN_00010f52();
  *(uint *)(unaff_s0 + 0xbc) = (uVar3 & 0xf0) << 0x10 | *(uint *)(unaff_s0 + 0xbc) & 0xff0fffff;
  *(uint *)(unaff_s0 + 0xc4) = uVar2 & 0x3fffffff | *(uint *)(unaff_s0 + 0xc4) & 0xc0000000;
  *(uint *)(unaff_s0 + 0xc0) = *(uint *)(unaff_s0 + 0xc0) & 0xffffefff;
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & 0xfffeffff | 0x10000;
  FUN_00010fac(10);
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & 0xfffeffff;
  _L0(0x32);
  *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & 0xefffffff | 0x10000000;
  FUN_00010fe2(10);
  *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & 0xefffffff;
  _L0(0x32);
  _L0();
  FUN_0001100a();
  FUN_0001101a(&stack0x0000000b,&stack0x0000000c);
  FUN_00011024(in_stack_0000000c);
  FUN_00011038(uRam00000000,_DAT_00000004);
  FUN_0001104c(uRam00000000,_DAT_00000004);
  FUN_00011060(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_0001107c(in_stack_0000000b,1,(int)cVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010e64(void)

{
  int unaff_s0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  FUN_00010e64();
  FUN_00010e78(uRam00000000,_DAT_00000004);
  FUN_00010e8c(uRam00000000,_DAT_00000004);
  FUN_00010ea0(uRam00000000,_DAT_00000004);
  uVar2 = _L0();
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) & 0xffffffbf;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) & 0xfffffdff;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xffefffff | 0x100000;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xffdfffff | 0x200000;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xffbfffff | 0x400000;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xff7fffff | 0x800000;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) & 0xfffffffe;
  uVar3 = _L0();
  *(uint *)(unaff_s0 + 0xa0) = uVar3 & 0xff | *(uint *)(unaff_s0 + 0xa0) & 0xffffff00;
  uVar3 = FUN_00010f2e();
  *(uint *)(unaff_s0 + 0xa0) = (uVar3 & 0x1f) << 0x10 | *(uint *)(unaff_s0 + 0xa0) & 0xffe0ffff;
  uVar3 = FUN_00010f52();
  *(uint *)(unaff_s0 + 0xbc) = (uVar3 & 0xf0) << 0x10 | *(uint *)(unaff_s0 + 0xbc) & 0xff0fffff;
  *(uint *)(unaff_s0 + 0xc4) = uVar2 & 0x3fffffff | *(uint *)(unaff_s0 + 0xc4) & 0xc0000000;
  *(uint *)(unaff_s0 + 0xc0) = *(uint *)(unaff_s0 + 0xc0) & 0xffffefff;
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & 0xfffeffff | 0x10000;
  FUN_00010fac(10);
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & 0xfffeffff;
  _L0(0x32);
  *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & 0xefffffff | 0x10000000;
  FUN_00010fe2(10);
  *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & 0xefffffff;
  _L0(0x32);
  _L0();
  FUN_0001100a();
  FUN_0001101a(&stack0x0000000b,&stack0x0000000c);
  FUN_00011024(in_stack_0000000c);
  FUN_00011038(uRam00000000,_DAT_00000004);
  FUN_0001104c(uRam00000000,_DAT_00000004);
  FUN_00011060(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_0001107c(in_stack_0000000b,1,(int)cVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010e78(void)

{
  int unaff_s0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  FUN_00010e78();
  FUN_00010e8c(uRam00000000,_DAT_00000004);
  FUN_00010ea0(uRam00000000,_DAT_00000004);
  uVar2 = _L0();
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) & 0xffffffbf;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) & 0xfffffdff;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xffefffff | 0x100000;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xffdfffff | 0x200000;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xffbfffff | 0x400000;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xff7fffff | 0x800000;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) & 0xfffffffe;
  uVar3 = _L0();
  *(uint *)(unaff_s0 + 0xa0) = uVar3 & 0xff | *(uint *)(unaff_s0 + 0xa0) & 0xffffff00;
  uVar3 = FUN_00010f2e();
  *(uint *)(unaff_s0 + 0xa0) = (uVar3 & 0x1f) << 0x10 | *(uint *)(unaff_s0 + 0xa0) & 0xffe0ffff;
  uVar3 = FUN_00010f52();
  *(uint *)(unaff_s0 + 0xbc) = (uVar3 & 0xf0) << 0x10 | *(uint *)(unaff_s0 + 0xbc) & 0xff0fffff;
  *(uint *)(unaff_s0 + 0xc4) = uVar2 & 0x3fffffff | *(uint *)(unaff_s0 + 0xc4) & 0xc0000000;
  *(uint *)(unaff_s0 + 0xc0) = *(uint *)(unaff_s0 + 0xc0) & 0xffffefff;
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & 0xfffeffff | 0x10000;
  FUN_00010fac(10);
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & 0xfffeffff;
  _L0(0x32);
  *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & 0xefffffff | 0x10000000;
  FUN_00010fe2(10);
  *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & 0xefffffff;
  _L0(0x32);
  _L0();
  FUN_0001100a();
  FUN_0001101a(&stack0x0000000b,&stack0x0000000c);
  FUN_00011024(in_stack_0000000c);
  FUN_00011038(uRam00000000,_DAT_00000004);
  FUN_0001104c(uRam00000000,_DAT_00000004);
  FUN_00011060(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_0001107c(in_stack_0000000b,1,(int)cVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010e8c(void)

{
  int unaff_s0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  FUN_00010e8c();
  FUN_00010ea0(uRam00000000,_DAT_00000004);
  uVar2 = _L0();
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) & 0xffffffbf;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) & 0xfffffdff;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xffefffff | 0x100000;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xffdfffff | 0x200000;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xffbfffff | 0x400000;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xff7fffff | 0x800000;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) & 0xfffffffe;
  uVar3 = _L0();
  *(uint *)(unaff_s0 + 0xa0) = uVar3 & 0xff | *(uint *)(unaff_s0 + 0xa0) & 0xffffff00;
  uVar3 = FUN_00010f2e();
  *(uint *)(unaff_s0 + 0xa0) = (uVar3 & 0x1f) << 0x10 | *(uint *)(unaff_s0 + 0xa0) & 0xffe0ffff;
  uVar3 = FUN_00010f52();
  *(uint *)(unaff_s0 + 0xbc) = (uVar3 & 0xf0) << 0x10 | *(uint *)(unaff_s0 + 0xbc) & 0xff0fffff;
  *(uint *)(unaff_s0 + 0xc4) = uVar2 & 0x3fffffff | *(uint *)(unaff_s0 + 0xc4) & 0xc0000000;
  *(uint *)(unaff_s0 + 0xc0) = *(uint *)(unaff_s0 + 0xc0) & 0xffffefff;
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & 0xfffeffff | 0x10000;
  FUN_00010fac(10);
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & 0xfffeffff;
  _L0(0x32);
  *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & 0xefffffff | 0x10000000;
  FUN_00010fe2(10);
  *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & 0xefffffff;
  _L0(0x32);
  _L0();
  FUN_0001100a();
  FUN_0001101a(&stack0x0000000b,&stack0x0000000c);
  FUN_00011024(in_stack_0000000c);
  FUN_00011038(uRam00000000,_DAT_00000004);
  FUN_0001104c(uRam00000000,_DAT_00000004);
  FUN_00011060(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_0001107c(in_stack_0000000b,1,(int)cVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010ea0(void)

{
  int unaff_s0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  FUN_00010ea0();
  uVar2 = _L0();
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) & 0xffffffbf;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) & 0xfffffdff;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xffefffff | 0x100000;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xffdfffff | 0x200000;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xffbfffff | 0x400000;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xff7fffff | 0x800000;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) & 0xfffffffe;
  uVar3 = _L0();
  *(uint *)(unaff_s0 + 0xa0) = uVar3 & 0xff | *(uint *)(unaff_s0 + 0xa0) & 0xffffff00;
  uVar3 = FUN_00010f2e();
  *(uint *)(unaff_s0 + 0xa0) = (uVar3 & 0x1f) << 0x10 | *(uint *)(unaff_s0 + 0xa0) & 0xffe0ffff;
  uVar3 = FUN_00010f52();
  *(uint *)(unaff_s0 + 0xbc) = (uVar3 & 0xf0) << 0x10 | *(uint *)(unaff_s0 + 0xbc) & 0xff0fffff;
  *(uint *)(unaff_s0 + 0xc4) = uVar2 & 0x3fffffff | *(uint *)(unaff_s0 + 0xc4) & 0xc0000000;
  *(uint *)(unaff_s0 + 0xc0) = *(uint *)(unaff_s0 + 0xc0) & 0xffffefff;
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & 0xfffeffff | 0x10000;
  FUN_00010fac(10);
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & 0xfffeffff;
  _L0(0x32);
  *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & 0xefffffff | 0x10000000;
  FUN_00010fe2(10);
  *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & 0xefffffff;
  _L0(0x32);
  _L0();
  FUN_0001100a();
  FUN_0001101a(&stack0x0000000b,&stack0x0000000c);
  FUN_00011024(in_stack_0000000c);
  FUN_00011038(uRam00000000,_DAT_00000004);
  FUN_0001104c(uRam00000000,_DAT_00000004);
  FUN_00011060(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_0001107c(in_stack_0000000b,1,(int)cVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  uVar2 = _L0();
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) & 0xffffffbf;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) & 0xfffffdff;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xffefffff | 0x100000;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xffdfffff | 0x200000;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xffbfffff | 0x400000;
  *(uint *)(unaff_s0 + 0x30) = *(uint *)(unaff_s0 + 0x30) & 0xff7fffff | 0x800000;
  *(uint *)(unaff_s0 + 0xc) = *(uint *)(unaff_s0 + 0xc) & 0xfffffffe;
  uVar3 = _L0();
  *(uint *)(unaff_s0 + 0xa0) = uVar3 & 0xff | *(uint *)(unaff_s0 + 0xa0) & 0xffffff00;
  uVar3 = FUN_00010f2e();
  *(uint *)(unaff_s0 + 0xa0) = (uVar3 & 0x1f) << 0x10 | *(uint *)(unaff_s0 + 0xa0) & 0xffe0ffff;
  uVar3 = FUN_00010f52();
  *(uint *)(unaff_s0 + 0xbc) = (uVar3 & 0xf0) << 0x10 | *(uint *)(unaff_s0 + 0xbc) & 0xff0fffff;
  *(uint *)(unaff_s0 + 0xc4) = uVar2 & 0x3fffffff | *(uint *)(unaff_s0 + 0xc4) & 0xc0000000;
  *(uint *)(unaff_s0 + 0xc0) = *(uint *)(unaff_s0 + 0xc0) & 0xffffefff;
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & 0xfffeffff | 0x10000;
  FUN_00010fac(10);
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & 0xfffeffff;
  _L0(0x32);
  *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & 0xefffffff | 0x10000000;
  FUN_00010fe2(10);
  *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & 0xefffffff;
  _L0(0x32);
  _L0();
  FUN_0001100a();
  FUN_0001101a(&stack0x0000000b,&stack0x0000000c);
  FUN_00011024(in_stack_0000000c);
  FUN_00011038(uRam00000000,_DAT_00000004);
  FUN_0001104c(uRam00000000,_DAT_00000004);
  FUN_00011060(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_0001107c(in_stack_0000000b,1,(int)cVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  uint unaff_s1;
  char cVar1;
  uint uVar2;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  uVar2 = _L0();
  *(uint *)(unaff_s0 + 0xa0) = uVar2 & 0xff | *(uint *)(unaff_s0 + 0xa0) & 0xffffff00;
  uVar2 = FUN_00010f2e();
  *(uint *)(unaff_s0 + 0xa0) = (uVar2 & 0x1f) << 0x10 | *(uint *)(unaff_s0 + 0xa0) & 0xffe0ffff;
  uVar2 = FUN_00010f52();
  *(uint *)(unaff_s0 + 0xbc) = (uVar2 & 0xf0) << 0x10 | *(uint *)(unaff_s0 + 0xbc) & 0xff0fffff;
  *(uint *)(unaff_s0 + 0xc4) = unaff_s1 & 0x3fffffff | *(uint *)(unaff_s0 + 0xc4) & 0xc0000000;
  *(uint *)(unaff_s0 + 0xc0) = *(uint *)(unaff_s0 + 0xc0) & 0xffffefff;
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & 0xfffeffff | 0x10000;
  FUN_00010fac(10);
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & 0xfffeffff;
  _L0(0x32);
  *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & 0xefffffff | 0x10000000;
  FUN_00010fe2(10);
  *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & 0xefffffff;
  _L0(0x32);
  _L0();
  FUN_0001100a();
  FUN_0001101a(&stack0x0000000b,&stack0x0000000c);
  FUN_00011024(in_stack_0000000c);
  FUN_00011038(uRam00000000,_DAT_00000004);
  FUN_0001104c(uRam00000000,_DAT_00000004);
  FUN_00011060(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_0001107c(in_stack_0000000b,1,(int)cVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010f2e(void)

{
  int unaff_s0;
  uint unaff_s1;
  char cVar1;
  uint uVar2;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  uVar2 = FUN_00010f2e();
  *(uint *)(unaff_s0 + 0xa0) = (uVar2 & 0x1f) << 0x10 | *(uint *)(unaff_s0 + 0xa0) & 0xffe0ffff;
  uVar2 = FUN_00010f52();
  *(uint *)(unaff_s0 + 0xbc) = (uVar2 & 0xf0) << 0x10 | *(uint *)(unaff_s0 + 0xbc) & 0xff0fffff;
  *(uint *)(unaff_s0 + 0xc4) = unaff_s1 & 0x3fffffff | *(uint *)(unaff_s0 + 0xc4) & 0xc0000000;
  *(uint *)(unaff_s0 + 0xc0) = *(uint *)(unaff_s0 + 0xc0) & 0xffffefff;
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & 0xfffeffff | 0x10000;
  FUN_00010fac(10);
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & 0xfffeffff;
  _L0(0x32);
  *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & 0xefffffff | 0x10000000;
  FUN_00010fe2(10);
  *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & 0xefffffff;
  _L0(0x32);
  _L0();
  FUN_0001100a();
  FUN_0001101a(&stack0x0000000b,&stack0x0000000c);
  FUN_00011024(in_stack_0000000c);
  FUN_00011038(uRam00000000,_DAT_00000004);
  FUN_0001104c(uRam00000000,_DAT_00000004);
  FUN_00011060(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_0001107c(in_stack_0000000b,1,(int)cVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010f52(void)

{
  int unaff_s0;
  uint unaff_s1;
  char cVar1;
  uint uVar2;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  uVar2 = FUN_00010f52();
  *(uint *)(unaff_s0 + 0xbc) = (uVar2 & 0xf0) << 0x10 | *(uint *)(unaff_s0 + 0xbc) & 0xff0fffff;
  *(uint *)(unaff_s0 + 0xc4) = unaff_s1 & 0x3fffffff | *(uint *)(unaff_s0 + 0xc4) & 0xc0000000;
  *(uint *)(unaff_s0 + 0xc0) = *(uint *)(unaff_s0 + 0xc0) & 0xffffefff;
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & 0xfffeffff | 0x10000;
  FUN_00010fac(10);
  *(uint *)(unaff_s0 + 0xb8) = *(uint *)(unaff_s0 + 0xb8) & 0xfffeffff;
  _L0(0x32);
  *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & 0xefffffff | 0x10000000;
  FUN_00010fe2(10);
  *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & 0xefffffff;
  _L0(0x32);
  _L0();
  FUN_0001100a();
  FUN_0001101a(&stack0x0000000b,&stack0x0000000c);
  FUN_00011024(in_stack_0000000c);
  FUN_00011038(uRam00000000,_DAT_00000004);
  FUN_0001104c(uRam00000000,_DAT_00000004);
  FUN_00011060(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_0001107c(in_stack_0000000b,1,(int)cVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010fac(void)

{
  int unaff_s0;
  uint unaff_s1;
  char cVar1;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  FUN_00010fac();
  *(uint *)(unaff_s0 + 0xb8) = unaff_s1 & *(uint *)(unaff_s0 + 0xb8);
  _L0(0x32);
  *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & 0xefffffff | 0x10000000;
  FUN_00010fe2(10);
  *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & 0xefffffff;
  _L0(0x32);
  _L0();
  FUN_0001100a();
  FUN_0001101a(&stack0x0000000b,&stack0x0000000c);
  FUN_00011024(in_stack_0000000c);
  FUN_00011038(uRam00000000,_DAT_00000004);
  FUN_0001104c(uRam00000000,_DAT_00000004);
  FUN_00011060(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_0001107c(in_stack_0000000b,1,(int)cVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  char cVar1;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  _L0();
  *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & 0xefffffff | 0x10000000;
  FUN_00010fe2(10);
  *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & 0xefffffff;
  _L0(0x32);
  _L0();
  FUN_0001100a();
  FUN_0001101a(&stack0x0000000b,&stack0x0000000c);
  FUN_00011024(in_stack_0000000c);
  FUN_00011038(uRam00000000,_DAT_00000004);
  FUN_0001104c(uRam00000000,_DAT_00000004);
  FUN_00011060(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_0001107c(in_stack_0000000b,1,(int)cVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010fe2(void)

{
  int unaff_s0;
  uint unaff_s1;
  char cVar1;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  FUN_00010fe2();
  *(uint *)(unaff_s0 + 0xb0) = unaff_s1 & *(uint *)(unaff_s0 + 0xb0);
  _L0(0x32);
  _L0();
  FUN_0001100a();
  FUN_0001101a(&stack0x0000000b,&stack0x0000000c);
  FUN_00011024(in_stack_0000000c);
  FUN_00011038(uRam00000000,_DAT_00000004);
  FUN_0001104c(uRam00000000,_DAT_00000004);
  FUN_00011060(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_0001107c(in_stack_0000000b,1,(int)cVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  char cVar1;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  _L0();
  _L0();
  FUN_0001100a();
  FUN_0001101a(&stack0x0000000b,&stack0x0000000c);
  FUN_00011024(in_stack_0000000c);
  FUN_00011038(uRam00000000,_DAT_00000004);
  FUN_0001104c(uRam00000000,_DAT_00000004);
  FUN_00011060(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_0001107c(in_stack_0000000b,1,(int)cVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  char cVar1;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  _L0();
  FUN_0001100a();
  FUN_0001101a(&stack0x0000000b,&stack0x0000000c);
  FUN_00011024(in_stack_0000000c);
  FUN_00011038(uRam00000000,_DAT_00000004);
  FUN_0001104c(uRam00000000,_DAT_00000004);
  FUN_00011060(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_0001107c(in_stack_0000000b,1,(int)cVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001100a(void)

{
  char cVar1;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  FUN_0001100a();
  FUN_0001101a(&stack0x0000000b,&stack0x0000000c);
  FUN_00011024(in_stack_0000000c);
  FUN_00011038(uRam00000000,_DAT_00000004);
  FUN_0001104c(uRam00000000,_DAT_00000004);
  FUN_00011060(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_0001107c(in_stack_0000000b,1,(int)cVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001101a(void)

{
  char cVar1;
  undefined in_stack_0000000b;
  undefined4 in_stack_0000000c;
  
  FUN_0001101a();
  FUN_00011024(in_stack_0000000c);
  FUN_00011038(uRam00000000,_DAT_00000004);
  FUN_0001104c(uRam00000000,_DAT_00000004);
  FUN_00011060(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_0001107c(in_stack_0000000b,1,(int)cVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00011024(void)

{
  char cVar1;
  undefined in_stack_0000000b;
  
  FUN_00011024();
  FUN_00011038(uRam00000000,_DAT_00000004);
  FUN_0001104c(uRam00000000,_DAT_00000004);
  FUN_00011060(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_0001107c(in_stack_0000000b,1,(int)cVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00011038(void)

{
  char cVar1;
  undefined in_stack_0000000b;
  
  FUN_00011038();
  FUN_0001104c(uRam00000000,_DAT_00000004);
  FUN_00011060(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_0001107c(in_stack_0000000b,1,(int)cVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001104c(void)

{
  char cVar1;
  undefined in_stack_0000000b;
  
  FUN_0001104c();
  FUN_00011060(uRam00000000,_DAT_00000004);
  cVar1 = _L0();
  FUN_0001107c(in_stack_0000000b,1,(int)cVar1);
  return;
}



void FUN_00011060(void)

{
  char cVar1;
  undefined in_stack_0000000b;
  
  FUN_00011060();
  cVar1 = _L0();
  FUN_0001107c(in_stack_0000000b,1,(int)cVar1);
  return;
}



void _L0(void)

{
  char cVar1;
  undefined in_stack_0000000b;
  
  cVar1 = _L0();
  FUN_0001107c(in_stack_0000000b,1,(int)cVar1);
  return;
}



void FUN_0001107c(void)

{
  FUN_0001107c();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_rxdfe_set_notch1(uint8_t en,uint8_t alpha,int8_t nrmfc)

{
  _DAT_40001700 =
       (en & 1) << 7 | (uint)(byte)nrmfc << 0x10 | (alpha & 7) << 3 | _DAT_40001700 & 0xff00ff47;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_sg_start(uint32_t inc_step,uint32_t gain_i,uint32_t gain_q,uint32_t addr_i,uint32_t addr_q)

{
  _DAT_4000120c = (inc_step & 0x3ff) << 0x10 | _DAT_4000120c & 0x1c00ffff | 0x80000000;
  _DAT_40001210 = _DAT_40001210 & 0xfff0fff;
  _DAT_40001214 = addr_i << 0x16 | gain_i & 0x7ff | _DAT_40001214 & 0x3ff800;
  _DAT_40001218 = addr_q << 0x16 | gain_q & 0x7ff | _DAT_40001218 & 0x3ff800;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_sg_stop(void)

{
  _DAT_4000120c = _DAT_4000120c & 0x7fffffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint32_t rfc_pm_start(uint32_t insel,int32_t freq_cw,uint32_t acclen,uint32_t rshift,
                     int32_t *raw_acc_i,int32_t *raw_acc_q)

{
  int iVar1;
  int iVar2;
  
  _DAT_4000161c = acclen << 0x10 | 0x400;
  _DAT_40001618 =
       freq_cw & 0xfffffU | (uint)(freq_cw != 0) << 0x14 | _DAT_40001618 & 0x1fe00000 |
       insel << 0x1e | 0x20000000;
  _L0(100);
  iVar1 = (_DAT_40001620 << 7) >> 7;
  iVar2 = (_DAT_40001624 << 7) >> 7;
  if (raw_acc_i != (int32_t *)0x0) {
    *raw_acc_i = iVar1;
  }
  if (raw_acc_q != (int32_t *)0x0) {
    *raw_acc_q = iVar2;
  }
  iVar1 = iVar1 >> (rshift & 0x1f);
  iVar2 = iVar2 >> (rshift & 0x1f);
  return iVar1 * iVar1 + iVar2 * iVar2;
}



int _L0(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  int *in_stack_00000004;
  int *in_stack_00000008;
  uint in_stack_0000000c;
  
  _L0();
  iVar1 = (*(int *)(unaff_s0 + 0x620) << 7) >> 7;
  iVar2 = (*(int *)(unaff_s0 + 0x624) << 7) >> 7;
  if (in_stack_00000008 != (int *)0x0) {
    *in_stack_00000008 = iVar1;
  }
  if (in_stack_00000004 != (int *)0x0) {
    *in_stack_00000004 = iVar2;
  }
  iVar1 = iVar1 >> (in_stack_0000000c & 0x1f);
  iVar2 = iVar2 >> (in_stack_0000000c & 0x1f);
  return iVar1 * iVar1 + iVar2 * iVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_pm_stop(void)

{
  _DAT_40001618 = _DAT_40001618 & 0xdfefffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_hwctrl_txrfgain(uint8_t hwctrl_on)

{
  _DAT_4000100c = (hwctrl_on & 1) << 2 | _DAT_4000100c & 0xfffffffb;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_hwctrl_rxgain(uint8_t hwctrl_on)

{
  _DAT_4000100c = (hwctrl_on & 1) << 1 | _DAT_4000100c & 0xfffffffd;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_hwctrl_txdvga(uint8_t hwctrl_on)

{
  _DAT_40001600 = _DAT_40001600 & 0x7fffffff | (uint)hwctrl_on << 0x1f;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_hwctrl_calparam(uint8_t hwctrl_on)

{
  _DAT_4000100c = (hwctrl_on & 1) << 5 | _DAT_4000100c & 0xffffffdf;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_fsm_force(uint8_t state)

{
  undefined3 in_register_00002029;
  
  if (CONCAT31(in_register_00002029,state) != 0xf) {
    _DAT_4000126c = state & 7 | _DAT_4000126c & 0xfffffff8;
    FUN_00011324(0x14);
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011324(void)

{
  FUN_00011324();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_rc_fsm_force(uint8_t state)

{
  undefined3 in_register_00002029;
  
  if (CONCAT31(in_register_00002029,state) == 0xf) {
    _DAT_40001004 = _DAT_40001004 & 0xfffff8ff;
    _L0(0x14);
    _DAT_40001004 = _DAT_40001004 & 0xfffff7ff;
  }
  else {
    _DAT_40001004 = (state & 7) << 8 | _DAT_40001004 & 0xfffff8ff;
    FUN_0001137c(0x14);
    _DAT_40001004 = _DAT_40001004 & 0xfffff7ff | 0x800;
  }
  return;
}



void _L0(void)

{
  int unaff_s0;
  
  _L0();
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff;
  return;
}



void FUN_0001137c(void)

{
  int unaff_s0;
  
  FUN_0001137c();
  *(uint *)(unaff_s0 + 4) = *(uint *)(unaff_s0 + 4) & 0xfffff7ff | 0x800;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_coex_force_to(uint32_t force_enable,uint32_t bbmode)

{
  _L0(0);
  FUN_000113ae(10);
  _DAT_40001220 =
       (uint)(force_enable != 0) << 0x1b | (bbmode & 1) << 0x1a | _DAT_40001220 & 0xf3ffffff;
  FUN_000113f0(10);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  uint in_stack_0000000c;
  
  _L0();
  FUN_000113ae(10);
  _DAT_40001220 =
       (uint)(unaff_s0 != 0) << 0x1b | (in_stack_0000000c & 1) << 0x1a | _DAT_40001220 & 0xf3ffffff;
  FUN_000113f0(10);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000113ae(void)

{
  int unaff_s0;
  uint in_stack_0000000c;
  
  FUN_000113ae();
  _DAT_40001220 =
       (uint)(unaff_s0 != 0) << 0x1b | (in_stack_0000000c & 1) << 0x1a | _DAT_40001220 & 0xf3ffffff;
  FUN_000113f0(10);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000113f0(void)

{
  FUN_000113f0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_config_power(uint32_t mode,uint32_t tbb_boost,uint32_t tbb,uint32_t tmx)

{
  _L0(0);
  FUN_0001142a(6);
  if (mode == 0) {
    _DAT_40001128 = _DAT_40001128 & 0xff800fff | 0x5a5000;
    _DAT_4000112c = _DAT_4000112c & 0xff800800 | 0x5f75a5;
  }
  else {
    if (mode != 1) {
      if (mode - 2 < 2) {
        FUN_00011570(10);
        FUN_0001157a(5);
        _L0(5);
        return;
      }
      if (mode != 4) goto _L0;
    }
  }
  FUN_000114d8(0xf);
  FUN_000114e2(5);
  _L0(7);
_L0:
  _DAT_40001048 = _DAT_40001048 & 0xcfffffff;
  FUN_00011508(6);
  FUN_00011512(5);
  _DAT_4000108c = _DAT_4000108c & 0xffffffcf | 0x10;
  _DAT_40001048 = (tbb_boost & 3) << 0x1c | _DAT_40001048 & 0xcfffffff;
  _L0(tbb);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  uint unaff_s0;
  int unaff_s1;
  
  _L0();
  FUN_0001142a(6);
  if (unaff_s1 == 0) {
    _DAT_40001128 = _DAT_40001128 & 0xff800fff | 0x5a5000;
    _DAT_4000112c = _DAT_4000112c & 0xff800800 | 0x5f75a5;
  }
  else {
    if (unaff_s1 != 1) {
      if (unaff_s1 - 2U < 2) {
        FUN_00011570(10);
        FUN_0001157a(5);
        _L0(5);
        return;
      }
      if (unaff_s1 != 4) goto _L0;
    }
  }
  FUN_000114d8(0xf);
  FUN_000114e2(5);
  _L0(7);
_L0:
  _DAT_40001048 = _DAT_40001048 & 0xcfffffff;
  FUN_00011508(6);
  FUN_00011512(5);
  _DAT_4000108c = _DAT_4000108c & 0xffffffcf | 0x10;
  _DAT_40001048 = (unaff_s0 & 3) << 0x1c | _DAT_40001048 & 0xcfffffff;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001142a(void)

{
  uint unaff_s0;
  int unaff_s1;
  
  FUN_0001142a();
  if (unaff_s1 == 0) {
    _DAT_40001128 = _DAT_40001128 & 0xff800fff | 0x5a5000;
    _DAT_4000112c = _DAT_4000112c & 0xff800800 | 0x5f75a5;
  }
  else {
    if (unaff_s1 != 1) {
      if (unaff_s1 - 2U < 2) {
        FUN_00011570(10);
        FUN_0001157a(5);
        _L0(5);
        return;
      }
      if (unaff_s1 != 4) goto _L0;
    }
  }
  FUN_000114d8(0xf);
  FUN_000114e2(5);
  _L0(7);
_L0:
  _DAT_40001048 = _DAT_40001048 & 0xcfffffff;
  FUN_00011508(6);
  FUN_00011512(5);
  _DAT_4000108c = _DAT_4000108c & 0xffffffcf | 0x10;
  _DAT_40001048 = (unaff_s0 & 3) << 0x1c | _DAT_40001048 & 0xcfffffff;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000114d8(void)

{
  uint unaff_s0;
  
  FUN_000114d8();
  FUN_000114e2(5);
  _L0(7);
  _DAT_40001048 = _DAT_40001048 & 0xcfffffff;
  FUN_00011508(6);
  FUN_00011512(5);
  _DAT_4000108c = _DAT_4000108c & 0xffffffcf | 0x10;
  _DAT_40001048 = (unaff_s0 & 3) << 0x1c | _DAT_40001048 & 0xcfffffff;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000114e2(void)

{
  uint unaff_s0;
  
  FUN_000114e2();
  _L0(7);
  _DAT_40001048 = _DAT_40001048 & 0xcfffffff;
  FUN_00011508(6);
  FUN_00011512(5);
  _DAT_4000108c = _DAT_4000108c & 0xffffffcf | 0x10;
  _DAT_40001048 = (unaff_s0 & 3) << 0x1c | _DAT_40001048 & 0xcfffffff;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  uint unaff_s0;
  
  _L0();
  _DAT_40001048 = _DAT_40001048 & 0xcfffffff;
  FUN_00011508(6);
  FUN_00011512(5);
  _DAT_4000108c = _DAT_4000108c & 0xffffffcf | 0x10;
  _DAT_40001048 = (unaff_s0 & 3) << 0x1c | _DAT_40001048 & 0xcfffffff;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011508(void)

{
  uint unaff_s0;
  int unaff_s1;
  uint unaff_s4;
  
  FUN_00011508();
  FUN_00011512(5);
  *(uint *)(unaff_s1 + 0x8c) = *(uint *)(unaff_s1 + 0x8c) & 0xffffffcf | 0x10;
  *(uint *)(unaff_s1 + 0x48) = (unaff_s0 & 3) << 0x1c | *(uint *)(unaff_s1 + 0x48) & unaff_s4;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011512(void)

{
  uint unaff_s0;
  int unaff_s1;
  uint unaff_s4;
  
  FUN_00011512();
  *(uint *)(unaff_s1 + 0x8c) = *(uint *)(unaff_s1 + 0x8c) & 0xffffffcf | 0x10;
  *(uint *)(unaff_s1 + 0x48) = (unaff_s0 & 3) << 0x1c | *(uint *)(unaff_s1 + 0x48) & unaff_s4;
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



void FUN_00011570(void)

{
  FUN_00011570();
  FUN_0001157a(5);
  _L0(5);
  return;
}



void FUN_0001157a(void)

{
  FUN_0001157a();
  _L0(5);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

_Bool rfc_config_power_ble(int32_t pwr_dbm)

{
  int iVar1;
  uint uVar2;
  
  if ((uint)pwr_dbm < 0x10) {
    if (pwr_dbm < 4) {
      _LVL903(1);
      _L0();
      FUN_000115b6(4);
      FUN_000115c0(9);
      _L0();
      FUN_000115d2(5);
      FUN_000115dc(2);
      _L0(5);
      iVar1 = pwr_dbm * 4 + -0x12;
    }
    else {
      if (pwr_dbm < 7) {
        FUN_00011654(1);
        _L0();
        FUN_00011666(4);
        FUN_00011670(9);
        _L0();
        FUN_00011682(5);
        FUN_0001168c(2);
        _L0(7);
        iVar1 = pwr_dbm * 4 + -0x1e;
      }
      else {
        if (pwr_dbm < 10) {
          FUN_000116ac(1);
          _L0();
          FUN_000116be(4);
          FUN_000116c8(9);
          _L0();
          FUN_000116da(5);
          FUN_000116e4(3);
          FUN_000116ee(7);
          iVar1 = pwr_dbm + -10;
        }
        else {
          if (pwr_dbm < 0xc) {
            _L0();
            _L0();
            FUN_00011716(4);
            FUN_00011720(9);
            _L0();
            FUN_00011732(5);
            FUN_0001173c(4);
            FUN_00011746(7);
            iVar1 = pwr_dbm + -0xc;
          }
          else {
            _L0(1);
            _L0();
            FUN_00011764(4);
            FUN_0001176e(9);
            _L0();
            FUN_00011780(5);
            FUN_0001178a(6);
            FUN_00011794(7);
            iVar1 = pwr_dbm + -0xf;
          }
        }
        iVar1 = iVar1 << 2;
      }
    }
    uVar2 = iVar1 - 1;
    _DAT_40001648 =
         uVar2 * 0x10000 & 0x7f0000 |
         uVar2 * 0x100 & 0x7f00 | uVar2 & 0x7f | _DAT_40001648 & 0xff808080;
    return true;
  }
  return false;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _LVL903(void)

{
  int unaff_s0;
  uint uVar1;
  
  _LVL903();
  _L0();
  FUN_000115b6(4);
  FUN_000115c0(9);
  _L0();
  FUN_000115d2(5);
  FUN_000115dc(2);
  _L0(5);
  uVar1 = unaff_s0 * 4 - 0x13;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  int unaff_s0;
  uint uVar1;
  
  _L0();
  FUN_000115b6(4);
  FUN_000115c0(9);
  _L0();
  FUN_000115d2(5);
  FUN_000115dc(2);
  _L0(5);
  uVar1 = unaff_s0 * 4 - 0x13;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000115b6(void)

{
  int unaff_s0;
  uint uVar1;
  
  FUN_000115b6();
  FUN_000115c0(9);
  _L0();
  FUN_000115d2(5);
  FUN_000115dc(2);
  _L0(5);
  uVar1 = unaff_s0 * 4 - 0x13;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000115c0(void)

{
  int unaff_s0;
  uint uVar1;
  
  FUN_000115c0();
  _L0();
  FUN_000115d2(5);
  FUN_000115dc(2);
  _L0(5);
  uVar1 = unaff_s0 * 4 - 0x13;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  int unaff_s0;
  uint uVar1;
  
  _L0();
  FUN_000115d2(5);
  FUN_000115dc(2);
  _L0(5);
  uVar1 = unaff_s0 * 4 - 0x13;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000115d2(void)

{
  int unaff_s0;
  uint uVar1;
  
  FUN_000115d2();
  FUN_000115dc(2);
  _L0(5);
  uVar1 = unaff_s0 * 4 - 0x13;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000115dc(void)

{
  int unaff_s0;
  uint uVar1;
  
  FUN_000115dc();
  _L0(5);
  uVar1 = unaff_s0 * 4 - 0x13;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  int unaff_s0;
  uint uVar1;
  
  _L0();
  uVar1 = unaff_s0 - 0x13;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00011654(void)

{
  uint uVar1;
  int unaff_s0;
  
  FUN_00011654();
  _L0();
  FUN_00011666(4);
  FUN_00011670(9);
  _L0();
  FUN_00011682(5);
  FUN_0001168c(2);
  _L0(7);
  uVar1 = unaff_s0 * 4 - 0x1f;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  uint uVar1;
  int unaff_s0;
  
  _L0();
  FUN_00011666(4);
  FUN_00011670(9);
  _L0();
  FUN_00011682(5);
  FUN_0001168c(2);
  _L0(7);
  uVar1 = unaff_s0 * 4 - 0x1f;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00011666(void)

{
  uint uVar1;
  int unaff_s0;
  
  FUN_00011666();
  FUN_00011670(9);
  _L0();
  FUN_00011682(5);
  FUN_0001168c(2);
  _L0(7);
  uVar1 = unaff_s0 * 4 - 0x1f;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00011670(void)

{
  uint uVar1;
  int unaff_s0;
  
  FUN_00011670();
  _L0();
  FUN_00011682(5);
  FUN_0001168c(2);
  _L0(7);
  uVar1 = unaff_s0 * 4 - 0x1f;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  uint uVar1;
  int unaff_s0;
  
  _L0();
  FUN_00011682(5);
  FUN_0001168c(2);
  _L0(7);
  uVar1 = unaff_s0 * 4 - 0x1f;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00011682(void)

{
  uint uVar1;
  int unaff_s0;
  
  FUN_00011682();
  FUN_0001168c(2);
  _L0(7);
  uVar1 = unaff_s0 * 4 - 0x1f;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0001168c(void)

{
  uint uVar1;
  int unaff_s0;
  
  FUN_0001168c();
  _L0(7);
  uVar1 = unaff_s0 * 4 - 0x1f;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  uint uVar1;
  int unaff_s0;
  
  _L0();
  uVar1 = unaff_s0 - 0x1f;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000116ac(void)

{
  uint uVar1;
  int unaff_s0;
  
  FUN_000116ac();
  _L0();
  FUN_000116be(4);
  FUN_000116c8(9);
  _L0();
  FUN_000116da(5);
  FUN_000116e4(3);
  FUN_000116ee(7);
  uVar1 = (unaff_s0 + -10) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  uint uVar1;
  int unaff_s0;
  
  _L0();
  FUN_000116be(4);
  FUN_000116c8(9);
  _L0();
  FUN_000116da(5);
  FUN_000116e4(3);
  FUN_000116ee(7);
  uVar1 = (unaff_s0 + -10) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000116be(void)

{
  uint uVar1;
  int unaff_s0;
  
  FUN_000116be();
  FUN_000116c8(9);
  _L0();
  FUN_000116da(5);
  FUN_000116e4(3);
  FUN_000116ee(7);
  uVar1 = (unaff_s0 + -10) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000116c8(void)

{
  uint uVar1;
  int unaff_s0;
  
  FUN_000116c8();
  _L0();
  FUN_000116da(5);
  FUN_000116e4(3);
  FUN_000116ee(7);
  uVar1 = (unaff_s0 + -10) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  uint uVar1;
  int unaff_s0;
  
  _L0();
  FUN_000116da(5);
  FUN_000116e4(3);
  FUN_000116ee(7);
  uVar1 = (unaff_s0 + -10) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000116da(void)

{
  uint uVar1;
  int unaff_s0;
  
  FUN_000116da();
  FUN_000116e4(3);
  FUN_000116ee(7);
  uVar1 = (unaff_s0 + -10) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000116e4(void)

{
  uint uVar1;
  int unaff_s0;
  
  FUN_000116e4();
  FUN_000116ee(7);
  uVar1 = (unaff_s0 + -10) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_000116ee(void)

{
  uint uVar1;
  int unaff_s0;
  
  FUN_000116ee();
  uVar1 = (unaff_s0 + -10) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  uint uVar1;
  int unaff_s0;
  
  _L0();
  _L0();
  FUN_00011716(4);
  FUN_00011720(9);
  _L0();
  FUN_00011732(5);
  FUN_0001173c(4);
  FUN_00011746(7);
  uVar1 = (unaff_s0 + -0xc) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  uint uVar1;
  int unaff_s0;
  
  _L0();
  FUN_00011716(4);
  FUN_00011720(9);
  _L0();
  FUN_00011732(5);
  FUN_0001173c(4);
  FUN_00011746(7);
  uVar1 = (unaff_s0 + -0xc) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00011716(void)

{
  uint uVar1;
  int unaff_s0;
  
  FUN_00011716();
  FUN_00011720(9);
  _L0();
  FUN_00011732(5);
  FUN_0001173c(4);
  FUN_00011746(7);
  uVar1 = (unaff_s0 + -0xc) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00011720(void)

{
  uint uVar1;
  int unaff_s0;
  
  FUN_00011720();
  _L0();
  FUN_00011732(5);
  FUN_0001173c(4);
  FUN_00011746(7);
  uVar1 = (unaff_s0 + -0xc) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  uint uVar1;
  int unaff_s0;
  
  _L0();
  FUN_00011732(5);
  FUN_0001173c(4);
  FUN_00011746(7);
  uVar1 = (unaff_s0 + -0xc) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00011732(void)

{
  uint uVar1;
  int unaff_s0;
  
  FUN_00011732();
  FUN_0001173c(4);
  FUN_00011746(7);
  uVar1 = (unaff_s0 + -0xc) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0001173c(void)

{
  uint uVar1;
  int unaff_s0;
  
  FUN_0001173c();
  FUN_00011746(7);
  uVar1 = (unaff_s0 + -0xc) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00011746(void)

{
  uint uVar1;
  int unaff_s0;
  
  FUN_00011746();
  uVar1 = (unaff_s0 + -0xc) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  uint uVar1;
  int unaff_s0;
  
  _L0();
  _L0();
  FUN_00011764(4);
  FUN_0001176e(9);
  _L0();
  FUN_00011780(5);
  FUN_0001178a(6);
  FUN_00011794(7);
  uVar1 = (unaff_s0 + -0xf) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  uint uVar1;
  int unaff_s0;
  
  _L0();
  FUN_00011764(4);
  FUN_0001176e(9);
  _L0();
  FUN_00011780(5);
  FUN_0001178a(6);
  FUN_00011794(7);
  uVar1 = (unaff_s0 + -0xf) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00011764(void)

{
  uint uVar1;
  int unaff_s0;
  
  FUN_00011764();
  FUN_0001176e(9);
  _L0();
  FUN_00011780(5);
  FUN_0001178a(6);
  FUN_00011794(7);
  uVar1 = (unaff_s0 + -0xf) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0001176e(void)

{
  uint uVar1;
  int unaff_s0;
  
  FUN_0001176e();
  _L0();
  FUN_00011780(5);
  FUN_0001178a(6);
  FUN_00011794(7);
  uVar1 = (unaff_s0 + -0xf) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(void)

{
  uint uVar1;
  int unaff_s0;
  
  _L0();
  FUN_00011780(5);
  FUN_0001178a(6);
  FUN_00011794(7);
  uVar1 = (unaff_s0 + -0xf) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00011780(void)

{
  uint uVar1;
  int unaff_s0;
  
  FUN_00011780();
  FUN_0001178a(6);
  FUN_00011794(7);
  uVar1 = (unaff_s0 + -0xf) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_0001178a(void)

{
  uint uVar1;
  int unaff_s0;
  
  FUN_0001178a();
  FUN_00011794(7);
  uVar1 = (unaff_s0 + -0xf) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 FUN_00011794(void)

{
  uint uVar1;
  int unaff_s0;
  
  FUN_00011794();
  uVar1 = (unaff_s0 + -0xf) * 4 - 1;
  _DAT_40001648 =
       uVar1 * 0x10000 & 0x7f0000 |
       uVar1 * 0x100 & 0x7f00 | uVar1 & 0x7f | _DAT_40001648 & 0xff808080;
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_config_bandwidth(uint32_t mode)

{
  if (mode == 0) {
    _DAT_4000e41c = _DAT_4000e41c & 0xfffffdff;
    _DAT_40001090 = _DAT_40001090 & 0xefffffff | 0x10000000;
    _DAT_40001228 = _DAT_40001228 & 0xfffffffb;
    _DAT_40001084 = _DAT_40001084 & 0xfcffffff | 0x2000000;
    _DAT_40001078 = _DAT_40001078 & 0xfffffeff;
  }
  else {
    if (mode == 1) {
      _DAT_4000e41c = _DAT_4000e41c | 0x200;
      _DAT_40001090 = _DAT_40001090 & 0xefffffff;
      _DAT_40001228 = _DAT_40001228 | 4;
      _DAT_40001084 = _DAT_40001084 & 0xfcffffff | 0x1000000;
      _DAT_40001078 = _DAT_40001078 | 0x100;
    }
  }
  return;
}



uint32_t rfc_get_power_level(uint32_t formatmod,int32_t power)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((formatmod != 0) && (uVar2 = 1, formatmod != 1)) {
    uVar2 = 2;
  }
  iVar1 = _L146(power,uVar2);
  return iVar1 << 2;
}



int _L146(void)

{
  int iVar1;
  
  iVar1 = _L146();
  return iVar1 << 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_wlan_mode_force(uint32_t force_mode)

{
  if (force_mode < 3) {
    _DAT_40001220 = (force_mode << 0x17 | _DAT_40001220 & 0xfe7fffff) & 0xfdffffff | 0x2000000;
    return;
  }
  _DAT_40001220 = _DAT_40001220 & 0xfc7fffff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_apply_tx_dvga_offset(int8_t offset_qdb)

{
  undefined3 in_register_00002029;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = CONCAT31(in_register_00002029,offset_qdb);
  iVar2 = ((_DAT_40001630 << 0x19) >> 0x19) + iVar3;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001630 << 0x11) >> 0x19) + iVar3;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001630 << 9) >> 0x19) + iVar3;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001630 << 1) >> 0x19) + iVar3;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001634 << 0x19) >> 0x19) + iVar3;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001634 << 0x11) >> 0x19) + iVar3;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001634 << 9) >> 0x19) + iVar3;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001634 << 1) >> 0x19) + iVar3;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 0x19) >> 0x19) + iVar3;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 0x11) >> 0x19) + iVar3;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 9) >> 0x19) + iVar3;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 1) >> 0x19) + iVar3;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x19) >> 0x19) + iVar3;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x11) >> 0x19) + iVar3;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar3 = ((_DAT_4000163c << 9) >> 0x19) + iVar3;
  iVar1 = 0x18;
  if ((iVar3 < 0x19) && (iVar1 = iVar3, iVar3 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  
  _L0();
  iVar2 = ((_DAT_40001630 << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001630 << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001630 << 1) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001634 << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001634 << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001634 << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001634 << 1) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 1) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  
  _L0();
  iVar2 = ((_DAT_40001630 << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001630 << 1) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001634 << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001634 << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001634 << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001634 << 1) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 1) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  
  _L0();
  iVar2 = ((_DAT_40001630 << 1) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001634 << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001634 << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001634 << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001634 << 1) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 1) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  
  _L0();
  iVar2 = ((_DAT_40001634 << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001634 << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001634 << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001634 << 1) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 1) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  
  _L0();
  iVar2 = ((_DAT_40001634 << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001634 << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001634 << 1) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 1) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  
  _L0();
  iVar2 = ((_DAT_40001634 << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001634 << 1) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 1) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  
  _L0();
  iVar2 = ((_DAT_40001634 << 1) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 1) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  
  _L0();
  iVar2 = ((_DAT_40001638 << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 1) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  
  _L0();
  iVar2 = ((_DAT_40001638 << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 1) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  
  _L0();
  iVar2 = ((_DAT_40001638 << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_40001638 << 1) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  
  _L0();
  iVar2 = ((_DAT_40001638 << 1) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  
  _L0();
  iVar2 = ((_DAT_4000163c << 0x19) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  
  _L0();
  iVar2 = ((_DAT_4000163c << 0x11) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  iVar2 = ((_DAT_4000163c << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  int iVar1;
  int iVar2;
  
  _L0();
  iVar2 = ((_DAT_4000163c << 9) >> 0x19) + unaff_s0;
  iVar1 = 0x18;
  if ((iVar2 < 0x19) && (iVar1 = iVar2, iVar2 < -0x30)) {
    iVar1 = -0x30;
  }
  _L0(iVar1);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void rfc_apply_tx_dvga(int8_t *dvga_qdb)

{
  _LVL1080((int)*dvga_qdb);
  FUN_00011b90((int)dvga_qdb[1]);
  FUN_00011b9c((int)dvga_qdb[2]);
  FUN_00011ba8((int)dvga_qdb[3]);
  FUN_00011bb4((int)dvga_qdb[4]);
  FUN_00011bc0((int)dvga_qdb[5]);
  FUN_00011bcc((int)dvga_qdb[6]);
  FUN_00011bd8((int)dvga_qdb[7]);
  FUN_00011be4((int)dvga_qdb[8]);
  FUN_00011bf0((int)dvga_qdb[9]);
  FUN_00011bfc((int)dvga_qdb[10]);
  FUN_00011c08((int)dvga_qdb[0xb]);
  FUN_00011c14((int)dvga_qdb[0xc]);
  FUN_00011c20((int)dvga_qdb[0xd]);
  FUN_00011c2c((int)dvga_qdb[0xe]);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _LVL1080(void)

{
  int unaff_s0;
  
  _LVL1080();
  FUN_00011b90((int)*(char *)(unaff_s0 + 1));
  FUN_00011b9c((int)*(char *)(unaff_s0 + 2));
  FUN_00011ba8((int)*(char *)(unaff_s0 + 3));
  FUN_00011bb4((int)*(char *)(unaff_s0 + 4));
  FUN_00011bc0((int)*(char *)(unaff_s0 + 5));
  FUN_00011bcc((int)*(char *)(unaff_s0 + 6));
  FUN_00011bd8((int)*(char *)(unaff_s0 + 7));
  FUN_00011be4((int)*(char *)(unaff_s0 + 8));
  FUN_00011bf0((int)*(char *)(unaff_s0 + 9));
  FUN_00011bfc((int)*(char *)(unaff_s0 + 10));
  FUN_00011c08((int)*(char *)(unaff_s0 + 0xb));
  FUN_00011c14((int)*(char *)(unaff_s0 + 0xc));
  FUN_00011c20((int)*(char *)(unaff_s0 + 0xd));
  FUN_00011c2c((int)*(char *)(unaff_s0 + 0xe));
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011b90(void)

{
  int unaff_s0;
  
  FUN_00011b90();
  FUN_00011b9c((int)*(char *)(unaff_s0 + 2));
  FUN_00011ba8((int)*(char *)(unaff_s0 + 3));
  FUN_00011bb4((int)*(char *)(unaff_s0 + 4));
  FUN_00011bc0((int)*(char *)(unaff_s0 + 5));
  FUN_00011bcc((int)*(char *)(unaff_s0 + 6));
  FUN_00011bd8((int)*(char *)(unaff_s0 + 7));
  FUN_00011be4((int)*(char *)(unaff_s0 + 8));
  FUN_00011bf0((int)*(char *)(unaff_s0 + 9));
  FUN_00011bfc((int)*(char *)(unaff_s0 + 10));
  FUN_00011c08((int)*(char *)(unaff_s0 + 0xb));
  FUN_00011c14((int)*(char *)(unaff_s0 + 0xc));
  FUN_00011c20((int)*(char *)(unaff_s0 + 0xd));
  FUN_00011c2c((int)*(char *)(unaff_s0 + 0xe));
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011b9c(void)

{
  int unaff_s0;
  
  FUN_00011b9c();
  FUN_00011ba8((int)*(char *)(unaff_s0 + 3));
  FUN_00011bb4((int)*(char *)(unaff_s0 + 4));
  FUN_00011bc0((int)*(char *)(unaff_s0 + 5));
  FUN_00011bcc((int)*(char *)(unaff_s0 + 6));
  FUN_00011bd8((int)*(char *)(unaff_s0 + 7));
  FUN_00011be4((int)*(char *)(unaff_s0 + 8));
  FUN_00011bf0((int)*(char *)(unaff_s0 + 9));
  FUN_00011bfc((int)*(char *)(unaff_s0 + 10));
  FUN_00011c08((int)*(char *)(unaff_s0 + 0xb));
  FUN_00011c14((int)*(char *)(unaff_s0 + 0xc));
  FUN_00011c20((int)*(char *)(unaff_s0 + 0xd));
  FUN_00011c2c((int)*(char *)(unaff_s0 + 0xe));
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011ba8(void)

{
  int unaff_s0;
  
  FUN_00011ba8();
  FUN_00011bb4((int)*(char *)(unaff_s0 + 4));
  FUN_00011bc0((int)*(char *)(unaff_s0 + 5));
  FUN_00011bcc((int)*(char *)(unaff_s0 + 6));
  FUN_00011bd8((int)*(char *)(unaff_s0 + 7));
  FUN_00011be4((int)*(char *)(unaff_s0 + 8));
  FUN_00011bf0((int)*(char *)(unaff_s0 + 9));
  FUN_00011bfc((int)*(char *)(unaff_s0 + 10));
  FUN_00011c08((int)*(char *)(unaff_s0 + 0xb));
  FUN_00011c14((int)*(char *)(unaff_s0 + 0xc));
  FUN_00011c20((int)*(char *)(unaff_s0 + 0xd));
  FUN_00011c2c((int)*(char *)(unaff_s0 + 0xe));
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011bb4(void)

{
  int unaff_s0;
  
  FUN_00011bb4();
  FUN_00011bc0((int)*(char *)(unaff_s0 + 5));
  FUN_00011bcc((int)*(char *)(unaff_s0 + 6));
  FUN_00011bd8((int)*(char *)(unaff_s0 + 7));
  FUN_00011be4((int)*(char *)(unaff_s0 + 8));
  FUN_00011bf0((int)*(char *)(unaff_s0 + 9));
  FUN_00011bfc((int)*(char *)(unaff_s0 + 10));
  FUN_00011c08((int)*(char *)(unaff_s0 + 0xb));
  FUN_00011c14((int)*(char *)(unaff_s0 + 0xc));
  FUN_00011c20((int)*(char *)(unaff_s0 + 0xd));
  FUN_00011c2c((int)*(char *)(unaff_s0 + 0xe));
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011bc0(void)

{
  int unaff_s0;
  
  FUN_00011bc0();
  FUN_00011bcc((int)*(char *)(unaff_s0 + 6));
  FUN_00011bd8((int)*(char *)(unaff_s0 + 7));
  FUN_00011be4((int)*(char *)(unaff_s0 + 8));
  FUN_00011bf0((int)*(char *)(unaff_s0 + 9));
  FUN_00011bfc((int)*(char *)(unaff_s0 + 10));
  FUN_00011c08((int)*(char *)(unaff_s0 + 0xb));
  FUN_00011c14((int)*(char *)(unaff_s0 + 0xc));
  FUN_00011c20((int)*(char *)(unaff_s0 + 0xd));
  FUN_00011c2c((int)*(char *)(unaff_s0 + 0xe));
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011bcc(void)

{
  int unaff_s0;
  
  FUN_00011bcc();
  FUN_00011bd8((int)*(char *)(unaff_s0 + 7));
  FUN_00011be4((int)*(char *)(unaff_s0 + 8));
  FUN_00011bf0((int)*(char *)(unaff_s0 + 9));
  FUN_00011bfc((int)*(char *)(unaff_s0 + 10));
  FUN_00011c08((int)*(char *)(unaff_s0 + 0xb));
  FUN_00011c14((int)*(char *)(unaff_s0 + 0xc));
  FUN_00011c20((int)*(char *)(unaff_s0 + 0xd));
  FUN_00011c2c((int)*(char *)(unaff_s0 + 0xe));
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011bd8(void)

{
  int unaff_s0;
  
  FUN_00011bd8();
  FUN_00011be4((int)*(char *)(unaff_s0 + 8));
  FUN_00011bf0((int)*(char *)(unaff_s0 + 9));
  FUN_00011bfc((int)*(char *)(unaff_s0 + 10));
  FUN_00011c08((int)*(char *)(unaff_s0 + 0xb));
  FUN_00011c14((int)*(char *)(unaff_s0 + 0xc));
  FUN_00011c20((int)*(char *)(unaff_s0 + 0xd));
  FUN_00011c2c((int)*(char *)(unaff_s0 + 0xe));
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011be4(void)

{
  int unaff_s0;
  
  FUN_00011be4();
  FUN_00011bf0((int)*(char *)(unaff_s0 + 9));
  FUN_00011bfc((int)*(char *)(unaff_s0 + 10));
  FUN_00011c08((int)*(char *)(unaff_s0 + 0xb));
  FUN_00011c14((int)*(char *)(unaff_s0 + 0xc));
  FUN_00011c20((int)*(char *)(unaff_s0 + 0xd));
  FUN_00011c2c((int)*(char *)(unaff_s0 + 0xe));
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011bf0(void)

{
  int unaff_s0;
  
  FUN_00011bf0();
  FUN_00011bfc((int)*(char *)(unaff_s0 + 10));
  FUN_00011c08((int)*(char *)(unaff_s0 + 0xb));
  FUN_00011c14((int)*(char *)(unaff_s0 + 0xc));
  FUN_00011c20((int)*(char *)(unaff_s0 + 0xd));
  FUN_00011c2c((int)*(char *)(unaff_s0 + 0xe));
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011bfc(void)

{
  int unaff_s0;
  
  FUN_00011bfc();
  FUN_00011c08((int)*(char *)(unaff_s0 + 0xb));
  FUN_00011c14((int)*(char *)(unaff_s0 + 0xc));
  FUN_00011c20((int)*(char *)(unaff_s0 + 0xd));
  FUN_00011c2c((int)*(char *)(unaff_s0 + 0xe));
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011c08(void)

{
  int unaff_s0;
  
  FUN_00011c08();
  FUN_00011c14((int)*(char *)(unaff_s0 + 0xc));
  FUN_00011c20((int)*(char *)(unaff_s0 + 0xd));
  FUN_00011c2c((int)*(char *)(unaff_s0 + 0xe));
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011c14(void)

{
  int unaff_s0;
  
  FUN_00011c14();
  FUN_00011c20((int)*(char *)(unaff_s0 + 0xd));
  FUN_00011c2c((int)*(char *)(unaff_s0 + 0xe));
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011c20(void)

{
  int unaff_s0;
  
  FUN_00011c20();
  FUN_00011c2c((int)*(char *)(unaff_s0 + 0xe));
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00011c2c(void)

{
  FUN_00011c2c();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_dump(void)

{
  int iVar1;
  
  _DAT_40001220 = _DAT_40001220 & 0xfffffff | 0x20000000;
  if (_DAT_40001008 << 0xb < 0) {
    iVar1 = 8;
    do {
      iVar1 = iVar1 + -1;
      _DAT_400010b0 = _DAT_400010b0 & 0xefffffff | 0x10000000;
      _L0(10);
      _DAT_400010b0 = _DAT_400010b0 & 0xefffffff;
      _L0(10);
    } while (iVar1 != 0);
    return;
  }
  return;
}



void _L0(undefined4 param_1)

{
  int unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  
  while( true ) {
    _L0(param_1);
    *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & unaff_s1;
    _L0(10);
    if (unaff_s2 == 0) break;
    param_1 = 10;
    unaff_s2 = unaff_s2 + -1;
    *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & unaff_s1 | unaff_s3;
  }
  return;
}



void _L0(undefined4 param_1)

{
  int unaff_s0;
  uint unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  
  while (_L0(param_1), unaff_s2 != 0) {
    unaff_s2 = unaff_s2 + -1;
    *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & unaff_s1 | unaff_s3;
    _L0(10);
    param_1 = 10;
    *(uint *)(unaff_s0 + 0xb0) = *(uint *)(unaff_s0 + 0xb0) & unaff_s1;
  }
  return;
}



// WARNING: Variable defined which should be unmapped: dg
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void rfc_apply_tx_power_offset(uint8_t channel,int8_t *power_offset)

{
  undefined3 in_register_00002029;
  uint uStack56;
  uint32_t rfg_index;
  uint32_t dg;
  
  _L0(CONCAT31(in_register_00002029,channel));
  _L0(0,&uStack56,&rfg_index);
  _DAT_40001640 = uStack56 & 7 | _DAT_40001640 & 0xfffffff8;
  _L0(rfg_index);
  FUN_00011d44(1,&uStack56,&rfg_index);
  _DAT_40001640 = (uStack56 & 7) << 4 | _DAT_40001640 & 0xffffff8f;
  _L0(rfg_index);
  FUN_00011d86(2,&uStack56,&rfg_index);
  _DAT_40001640 = (uStack56 & 7) << 8 | _DAT_40001640 & 0xfffff8ff;
  FUN_00011db0(rfg_index);
  FUN_00011dbe(3,&uStack56,&rfg_index);
  _DAT_40001640 = (uStack56 & 7) << 0xc | _DAT_40001640 & 0xffff8fff;
  FUN_00011dde(rfg_index);
  FUN_00011dec(4,&uStack56,&rfg_index);
  _DAT_40001640 = (uStack56 & 7) << 0x10 | _DAT_40001640 & 0xfff8ffff;
  FUN_00011e0c(rfg_index);
  FUN_00011e1a(5,&uStack56,&rfg_index);
  _DAT_40001640 = (uStack56 & 7) << 0x14 | _DAT_40001640 & 0xff8fffff;
  FUN_00011e3a(rfg_index);
  FUN_00011e48(6,&uStack56,&rfg_index);
  _DAT_40001640 = (uStack56 & 7) << 0x18 | _DAT_40001640 & 0xf8ffffff;
  FUN_00011e68(rfg_index);
  FUN_00011e76(7,&uStack56,&rfg_index);
  _DAT_40001640 = (uStack56 & 7) << 0x1c | _DAT_40001640 & 0x8fffffff;
  FUN_00011e94(rfg_index);
  FUN_00011ea2(8,&uStack56,&rfg_index);
  _DAT_40001644 = uStack56 & 7 | _DAT_40001644 & 0xfffffff8;
  FUN_00011ebe(rfg_index);
  FUN_00011ecc(9,&uStack56,&rfg_index);
  _DAT_40001644 = (uStack56 & 7) << 4 | _DAT_40001644 & 0xffffff8f;
  FUN_00011eec(rfg_index);
  FUN_00011efa(10,&uStack56,&rfg_index);
  _DAT_40001644 = (uStack56 & 7) << 8 | _DAT_40001644 & 0xfffff8ff;
  FUN_00011f1a(rfg_index);
  FUN_00011f28(0xb,&uStack56,&rfg_index);
  _DAT_40001644 = (uStack56 & 7) << 0xc | _DAT_40001644 & 0xffff8fff;
  FUN_00011f4a(rfg_index);
  FUN_00011f58(0xc,&uStack56,&rfg_index);
  _DAT_40001644 = (uStack56 & 7) << 0x10 | _DAT_40001644 & 0xfff8ffff;
  FUN_00011f7a(rfg_index);
  FUN_00011f88(0xd,&uStack56,&rfg_index);
  _DAT_40001644 = (uStack56 & 7) << 0x14 | _DAT_40001644 & 0xff8fffff;
  FUN_00011faa(rfg_index);
  FUN_00011fb8(0xe,&uStack56,&rfg_index);
  _DAT_40001644 = (uStack56 & 7) << 0x18 | _DAT_40001644 & 0xf8ffffff;
  FUN_00011fda(rfg_index);
  FUN_00011fe8(0xf,&uStack56,&rfg_index);
  _DAT_40001644 = (uStack56 & 7) << 0x1c | _DAT_40001644 & 0x8fffffff;
  FUN_00012008(rfg_index);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  _L0();
  _L0(0,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = in_stack_00000008 & 7 | _DAT_40001640 & 0xfffffff8;
  _L0(in_stack_0000000c);
  FUN_00011d44(1,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 4 | _DAT_40001640 & 0xffffff8f;
  _L0(in_stack_0000000c);
  FUN_00011d86(2,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 8 | _DAT_40001640 & 0xfffff8ff;
  FUN_00011db0(in_stack_0000000c);
  FUN_00011dbe(3,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0xc | _DAT_40001640 & 0xffff8fff;
  FUN_00011dde(in_stack_0000000c);
  FUN_00011dec(4,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001640 & 0xfff8ffff;
  FUN_00011e0c(in_stack_0000000c);
  FUN_00011e1a(5,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001640 & 0xff8fffff;
  FUN_00011e3a(in_stack_0000000c);
  FUN_00011e48(6,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001640 & 0xf8ffffff;
  FUN_00011e68(in_stack_0000000c);
  FUN_00011e76(7,&stack0x00000008,&stack0x0000000c);
  _DAT_40001640 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001640 & 0x8fffffff;
  FUN_00011e94(in_stack_0000000c);
  FUN_00011ea2(8,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = in_stack_00000008 & 7 | _DAT_40001644 & 0xfffffff8;
  FUN_00011ebe(in_stack_0000000c);
  FUN_00011ecc(9,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 4 | _DAT_40001644 & 0xffffff8f;
  FUN_00011eec(in_stack_0000000c);
  FUN_00011efa(10,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 8 | _DAT_40001644 & 0xfffff8ff;
  FUN_00011f1a(in_stack_0000000c);
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0xc | _DAT_40001644 & 0xffff8fff;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x10 | _DAT_40001644 & 0xfff8ffff;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x14 | _DAT_40001644 & 0xff8fffff;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x18 | _DAT_40001644 & 0xf8ffffff;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  _DAT_40001644 = (in_stack_00000008 & 7) << 0x1c | _DAT_40001644 & 0x8fffffff;
  FUN_00012008(in_stack_0000000c);
  return;
}



void _L0(void)

{
  int unaff_s0;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  _L0();
  *(uint *)(unaff_s0 + 0x640) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x640) & 0xfffffff8;
  _L0(in_stack_0000000c);
  FUN_00011d44(1,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x640) & 0xffffff8f;
  _L0(in_stack_0000000c);
  FUN_00011d86(2,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x640) & 0xfffff8ff;
  FUN_00011db0(in_stack_0000000c);
  FUN_00011dbe(3,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0xc | *(uint *)(unaff_s0 + 0x640) & 0xffff8fff;
  FUN_00011dde(in_stack_0000000c);
  FUN_00011dec(4,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x10 | *(uint *)(unaff_s0 + 0x640) & 0xfff8ffff;
  FUN_00011e0c(in_stack_0000000c);
  FUN_00011e1a(5,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x14 | *(uint *)(unaff_s0 + 0x640) & 0xff8fffff;
  FUN_00011e3a(in_stack_0000000c);
  FUN_00011e48(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x18 | *(uint *)(unaff_s0 + 0x640) & 0xf8ffffff;
  FUN_00011e68(in_stack_0000000c);
  FUN_00011e76(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x1c | *(uint *)(unaff_s0 + 0x640) & 0x8fffffff;
  FUN_00011e94(in_stack_0000000c);
  FUN_00011ea2(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00011ebe(in_stack_0000000c);
  FUN_00011ecc(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_00011eec(in_stack_0000000c);
  FUN_00011efa(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_00011f1a(in_stack_0000000c);
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0xc | *(uint *)(unaff_s0 + 0x644) & 0xffff8fff;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x10 | *(uint *)(unaff_s0 + 0x644) & 0xfff8ffff;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x14 | *(uint *)(unaff_s0 + 0x644) & 0xff8fffff;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x18 | *(uint *)(unaff_s0 + 0x644) & 0xf8ffffff;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x1c | *(uint *)(unaff_s0 + 0x644) & 0x8fffffff;
  FUN_00012008(in_stack_0000000c);
  return;
}



void _L0(void)

{
  int unaff_s0;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  _L0();
  FUN_00011d44(1,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x640) & 0xffffff8f;
  _L0(in_stack_0000000c);
  FUN_00011d86(2,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x640) & 0xfffff8ff;
  FUN_00011db0(in_stack_0000000c);
  FUN_00011dbe(3,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x640) & unaff_s10;
  FUN_00011dde(in_stack_0000000c);
  FUN_00011dec(4,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x640) & unaff_s8;
  FUN_00011e0c(in_stack_0000000c);
  FUN_00011e1a(5,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x14 | *(uint *)(unaff_s0 + 0x640) & 0xff8fffff;
  FUN_00011e3a(in_stack_0000000c);
  FUN_00011e48(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x18 | *(uint *)(unaff_s0 + 0x640) & 0xf8ffffff;
  FUN_00011e68(in_stack_0000000c);
  FUN_00011e76(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x1c | *(uint *)(unaff_s0 + 0x640) & 0x8fffffff;
  FUN_00011e94(in_stack_0000000c);
  FUN_00011ea2(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00011ebe(in_stack_0000000c);
  FUN_00011ecc(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_00011eec(in_stack_0000000c);
  FUN_00011efa(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_00011f1a(in_stack_0000000c);
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x644) & unaff_s10;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x14 | *(uint *)(unaff_s0 + 0x644) & 0xff8fffff;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x18 | *(uint *)(unaff_s0 + 0x644) & 0xf8ffffff;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x1c | *(uint *)(unaff_s0 + 0x644) & 0x8fffffff;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011d44(void)

{
  int unaff_s0;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011d44();
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x640) & 0xffffff8f;
  _L0(in_stack_0000000c);
  FUN_00011d86(2,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x640) & 0xfffff8ff;
  FUN_00011db0(in_stack_0000000c);
  FUN_00011dbe(3,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x640) & unaff_s10;
  FUN_00011dde(in_stack_0000000c);
  FUN_00011dec(4,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x640) & unaff_s8;
  FUN_00011e0c(in_stack_0000000c);
  FUN_00011e1a(5,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x14 | *(uint *)(unaff_s0 + 0x640) & 0xff8fffff;
  FUN_00011e3a(in_stack_0000000c);
  FUN_00011e48(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x18 | *(uint *)(unaff_s0 + 0x640) & 0xf8ffffff;
  FUN_00011e68(in_stack_0000000c);
  FUN_00011e76(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x1c | *(uint *)(unaff_s0 + 0x640) & 0x8fffffff;
  FUN_00011e94(in_stack_0000000c);
  FUN_00011ea2(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00011ebe(in_stack_0000000c);
  FUN_00011ecc(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_00011eec(in_stack_0000000c);
  FUN_00011efa(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_00011f1a(in_stack_0000000c);
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x644) & unaff_s10;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x14 | *(uint *)(unaff_s0 + 0x644) & 0xff8fffff;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x18 | *(uint *)(unaff_s0 + 0x644) & 0xf8ffffff;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x1c | *(uint *)(unaff_s0 + 0x644) & 0x8fffffff;
  FUN_00012008(in_stack_0000000c);
  return;
}



void _L0(void)

{
  int unaff_s0;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  _L0();
  FUN_00011d86(2,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x640) & 0xfffff8ff;
  FUN_00011db0(in_stack_0000000c);
  FUN_00011dbe(3,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x640) & unaff_s10;
  FUN_00011dde(in_stack_0000000c);
  FUN_00011dec(4,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x640) & unaff_s8;
  FUN_00011e0c(in_stack_0000000c);
  FUN_00011e1a(5,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x640) & unaff_s6;
  FUN_00011e3a(in_stack_0000000c);
  FUN_00011e48(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x640) & unaff_s4;
  FUN_00011e68(in_stack_0000000c);
  FUN_00011e76(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x1c | *(uint *)(unaff_s0 + 0x640) & 0x8fffffff;
  FUN_00011e94(in_stack_0000000c);
  FUN_00011ea2(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00011ebe(in_stack_0000000c);
  FUN_00011ecc(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_00011eec(in_stack_0000000c);
  FUN_00011efa(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_00011f1a(in_stack_0000000c);
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x644) & unaff_s10;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x1c | *(uint *)(unaff_s0 + 0x644) & 0x8fffffff;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011d86(void)

{
  int unaff_s0;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011d86();
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x640) & 0xfffff8ff;
  FUN_00011db0(in_stack_0000000c);
  FUN_00011dbe(3,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x640) & unaff_s10;
  FUN_00011dde(in_stack_0000000c);
  FUN_00011dec(4,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x640) & unaff_s8;
  FUN_00011e0c(in_stack_0000000c);
  FUN_00011e1a(5,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x640) & unaff_s6;
  FUN_00011e3a(in_stack_0000000c);
  FUN_00011e48(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x640) & unaff_s4;
  FUN_00011e68(in_stack_0000000c);
  FUN_00011e76(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       (in_stack_00000008 & 7) << 0x1c | *(uint *)(unaff_s0 + 0x640) & 0x8fffffff;
  FUN_00011e94(in_stack_0000000c);
  FUN_00011ea2(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00011ebe(in_stack_0000000c);
  FUN_00011ecc(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_00011eec(in_stack_0000000c);
  FUN_00011efa(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_00011f1a(in_stack_0000000c);
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x644) & unaff_s10;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 0x1c | *(uint *)(unaff_s0 + 0x644) & 0x8fffffff;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011db0(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011db0();
  FUN_00011dbe(3,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x640) & unaff_s10;
  FUN_00011dde(in_stack_0000000c);
  FUN_00011dec(4,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x640) & unaff_s8;
  FUN_00011e0c(in_stack_0000000c);
  FUN_00011e1a(5,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x640) & unaff_s6;
  FUN_00011e3a(in_stack_0000000c);
  FUN_00011e48(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x640) & unaff_s4;
  FUN_00011e68(in_stack_0000000c);
  FUN_00011e76(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x640) & unaff_s2;
  FUN_00011e94(in_stack_0000000c);
  FUN_00011ea2(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00011ebe(in_stack_0000000c);
  FUN_00011ecc(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_00011eec(in_stack_0000000c);
  FUN_00011efa(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_00011f1a(in_stack_0000000c);
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x644) & unaff_s10;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011dbe(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011dbe();
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x640) & unaff_s10;
  FUN_00011dde(in_stack_0000000c);
  FUN_00011dec(4,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x640) & unaff_s8;
  FUN_00011e0c(in_stack_0000000c);
  FUN_00011e1a(5,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x640) & unaff_s6;
  FUN_00011e3a(in_stack_0000000c);
  FUN_00011e48(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x640) & unaff_s4;
  FUN_00011e68(in_stack_0000000c);
  FUN_00011e76(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x640) & unaff_s2;
  FUN_00011e94(in_stack_0000000c);
  FUN_00011ea2(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00011ebe(in_stack_0000000c);
  FUN_00011ecc(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_00011eec(in_stack_0000000c);
  FUN_00011efa(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_00011f1a(in_stack_0000000c);
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x644) & unaff_s10;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011dde(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011dde();
  FUN_00011dec(4,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x640) & unaff_s8;
  FUN_00011e0c(in_stack_0000000c);
  FUN_00011e1a(5,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x640) & unaff_s6;
  FUN_00011e3a(in_stack_0000000c);
  FUN_00011e48(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x640) & unaff_s4;
  FUN_00011e68(in_stack_0000000c);
  FUN_00011e76(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x640) & unaff_s2;
  FUN_00011e94(in_stack_0000000c);
  FUN_00011ea2(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00011ebe(in_stack_0000000c);
  FUN_00011ecc(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_00011eec(in_stack_0000000c);
  FUN_00011efa(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_00011f1a(in_stack_0000000c);
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x644) & unaff_s10;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011dec(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011dec();
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x640) & unaff_s8;
  FUN_00011e0c(in_stack_0000000c);
  FUN_00011e1a(5,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x640) & unaff_s6;
  FUN_00011e3a(in_stack_0000000c);
  FUN_00011e48(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x640) & unaff_s4;
  FUN_00011e68(in_stack_0000000c);
  FUN_00011e76(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x640) & unaff_s2;
  FUN_00011e94(in_stack_0000000c);
  FUN_00011ea2(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00011ebe(in_stack_0000000c);
  FUN_00011ecc(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_00011eec(in_stack_0000000c);
  FUN_00011efa(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_00011f1a(in_stack_0000000c);
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x644) & unaff_s10;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011e0c(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011e0c();
  FUN_00011e1a(5,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x640) & unaff_s6;
  FUN_00011e3a(in_stack_0000000c);
  FUN_00011e48(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x640) & unaff_s4;
  FUN_00011e68(in_stack_0000000c);
  FUN_00011e76(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x640) & unaff_s2;
  FUN_00011e94(in_stack_0000000c);
  FUN_00011ea2(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00011ebe(in_stack_0000000c);
  FUN_00011ecc(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_00011eec(in_stack_0000000c);
  FUN_00011efa(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_00011f1a(in_stack_0000000c);
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x644) & unaff_s10;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011e1a(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011e1a();
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x640) & unaff_s6;
  FUN_00011e3a(in_stack_0000000c);
  FUN_00011e48(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x640) & unaff_s4;
  FUN_00011e68(in_stack_0000000c);
  FUN_00011e76(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x640) & unaff_s2;
  FUN_00011e94(in_stack_0000000c);
  FUN_00011ea2(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00011ebe(in_stack_0000000c);
  FUN_00011ecc(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_00011eec(in_stack_0000000c);
  FUN_00011efa(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_00011f1a(in_stack_0000000c);
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x644) & unaff_s10;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011e3a(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011e3a();
  FUN_00011e48(6,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x640) & unaff_s4;
  FUN_00011e68(in_stack_0000000c);
  FUN_00011e76(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x640) & unaff_s2;
  FUN_00011e94(in_stack_0000000c);
  FUN_00011ea2(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00011ebe(in_stack_0000000c);
  FUN_00011ecc(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_00011eec(in_stack_0000000c);
  FUN_00011efa(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_00011f1a(in_stack_0000000c);
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x644) & unaff_s10;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011e48(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011e48();
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x640) & unaff_s4;
  FUN_00011e68(in_stack_0000000c);
  FUN_00011e76(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x640) & unaff_s2;
  FUN_00011e94(in_stack_0000000c);
  FUN_00011ea2(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00011ebe(in_stack_0000000c);
  FUN_00011ecc(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_00011eec(in_stack_0000000c);
  FUN_00011efa(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_00011f1a(in_stack_0000000c);
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x644) & unaff_s10;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011e68(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011e68();
  FUN_00011e76(7,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x640) & unaff_s2;
  FUN_00011e94(in_stack_0000000c);
  FUN_00011ea2(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00011ebe(in_stack_0000000c);
  FUN_00011ecc(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_00011eec(in_stack_0000000c);
  FUN_00011efa(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_00011f1a(in_stack_0000000c);
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x644) & unaff_s10;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011e76(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011e76();
  *(uint *)(unaff_s0 + 0x640) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x640) & unaff_s2;
  FUN_00011e94(in_stack_0000000c);
  FUN_00011ea2(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00011ebe(in_stack_0000000c);
  FUN_00011ecc(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_00011eec(in_stack_0000000c);
  FUN_00011efa(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_00011f1a(in_stack_0000000c);
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x644) & unaff_s10;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011e94(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011e94();
  FUN_00011ea2(8,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00011ebe(in_stack_0000000c);
  FUN_00011ecc(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_00011eec(in_stack_0000000c);
  FUN_00011efa(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_00011f1a(in_stack_0000000c);
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x644) & unaff_s10;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011ea2(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011ea2();
  *(uint *)(unaff_s0 + 0x644) = in_stack_00000008 & 7 | *(uint *)(unaff_s0 + 0x644) & 0xfffffff8;
  FUN_00011ebe(in_stack_0000000c);
  FUN_00011ecc(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_00011eec(in_stack_0000000c);
  FUN_00011efa(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_00011f1a(in_stack_0000000c);
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x644) & unaff_s10;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011ebe(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011ebe();
  FUN_00011ecc(9,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_00011eec(in_stack_0000000c);
  FUN_00011efa(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_00011f1a(in_stack_0000000c);
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x644) & unaff_s10;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011ecc(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011ecc();
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 4 | *(uint *)(unaff_s0 + 0x644) & 0xffffff8f;
  FUN_00011eec(in_stack_0000000c);
  FUN_00011efa(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_00011f1a(in_stack_0000000c);
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x644) & unaff_s10;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011eec(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011eec();
  FUN_00011efa(10,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_00011f1a(in_stack_0000000c);
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x644) & unaff_s10;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011efa(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  uint in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011efa();
  *(uint *)(unaff_s0 + 0x644) =
       (in_stack_00000008 & 7) << 8 | *(uint *)(unaff_s0 + 0x644) & 0xfffff8ff;
  FUN_00011f1a(in_stack_0000000c);
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x644) & unaff_s10;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011f1a(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011f1a();
  FUN_00011f28(0xb,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x644) & unaff_s10;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011f28(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  uint unaff_s9;
  uint unaff_s10;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011f28();
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0xc & unaff_s9 | *(uint *)(unaff_s0 + 0x644) & unaff_s10;
  FUN_00011f4a(in_stack_0000000c);
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011f4a(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011f4a();
  FUN_00011f58(0xc,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011f58(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  uint unaff_s7;
  uint unaff_s8;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011f58();
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x10 & unaff_s7 | *(uint *)(unaff_s0 + 0x644) & unaff_s8;
  FUN_00011f7a(in_stack_0000000c);
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011f7a(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011f7a();
  FUN_00011f88(0xd,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011f88(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  uint unaff_s6;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011f88();
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x14 & unaff_s5 | *(uint *)(unaff_s0 + 0x644) & unaff_s6;
  FUN_00011faa(in_stack_0000000c);
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011faa(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011faa();
  FUN_00011fb8(0xe,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011fb8(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  uint unaff_s3;
  uint unaff_s4;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011fb8();
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x18 & unaff_s3 | *(uint *)(unaff_s0 + 0x644) & unaff_s4;
  FUN_00011fda(in_stack_0000000c);
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011fda(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011fda();
  FUN_00011fe8(0xf,&stack0x00000008,&stack0x0000000c);
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00011fe8(void)

{
  int unaff_s0;
  uint unaff_s1;
  uint unaff_s2;
  int in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  FUN_00011fe8();
  *(uint *)(unaff_s0 + 0x644) =
       in_stack_00000008 << 0x1c & unaff_s1 | *(uint *)(unaff_s0 + 0x644) & unaff_s2;
  FUN_00012008(in_stack_0000000c);
  return;
}



void FUN_00012008(void)

{
  FUN_00012008();
  return;
}


