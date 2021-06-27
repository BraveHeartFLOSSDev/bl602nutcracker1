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

typedef struct em_buf_tx_desc em_buf_tx_desc, *Pem_buf_tx_desc;

typedef ushort uint16_t;

struct em_buf_tx_desc { // DWARF DIE: 301
    uint16_t txptr;
    uint16_t txheader;
    uint16_t txdataptr;
    uint16_t txdle;
};

typedef struct em_buf_node em_buf_node, *Pem_buf_node;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr { // DWARF DIE: 157
    struct co_list_hdr * next;
};

struct em_buf_node { // DWARF DIE: 1d9
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buf_ptr;
};

typedef struct em_desc_node em_desc_node, *Pem_desc_node;

typedef uchar uint8_t;

struct em_desc_node { // DWARF DIE: 2a5
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buffer_idx;
    uint16_t buffer_ptr;
    uint8_t llid;
    uint8_t length;
};

typedef struct em_buf_env_tag em_buf_env_tag, *Pem_buf_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: 178
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct em_buf_env_tag { // DWARF DIE: 343
    struct co_list tx_desc_free;
    struct co_list tx_buff_free;
    struct em_desc_node tx_desc_node[26];
    struct em_buf_node tx_buff_node[2];
    struct em_buf_tx_desc * tx_desc;
    uint8_t rx_current;
    undefined field_0x15d;
    undefined field_0x15e;
    undefined field_0x15f;
};

typedef enum anon_enum_8.conflict31 {
    KE_MEM_BLOCK_EM=1,
    KE_MEM_BLOCK_MAX=2,
    KE_MEM_BLOCK_RAM=0,
    KE_MEM_ENV=0,
    KE_MEM_KE_MSG=0,
    KE_MEM_NON_RETENTION=0
} anon_enum_8.conflict31;

typedef struct bd_addr bd_addr, *Pbd_addr;

struct bd_addr { // DWARF DIE: 1a0
    uint8_t addr[6];
};

typedef ulong uint32_t;

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
// DWARF DIE: 64b

void em_buf_init(void)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  
  DAT_0000015c = 0;
  _L0();
  FUN_00010034();
  _DAT_00000158 = &DAT_280082ca;
  iVar7 = 0;
  iVar3 = 0;
  uVar2 = 0;
  puVar1 = (undefined2 *)&DAT_280082ce;
  do {
    uVar4 = uVar2 & 0xffff;
    *(short *)(iVar3 + 0x14) = (short)uVar2;
    uVar2 += 1;
    iVar3 += 0xc;
    *puVar1 = (short)((uVar4 * 0x26 + 0x43e) * 0x10000 >> 0x10);
    puVar1[2] = 0;
    puVar1[1] = 0;
    puVar1[-1] = puVar1[-1] & 0xffdf;
    puVar1[-1] = puVar1[-1] & 0xffdf;
    puVar1[-2] = 0x8000;
    puVar1 = puVar1 + 5;
  } while (uVar2 != 6);
  puVar1 = (undefined2 *)&DAT_2800830a;
  do {
    *(short *)(iVar7 + 0x5c) = (short)uVar2;
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    iVar3 = iVar7 + 0x58;
    puVar1[-1] = puVar1[-1] & 0xffdf;
    uVar2 += 1;
    iVar7 += 0xc;
    puVar1[-1] = puVar1[-1] & 0xffdf;
    puVar1[-2] = 0x8000;
    _L0(iVar3);
    puVar1 = puVar1 + 5;
  } while (uVar2 != 0x1a);
  _DAT_0000014c = 0x5220000;
  _L0();
  _DAT_00000154 = 0x6260001;
  _L0();
  iVar3 = 0;
  puVar1 = (undefined2 *)&DAT_280083d6;
  do {
    iVar3 += 1;
    *puVar1 = (short)((uint)((iVar3 * 0x104 + 0x626) * 0x10000) >> 0x10);
    puVar1[-4] = ((ushort)iVar3 & 7) * 0xe + 0x3ce;
    puVar1[2] = 0;
    puVar1[-2] = puVar1[-2] & 0xffdf;
    puVar1[-2] = puVar1[-2] & 0xffdf;
    puVar1 = puVar1 + 7;
  } while (iVar3 != 8);
  puVar5 = (ushort *)&DAT_2800809e;
  do {
    puVar6 = puVar5 + 0x2e;
    *puVar5 = *puVar5 & 0xbfff;
    puVar5[9] = puVar5[9] & 0xfcff;
    puVar5[0x25] = 0;
    puVar5 = puVar6;
  } while (puVar6 != (ushort *)0x2800820e);
  return;
}



