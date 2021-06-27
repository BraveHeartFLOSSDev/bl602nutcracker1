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

typedef struct __sFILE __sFILE, *P__sFILE;

typedef int _ssize_t;

typedef struct _reent _reent, *P_reent;

typedef long _fpos_t;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflicta2f_for__new anon_union.conflicta2f_for__new, *Panon_union.conflicta2f_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef long _off_t;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict8a3 anon_struct.conflict8a3, *Panon_struct.conflict8a3;

typedef struct anon_struct.conflict9e8 anon_struct.conflict9e8, *Panon_struct.conflict9e8;

typedef struct _on_exit_args _on_exit_args, *P_on_exit_args;

typedef union anon_union.conflict257_for___value anon_union.conflict257_for___value, *Panon_union.conflict257_for___value;

typedef struct __tm __tm, *P__tm;

typedef struct _rand48 _rand48, *P_rand48;

typedef uint wint_t;

union anon_union.conflict257_for___value { // DWARF DIE: 257
    wint_t __wch;
    uchar __wchb[4];
};

struct _Bigint { // DWARF DIE: 2dd
    struct _Bigint * _next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    __ULong _x[1];
};

struct _rand48 { // DWARF DIE: 85a
    ushort _seed[3];
    ushort _mult[3];
    ushort _add;
};

struct _glue { // DWARF DIE: 815
    struct _glue * _next;
    int _niobs;
    __FILE * _iobs;
};

struct _on_exit_args { // DWARF DIE: 3d0
    void * _fnargs[32];
    void * _dso_handle[32];
    __ULong _fntypes;
    __ULong _is_cxa;
};

struct _atexit { // DWARF DIE: 425
    struct _atexit * _next;
    int _ind;
    void (* _fns[32])(void);
    struct _on_exit_args _on_exit_args;
};

struct __sbuf { // DWARF DIE: 485
    uchar * _base;
    int _size;
};

struct _mbstate_t { // DWARF DIE: 289
    int __count;
    union anon_union.conflict257_for___value __value;
};

