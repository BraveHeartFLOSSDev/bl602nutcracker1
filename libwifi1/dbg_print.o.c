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
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef int _ssize_t;

typedef struct _mbstate_t _mbstate_t, *P_mbstate_t;

typedef union anon_union.conflictef_for___value anon_union.conflictef_for___value, *Panon_union.conflictef_for___value;

typedef uint wint_t;

union anon_union.conflictef_for___value {
    wint_t __wch;
    uchar __wchb[4];
};

struct _mbstate_t {
    int __count;
    union anon_union.conflictef_for___value __value;
};

typedef long _off_t;

typedef union anon_union.conflictef anon_union.conflictef, *Panon_union.conflictef;

union anon_union.conflictef {
    wint_t __wch;
    uchar __wchb[4];
};

typedef long _fpos_t;

typedef struct la_mem_format la_mem_format, *Pla_mem_format;

typedef ulong uint32_t;

struct la_mem_format {
    uint32_t word[4];
};

typedef enum anon_enum_8.conflict97a {
    S_DOT=4,
    C_TYPE=7,
    AC_VI=2,
    S_FLAGS=2,
    AC_VO=3,
    C_SIZE=6,
    C_MAX=8,
    S_WIDTH=3,
    C_FLAG=5,
    FLAG_NEGATIVE=-128,
    S_COPY=0,
    C_ZERO=3,
    AC_MAX=4,
    TID_1=1,
    TID_0=0,
    FLAG_LEAD_ZERO=64,
    TID_3=3,
    S_TYPE=7,
    TID_2=2,
    TID_5=5,
    FLAG_LONG=2,
    TID_4=4,
    S_MAX=8,
    C_PERCENT=1,
    TID_7=7,
    TID_6=6,
    FLAG_SIGN_SPACE=16,
    S_PERCENT=1,
    C_OTHER=0,
    TID_MGT=8,
    FLAG_SIGNED=4,
    S_SIZE=6,
    S_PRECIS=5,
    C_DIGIT=4,
    C_DOT=2,
    FLAG_LEFT=32,
    AC_BE=1,
    TID_MAX=9,
    AC_BK=0,
    FLAG_SHORT=1,
    FLAG_SIGN=8
} anon_enum_8.conflict97a;

typedef struct mac_addr mac_addr, *Pmac_addr;

typedef ushort uint16_t;

struct mac_addr {
    uint16_t array[3];
};

typedef void * __gnuc_va_list;

typedef __gnuc_va_list va_list;

typedef uchar uint8_t;

typedef long int32_t;

typedef struct debug_env_tag debug_env_tag, *Pdebug_env_tag;

struct debug_env_tag {
    uint32_t filter_module;
    uint32_t filter_severity;
};

typedef enum dbg_mod_tag {
    DBG_MOD_IDX_MAX=8,
    DBG_MOD_IDX_PHY=7,
    DBG_MOD_IDX_MM=4,
    DBG_MOD_IDX_RX=6,
    DBG_MOD_IDX_IPC=2,
    DBG_MOD_IDX_DBG=1,
    DBG_MOD_IDX_TX=5,
    DBG_MOD_IDX_KE=0,
    DBG_MOD_IDX_DMA=3
} dbg_mod_tag;

typedef struct __sFILE __sFILE, *P__sFILE;

typedef struct _reent _reent, *P_reent;

typedef struct __sFILE __FILE;

typedef struct __sbuf __sbuf, *P__sbuf;

typedef struct __locale_t __locale_t, *P__locale_t;

typedef struct _Bigint _Bigint, *P_Bigint;

typedef union anon_union.conflict8c9_for__new anon_union.conflict8c9_for__new, *Panon_union.conflict8c9_for__new;

typedef struct _atexit _atexit, *P_atexit;

typedef struct _glue _glue, *P_glue;

typedef int _LOCK_RECURSIVE_T;

typedef _LOCK_RECURSIVE_T _flock_t;

typedef ulong __ULong;

typedef struct anon_struct.conflict73d anon_struct.conflict73d, *Panon_struct.conflict73d;

typedef struct anon_struct.conflict882 anon_struct.conflict882, *Panon_struct.conflict882;

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