void _L0(void)

{
  int unaff_s0;
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  int unaff_s2;
  
  _L0();
  FUN_00010034();
  *(undefined **)(unaff_s0 + 0x158) = &DAT_280082ca;
  uVar2 = 0;
  iVar4 = unaff_s2;
  puVar1 = (undefined2 *)&DAT_280082ce;
  do {
    uVar5 = uVar2 & 0xffff;
    *(short *)(iVar4 + 0x14) = (short)uVar2;
    uVar2 += 1;
    iVar4 += 0xc;
    *puVar1 = (short)((uVar5 * 0x26 + 0x43e) * 0x10000 >> 0x10);
    puVar1[2] = 0;
    puVar1[1] = 0;
    puVar1[-1] = puVar1[-1] & 0xffdf;
    puVar1[-1] = puVar1[-1] & 0xffdf;
    puVar1[-2] = 0x8000;
    puVar1 = puVar1 + 5;
  } while (uVar2 != 6);
  puVar1 = (undefined2 *)&DAT_2800830a;
  iVar4 = unaff_s2;
  do {
    *(short *)(iVar4 + 0x5c) = (short)uVar2;
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    iVar3 = iVar4 + 0x58;
    puVar1[-1] = puVar1[-1] & 0xffdf;
    uVar2 += 1;
    iVar4 += 0xc;
    puVar1[-1] = puVar1[-1] & 0xffdf;
    puVar1[-2] = 0x8000;
    _L0(iVar3);
    puVar1 = puVar1 + 5;
  } while (uVar2 != 0x1a);
  *(undefined4 *)(unaff_s2 + 0x14c) = 0x5220000;
  _L0();
  *(undefined4 *)(unaff_s2 + 0x154) = 0x6260001;
  _L0();
  iVar4 = 0;
  puVar1 = (undefined2 *)&DAT_280083d6;
  do {
    iVar4 += 1;
    *puVar1 = (short)((uint)((iVar4 * 0x104 + 0x626) * 0x10000) >> 0x10);
    puVar1[-4] = ((ushort)iVar4 & 7) * 0xe + 0x3ce;
    puVar1[2] = 0;
    puVar1[-2] = puVar1[-2] & 0xffdf;
    puVar1[-2] = puVar1[-2] & 0xffdf;
    puVar1 = puVar1 + 7;
  } while (iVar4 != 8);
  puVar6 = (ushort *)&DAT_2800809e;
  do {
    puVar7 = puVar6 + 0x2e;
    *puVar6 = *puVar6 & 0xbfff;
    puVar6[9] = puVar6[9] & 0xfcff;
    puVar6[0x25] = 0;
    puVar6 = puVar7;
  } while (puVar7 != (ushort *)0x2800820e);
  return;
}



void FUN_00010034(void)

