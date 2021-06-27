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

typedef enum anon_enum_8.conflict2c {
    KE_MEM_BLOCK_EM=1,
    KE_MEM_BLOCK_MAX=2,
    KE_MEM_BLOCK_RAM=0,
    KE_MEM_ENV=0,
    KE_MEM_KE_MSG=0,
    KE_MEM_NON_RETENTION=0
} anon_enum_8.conflict2c;

typedef ulong uint32_t;

typedef ushort uint16_t;

typedef struct ke_timer ke_timer, *Pke_timer;

typedef uint16_t ke_msg_id_t;

typedef uint16_t ke_task_id_t;

struct ke_timer { // DWARF DIE: 247
    struct ke_timer * next;
    ke_msg_id_t id;
    ke_task_id_t task;
    uint32_t time;
};

typedef struct ble_ke_env_tag ble_ke_env_tag, *Pble_ke_env_tag;

typedef struct co_list co_list, *Pco_list;

typedef struct mblock_free mblock_free, *Pmblock_free;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr { // DWARF DIE: ee
    struct co_list_hdr * next;
};

struct co_list { // DWARF DIE: 10f
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct mblock_free { // DWARF DIE: 19c
};

struct ble_ke_env_tag { // DWARF DIE: 137
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * heap[2];
    uint16_t heap_size[2];
};

typedef struct ke_msg ke_msg, *Pke_msg;

struct ke_msg { // DWARF DIE: 1d5
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
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
// DWARF DIE: 68d

uint32_t _patch_ble_ke_init(void *pRet)

{
  (*pcRam00000000)(0x18,0,8,pcRam00000000);
  (*pcRam00000000)(0x20,0,4,pcRam00000000);
  _L0(_DAT_00000010,_DAT_00000014);
  _DAT_00000008 = 0;
  _DAT_0000000c = 0;
  pcRam00000000 = (code *)0x0;
  _DAT_00000004 = 0;
  _DAT_00000010 = 0;
  _DAT_00000014 = 0;
  _L0();
  _L0();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 _L0(undefined4 uRam00000010,undefined4 uRam00000014)

{
  _L0(uRam00000010,uRam00000014);
  _DAT_00000008 = 0;
  _DAT_0000000c = 0;
  uRam00000000 = 0;
  _DAT_00000004 = 0;
  uRam00000010 = 0;
  uRam00000014 = 0;
  _L0();
  _L0();
  return 1;
}



undefined4 _L0(void)

{
  _L0();
  _L0();
  return 1;
}



undefined4 _L0(void)

{
  _L0();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 612

void ble_ke_init(void)

{
  int iVar1;
  
  iVar1 = (*pcRam00000000)(0,pcRam00000000);
  if (iVar1 != 0) {
    return;
  }
  (*pcRam00000000)(0x18,0,8,pcRam00000000);
  (*pcRam00000000)(0x20,0,4,pcRam00000000);
  _L0(_DAT_00000010,_DAT_00000014);
  _DAT_00000008 = 0;
  _DAT_0000000c = 0;
  pcRam00000000 = (code *)0x0;
  _DAT_00000004 = 0;
  _DAT_00000010 = 0;
  _DAT_00000014 = 0;
  _L0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void _L0(undefined4 uRam00000010,undefined4 uRam00000014)

{
  _L0(uRam00000010,uRam00000014);
  _DAT_00000008 = 0;
  _DAT_0000000c = 0;
  uRam00000000 = 0;
  _DAT_00000004 = 0;
  uRam00000010 = 0;
  uRam00000014 = 0;
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



// DWARF DIE: 4e2

uint32_t _patch_ble_ke_flush(void *pRet)

{
  int iVar1;
  
  while (iVar1 = FUN_00010100(), iVar1 != 0) {
    _L0();
  }
  while (iVar1 = FUN_00010112(8), iVar1 != 0) {
    _L0();
  }
  while (iVar1 = FUN_00010124(0x10), iVar1 != 0) {
    _L0();
  }
  _L0();
  return 1;
}



undefined4 FUN_00010100(void)

{
  int iVar1;
  
  while (iVar1 = FUN_00010100(), iVar1 != 0) {
    _L0();
  }
  while (iVar1 = FUN_00010112(8), iVar1 != 0) {
    _L0();
  }
  while (iVar1 = FUN_00010124(0x10), iVar1 != 0) {
    _L0();
  }
  _L0();
  return 1;
}



undefined4 FUN_00010112(int param_1)

{
  int unaff_s0;
  int iVar1;
  
  while (iVar1 = FUN_00010112(param_1), iVar1 != 0) {
    _L0();
    param_1 = unaff_s0 + 8;
  }
  while (iVar1 = FUN_00010124(0x10), iVar1 != 0) {
    _L0();
  }
  _L0();
  return 1;
}



undefined4 FUN_00010124(int param_1)

{
  int unaff_s0;
  int iVar1;
  
  while (iVar1 = FUN_00010124(param_1), iVar1 != 0) {
    _L0();
    param_1 = unaff_s0 + 0x10;
  }
  _L0();
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int iVar1;
  
  do {
    _L0();
    iVar1 = FUN_00010124(unaff_s0 + 0x10);
  } while (iVar1 != 0);
  _L0();
  return 1;
}



undefined4 _L0(void)

{
  int iVar1;
  
  do {
    _L0();
    iVar1 = FUN_00010100();
  } while (iVar1 != 0);
  while (iVar1 = FUN_00010112(8), iVar1 != 0) {
    _L0();
  }
  while (iVar1 = FUN_00010124(0x10), iVar1 != 0) {
    _L0();
  }
  _L0();
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int iVar1;
  
  do {
    _L0();
    iVar1 = FUN_00010112(unaff_s0 + 8);
  } while (iVar1 != 0);
  while (iVar1 = FUN_00010124(0x10), iVar1 != 0) {
    _L0();
  }
  _L0();
  return 1;
}



undefined4 _L0(void)

{
  _L0();
  return 1;
}



// DWARF DIE: 3b1

void ble_ke_flush(void)

{
  int iVar1;
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  
  iVar1 = (*pcRam00000000)(0,pcRam00000000);
  if (iVar1 != 0) {
    return;
  }
  while (FUN_0001017a(), extraout_a0 != 0) {
    _L0();
  }
  while (FUN_0001018c(8), extraout_a0_00 != 0) {
    _L0();
  }
  while (FUN_0001019e(0x10), extraout_a0_01 != 0) {
    _L0();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001017a(void)

{
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  
  while (FUN_0001017a(), extraout_a0 != 0) {
    _L0();
  }
  while (FUN_0001018c(8), extraout_a0_00 != 0) {
    _L0();
  }
  while (FUN_0001019e(0x10), extraout_a0_01 != 0) {
    _L0();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001018c(int param_1)

{
  int unaff_s0;
  int extraout_a0;
  int extraout_a0_00;
  
  while (FUN_0001018c(param_1), extraout_a0 != 0) {
    _L0();
    param_1 = unaff_s0 + 8;
  }
  while (FUN_0001019e(0x10), extraout_a0_00 != 0) {
    _L0();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001019e(int param_1)

{
  int unaff_s0;
  int extraout_a0;
  
  while (FUN_0001019e(param_1), extraout_a0 != 0) {
    _L0();
    param_1 = unaff_s0 + 0x10;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int extraout_a0;
  
  do {
    _L0();
    FUN_0001019e(unaff_s0 + 0x10);
  } while (extraout_a0 != 0);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int extraout_a0;
  int extraout_a0_00;
  int extraout_a0_01;
  
  do {
    _L0();
    FUN_0001017a();
  } while (extraout_a0 != 0);
  while (FUN_0001018c(8), extraout_a0_00 != 0) {
    _L0();
  }
  while (FUN_0001019e(0x10), extraout_a0_01 != 0) {
    _L0();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void _L0(void)

{
  int unaff_s0;
  int extraout_a0;
  int extraout_a0_00;
  
  do {
    _L0();
    FUN_0001018c(unaff_s0 + 8);
  } while (extraout_a0 != 0);
  while (FUN_0001019e(0x10), extraout_a0_00 != 0) {
    _L0();
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 367

uint32_t _patch_ble_ke_sleep_check(void *pRet)

{
  int iVar1;
  
  iVar1 = _L0();
  *(bool *)pRet = iVar1 == 0;
  return 1;
}



undefined4 _L0(void)

{
  undefined4 unaff_s0;
  int iVar1;
  
  iVar1 = _L0();
  *(bool *)unaff_s0 = iVar1 == 0;
  return 1;
}



// DWARF DIE: 31d

_Bool ble_ke_sleep_check(void)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined auStack17 [4];
  _Bool result;
  
  iVar2 = (*pcRam00000000)(auStack17,pcRam00000000);
  if (iVar2 == 0) {
    bVar1 = _L0();
    auStack17[0] = CONCAT31(extraout_var,bVar1) == 0;
  }
  return (_Bool)auStack17[0];
}



bool _L0(void)

{
  bool bVar1;
  undefined3 extraout_var;
  
  bVar1 = _L0();
  return CONCAT31(extraout_var,bVar1) == 0;
}


