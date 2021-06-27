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

typedef struct ble_ke_env_tag ble_ke_env_tag, *Pble_ke_env_tag;

typedef struct co_list co_list, *Pco_list;

typedef struct mblock_free mblock_free, *Pmblock_free;

typedef ushort uint16_t;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr { // DWARF DIE: 216
    struct co_list_hdr * next;
};

struct co_list { // DWARF DIE: 241
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct mblock_free { // DWARF DIE: 4bb
};

struct ble_ke_env_tag { // DWARF DIE: 456
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

struct ke_msg { // DWARF DIE: 2a1
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
};

typedef uchar uint8_t;

typedef uint8_t ke_state_t;

typedef enum ke_msg_status_tag {
    KE_MSG_CONSUMED=0,
    KE_MSG_NO_FREE=1,
    KE_MSG_SAVED=2
} ke_msg_status_tag;

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

typedef enum KE_TASK_TYPE {
    TASK_DBG=3,
    TASK_HCI_ONCHIP=4,
    TASK_LLC=1,
    TASK_LLD=2,
    TASK_LLM=0,
    TASK_MAX=5,
    TASK_NONE=-1
} KE_TASK_TYPE;

typedef enum anon_enum_8.conflictc0 {
    KE_MEM_BLOCK_EM=1,
    KE_MEM_BLOCK_MAX=2,
    KE_MEM_BLOCK_RAM=0,
    KE_MEM_ENV=0,
    KE_MEM_KE_MSG=0,
    KE_MEM_NON_RETENTION=0
} anon_enum_8.conflictc0;

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

struct ke_msg_handler { // DWARF DIE: 397
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

struct ke_state_handler { // DWARF DIE: 3c3
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef enum KE_TASK_STATUS {
    KE_TASK_ALREADY_EXISTS=4,
    KE_TASK_CAPA_EXCEEDED=3,
    KE_TASK_FAIL=1,
    KE_TASK_OK=0,
    KE_TASK_UNKNOWN=2
} KE_TASK_STATUS;

typedef struct ke_task_desc ke_task_desc, *Pke_task_desc;

struct ke_task_desc { // DWARF DIE: 3f6
    struct ke_state_handler * state_handler;
    struct ke_state_handler * default_handler;
    ke_state_t * state;
    uint16_t state_max;
    uint16_t idx_max;
};

typedef struct ke_task_elem ke_task_elem, *Pke_task_elem;

struct ke_task_elem { // DWARF DIE: 4dc
    struct ke_task_desc * p_desc;
};

typedef struct ble_ke_task_env_tag ble_ke_task_env_tag, *Pble_ke_task_env_tag;

struct ble_ke_task_env_tag { // DWARF DIE: 4fd
    struct ke_task_elem task_list[5];
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




// DWARF DIE: 11ed

_Bool ble_cmp_dest_id(co_list_hdr *msg,uint32_t dest_id)

{
  int iVar1;
  undefined auStack17 [4];
  _Bool result;
  
  iVar1 = (*pcRam00000000)(auStack17,msg,dest_id,pcRam00000000);
  if (iVar1 == 0) {
    auStack17[0] = *(ushort *)((int)&msg[1].next + 2) == dest_id;
  }
  return (_Bool)auStack17[0];
}



// DWARF DIE: 1255

uint32_t _patch_ble_cmp_dest_id(void *pRet,co_list_hdr *msg,uint32_t dest_id)

{
  *(bool *)pRet = *(ushort *)((int)&msg[1].next + 2) == dest_id;
  return 1;
}



// DWARF DIE: 10fc

uint32_t _patch_ble_ke_task_saved_update(void *pRet,ke_task_id_t ke_task_id)

{
  int iVar1;
  undefined4 in_mstatus;
  
  while (iVar1 = FUN_00010074(8), iVar1 != 0) {
    _LVL16(iVar1,in_mstatus);
    FUN_0001009a(2);
  }
  return 1;
}



undefined4 FUN_00010074(int param_1)

{
  int iVar1;
  int unaff_s4;
  undefined4 in_mstatus;
  
  while (iVar1 = FUN_00010074(param_1), iVar1 != 0) {
    _LVL16(iVar1,in_mstatus);
    FUN_0001009a(2);
    param_1 = unaff_s4 + 8;
  }
  return 1;
}



undefined4 _LVL16(int param_1,undefined4 param_2)

{
  undefined4 unaff_s0;
  int unaff_s4;
  
  do {
    _LVL16(param_1,param_2);
    FUN_0001009a(2);
    param_1 = FUN_00010074(unaff_s4 + 8);
    param_2 = unaff_s0;
  } while (param_1 != 0);
  return 1;
}



undefined4 FUN_0001009a(undefined4 param_1)

{
  int iVar1;
  int unaff_s4;
  undefined4 in_mstatus;
  
  while( true ) {
    FUN_0001009a(param_1);
    iVar1 = FUN_00010074(unaff_s4 + 8);
    if (iVar1 == 0) break;
    _LVL16(iVar1,in_mstatus);
    param_1 = 2;
  }
  return 1;
}



// DWARF DIE: 1379

void ble_ke_task_saved_update(ke_task_id_t ke_task_id)

{
  undefined2 in_register_0000202a;
  int iVar1;
  int extraout_a0;
  undefined4 in_mstatus;
  
  iVar1 = (*pcRam00000000)(0,CONCAT22(in_register_0000202a,ke_task_id),pcRam00000000);
  if (iVar1 == 0) {
    while (FUN_000100ec(8), extraout_a0 != 0) {
      _LVL28(extraout_a0,in_mstatus);
      FUN_00010112(2);
    }
  }
  return;
}



void FUN_000100ec(int param_1)

{
  int extraout_a0;
  int unaff_s4;
  undefined4 in_mstatus;
  
  while (FUN_000100ec(param_1), extraout_a0 != 0) {
    _LVL28(extraout_a0,in_mstatus);
    FUN_00010112(2);
    param_1 = unaff_s4 + 8;
  }
  return;
}



void _LVL28(int param_1,undefined4 param_2)

{
  undefined4 unaff_s1;
  int extraout_a0;
  int unaff_s4;
  
  do {
    _LVL28(param_1,param_2);
    FUN_00010112(2);
    FUN_000100ec(unaff_s4 + 8);
    param_1 = extraout_a0;
    param_2 = unaff_s1;
  } while (extraout_a0 != 0);
  return;
}



void FUN_00010112(undefined4 param_1)

{
  int extraout_a0;
  int unaff_s4;
  undefined4 in_mstatus;
  
  while( true ) {
    FUN_00010112(param_1);
    FUN_000100ec(unaff_s4 + 8);
    if (extraout_a0 == 0) break;
    _LVL28(extraout_a0,in_mstatus);
    param_1 = 2;
  }
  return;
}



// DWARF DIE: 103d

uint32_t _patch_ble_ke_handler_search(void *pRet,ke_msg_id_t msg_id,ke_state_handler *state_handler)

{
  undefined2 in_register_0000202e;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)state_handler->msg_cnt;
  do {
    uVar2 -= 1;
    if (uVar2 == 0xffffffff) {
      *(undefined4 *)pRet = 0;
      return 1;
    }
    uVar1 = (uint)state_handler->msg_table[uVar2].id;
  } while ((uVar1 != CONCAT22(in_register_0000202e,msg_id)) && (uVar1 != 0xffff));
  *(ke_msg_func_t **)pRet = state_handler->msg_table[uVar2].func;
  return 1;
}



// DWARF DIE: 1476

ke_msg_func_t * ble_ke_handler_search(ke_msg_id_t msg_id,ke_state_handler *state_handler)

{
  undefined2 in_register_0000202a;
  int iVar1;
  uint uVar2;
  uint uVar3;
  ke_msg_func_t *pkStack20;
  ke_msg_func_t *func;
  
  iVar1 = (*pcRam00000000)(&pkStack20,CONCAT22(in_register_0000202a,msg_id),state_handler,
                           pcRam00000000);
  if (iVar1 == 0) {
    uVar3 = (uint)state_handler->msg_cnt;
    do {
      uVar3 -= 1;
      if (uVar3 == 0xffffffff) {
        return (ke_msg_func_t *)0x0;
      }
      uVar2 = (uint)state_handler->msg_table[uVar3].id;
    } while ((CONCAT22(in_register_0000202a,msg_id) != uVar2) && (uVar2 != 0xffff));
    pkStack20 = state_handler->msg_table[uVar3].func;
  }
  return pkStack20;
}



// DWARF DIE: f3e

uint32_t _patch_ble_ke_task_handler_get(void *pRet,ke_msg_id_t msg_id,ke_task_id_t task_id)

{
  undefined4 uVar1;
  undefined2 in_register_00002032;
  int *piVar2;
  
  piVar2 = *(int **)((task_id & 0xff) * 4);
  if ((*(ushort *)((int)piVar2 + 0xe) != 0) &&
     (CONCAT22(in_register_00002032,task_id) >> 8 < (uint)*(ushort *)((int)piVar2 + 0xe))) {
    if (*piVar2 != 0) {
      uVar1 = FUN_00010200();
      *(undefined4 *)pRet = uVar1;
    }
                    // WARNING: Load size is inaccurate
    if ((*pRet == 0) && (piVar2[1] != 0)) {
      uVar1 = FUN_00010216();
      *(undefined4 *)pRet = uVar1;
    }
  }
  return 1;
}



undefined4 FUN_00010200(void)

{
  int *unaff_s0;
  int iVar1;
  int unaff_s2;
  
  iVar1 = FUN_00010200();
  *unaff_s0 = iVar1;
  if ((*unaff_s0 == 0) && (*(int *)(unaff_s2 + 4) != 0)) {
    iVar1 = FUN_00010216();
    *unaff_s0 = iVar1;
  }
  return 1;
}



undefined4 FUN_00010216(void)

{
  undefined4 *unaff_s0;
  undefined4 uVar1;
  
  uVar1 = FUN_00010216();
  *unaff_s0 = uVar1;
  return 1;
}



// WARNING: Variable defined which should be unmapped: func
// DWARF DIE: e7d

ke_msg_func_t * ble_ke_task_handler_get(ke_msg_id_t msg_id,ke_task_id_t task_id)

{
  int *piVar1;
  undefined2 in_register_0000202a;
  int iVar2;
  undefined2 in_register_0000202e;
  ke_msg_func_t *pkStack20;
  ke_msg_func_t *func;
  
  pkStack20 = (ke_msg_func_t *)0x0;
  iVar2 = (*pcRam00000000)(&pkStack20,CONCAT22(in_register_0000202a,msg_id),
                           CONCAT22(in_register_0000202e,task_id),pcRam00000000);
  if (iVar2 == 0) {
    piVar1 = *(int **)((task_id & 0xff) * 4);
    if ((*(ushort *)((int)piVar1 + 0xe) != 0) &&
       (CONCAT22(in_register_0000202e,task_id) >> 8 < (uint)*(ushort *)((int)piVar1 + 0xe))) {
      if (*piVar1 != 0) {
        pkStack20 = (ke_msg_func_t *)FUN_0001028e();
      }
      if ((pkStack20 == (ke_msg_func_t *)0x0) && (piVar1[1] != 0)) {
        pkStack20 = (ke_msg_func_t *)FUN_000102a2();
      }
    }
  }
  return pkStack20;
}



int FUN_0001028e(void)

{
  int unaff_s1;
  int iStack0000000c;
  
  iStack0000000c = FUN_0001028e();
  if ((iStack0000000c == 0) && (*(int *)(unaff_s1 + 4) != 0)) {
    iStack0000000c = FUN_000102a2();
  }
  return iStack0000000c;
}



undefined4 FUN_000102a2(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000102a2();
  return uVar1;
}



// DWARF DIE: 14ff

void ble_ke_task_schedule(void)

{
  int iVar1;
  undefined4 *extraout_a0;
  int extraout_a0_00;
  code *extraout_a0_01;
  
  iVar1 = (*pcRam00000000)(0,pcRam00000000);
  if (iVar1 == 0) {
    FUN_000102d6();
    if (extraout_a0 != (undefined4 *)0x0) {
      *extraout_a0 = 0xffffffff;
      _L0();
      if (extraout_a0_00 == 0) {
        FUN_000102fc();
        if ((extraout_a0_01 == (code *)0x0) ||
           (iVar1 = (*extraout_a0_01)(*(undefined2 *)(extraout_a0 + 1),extraout_a0 + 3,
                                      *(undefined2 *)((int)extraout_a0 + 6),
                                      *(undefined2 *)(extraout_a0 + 2),extraout_a0_01), iVar1 == 0))
        {
          FUN_0001034c();
        }
        else {
          if (iVar1 == 2) {
            FUN_00010360();
          }
        }
      }
    }
    if (pcRam00000000 == (code *)0x0) {
      FUN_00010332();
    }
  }
  return;
}



void FUN_000102d6(void)

{
  int *unaff_s1;
  undefined4 *extraout_a0;
  int extraout_a0_00;
  code *extraout_a0_01;
  int iVar1;
  
  FUN_000102d6();
  if (extraout_a0 != (undefined4 *)0x0) {
    *extraout_a0 = 0xffffffff;
    _L0();
    if (extraout_a0_00 == 0) {
      FUN_000102fc();
      if ((extraout_a0_01 == (code *)0x0) ||
         (iVar1 = (*extraout_a0_01)(*(undefined2 *)(extraout_a0 + 1),extraout_a0 + 3,
                                    *(undefined2 *)((int)extraout_a0 + 6),
                                    *(undefined2 *)(extraout_a0 + 2),extraout_a0_01), iVar1 == 0)) {
        FUN_0001034c();
      }
      else {
        if (iVar1 == 2) {
          FUN_00010360();
        }
      }
    }
  }
  if (*unaff_s1 == 0) {
    FUN_00010332();
  }
  return;
}



void _L0(void)

{
  int unaff_s0;
  int *unaff_s1;
  int extraout_a0;
  code *extraout_a0_00;
  int iVar1;
  
  _L0();
  if (extraout_a0 == 0) {
    FUN_000102fc();
    if ((extraout_a0_00 == (code *)0x0) ||
       (iVar1 = (*extraout_a0_00)(*(undefined2 *)(unaff_s0 + 4),unaff_s0 + 0xc,
                                  *(undefined2 *)(unaff_s0 + 6),*(undefined2 *)(unaff_s0 + 8),
                                  extraout_a0_00), iVar1 == 0)) {
      FUN_0001034c();
    }
    else {
      if (iVar1 == 2) {
        FUN_00010360();
      }
    }
  }
  if (*unaff_s1 == 0) {
    FUN_00010332();
  }
  return;
}



void FUN_000102fc(void)

{
  int unaff_s0;
  int *unaff_s1;
  code *extraout_a0;
  int iVar1;
  
  FUN_000102fc();
  if ((extraout_a0 == (code *)0x0) ||
     (iVar1 = (*extraout_a0)(*(undefined2 *)(unaff_s0 + 4),unaff_s0 + 0xc,
                             *(undefined2 *)(unaff_s0 + 6),*(undefined2 *)(unaff_s0 + 8),extraout_a0
                            ), iVar1 == 0)) {
    FUN_0001034c();
  }
  else {
    if (iVar1 == 2) {
      FUN_00010360();
    }
  }
  if (*unaff_s1 == 0) {
    FUN_00010332();
  }
  return;
}



void FUN_00010332(void)

{
  FUN_00010332();
  return;
}



void FUN_0001034c(void)

{
  int *unaff_s1;
  
  FUN_0001034c();
  if (*unaff_s1 == 0) {
    FUN_00010332();
  }
  return;
}



void FUN_00010360(void)

{
  int *unaff_s1;
  
  FUN_00010360();
  if (*unaff_s1 == 0) {
    FUN_00010332();
  }
  return;
}



// DWARF DIE: c8a

uint32_t _patch_ble_ke_task_schedule(void *pRet)

{
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  
  puVar1 = (undefined4 *)_LVL88();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0xffffffff;
    iVar2 = _L0();
    if (iVar2 == 0) {
      pcVar3 = (code *)FUN_000103aa();
      if ((pcVar3 == (code *)0x0) ||
         (iVar2 = (*pcVar3)(*(undefined2 *)(puVar1 + 1),puVar1 + 3,*(undefined2 *)((int)puVar1 + 6),
                            *(undefined2 *)(puVar1 + 2),pcVar3), iVar2 == 0)) {
        FUN_000103fc();
      }
      else {
        if (iVar2 == 2) {
          FUN_00010410();
        }
      }
    }
  }
  if (iRam00000000 == 0) {
    FUN_000103e0();
  }
  return 1;
}



undefined4 _LVL88(void)

{
  int *unaff_s1;
  undefined4 *puVar1;
  int iVar2;
  code *pcVar3;
  
  puVar1 = (undefined4 *)_LVL88();
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0xffffffff;
    iVar2 = _L0();
    if (iVar2 == 0) {
      pcVar3 = (code *)FUN_000103aa();
      if ((pcVar3 == (code *)0x0) ||
         (iVar2 = (*pcVar3)(*(undefined2 *)(puVar1 + 1),puVar1 + 3,*(undefined2 *)((int)puVar1 + 6),
                            *(undefined2 *)(puVar1 + 2),pcVar3), iVar2 == 0)) {
        FUN_000103fc();
      }
      else {
        if (iVar2 == 2) {
          FUN_00010410();
        }
      }
    }
  }
  if (*unaff_s1 == 0) {
    FUN_000103e0();
  }
  return 1;
}



undefined4 _L0(void)

{
  int unaff_s0;
  int *unaff_s1;
  int iVar1;
  code *pcVar2;
  
  iVar1 = _L0();
  if (iVar1 == 0) {
    pcVar2 = (code *)FUN_000103aa();
    if ((pcVar2 == (code *)0x0) ||
       (iVar1 = (*pcVar2)(*(undefined2 *)(unaff_s0 + 4),unaff_s0 + 0xc,*(undefined2 *)(unaff_s0 + 6)
                          ,*(undefined2 *)(unaff_s0 + 8),pcVar2), iVar1 == 0)) {
      FUN_000103fc();
    }
    else {
      if (iVar1 == 2) {
        FUN_00010410();
      }
    }
  }
  if (*unaff_s1 == 0) {
    FUN_000103e0();
  }
  return 1;
}



undefined4 FUN_000103aa(void)

{
  int unaff_s0;
  int *unaff_s1;
  code *pcVar1;
  int iVar2;
  
  pcVar1 = (code *)FUN_000103aa();
  if ((pcVar1 == (code *)0x0) ||
     (iVar2 = (*pcVar1)(*(undefined2 *)(unaff_s0 + 4),unaff_s0 + 0xc,*(undefined2 *)(unaff_s0 + 6),
                        *(undefined2 *)(unaff_s0 + 8),pcVar1), iVar2 == 0)) {
    FUN_000103fc();
  }
  else {
    if (iVar2 == 2) {
      FUN_00010410();
    }
  }
  if (*unaff_s1 == 0) {
    FUN_000103e0();
  }
  return 1;
}



undefined4 FUN_000103e0(void)

{
  FUN_000103e0();
  return 1;
}



undefined4 FUN_000103fc(void)

{
  int *unaff_s1;
  
  FUN_000103fc();
  if (*unaff_s1 == 0) {
    FUN_000103e0();
  }
  return 1;
}



undefined4 FUN_00010410(void)

{
  int *unaff_s1;
  
  FUN_00010410();
  if (*unaff_s1 == 0) {
    FUN_000103e0();
  }
  return 1;
}



// DWARF DIE: b8a

uint32_t _patch_ble_ke_task_init(void *pRet)

{
  (*pcRam00000000)(0,0,0x14,pcRam00000000);
  FUN_0001043e();
  return 1;
}



undefined4 FUN_0001043e(void)

{
  FUN_0001043e();
  return 1;
}



// DWARF DIE: b2e

void ble_ke_task_init(void)

{
  int iVar1;
  
  iVar1 = (*pcRam00000000)(0,pcRam00000000);
  if (iVar1 != 0) {
    return;
  }
  (*pcRam00000000)(0,0,0x14,pcRam00000000);
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: a81

uint32_t _patch_ble_ke_task_create(void *pRet,uint8_t task_type,ke_task_desc *p_task_desc)

{
  undefined3 in_register_0000202d;
  ke_task_desc **ppkVar1;
  
  if (CONCAT31(in_register_0000202d,task_type) < 5) {
    ppkVar1 = (ke_task_desc **)(CONCAT31(in_register_0000202d,task_type) * 4);
    if (*ppkVar1 == (ke_task_desc *)0x0) {
      *ppkVar1 = p_task_desc;
    }
    else {
      *(undefined *)pRet = 4;
    }
  }
  else {
    *(undefined *)pRet = 3;
  }
  return 1;
}



// DWARF DIE: 9ca

uint8_t ble_ke_task_create(uint8_t task_type,ke_task_desc *p_task_desc)

{
  uint8_t uVar1;
  undefined3 in_register_00002029;
  uint uVar2;
  int iVar3;
  uint8_t auStack17 [4];
  uint8_t status;
  
  uVar2 = CONCAT31(in_register_00002029,task_type);
  auStack17[0] = '\0';
  iVar3 = (*pcRam00000000)(auStack17,uVar2,p_task_desc,pcRam00000000);
  uVar1 = auStack17[0];
  if (iVar3 == 0) {
    if (uVar2 < 5) {
      uVar1 = '\x04';
      if (*(ke_task_desc **)(uVar2 << 2) == (ke_task_desc *)0x0) {
        *(ke_task_desc **)(uVar2 << 2) = p_task_desc;
        uVar1 = auStack17[0];
      }
    }
    else {
      uVar1 = '\x03';
    }
  }
  auStack17[0] = uVar1;
  return auStack17[0];
}



// DWARF DIE: 943

uint8_t ble_ke_task_delete(uint8_t task_type)

{
  uint8_t uVar1;
  undefined3 in_register_00002029;
  
  if (CONCAT31(in_register_00002029,task_type) < 5) {
    *(undefined4 *)(CONCAT31(in_register_00002029,task_type) * 4) = 0;
    uVar1 = '\0';
  }
  else {
    uVar1 = '\x02';
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 8a8

uint32_t _patch_ble_ke_state_set(void *pRet,ke_task_id_t id,ke_state_t state_id)

{
  undefined2 in_register_0000202e;
  undefined3 in_register_00002031;
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  
  if ((id & 0xff) < 5) {
    iVar2 = *(int *)((id & 0xff) * 4);
    uVar1 = CONCAT22(in_register_0000202e,id) >> 8;
    if ((uVar1 < *(ushort *)(iVar2 + 0xe)) &&
       (pbVar3 = (byte *)(*(int *)(iVar2 + 8) + uVar1),
       (uint)*pbVar3 != CONCAT31(in_register_00002031,state_id))) {
      *pbVar3 = state_id;
      _L0();
      return 1;
    }
  }
  else {
    ebreak();
  }
  return 1;
}



undefined4 _L0(void)

{
  _L0();
  return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 807

void ble_ke_state_set(ke_task_id_t id,ke_state_t state_id)

{
  undefined2 in_register_0000202a;
  int iVar1;
  undefined3 in_register_0000202d;
  uint uVar2;
  byte *pbVar3;
  
  iVar1 = (*pcRam00000000)(0,CONCAT22(in_register_0000202a,id),
                           CONCAT31(in_register_0000202d,state_id),pcRam00000000);
  if (iVar1 == 0) {
    if ((id & 0xff) < 5) {
      iVar1 = *(int *)((id & 0xff) * 4);
      uVar2 = CONCAT22(in_register_0000202a,id) >> 8;
      if ((uVar2 < *(ushort *)(iVar1 + 0xe)) &&
         (pbVar3 = (byte *)(*(int *)(iVar1 + 8) + uVar2),
         (uint)*pbVar3 != CONCAT31(in_register_0000202d,state_id))) {
        *pbVar3 = state_id;
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    }
    else {
      ebreak();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 786

uint32_t _patch_ble_ke_state_get(void *pRet,ke_task_id_t id)

{
  undefined2 in_register_0000202e;
  uint uVar1;
  int iVar2;
  byte abStack17 [9];
  
  *(undefined *)pRet = 0xff;
  if ((id & 0xff) < 5) {
    iVar2 = *(int *)((id & 0xff) * 4);
    uVar1 = CONCAT22(in_register_0000202e,id) >> 8;
    if (uVar1 < *(ushort *)(iVar2 + 0xe)) {
      *(undefined *)pRet = *(undefined *)(uVar1 + *(int *)(iVar2 + 8));
    }
    return 1;
  }
  ebreak();
  iVar2 = (*pcRam00000000)(abStack17,pRet,pcRam00000000);
  if (iVar2 == 0) {
    abStack17[0] = 0xff;
    if (4 < ((uint)pRet & 0xff)) {
      ebreak();
      return 0;
    }
    iVar2 = *(int *)(((uint)pRet & 0xff) * 4);
    if ((uint)pRet >> 8 < (uint)*(ushort *)(iVar2 + 0xe)) {
      abStack17[0] = *(byte *)(((uint)pRet >> 8) + *(int *)(iVar2 + 8));
    }
  }
  return (uint)abStack17[0];
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 705

ke_state_t ble_ke_state_get(ke_task_id_t id)

{
  uint uVar1;
  undefined2 in_register_0000202a;
  int iVar2;
  ke_state_t akStack17 [4];
  ke_state_t state;
  
  iVar2 = (*pcRam00000000)(akStack17,CONCAT22(in_register_0000202a,id),pcRam00000000);
  if (iVar2 == 0) {
    akStack17[0] = -1;
    if (4 < (id & 0xff)) {
      ebreak();
      return '\0';
    }
    iVar2 = *(int *)((id & 0xff) * 4);
    uVar1 = CONCAT22(in_register_0000202a,id) >> 8;
    if (uVar1 < *(ushort *)(iVar2 + 0xe)) {
      akStack17[0] = *(ke_state_t *)(uVar1 + *(int *)(iVar2 + 8));
    }
  }
  return akStack17[0];
}



// DWARF DIE: 6ab

int ble_ke_msg_discard(ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  return 0;
}



// DWARF DIE: 651

int ble_ke_msg_save(ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  return 2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// DWARF DIE: 589

void ble_ke_task_msg_flush(ke_task_id_t task)

{
  undefined4 *puVar1;
  undefined2 in_register_0000202a;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 2;
  puVar1 = puRam00000000;
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    do {
      puVar3 = (undefined4 *)*puVar1;
      if (CONCAT22(in_register_0000202a,task) == (uint)*(byte *)((int)puVar1 + 6)) {
        FUN_00010710(puVar1,0);
        FUN_0001071a(puVar1);
      }
      puVar1 = puVar3;
    } while (puVar3 != (undefined4 *)0x0);
    if (iVar2 == 1) break;
    iVar2 = 1;
    puVar1 = _DAT_00000008;
  }
  return;
}



void FUN_00010710(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *unaff_s0;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  undefined4 *unaff_s6;
  
  do {
    FUN_00010710(param_1,param_2);
    FUN_0001071a(unaff_s0);
    do {
      unaff_s0 = unaff_s6;
      if (unaff_s0 == (undefined4 *)0x0) {
        if (unaff_s2 == unaff_s5) {
          return;
        }
        unaff_s0 = *(undefined4 **)(unaff_s4 + 8);
        unaff_s2 = 1;
        if (unaff_s0 == (undefined4 *)0x0) {
          return;
        }
      }
      unaff_s6 = (undefined4 *)*unaff_s0;
    } while (unaff_s3 != *(byte *)((int)unaff_s0 + 6));
    param_2 = 0;
    param_1 = unaff_s0;
  } while( true );
}



void FUN_0001071a(undefined4 *param_1)

{
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  undefined4 *unaff_s6;
  
  do {
    FUN_0001071a(param_1);
    do {
      param_1 = unaff_s6;
      if (param_1 == (undefined4 *)0x0) {
        if (unaff_s2 == unaff_s5) {
          return;
        }
        param_1 = *(undefined4 **)(unaff_s4 + 8);
        unaff_s2 = 1;
        if (param_1 == (undefined4 *)0x0) {
          return;
        }
      }
      unaff_s6 = (undefined4 *)*param_1;
    } while (unaff_s3 != *(byte *)((int)param_1 + 6));
    FUN_00010710(param_1,0);
  } while( true );
}



// DWARF DIE: 53a

ke_task_id_t ble_ke_task_check(ke_task_id_t task)

{
  undefined2 in_register_0000202a;
  uint uVar1;
  int iVar2;
  
  uVar1 = CONCAT22(in_register_0000202a,task);
  if (((5 < (task & 0xff)) || (iVar2 = *(int *)((task & 0xff) * 4), iVar2 == 0)) ||
     ((uint)*(ushort *)(iVar2 + 0xe) < uVar1 >> 8)) {
    uVar1 = 0xff;
  }
  return (ke_task_id_t)uVar1;
}