{
  int unaff_s0;
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  ushort *puVar7;
  int unaff_s2;
  
  FUN_00010034();
  *(undefined **)(unaff_s0 + 0x158) = &DAT_280082ca;
  uVar2 = 0;
  iVar4 = unaff_s2;
  puVar1 = (undefined2 *)&DAT_280082ce;
  do {
    uVar5 = uVar2 & 0xffff;
    *(short *)(iVar4 + 0x14) = (short)uVar2;
    uVar2 += 1;
    iVar4 += 0xc;
    *puVar1 = (short)((uVar5 * 0x26 + 0x43e) * 0x10000 >> 0x10);
    puVar1[2] = 0;
    puVar1[1] = 0;
    puVar1[-1] = puVar1[-1] & 0xffdf;
    puVar1[-1] = puVar1[-1] & 0xffdf;
    puVar1[-2] = 0x8000;
    puVar1 = puVar1 + 5;
  } while (uVar2 != 6);
  puVar1 = (undefined2 *)&DAT_2800830a;
  iVar4 = unaff_s2;
  do {
    *(short *)(iVar4 + 0x5c) = (short)uVar2;
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    iVar3 = iVar4 + 0x58;
    puVar1[-1] = puVar1[-1] & 0xffdf;
    uVar2 += 1;
    iVar4 += 0xc;
    puVar1[-1] = puVar1[-1] & 0xffdf;
    puVar1[-2] = 0x8000;
    _L0(iVar3);
    puVar1 = puVar1 + 5;
  } while (uVar2 != 0x1a);
  *(undefined4 *)(unaff_s2 + 0x14c) = 0x5220000;
  _L0();
  *(undefined4 *)(unaff_s2 + 0x154) = 0x6260001;
  _L0();
  iVar4 = 0;
  puVar1 = (undefined2 *)&DAT_280083d6;
  do {
    iVar4 += 1;
    *puVar1 = (short)((uint)((iVar4 * 0x104 + 0x626) * 0x10000) >> 0x10);
    puVar1[-4] = ((ushort)iVar4 & 7) * 0xe + 0x3ce;
    puVar1[2] = 0;
    puVar1[-2] = puVar1[-2] & 0xffdf;
    puVar1[-2] = puVar1[-2] & 0xffdf;
    puVar1 = puVar1 + 7;
  } while (iVar4 != 8);
  puVar6 = (ushort *)&DAT_2800809e;
  do {
    puVar7 = puVar6 + 0x2e;
    *puVar6 = *puVar6 & 0xbfff;
    puVar6[9] = puVar6[9] & 0xfcff;
    puVar6[0x25] = 0;
    puVar6 = puVar7;
  } while (puVar7 != (ushort *)0x2800820e);
  return;
}



void _L0(int param_1)

{
  undefined2 *unaff_s0;
  int unaff_s1;
  int iVar1;
  undefined2 *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  undefined2 unaff_s7;
  
  while( true ) {
    _L0(param_1);
    if (unaff_s1 == unaff_s6) break;
    *(short *)(unaff_s5 + 0x5c) = (short)unaff_s1;
    unaff_s0[5] = 0;
    unaff_s0[7] = 0;
    unaff_s0[6] = 0;
    param_1 = unaff_s5 + 0x58;
    unaff_s0[4] = unaff_s0[4] & 0xffdf;
    unaff_s1 += 1;
    unaff_s5 += 0xc;
    unaff_s0[4] = unaff_s0[4] & 0xffdf;
    unaff_s0[3] = unaff_s7;
    unaff_s0 = unaff_s0 + 5;
  }
  *(undefined4 *)(unaff_s4 + 0x14c) = 0x5220000;
  _L0();
  *(undefined4 *)(unaff_s4 + 0x154) = 0x6260001;
  _L0();
  iVar1 = 0;
  puVar2 = (undefined2 *)&DAT_280083d6;
  do {
    iVar1 += 1;
    *puVar2 = (short)((uint)((iVar1 * 0x104 + 0x626) * 0x10000) >> 0x10);
    puVar2[-4] = ((ushort)iVar1 & 7) * 0xe + 0x3ce;
    puVar2[2] = 0;
    puVar2[-2] = puVar2[-2] & 0xffdf;
    puVar2[-2] = puVar2[-2] & 0xffdf;
    puVar2 = puVar2 + 7;
  } while (iVar1 != 8);
  puVar3 = (ushort *)&DAT_2800809e;
  do {
    puVar4 = puVar3 + 0x2e;
    *puVar3 = *puVar3 & 0xbfff;
    puVar3[9] = puVar3[9] & 0xfcff;
    puVar3[0x25] = 0;
    puVar3 = puVar4;
  } while (puVar4 != (ushort *)0x2800820e);
  return;
}



void _L0(void)