struct anon_struct.conflict882 {
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

struct anon_struct.conflict73d {
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

union anon_union.conflict8c9_for__new {
    struct anon_struct.conflict73d _reent;
    struct anon_struct.conflict882 _unused;
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
    union anon_union.conflict8c9_for__new _new;
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

typedef union anon_union.conflict8c9 anon_union.conflict8c9, *Panon_union.conflict8c9;

union anon_union.conflict8c9 {
    struct anon_struct.conflict73d _reent;
    struct anon_struct.conflict882 _unused;
};

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




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void dbg_test_print(char *fmt,...)

{
  uint uVar1;
  byte *pbVar2;
  va_list args;
  
  if (_DAT_00000004 != 0) {
    pbVar2 = (byte *)(fmt + 2);
    do {
      uVar1 = (uint)(byte)*fmt;
      if (-1 < *fmt) {
        return;
      }
      if (uVar1 < 0x88) {
        if ((~uRam00000000 >> (uVar1 - 0x80 & 0x1f) & 1) != 0) {
          return;
        }
      }
      else {
        if (5 < (uVar1 + 0x66 & 0xff)) {
          FUN_000100a4(0,0,0x297);
        }
        if (_DAT_00000004 <= uVar1 - 0x9a) {
          return;
        }
      }
      fmt = (char *)((byte *)fmt + 1);
    } while (pbVar2 != (byte *)fmt);
  }
  return;
}



void FUN_000100a4(undefined4 param_1)

{
  uint unaff_s0;
  uint *unaff_s1;
  byte *unaff_s2;
  byte *unaff_s3;
  uint unaff_s4;
  uint unaff_s5;
  
  do {
    FUN_000100a4(param_1);
    do {
      if (unaff_s1[1] <= unaff_s0 - 0x9a) {
        return;
      }
      while( true ) {
        unaff_s2 = unaff_s2 + 1;
        if (unaff_s3 == unaff_s2) {
          return;
        }
        unaff_s0 = (uint)*unaff_s2;
        if (-1 < (char)*unaff_s2) {
          return;
        }
        if (unaff_s4 < unaff_s0) break;
        if ((~*unaff_s1 >> (unaff_s0 - 0x80 & 0x1f) & 1) != 0) {
          return;
        }
      }
    } while ((unaff_s0 + 0x66 & 0xff) <= unaff_s5);
    param_1 = 0x297;
  } while( true );
}



uint32_t dbg_snprintf(char *buffer,uint32_t size,char *fmt,...)

{
  byte bVar1;
  uint uVar2;
  uint32_t uVar3;
  byte bVar4;
  int iVar5;
  byte *pbStack188;
  char *fmt_usr;
  va_list args;
  char buffer_tmp [64];
  
  uVar2 = 0;
  pbStack188 = (byte *)fmt;
  while( true ) {
    bVar1 = *pbStack188;
    if (bVar1 == 0) break;
    if (size == 1) goto _L0;
    iVar5 = 7;
    if (bVar1 != 0x58) {
      if (bVar1 < 0x59) {
        iVar5 = 5;
        if (bVar1 != 0x2d) {
          if (bVar1 < 0x2e) {
            iVar5 = 1;
            if (bVar1 != 0x25) {
              if (bVar1 < 0x26) {
                bVar4 = 0x20;
              }
              else {
                iVar5 = 4;
                if (bVar1 == 0x2a) goto _L0;
                bVar4 = 0x2b;
              }
              iVar5 = 5;
_L0:
              if (bVar1 != bVar4) goto _L0;
            }
          }
          else {
            iVar5 = 3;
            if (bVar1 != 0x30) {
              if (bVar1 < 0x31) {
                bVar4 = 0x2e;
                iVar5 = 2;
              }
              else {
                iVar5 = 7;
                if (bVar1 == 0x41) goto _L0;
                bVar4 = 0x4d;
              }
              goto _L0;
            }
          }
        }
      }
      else {
        iVar5 = 6;
        if (bVar1 != 0x6c) {
          if (bVar1 < 0x6d) {
            if (bVar1 != 0x68) {
              if (0x68 < bVar1) {
                bVar4 = 0x69;
                iVar5 = 7;
                goto _L0;
              }
              if ((byte)(bVar1 + 0x9f) < 4) {
                iVar5 = 7;
                goto _L0;
              }
_L0:
              iVar5 = 4;
              if (8 < (byte)(bVar1 - 0x31)) {
                iVar5 = 0;
              }
            }
          }
          else {
            iVar5 = 7;
            if (bVar1 != 0x73) {
              if (bVar1 < 0x74) {
                bVar4 = 0x6d;
                iVar5 = 7;
              }
              else {
                iVar5 = 7;
                if (bVar1 == 0x75) goto _L0;
                bVar4 = 0x78;
              }
              goto _L0;
            }
          }
        }
      }
    }
_L0:
    uVar2 = (uint)*(byte *)(iVar5 + uVar2 * 8);
    if (uVar2 < 8) {
                    // WARNING: Could not emulate address calculation at 0x000101fc
                    // WARNING: Treating indirect jump as call
      uVar3 = (**(code **)(uVar2 * 4))(*(code **)(uVar2 * 4));
      return uVar3;
    }
    FUN_000105e0(0,0,0x238);
    pbStack188 = pbStack188 + 1;
  }
  if (size == 1) {
_L0:
    buffer[-2] = '*';
    buffer[-1] = '\n';
  }
  *buffer = '\0';
  return 0;
}



undefined * FUN_00010262(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s5;
  undefined *unaff_s8;
  int unaff_s10;
  byte *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  FUN_00010262();
  uVar2 = 2;
  while( true ) {
    bVar1 = *in_stack_00000004;
    if (bVar1 == 0) break;
    if (unaff_s10 == 0) goto _L0;
    iVar5 = 7;
    if (bVar1 != 0x58) {
      if (bVar1 < 0x59) {
        iVar5 = 5;
        if (bVar1 != 0x2d) {
          if (bVar1 < 0x2e) {
            iVar5 = 1;
            if (bVar1 != 0x25) {
              if (bVar1 < 0x26) {
                bVar4 = 0x20;
              }
              else {
                iVar5 = 4;
                if (bVar1 == 0x2a) goto _L0;
                bVar4 = 0x2b;
              }
              iVar5 = 5;
_L0:
              if (bVar1 != bVar4) goto _L0;
            }
          }
          else {
            iVar5 = 3;
            if (bVar1 != 0x30) {
              if (bVar1 < 0x31) {
                bVar4 = 0x2e;
                iVar5 = 2;
              }
              else {
                iVar5 = 7;
                if (bVar1 == 0x41) goto _L0;
                bVar4 = 0x4d;
              }
              goto _L0;
            }
          }
        }
      }
      else {
        iVar5 = 6;
        if (bVar1 != 0x6c) {
          if (bVar1 < 0x6d) {
            if (bVar1 != 0x68) {
              if (0x68 < bVar1) {
                bVar4 = 0x69;
                iVar5 = 7;
                goto _L0;
              }
              if ((byte)(bVar1 + 0x9f) < 4) {
                iVar5 = 7;
                goto _L0;
              }
_L0:
              iVar5 = 4;
              if (8 < (byte)(bVar1 - 0x31)) {
                iVar5 = 0;
              }
            }
          }
          else {
            iVar5 = 7;
            if (bVar1 != 0x73) {
              if (bVar1 < 0x74) {
                bVar4 = 0x6d;
                iVar5 = 7;
              }
              else {
                iVar5 = 7;
                if (bVar1 == 0x75) goto _L0;
                bVar4 = 0x78;
              }
              goto _L0;
            }
          }
        }
      }
    }
_L0:
    uVar2 = (uint)*(byte *)(iVar5 + uVar2 * 8 + in_stack_0000000c);
    if (uVar2 < 8) {
      UNRECOVERED_JUMPTABLE = *(code **)(uVar2 * 4 + unaff_s5);
                    // WARNING: Could not recover jumptable at 0x000101fe. Too many branches
                    // WARNING: Treating indirect jump as call
      puVar3 = (undefined *)(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return puVar3;
    }
    FUN_000105e0(0x238);
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  if (unaff_s10 == 0) {
_L0:
    unaff_s8[-2] = 0x2a;
    unaff_s8[-1] = 10;
  }
  *unaff_s8 = 0;
  return unaff_s8 + -in_stack_00000008;
}



undefined * FUN_000102f4(void)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s5;
  undefined *unaff_s8;
  int unaff_s10;
  byte *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  FUN_000102f4();
  uVar2 = 6;
  while( true ) {
    bVar1 = *in_stack_00000004;
    if (bVar1 == 0) break;
    if (unaff_s10 == 0) goto _L0;
    iVar5 = 7;
    if (bVar1 != 0x58) {
      if (bVar1 < 0x59) {
        iVar5 = 5;
        if (bVar1 != 0x2d) {
          if (bVar1 < 0x2e) {
            iVar5 = 1;
            if (bVar1 != 0x25) {
              if (bVar1 < 0x26) {
                bVar4 = 0x20;
              }
              else {
                iVar5 = 4;
                if (bVar1 == 0x2a) goto _L0;
                bVar4 = 0x2b;
              }
              iVar5 = 5;
_L0:
              if (bVar1 != bVar4) goto _L0;
            }
          }
          else {
            iVar5 = 3;
            if (bVar1 != 0x30) {
              if (bVar1 < 0x31) {
                bVar4 = 0x2e;
                iVar5 = 2;
              }
              else {
                iVar5 = 7;
                if (bVar1 == 0x41) goto _L0;
                bVar4 = 0x4d;
              }
              goto _L0;
            }
          }
        }
      }
      else {
        iVar5 = 6;
        if (bVar1 != 0x6c) {
          if (bVar1 < 0x6d) {
            if (bVar1 != 0x68) {
              if (0x68 < bVar1) {
                bVar4 = 0x69;
                iVar5 = 7;
                goto _L0;
              }
              if ((byte)(bVar1 + 0x9f) < 4) {
                iVar5 = 7;
                goto _L0;
              }
_L0:
              iVar5 = 4;
              if (8 < (byte)(bVar1 - 0x31)) {
                iVar5 = 0;
              }
            }
          }
          else {
            iVar5 = 7;
            if (bVar1 != 0x73) {
              if (bVar1 < 0x74) {
                bVar4 = 0x6d;
                iVar5 = 7;
              }
              else {
                iVar5 = 7;
                if (bVar1 == 0x75) goto _L0;
                bVar4 = 0x78;
              }
              goto _L0;
            }
          }
        }
      }
    }
_L0:
    uVar2 = (uint)*(byte *)(iVar5 + uVar2 * 8 + in_stack_0000000c);
    if (uVar2 < 8) {
      UNRECOVERED_JUMPTABLE = *(code **)(uVar2 * 4 + unaff_s5);
                    // WARNING: Could not recover jumptable at 0x000101fe. Too many branches
                    // WARNING: Treating indirect jump as call
      puVar3 = (undefined *)(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return puVar3;
    }
    FUN_000105e0(0x238);
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  if (unaff_s10 == 0) {
_L0:
    unaff_s8[-2] = 0x2a;
    unaff_s8[-1] = 10;
  }
  *unaff_s8 = 0;
  return unaff_s8 + -in_stack_00000008;
}



undefined * FUN_000105e0(undefined4 param_1)

{
  byte bVar1;
  uint unaff_s0;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  int unaff_s5;
  undefined *unaff_s8;
  int unaff_s10;
  byte *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  while( true ) {
    FUN_000105e0(param_1);
    bVar1 = *in_stack_00000004;
    if (bVar1 == 0) break;
    if (unaff_s10 == 0) goto _L0;
    iVar4 = 7;
    if (bVar1 != 0x58) {
      if (bVar1 < 0x59) {
        iVar4 = 5;
        if (bVar1 != 0x2d) {
          if (bVar1 < 0x2e) {
            iVar4 = 1;
            if (bVar1 != 0x25) {
              if (bVar1 < 0x26) {
                bVar3 = 0x20;
              }
              else {
                iVar4 = 4;
                if (bVar1 == 0x2a) goto _L0;
                bVar3 = 0x2b;
              }
              iVar4 = 5;
_L0:
              if (bVar1 != bVar3) goto _L0;
            }
          }
          else {
            iVar4 = 3;
            if (bVar1 != 0x30) {
              if (bVar1 < 0x31) {
                bVar3 = 0x2e;
                iVar4 = 2;
              }
              else {
                iVar4 = 7;
                if (bVar1 == 0x41) goto _L0;
                bVar3 = 0x4d;
              }
              goto _L0;
            }
          }
        }
      }
      else {
        iVar4 = 6;
        if (bVar1 != 0x6c) {
          if (bVar1 < 0x6d) {
            if (bVar1 != 0x68) {
              if (0x68 < bVar1) {
                bVar3 = 0x69;
                iVar4 = 7;
                goto _L0;
              }
              if ((byte)(bVar1 + 0x9f) < 4) {
                iVar4 = 7;
                goto _L0;
              }
_L0:
              iVar4 = 4;
              if (8 < (byte)(bVar1 - 0x31)) {
                iVar4 = 0;
              }
            }
          }
          else {
            iVar4 = 7;
            if (bVar1 != 0x73) {
              if (bVar1 < 0x74) {
                bVar3 = 0x6d;
                iVar4 = 7;
              }
              else {
                iVar4 = 7;
                if (bVar1 == 0x75) goto _L0;
                bVar3 = 0x78;
              }
              goto _L0;
            }
          }
        }
      }
    }
_L0:
    unaff_s0 = (uint)*(byte *)(iVar4 + unaff_s0 * 8 + in_stack_0000000c);
    if (unaff_s0 < 8) {
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_s0 * 4 + unaff_s5);
                    // WARNING: Could not recover jumptable at 0x000101fe. Too many branches
                    // WARNING: Treating indirect jump as call
      puVar2 = (undefined *)(*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return puVar2;
    }
    param_1 = 0x238;
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  if (unaff_s10 == 0) {
_L0:
    unaff_s8[-2] = 0x2a;
    unaff_s8[-1] = 10;
  }
  *unaff_s8 = 0;
  return unaff_s8 + -in_stack_00000008;
}


