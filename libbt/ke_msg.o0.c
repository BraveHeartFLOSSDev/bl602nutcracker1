typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned int    undefined4;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct ble_ke_env_tag ble_ke_env_tag, *Pble_ke_env_tag;

typedef struct co_list co_list, *Pco_list;

typedef struct mblock_free mblock_free, *Pmblock_free;

typedef ushort uint16_t;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr { // DWARF DIE: 1dd
    struct co_list_hdr * next;
};

struct co_list { // DWARF DIE: 203
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct mblock_free { // DWARF DIE: 322
};

struct ble_ke_env_tag { // DWARF DIE: 2bd
    struct co_list queue_sent;
    struct co_list queue_saved;
    struct co_list queue_timer;
    struct mblock_free * heap[2];
    uint16_t heap_size[2];
};

typedef uint16_t ke_msg_id_t;

typedef struct ke_msg ke_msg, *Pke_msg;

typedef uint16_t ke_task_id_t;

typedef ulong uint32_t;

struct ke_msg { // DWARF DIE: 24d
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
};

typedef enum KE_EVENT_TYPE {
    KE_EVENT_BLE_CRYPT=1,
    KE_EVENT_BLE_EVT_DEFER=8,
    KE_EVENT_BLE_EVT_DELETE=9,
    KE_EVENT_BT_PSCAN_PROC=7,
    KE_EVENT_ECC_MULTIPLICATION=0,
    KE_EVENT_H4TL_CMD_HDR_RX=5,
    KE_EVENT_H4TL_CMD_PLD_RX=6,
    KE_EVENT_H4TL_TX=4,
    KE_EVENT_KE_MESSAGE=2,
    KE_EVENT_KE_TIMER=3,
    KE_EVENT_MAX=10
} KE_EVENT_TYPE;

typedef enum anon_enum_8.conflictea {
    KE_MEM_BLOCK_EM=1,
    KE_MEM_BLOCK_MAX=2,
    KE_MEM_BLOCK_RAM=0,
    KE_MEM_ENV=0,
    KE_MEM_KE_MSG=0,
    KE_MEM_NON_RETENTION=0
} anon_enum_8.conflictea;

typedef uchar uint8_t;

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

typedef struct Elf32_Rela Elf32_Rela, *PElf32_Rela;

struct Elf32_Rela {
    dword r_offset; // location to apply the relocation action
    dword r_info; // the symbol table index and the type of relocation
    dword r_addend; // a constant addend used to compute the relocatable field value
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




// DWARF DIE: a09

uint32_t _patch_ble_ke_msg_alloc
                   (void *pRet,ke_msg_id_t id,ke_task_id_t dest_id,ke_task_id_t src_id,
                   uint16_t param_len)

{
  undefined4 *puVar1;
  undefined2 in_register_0000203a;
  
  puVar1 = (undefined4 *)FUN_00010018();
  *puVar1 = 0xffffffff;
  *(ke_msg_id_t *)(puVar1 + 1) = id;
  *(ke_task_id_t *)((int)puVar1 + 6) = dest_id;
  *(ke_task_id_t *)(puVar1 + 2) = src_id;
  *(uint16_t *)((int)puVar1 + 10) = param_len;
  *(undefined4 **)pRet = puVar1 + 3;
  (*pcRam00000000)(0,CONCAT22(in_register_0000203a,param_len),pcRam00000000);
  return 1;
}



undefined4 FUN_00010018(void)

{
  undefined4 *unaff_s0;
  undefined2 unaff_s1;
  undefined4 *puVar1;
  undefined4 in_stack_00000004;
  undefined2 in_stack_00000008;
  undefined2 in_stack_0000000c;
  
  puVar1 = (undefined4 *)FUN_00010018();
  *puVar1 = 0xffffffff;
  *(undefined2 *)(puVar1 + 1) = unaff_s1;
  *(undefined2 *)((int)puVar1 + 6) = in_stack_0000000c;
  *(undefined2 *)(puVar1 + 2) = in_stack_00000008;
  *(short *)((int)puVar1 + 10) = (short)in_stack_00000004;
  *unaff_s0 = puVar1 + 3;
  (*pcRam00000000)(0,in_stack_00000004,pcRam00000000);
  return 1;
}



// DWARF DIE: 920

void * ble_ke_msg_alloc(ke_msg_id_t id,ke_task_id_t dest_id,ke_task_id_t src_id,uint16_t param_len)

{
  code *pcVar1;
  undefined2 in_register_0000202a;
  int iVar2;
  undefined2 in_register_0000202e;
  undefined2 in_register_00002032;
  undefined2 in_register_00002036;
  undefined4 *puStack36;
  void *param_ptr;
  
  puStack36 = (undefined4 *)0x0;
  iVar2 = (*pcRam00000000)(&puStack36,CONCAT22(in_register_0000202a,id),
                           CONCAT22(in_register_0000202e,dest_id),
                           CONCAT22(in_register_00002032,src_id),
                           CONCAT22(in_register_00002036,param_len),pcRam00000000);
  if (iVar2 == 0) {
    puStack36 = FUN_0001009a();
    *puStack36 = 0xffffffff;
    pcVar1 = pcRam00000000;
    *(ke_msg_id_t *)(puStack36 + 1) = id;
    *(ke_task_id_t *)((int)puStack36 + 6) = dest_id;
    *(ke_task_id_t *)(puStack36 + 2) = src_id;
    *(uint16_t *)((int)puStack36 + 10) = param_len;
    puStack36 = puStack36 + 3;
    (*pcVar1)(0,CONCAT22(in_register_00002036,param_len),pcVar1);
  }
  return puStack36;
}



undefined4 * FUN_0001009a(void)

{
  code *pcVar1;
  undefined2 unaff_s0;
  undefined2 unaff_s1;
  undefined2 unaff_s2;
  undefined2 unaff_s3;
  undefined4 *puStack0000000c;
  
  puStack0000000c = FUN_0001009a();
  *puStack0000000c = 0xffffffff;
  pcVar1 = pcRam00000000;
  *(undefined2 *)(puStack0000000c + 1) = unaff_s3;
  *(undefined2 *)((int)puStack0000000c + 6) = unaff_s2;
  *(undefined2 *)(puStack0000000c + 2) = unaff_s1;
  *(undefined2 *)((int)puStack0000000c + 10) = unaff_s0;
  puStack0000000c = puStack0000000c + 3;
  (*pcVar1)(0,pcVar1);
  return puStack0000000c;
}



// DWARF DIE: 82c

uint32_t _patch_ble_ke_msg_send(void *pRet,void *param_ptr)

{
  FUN_000100e2();
  FUN_000100f0();
  return 1;
}



undefined4 FUN_000100e2(void)

{
  FUN_000100e2();
  FUN_000100f0();
  return 1;
}



undefined4 FUN_000100f0(void)

{
  FUN_000100f0();
  return 1;
}



// DWARF DIE: b52

void ble_ke_msg_send(void *param_ptr)

{
  int iVar1;
  
  iVar1 = (*pcRam00000000)(0,param_ptr,pcRam00000000);
  if (iVar1 == 0) {
    FUN_00010130();
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  return;
}



void FUN_00010130(void)

{
  FUN_00010130();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 73c

uint32_t _patch_ble_ke_msg_get_sent_num(void *pRet)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00010172();
  *(short *)pRet = (short)uVar1;
  return 1;
}



undefined4 FUN_00010172(void)

{
  undefined2 *unaff_s1;
  undefined4 uVar1;
  
  uVar1 = FUN_00010172();
  *unaff_s1 = (short)uVar1;
  return 1;
}



// DWARF DIE: 6ab

uint16_t ble_ke_msg_get_sent_num(void)

{
  uint16_t extraout_a0;
  int iVar1;
  uint16_t auStack18 [2];
  uint16_t queue_num;
  
  iVar1 = (*pcRam00000000)(auStack18,pcRam00000000);
  if (iVar1 == 0) {
    FUN_000101c0();
    auStack18[0] = extraout_a0;
  }
  return auStack18[0];
}



void FUN_000101c0(void)

{
  FUN_000101c0();
  return;
}



// DWARF DIE: 625

uint32_t _patch_ble_ke_msg_send_basic
                   (void *pRet,ke_msg_id_t id,ke_task_id_t dest_id,ke_task_id_t src_id)

{
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



// DWARF DIE: 580

void ble_ke_msg_send_basic(ke_msg_id_t id,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  undefined2 in_register_0000202a;
  int iVar1;
  undefined2 in_register_0000202e;
  undefined2 in_register_00002032;
  
  iVar1 = (*pcRam00000000)(0,CONCAT22(in_register_0000202a,id),
                           CONCAT22(in_register_0000202e,dest_id),
                           CONCAT22(in_register_00002032,src_id),pcRam00000000);
  if (iVar1 != 0) {
    return;
  }
  FUN_0001021e();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0001021e(void)

{
  FUN_0001021e();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 518

void ble_ke_msg_forward(void *param_ptr,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  *(ke_task_id_t *)((int)param_ptr + -6) = dest_id;
  *(ke_task_id_t *)((int)param_ptr + -4) = src_id;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 4a0

void ble_ke_msg_forward_new_id
               (void *param_ptr,ke_msg_id_t msg_id,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  *(ke_msg_id_t *)((int)param_ptr + -8) = msg_id;
  *(ke_task_id_t *)((int)param_ptr + -6) = dest_id;
  *(ke_task_id_t *)((int)param_ptr + -4) = src_id;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 454

uint32_t _patch_ble_ke_msg_free(void *pRet,ke_msg *msg)

{
  _L0();
  return 1;
}



undefined4 _L0(void)

{
  _L0();
  return 1;
}



// DWARF DIE: 401

void ble_ke_msg_free(ke_msg *msg)

{
  int iVar1;
  
  iVar1 = (*pcRam00000000)(0,msg,pcRam00000000);
  if (iVar1 != 0) {
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: 3c6

ke_msg_id_t ble_ke_msg_dest_id_get(void *param_ptr)

{
  return *(ke_msg_id_t *)((int)param_ptr + -6);
}



// DWARF DIE: 38b

ke_msg_id_t ble_ke_msg_src_id_get(void *param_ptr)

{
  return *(ke_msg_id_t *)((int)param_ptr + -4);
}



// DWARF DIE: 343

_Bool ble_ke_msg_in_queue(void *param_ptr)

{
  return (_Bool)(*(int *)((int)param_ptr + -0xc) != -1);
}