struct __sFILE { // DWARF DIE: 4b3
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

struct __tm { // DWARF DIE: 34d
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

struct anon_struct.conflict8a3 { // DWARF DIE: 8a3
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

struct anon_struct.conflict9e8 { // DWARF DIE: 9e8
    uchar * _nextf[30];
    uint _nmalloc[30];
};

union anon_union.conflicta2f_for__new { // DWARF DIE: a2f
    struct anon_struct.conflict8a3 _reent;
    struct anon_struct.conflict9e8 _unused;
};

struct _reent { // DWARF DIE: 61f
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
    union anon_union.conflicta2f_for__new _new;
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

struct __locale_t { // DWARF DIE: a64
};

typedef union anon_union.conflicta2f anon_union.conflicta2f, *Panon_union.conflicta2f;

union anon_union.conflicta2f { // DWARF DIE: a2f
    struct anon_struct.conflict8a3 _reent;
    struct anon_struct.conflict9e8 _unused;
};

typedef union anon_union.conflict257 anon_union.conflict257, *Panon_union.conflict257;

union anon_union.conflict257 { // DWARF DIE: 257
    wint_t __wch;
    uchar __wchb[4];
};

typedef enum anon_enum_8.conflict11e {
    LIR_TYPE_A=1,
    LIR_TYPE_B=2,
    LIR_TYPE_C=3,
    LIR_TYPE_D=4,
    LIR_TYPE_E=5,
    LIR_TYPE_F=6,
    LIR_TYPE_G=7,
    LIR_TYPE_H=8,
    LIR_TYPE_I=9,
    LIR_TYPE_J=10,
    OP_CFLIRI_BUFFER=54,
    OP_CFLIR_BUFFER=56,
    OP_CFLIR_PLD=57,
    OP_CLIR=53,
    OP_CTLIRI_PLD=55,
    OP_LADD=24,
    OP_LCMP=25,
    OP_LDIV=20,
    OP_LDIV2N=18,
    OP_LMUL=22,
    OP_LMUL2N=19,
    OP_LSQR=21,
    OP_LSUB=23,
    OP_MADD=40,
    OP_MDIV2=33,
    OP_MEXP=35,
    OP_MINV=34,
    OP_MMUL=37,
    OP_MOD2N=17,
    OP_MOVDAT=50,
    OP_MREM=38,
    OP_MSQR=36,
    OP_MSUB=39,
    OP_NLIR=51,
    OP_PPSEL=0,
    OP_RESIZE=49,
    OP_SLIR=52
} anon_enum_8.conflict11e;

typedef ulong uint32_t;

typedef uchar uint8_t;

typedef ushort uint16_t;

typedef struct pka0_pld_cfg pka0_pld_cfg, *Ppka0_pld_cfg;

typedef union anon_union.conflictb4f_for_value anon_union.conflictb4f_for_value, *Panon_union.conflictb4f_for_value;

typedef struct anon_struct.conflictaf6 anon_struct.conflictaf6, *Panon_struct.conflictaf6;

struct anon_struct.conflictaf6 { // DWARF DIE: af6
    uint32_t size:12;
    uint32_t d_reg_index:8;
    uint32_t d_reg_type:4;
    uint32_t op:7;
    uint32_t last_op:1;
};

union anon_union.conflictb4f_for_value { // DWARF DIE: b4f
    struct anon_struct.conflictaf6 BF;
    uint32_t WORD;
};

struct pka0_pld_cfg { // DWARF DIE: b70
    union anon_union.conflictb4f_for_value value;
};

typedef struct pka0_bit_shift_op_cfg pka0_bit_shift_op_cfg, *Ppka0_bit_shift_op_cfg;

typedef union anon_union.conflictdec_for_value anon_union.conflictdec_for_value, *Panon_union.conflictdec_for_value;

typedef struct anon_struct.conflictdc2 anon_struct.conflictdc2, *Panon_struct.conflictdc2;

struct anon_struct.conflictdc2 { // DWARF DIE: dc2
    uint32_t bit_shift:15;
    uint32_t reserved_24_31:17;
};

union anon_union.conflictdec_for_value { // DWARF DIE: dec
    struct anon_struct.conflictdc2 BF;
    uint32_t WORD;
};

struct pka0_bit_shift_op_cfg { // DWARF DIE: e0d
    union anon_union.conflictdec_for_value value;
};

typedef union anon_union.conflictd86 anon_union.conflictd86, *Panon_union.conflictd86;

typedef struct anon_struct.conflictd2c anon_struct.conflictd2c, *Panon_struct.conflictd2c;

struct anon_struct.conflictd2c { // DWARF DIE: d2c
    uint32_t s2_reg_idx:8;
    uint32_t s2_reg_type:4;
    uint32_t s1_reg_idx:8;
    uint32_t s1_reg_type:4;
    uint32_t reserved_24_31:8;
};

union anon_union.conflictd86 { // DWARF DIE: d86
    struct anon_struct.conflictd2c BF;
    uint32_t WORD;
};

typedef struct pka0_common_op_snd_cfg_S2_only pka0_common_op_snd_cfg_S2_only, *Ppka0_common_op_snd_cfg_S2_only;

typedef union anon_union.conflictcf0_for_value anon_union.conflictcf0_for_value, *Panon_union.conflictcf0_for_value;

typedef struct anon_struct.conflictcb6 anon_struct.conflictcb6, *Panon_struct.conflictcb6;

struct anon_struct.conflictcb6 { // DWARF DIE: cb6
    uint32_t s2_reg_idx:8;
    uint32_t s2_reg_type:4;
    uint32_t reserved_12_31:20;
};

union anon_union.conflictcf0_for_value { // DWARF DIE: cf0
    struct anon_struct.conflictcb6 BF;
    uint32_t WORD;
};

struct pka0_common_op_snd_cfg_S2_only { // DWARF DIE: d11
    union anon_union.conflictcf0_for_value value;
};

typedef union anon_union.conflictb4f anon_union.conflictb4f, *Panon_union.conflictb4f;

union anon_union.conflictb4f { // DWARF DIE: b4f
    struct anon_struct.conflictaf6 BF;
    uint32_t WORD;
};

typedef struct pka0_common_op_first_cfg pka0_common_op_first_cfg, *Ppka0_common_op_first_cfg;

typedef union anon_union.conflictbf4_for_value anon_union.conflictbf4_for_value, *Panon_union.conflictbf4_for_value;

typedef struct anon_struct.conflictb8b anon_struct.conflictb8b, *Panon_struct.conflictb8b;

struct anon_struct.conflictb8b { // DWARF DIE: b8b
    uint32_t s0_reg_idx:8;
    uint32_t s0_reg_type:4;
    uint32_t d_reg_idx:8;
    uint32_t d_reg_type:4;
    uint32_t op:7;
    uint32_t last_op:1;
};

union anon_union.conflictbf4_for_value { // DWARF DIE: bf4
    struct anon_struct.conflictb8b BF;
    uint32_t WORD;
};

struct pka0_common_op_first_cfg { // DWARF DIE: c15
    union anon_union.conflictbf4_for_value value;
};

typedef struct pka0_common_op_snd_cfg_S1_S2 pka0_common_op_snd_cfg_S1_S2, *Ppka0_common_op_snd_cfg_S1_S2;

typedef union anon_union.conflictd86_for_value anon_union.conflictd86_for_value, *Panon_union.conflictd86_for_value;

union anon_union.conflictd86_for_value { // DWARF DIE: d86
    struct anon_struct.conflictd2c BF;
    uint32_t WORD;
};

struct pka0_common_op_snd_cfg_S1_S2 { // DWARF DIE: da7
    union anon_union.conflictd86_for_value value;
};

typedef struct pka0_common_op_snd_cfg_S1_only pka0_common_op_snd_cfg_S1_only, *Ppka0_common_op_snd_cfg_S1_only;

typedef union anon_union.conflictc7a_for_value anon_union.conflictc7a_for_value, *Panon_union.conflictc7a_for_value;

typedef struct anon_struct.conflictc30 anon_struct.conflictc30, *Panon_struct.conflictc30;

struct anon_struct.conflictc30 { // DWARF DIE: c30
    uint32_t reserved_0_11:12;
    uint32_t s1_reg_idx:8;
    uint32_t s1_reg_type:4;
    uint32_t reserved_24_31:8;
};

union anon_union.conflictc7a_for_value { // DWARF DIE: c7a
    struct anon_struct.conflictc30 BF;
    uint32_t WORD;
};

struct pka0_common_op_snd_cfg_S1_only { // DWARF DIE: c9b
    union anon_union.conflictc7a_for_value value;
};

typedef union anon_union.conflictdec anon_union.conflictdec, *Panon_union.conflictdec;

union anon_union.conflictdec { // DWARF DIE: dec
    struct anon_struct.conflictdc2 BF;
    uint32_t WORD;
};

typedef union anon_union.conflictc7a anon_union.conflictc7a, *Panon_union.conflictc7a;

union anon_union.conflictc7a { // DWARF DIE: c7a
    struct anon_struct.conflictc30 BF;
    uint32_t WORD;
};

typedef union anon_union.conflictcf0 anon_union.conflictcf0, *Panon_union.conflictcf0;

union anon_union.conflictcf0 { // DWARF DIE: cf0
    struct anon_struct.conflictcb6 BF;
    uint32_t WORD;
};

typedef union anon_union.conflictbf4 anon_union.conflictbf4, *Panon_union.conflictbf4;

union anon_union.conflictbf4 { // DWARF DIE: bf4
    struct anon_struct.conflictb8b BF;
    uint32_t WORD;
};

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
// DWARF DIE: 1aec

void pka0_write_common_op_first_cfg
               (uint8_t s0_reg_index,uint8_t s0_reg_type,uint8_t d_reg_index,uint8_t d_reg_type,
               uint8_t op,_Bool last_op)

{
  uint uVar1;
  undefined3 in_register_00002039;
  uint uStack36;
  pka0_common_op_first_cfg cfg;
  
  (*pcRam00000000)(&uStack36,0,4,pcRam00000000);
  uVar1 = (s0_reg_type & 0xf) << 8;
  uStack36 = uStack36 & 0xfffff000 | (uint)s0_reg_index | uVar1;
  if (CONCAT31(in_register_00002039,op) != 0x19) {
    uStack36 = s0_reg_index | uVar1 | (uint)d_reg_index << 0xc | (d_reg_type & 0xf) << 0x14;
  }
  _DAT_40004340 = uStack36 & 0xffffff | (op & 0x7f) << 0x18 | (uint)last_op << 0x1f;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1a90

void pka0_write_common_op_snd_cfg_S1(uint8_t s1_reg_index,uint8_t s1_reg_type)

{
  undefined3 in_register_00002029;
  uint uStack20;
  pka0_common_op_snd_cfg_S1_only cfg;
  
  (*pcRam00000000)(&uStack20,0,4,pcRam00000000);
  _DAT_40004340 =
       (uStack20 & 0xfff00fff | CONCAT31(in_register_00002029,s1_reg_index) << 0xc) & 0xff0fffff |
       (s1_reg_type & 0xf) << 0x14;
  return;
}



// WARNING: Variable defined which should be unmapped: cfg
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 19d8

void pka0_write_common_op_snd_cfg_S1_S2
               (uint8_t s1_reg_index,uint8_t s1_reg_type,uint8_t s2_reg_index,uint8_t s2_reg_type)

{
  undefined3 in_register_00002029;
  uint uStack20;
  pka0_common_op_snd_cfg_S1_S2 cfg;
  
  (*pcRam00000000)(&uStack20,0,4,pcRam00000000);
  _DAT_40004340 =
       (uStack20 & 0xfff00fff | CONCAT31(in_register_00002029,s1_reg_index) << 0xc) & 0xff0ff000 |
       (s1_reg_type & 0xf) << 0x14 | (uint)s2_reg_index | (s2_reg_type & 0xf) << 8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1d66

void sec_eng_pka0_reset(void)

{
  _DAT_40004300 = 8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1d41

void sec_eng_pka0_clear_int(void)

{
  _DAT_40004300 = _DAT_40004300 & 0xfffffdff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1b8e

void sec_eng_pka0_pld(uint16_t size,uint32_t *data,uint8_t reg_index,uint8_t reg_type,uint8_t op,
                     _Bool last_op)

{
  int iVar1;
  undefined2 in_register_0000202a;
  undefined3 in_register_00002031;
  uint uVar2;
  
  _DAT_40004340 =
       size & 0xfff | CONCAT31(in_register_00002031,reg_index) << 0xc | (reg_type & 0xf) << 0x14 |
       (op & 0x7f) << 0x18 | (uint)last_op << 0x1f;
  for (uVar2 = 0; (int)uVar2 < CONCAT22(in_register_0000202a,size); uVar2 += 1) {
    iVar1 = 0x340;
    if ((size & 7) == 0) {
      iVar1 = 0x360;
    }
    *(uint32_t *)((uVar2 & 7) * 4 + iVar1 + 0x40004000) = data[uVar2];
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 19af

void sec_eng_pka0_wait_4_isr(void)

{
  do {
  } while ((_DAT_40004300 & 0x100) == 0);
  return;
}



// WARNING: Variable defined which should be unmapped: ret_data
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 17d5

void sec_eng_pka0_read_data(uint8_t reg_ype,uint8_t reg_idx,uint32_t *result,uint8_t ret_size)

{
  int iVar1;
  undefined3 in_register_00002035;
  uint uVar2;
  uint uVar3;
  undefined4 uStack36;
  uint32_t ret_data;
  
  uVar3 = reg_ype - 1 & 0xff;
  uVar2 = 0;
  if (uVar3 < 10) {
    uVar2 = (uint)*(ushort *)(uVar3 * 2);
  }
  if (CONCAT31(in_register_00002035,ret_size) <= (uVar2 & 0xff)) {
    _DAT_40004340 = 0;
    _L0();
    _L0();
    for (uVar2 = 0; (int)uVar2 < (int)CONCAT31(in_register_00002035,ret_size); uVar2 += 1) {
      iVar1 = 0x360;
      if ((ret_size & 7) != 0) {
        iVar1 = 0x340;
      }
      uStack36 = *(undefined4 *)((uVar2 & 7) * 4 + iVar1 + 0x40004000);
      (*pcRam00000000)(result + (uVar2 & 7),&uStack36,4,pcRam00000000);
    }
    return;
  }
  return;
}



void _L0(void)

{
  uint unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 *puVar2;
  int unaff_s2;
  uint uVar3;
  int unaff_s5;
  undefined4 uStack0000000c;
  
  _L0();
  _L0();
  for (uVar3 = 0; (int)uVar3 < (int)unaff_s0; uVar3 += 1) {
    iVar1 = (uVar3 & 7) * 4;
    puVar2 = (undefined4 *)(iVar1 + unaff_s2 + 0x360);
    if ((unaff_s0 & 7) != 0) {
      puVar2 = (undefined4 *)(iVar1 + unaff_s5);
    }
    uStack0000000c = *puVar2;
    (*pcRam00000000)(iVar1 + unaff_s1,&stack0x0000000c,4,pcRam00000000);
  }
  return;
}



void _L0(void)

{
  uint unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined4 *puVar2;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s5;
  undefined4 uStack0000000c;
  
  _L0();
  for (; (int)unaff_s3 < (int)unaff_s0; unaff_s3 += 1) {
    iVar1 = (unaff_s3 & 7) * 4;
    puVar2 = (undefined4 *)(iVar1 + unaff_s2 + 0x360);
    if ((unaff_s0 & 7) != 0) {
      puVar2 = (undefined4 *)(iVar1 + unaff_s5);
    }
    uStack0000000c = *puVar2;
    (*pcRam00000000)(iVar1 + unaff_s1,&stack0x0000000c,4,pcRam00000000);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 170b

void sec_eng_pka0_clir(uint8_t last_op,uint8_t d_reg_type,uint8_t d_reg_idx,uint8_t size)

{
  _DAT_40004340 = 0;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 1662

void sec_eng_pka0_movdat(uint8_t last_op,uint8_t d_reg_type,uint8_t d_reg_idx,uint8_t s0_reg_type,
                        uint8_t s0_reg_idx)

{
  undefined3 in_register_00002029;
  
  _L0();
  _DAT_40004340 = 0;
  if (CONCAT31(in_register_00002029,last_op) == 0) {
    _DAT_40004340 = 0;
    return;
  }
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  int unaff_s0;
  
  _L0();
  _DAT_40004340 = 0;
  if (unaff_s0 == 0) {
    _DAT_40004340 = 0;
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



// DWARF DIE: 157b

void sec_eng_pka0_msub(uint8_t last_op,uint8_t d_reg_type,uint8_t d_reg_idx,uint8_t s0_reg_type,
                      uint8_t s0_reg_idx,uint8_t s1_reg_type,uint8_t s1_reg_idx,uint8_t s2_reg_type,
                      uint8_t s2_reg_idx)

{
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 148c

void sec_eng_pka0_mrem(uint8_t last_op,uint8_t d_reg_type,uint8_t d_reg_idx,uint8_t s0_reg_type,
                      uint8_t s0_reg_idx,uint8_t s2_reg_type,uint8_t s2_reg_idx)

{
  uint uStack20;
  pka0_common_op_snd_cfg_S2_only cfg;
  
  _L0();
  (*pcRam00000000)(&uStack20,0,4,pcRam00000000);
  _DAT_40004340 = uStack20 & 0xfffff000 | (uint)s2_reg_idx | (s2_reg_type & 0xf) << 8;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  uint unaff_s0;
  byte in_stack_0000000c;
  uint in_stack_0000001c;
  
  _L0();
  (*pcRam00000000)(&stack0x0000001c,0,4,pcRam00000000);
  _DAT_40004340 = in_stack_0000001c & 0xfffff000 | (uint)in_stack_0000000c | (unaff_s0 & 0xf) << 8;
  return;
}



// DWARF DIE: 13a5

void sec_eng_pka0_mmul(uint8_t last_op,uint8_t d_reg_type,uint8_t d_reg_idx,uint8_t s0_reg_type,
                      uint8_t s0_reg_idx,uint8_t s1_reg_type,uint8_t s1_reg_idx,uint8_t s2_reg_type,
                      uint8_t s2_reg_idx)

{
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



// DWARF DIE: 12be

void sec_eng_pka0_mexp(uint8_t last_op,uint8_t d_reg_type,uint8_t d_reg_idx,uint8_t s0_reg_type,
                      uint8_t s0_reg_idx,uint8_t s1_reg_type,uint8_t s1_reg_idx,uint8_t s2_reg_type,
                      uint8_t s2_reg_idx)

{
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 11ec

void sec_eng_pka0_lcmp(uint8_t *cout,uint8_t s0_reg_type,uint8_t s0_reg_idx,uint8_t s1_reg_type,
                      uint8_t s1_reg_idx)

{
  _L0();
  FUN_0001048e();
  _L0();
  _L0();
  *cout = (byte)((uint)_DAT_40004300 >> 0x18) & 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  byte *unaff_s0;
  
  _L0();
  FUN_0001048e();
  _L0();
  _L0();
  *unaff_s0 = (byte)((uint)_DAT_40004300 >> 0x18) & 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0001048e(void)

{
  byte *unaff_s0;
  
  FUN_0001048e();
  _L0();
  _L0();
  *unaff_s0 = (byte)((uint)_DAT_40004300 >> 0x18) & 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  byte *unaff_s0;
  
  _L0();
  _L0();
  *unaff_s0 = (byte)((uint)_DAT_40004300 >> 0x18) & 1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(void)

{
  byte *unaff_s0;
  
  _L0();
  *unaff_s0 = (byte)((uint)_DAT_40004300 >> 0x18) & 1;
  return;
}



// DWARF DIE: 1138

void sec_eng_pka0_ladd(uint8_t last_op,uint8_t d_reg_type,uint8_t d_reg_idx,uint8_t s0_reg_type,
                      uint8_t s0_reg_idx,uint8_t s1_reg_type,uint8_t s1_reg_idx)

{
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



// DWARF DIE: 1084

void sec_eng_pka0_lsub(uint8_t last_op,uint8_t d_reg_type,uint8_t d_reg_idx,uint8_t s0_reg_type,
                      uint8_t s0_reg_idx,uint8_t s1_reg_type,uint8_t s1_reg_idx)

{
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



// DWARF DIE: fd0

void sec_eng_pka0_lmul(uint8_t last_op,uint8_t d_reg_type,uint8_t d_reg_idx,uint8_t s0_reg_type,
                      uint8_t s0_reg_idx,uint8_t s1_reg_type,uint8_t s1_reg_idx)

{
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: efc

void sec_eng_pka0_lmul2n(uint8_t last_op,uint8_t d_reg_type,uint8_t d_reg_idx,uint8_t s0_reg_type,
                        uint8_t s0_reg_idx,uint16_t bit_shift)

{
  uint uStack36;
  pka0_bit_shift_op_cfg cfg;
  
  (*pcRam00000000)(&uStack36,0,4,pcRam00000000);
  FUN_00010598();
  _DAT_40004340 = uStack36 & 0xffff8000 | bit_shift & 0x7fff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00010598(void)

{
  uint unaff_s0;
  uint in_stack_0000000c;
  
  FUN_00010598();
  _DAT_40004340 = in_stack_0000000c & 0xffff8000 | unaff_s0 & 0x7fff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: e28

void sec_eng_pka0_ldiv2n(uint8_t last_op,uint8_t d_reg_type,uint8_t d_reg_idx,uint8_t s0_reg_type,
                        uint8_t s0_reg_idx,uint16_t bit_shift)

{
  uint uStack36;
  pka0_bit_shift_op_cfg cfg;
  
  (*pcRam00000000)(&uStack36,0,4,pcRam00000000);
  FUN_000105fa();
  _DAT_40004340 = uStack36 & 0xffff8000 | bit_shift & 0x7fff;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000105fa(void)

{
  uint unaff_s0;
  uint in_stack_0000000c;
  
  FUN_000105fa();
  _DAT_40004340 = in_stack_0000000c & 0xffff8000 | unaff_s0 & 0x7fff;
  return;
}