{
  int iVar1;
  undefined2 *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  int unaff_s4;
  
  _L0();
  *(undefined4 *)(unaff_s4 + 0x154) = 0x6260001;
  _L0();
  iVar1 = 0;
  puVar2 = (undefined2 *)&DAT_280083d6;
  do {
    iVar1 += 1;
    *puVar2 = (short)((uint)((iVar1 * 0x104 + 0x626) * 0x10000) >> 0x10);
    puVar2[-4] = ((ushort)iVar1 & 7) * 0xe + 0x3ce;
    puVar2[2] = 0;
    puVar2[-2] = puVar2[-2] & 0xffdf;
    puVar2[-2] = puVar2[-2] & 0xffdf;
    puVar2 = puVar2 + 7;
  } while (iVar1 != 8);
  puVar3 = (ushort *)&DAT_2800809e;
  do {
    puVar4 = puVar3 + 0x2e;
    *puVar3 = *puVar3 & 0xbfff;
    puVar3[9] = puVar3[9] & 0xfcff;
    puVar3[0x25] = 0;
    puVar3 = puVar4;
  } while (puVar4 != (ushort *)0x2800820e);
  return;
}



void _L0(void)

{
  int iVar1;
  undefined2 *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  
  _L0();
  iVar1 = 0;
  puVar2 = (undefined2 *)&DAT_280083d6;
  do {
    iVar1 += 1;
    *puVar2 = (short)((uint)((iVar1 * 0x104 + 0x626) * 0x10000) >> 0x10);
    puVar2[-4] = ((ushort)iVar1 & 7) * 0xe + 0x3ce;
    puVar2[2] = 0;
    puVar2[-2] = puVar2[-2] & 0xffdf;
    puVar2[-2] = puVar2[-2] & 0xffdf;
    puVar2 = puVar2 + 7;
  } while (iVar1 != 8);
  puVar3 = (ushort *)&DAT_2800809e;
  do {
    puVar4 = puVar3 + 0x2e;
    *puVar3 = *puVar3 & 0xbfff;
    puVar3[9] = puVar3[9] & 0xfcff;
    puVar3[0x25] = 0;
    puVar3 = puVar4;
  } while (puVar4 != (ushort *)0x2800820e);
  return;
}



// DWARF DIE: 601

void em_buf_rx_free(uint8_t hdl)

{
  undefined3 in_register_00002029;
  
  *(ushort *)(&DAT_280083ce + CONCAT31(in_register_00002029,hdl) * 0xe) =
       (ushort)(((uint)*(ushort *)(&DAT_280083ce + CONCAT31(in_register_00002029,hdl) * 0xe) << 0x11
                ) >> 0x11);
  return;
}



// DWARF DIE: 5c0

uint8_t * em_buf_rx_buff_addr_get(uint16_t rx_hdl)

{
  undefined2 in_register_0000202a;
  
  return (uint8_t *)
         (*(ushort *)(&DAT_280083d6 + CONCAT22(in_register_0000202a,rx_hdl) * 0xe) + 0x28008000);
}



// DWARF DIE: 58f

uint8_t * em_buf_tx_buff_addr_get(em_buf_tx_desc *tx_desc)

{
  return (uint8_t *)(tx_desc->txdataptr + 0x28008000);
}



// DWARF DIE: 3e3

_Bool em_buf_tx_free(em_desc_node *desc_to_be_freed)

{
  short sVar1;
  
  sVar1 = *(short *)(&DAT_280082d2 + (uint)desc_to_be_freed->idx * 10);
  if (sVar1 < 0) {
    FUN_000102a8();
  }
  *(undefined2 *)(&DAT_280082cc + (uint)desc_to_be_freed->idx * 10) = 0;
  *(undefined2 *)(&DAT_280082d2 + (uint)desc_to_be_freed->idx * 10) = 0;
  *(undefined2 *)(&DAT_280082ce + (uint)desc_to_be_freed->idx * 10) = 0;
  _L0();
  return (_Bool)(sVar1 < 0);
}



undefined4 FUN_000102a8(void)

{
  int unaff_s0;
  
  FUN_000102a8();
  *(undefined2 *)(&DAT_280082cc + (uint)*(ushort *)(unaff_s0 + 4) * 10) = 0;
  *(undefined2 *)(&DAT_280082d2 + (uint)*(ushort *)(unaff_s0 + 4) * 10) = 0;
  *(undefined2 *)(&DAT_280082ce + (uint)*(ushort *)(unaff_s0 + 4) * 10) = 0;
  _L0();
  return 1;
}



void _L0(void)

{
  _L0();
  return;
}


