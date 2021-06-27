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
typedef unsigned long long    undefined8;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef struct em_buf_tx_desc em_buf_tx_desc, *Pem_buf_tx_desc;

typedef ushort uint16_t;

struct em_buf_tx_desc { // DWARF DIE: d0d
    uint16_t txptr;
    uint16_t txheader;
    uint16_t txdataptr;
    uint16_t txdle;
};

typedef struct em_buf_node em_buf_node, *Pem_buf_node;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr { // DWARF DIE: 3a9
    struct co_list_hdr * next;
};

struct em_buf_node { // DWARF DIE: 322
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buf_ptr;
};

typedef struct em_desc_node em_desc_node, *Pem_desc_node;

typedef uchar uint8_t;

struct em_desc_node { // DWARF DIE: cb1
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buffer_idx;
    uint16_t buffer_ptr;
    uint8_t llid;
    uint8_t length;
};

typedef struct em_buf_env_tag em_buf_env_tag, *Pem_buf_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: 3ca
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct em_buf_env_tag { // DWARF DIE: d4f
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

typedef struct rwip_rf_api rwip_rf_api, *Prwip_rf_api;

typedef char int8_t;

typedef ulong uint32_t;

struct rwip_rf_api { // DWARF DIE: a5d
    void (* reset)(void);
    void (* force_agc_enable)(_Bool);
    _Bool (* txpwr_dec)(uint8_t);
    _Bool (* txpwr_inc)(uint8_t);
    void (* txpwr_max_set)(int8_t);
    uint8_t (* txpwr_dbm_get)(uint8_t, uint8_t);
    uint8_t (* txpwr_cs_get)(int8_t);
    int8_t (* rssi_convert)(uint8_t);
    uint32_t (* reg_rd)(uint16_t);
    void (* reg_wr)(uint16_t, uint32_t);
    void (* sleep)(void);
    uint8_t txpwr_max;
    int8_t rssi_high_thr;
    int8_t rssi_low_thr;
    int8_t rssi_interf_thr;
    uint8_t wakeup_delay;
    undefined field_0x31;
    undefined field_0x32;
    undefined field_0x33;
};

typedef struct rw_task_msg_t rw_task_msg_t, *Prw_task_msg_t;

struct rw_task_msg_t { // DWARF DIE: a0e
    uint8_t msg_type;
    undefined field_0x1;
    undefined field_0x2;
    undefined field_0x3;
    void * params;
};

typedef struct rwip_prio rwip_prio, *Prwip_prio;

struct rwip_prio { // DWARF DIE: be1
    uint8_t value;
    uint8_t increment;
};

typedef enum rw_task_msg_type {
    FW_TO_FW_MSG=2,
    HOST_TO_FW_MSG=1
} rw_task_msg_type;

typedef enum HCI_MSG {
    HCI_ACL_DATA_RX=2054,
    HCI_ACL_DATA_TX=2055,
    HCI_CMD_CMP_EVENT=2049,
    HCI_CMD_STAT_EVENT=2050,
    HCI_COMMAND=2053,
    HCI_DBG_EVT=2057,
    HCI_EVENT=2051,
    HCI_LE_EVENT=2052,
    HCI_MSG_ID_FIRST=2048,
    HCI_MSG_ID_LAST=2058,
    HCI_TCI_LMP=2056
} HCI_MSG;

typedef enum rwip_prio_idx {
    RWIP_PRIO_ADV_HDC_IDX=6,
    RWIP_PRIO_ADV_IDX=5,
    RWIP_PRIO_IDX_MAX=7,
    RWIP_PRIO_INIT_IDX=1,
    RWIP_PRIO_LE_CON_ACT_IDX=4,
    RWIP_PRIO_LE_CON_IDLE_IDX=3,
    RWIP_PRIO_LE_ESTAB_IDX=2,
    RWIP_PRIO_SCAN_IDX=0
} rwip_prio_idx;

typedef enum KE_TASK_TYPE {
    TASK_DBG=3,
    TASK_HCI_ONCHIP=4,
    TASK_LLC=1,
    TASK_LLD=2,
    TASK_LLM=0,
    TASK_MAX=5,
    TASK_NONE=-1
} KE_TASK_TYPE;

typedef enum anon_enum_8.conflict6f {
    BT_HCI_ACL_DATA=1,
    BT_HCI_CMD=0,
    BT_HCI_CMD_CMP_EVT=2,
    BT_HCI_CMD_STAT_EVT=3,
    BT_HCI_EVT=5,
    BT_HCI_LE_EVT=4,
    KE_MEM_BLOCK_EM=1,
    KE_MEM_BLOCK_MAX=2,
    KE_MEM_BLOCK_RAM=0,
    KE_MEM_ENV=0,
    KE_MEM_KE_MSG=0,
    KE_MEM_NON_RETENTION=0
} anon_enum_8.conflict6f;

typedef enum rwip_coex_config_idx {
    RWIP_COEX_ADV_IDX=2,
    RWIP_COEX_CFG_MAX=5,
    RWIP_COEX_CON_DATA_IDX=1,
    RWIP_COEX_CON_IDX=0,
    RWIP_COEX_INIT_IDX=4,
    RWIP_COEX_SCAN_IDX=3
} rwip_coex_config_idx;

typedef struct ke_msg_handler ke_msg_handler, *Pke_msg_handler;

typedef uint16_t ke_msg_id_t;

typedef uint16_t ke_task_id_t;

struct ke_msg_handler { // DWARF DIE: 4d0
    ke_msg_id_t id;
    undefined field_0x2;
    undefined field_0x3;
    int (* func)(ke_msg_id_t, void *, ke_task_id_t, ke_task_id_t);
};

typedef struct ke_state_handler ke_state_handler, *Pke_state_handler;

struct ke_state_handler { // DWARF DIE: 4fc
    struct ke_msg_handler * msg_table;
    uint16_t msg_cnt;
    undefined field_0x6;
    undefined field_0x7;
};

typedef struct ke_task_desc ke_task_desc, *Pke_task_desc;

typedef uint8_t ke_state_t;

struct ke_task_desc { // DWARF DIE: 52f
    struct ke_state_handler * state_handler;
    struct ke_state_handler * default_handler;
    ke_state_t * state;
    uint16_t state_max;
    uint16_t idx_max;
};

typedef struct evt_mask evt_mask, *Pevt_mask;

struct evt_mask { // DWARF DIE: 22e
    uint8_t mask[8];
};

typedef struct bd_addr bd_addr, *Pbd_addr;

struct bd_addr { // DWARF DIE: 25b
    uint8_t addr[6];
};

typedef long int32_t;

typedef enum TASK_API_ID {
    TASK_ID_AHI=16,
    TASK_ID_AM0=-16,
    TASK_ID_AM0_HAS=-15,
    TASK_ID_ANPC=48,
    TASK_ID_ANPS=47,
    TASK_ID_APP=15,
    TASK_ID_BASC=37,
    TASK_ID_BASS=36,
    TASK_ID_BCSC=64,
    TASK_ID_BCSS=63,
    TASK_ID_BLPC=29,
    TASK_ID_BLPS=28,
    TASK_ID_CPPC=52,
    TASK_ID_CPPS=51,
    TASK_ID_CSCPC=46,
    TASK_ID_CSCPS=45,
    TASK_ID_DBG=3,
    TASK_ID_DISC=21,
    TASK_ID_DISPLAY=9,
    TASK_ID_DISS=20,
    TASK_ID_ENVC=58,
    TASK_ID_ENVS=57,
    TASK_ID_FINDL=24,
    TASK_ID_FINDT=25,
    TASK_ID_GAPC=14,
    TASK_ID_GAPM=13,
    TASK_ID_GATTC=12,
    TASK_ID_GATTM=11,
    TASK_ID_GLPC=42,
    TASK_ID_GLPS=41,
    TASK_ID_HCI=8,
    TASK_ID_HOGPBH=39,
    TASK_ID_HOGPD=38,
    TASK_ID_HOGPRH=40,
    TASK_ID_HRPC=31,
    TASK_ID_HRPS=30,
    TASK_ID_HTPC=26,
    TASK_ID_HTPT=27,
    TASK_ID_INVALID=-1,
    TASK_ID_IPSC=56,
    TASK_ID_IPSS=55,
    TASK_ID_L2CC=10,
    TASK_ID_LANC=54,
    TASK_ID_LANS=53,
    TASK_ID_LB=6,
    TASK_ID_LC=5,
    TASK_ID_LD=7,
    TASK_ID_LLC=1,
    TASK_ID_LLD=2,
    TASK_ID_LLM=0,
    TASK_ID_LM=4,
    TASK_ID_PASPC=50,
    TASK_ID_PASPS=49,
    TASK_ID_PLXC=68,
    TASK_ID_PLXS=67,
    TASK_ID_PROXM=22,
    TASK_ID_PROXR=23,
    TASK_ID_RSCPC=44,
    TASK_ID_RSCPS=43,
    TASK_ID_SCPPC=35,
    TASK_ID_SCPPS=34,
    TASK_ID_TIPC=33,
    TASK_ID_TIPS=32,
    TASK_ID_UDSC=62,
    TASK_ID_UDSS=61,
    TASK_ID_WPTC=66,
    TASK_ID_WPTS=65,
    TASK_ID_WSCC=60,
    TASK_ID_WSCS=59
} TASK_API_ID;

typedef struct ke_msg ke_msg, *Pke_msg;

struct ke_msg { // DWARF DIE: 420
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
};

typedef enum ke_msg_status_tag {
    KE_MSG_CONSUMED=0,
    KE_MSG_NO_FREE=1,
    KE_MSG_SAVED=2
} ke_msg_status_tag;

typedef uint32_t TickType_t;

typedef int32_t BaseType_t;

typedef struct hci_acl_data_rx hci_acl_data_rx, *Phci_acl_data_rx;

struct hci_acl_data_rx { // DWARF DIE: 294
    uint16_t conhdl;
    uint8_t pb_bc_flag;
    undefined field_0x3;
    uint16_t length;
    uint8_t rx_hdl;
    undefined field_0x7;
};

typedef struct hci_acl_data_tx hci_acl_data_tx, *Phci_acl_data_tx;

struct hci_acl_data_tx { // DWARF DIE: 2db
    uint16_t conhdl;
    uint8_t pb_bc_flag;
    undefined field_0x3;
    uint16_t length;
    undefined field_0x6;
    undefined field_0x7;
    struct em_buf_node * buf;
};

typedef struct bl_hci_cmd_struct bl_hci_cmd_struct, *Pbl_hci_cmd_struct;

struct bl_hci_cmd_struct { // DWARF DIE: 8ef
    uint16_t opcode;
    undefined field_0x2;
    undefined field_0x3;
    uint8_t * params;
    uint8_t param_len;
    undefined field_0x9;
    undefined field_0xa;
    undefined field_0xb;
};

typedef struct bl_hci_acl_data_tx bl_hci_acl_data_tx, *Pbl_hci_acl_data_tx;

struct bl_hci_acl_data_tx { // DWARF DIE: 92c
    uint16_t conhdl;
    uint8_t pb_bc_flag;
    undefined field_0x3;
    uint16_t len;
    undefined field_0x6;
    undefined field_0x7;
    uint8_t * buffer;
};

typedef struct hci_pkt_struct hci_pkt_struct, *Phci_pkt_struct;

typedef union anon_union.conflict976_for_p anon_union.conflict976_for_p, *Panon_union.conflict976_for_p;

union anon_union.conflict976_for_p { // DWARF DIE: 976
    struct bl_hci_cmd_struct hci_cmd;
    struct bl_hci_acl_data_tx acl_data;
};

struct hci_pkt_struct { // DWARF DIE: 998
    union anon_union.conflict976_for_p p;
};

typedef union anon_union.conflict976 anon_union.conflict976, *Panon_union.conflict976;

union anon_union.conflict976 { // DWARF DIE: 976
    struct bl_hci_cmd_struct hci_cmd;
    struct bl_hci_acl_data_tx acl_data;
};

typedef struct hci_env_tag hci_env_tag, *Phci_env_tag;

struct hci_env_tag { // DWARF DIE: 867
    struct evt_mask evt_msk;
    struct evt_mask evt_msk_page_2;
};

typedef struct hci_cmd_desc_tag hci_cmd_desc_tag, *Phci_cmd_desc_tag;

struct hci_cmd_desc_tag { // DWARF DIE: 7d1
    uint16_t opcode;
    uint8_t dest_field;
    uint8_t par_size_max;
    void * par_fmt;
    void * ret_par_fmt;
};

typedef enum HCI_PACK_STATUS {
    HCI_PACK_ERROR=4,
    HCI_PACK_IN_BUF_OVFLW=1,
    HCI_PACK_OK=0,
    HCI_PACK_OUT_BUF_OVFLW=2,
    HCI_PACK_WRONG_FORMAT=3
} HCI_PACK_STATUS;

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




// DWARF DIE: f37

int bt_hcionchip_recv(ke_msg_id_t msgid,void *param,ke_task_id_t dest_id,ke_task_id_t src_id)

{
  uint uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = msgid - 0x801 & 0xffff;
  if (uVar1 < 6) {
    UNRECOVERED_JUMPTABLE = *(code **)(uVar1 * 4);
                    // WARNING: Could not emulate address calculation at 0x0001001e
                    // WARNING: Treating indirect jump as call
    iVar2 = (*UNRECOVERED_JUMPTABLE)(param,UNRECOVERED_JUMPTABLE);
    return iVar2;
  }
  return 0;
}



// DWARF DIE: 11cf

uint8_t bt_onchiphci_interface_init(bt_hci_recv_cb *cb)

{
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Could not reconcile some variable overlaps
// DWARF DIE: fc4

int bt_onchiphci_send(uint8_t pkt_type,ke_task_id_t dest_id,hci_pkt_struct *pkt)

{
  char cVar1;
  code *pcVar2;
  undefined3 in_register_00002029;
  uint uVar3;
  int iVar4;
  short sStack42;
  uint8_t uStack40;
  uint16_t unpk_length;
  rw_task_msg_t msg;
  
  if (CONCAT31(in_register_00002029,pkt_type) == 0) {
    iVar4 = _L0();
    cVar1 = *(char *)((int)&pkt->p + 8);
    sStack42 = 0;
    if ((cVar1 != '\0') && (*(code **)(iVar4 + 4) != (code *)0x0)) {
      if ((*(byte *)(iVar4 + 2) & 0x40) == 0) {
        uVar3 = _LVL27();
      }
      else {
        uVar3 = (**(code **)(iVar4 + 4))(0,*(undefined4 *)((int)&pkt->p + 4),&sStack42,cVar1);
        uVar3 &= 0xff;
      }
      if (uVar3 == 1) {
        return -1;
      }
    }
    msg._0_4_ = (undefined2 *)FUN_000100dc();
    if (msg._0_4_ != (undefined2 *)0x0) {
      if ((sStack42 != 0) && (*(code **)(iVar4 + 4) != (code *)0x0)) {
        if ((*(byte *)(iVar4 + 2) & 0x40) == 0) {
          _L0();
        }
        else {
          (**(code **)(iVar4 + 4))(*(undefined4 *)((int)&pkt->p + 4),&sStack42,cVar1);
        }
      }
      uStack40 = '\x01';
_L0:
      uVar3 = FUN_0001011e();
      return -((uVar3 ^ 1) & 0xff);
    }
  }
  else {
    if ((CONCAT31(in_register_00002029,pkt_type) == 1) &&
       (msg._0_4_ = (undefined2 *)FUN_0001017a(), msg._0_4_ != (undefined2 *)0x0)) {
      iVar4 = FUN_00010196();
      *(int *)(msg._0_4_ + 4) = iVar4;
      if (iVar4 != 0) {
        *msg._0_4_ = *(undefined2 *)&pkt->p;
        *(undefined *)(msg._0_4_ + 1) = *(undefined *)((int)&pkt->p + 2);
        pcVar2 = pcRam00000000;
        msg._0_4_[2] = *(undefined2 *)((int)&pkt->p + 4);
        (*pcVar2)(*(ushort *)(iVar4 + 6) + 0x28008000,*(undefined4 *)((int)&pkt->p + 8),pcVar2);
        uStack40 = pkt_type;
        goto _L0;
      }
    }
  }
  return -1;
}



int _L0(void)

{
  char cVar1;
  int unaff_s0;
  int iVar2;
  uint uVar3;
  short sStack00000006;
  undefined uStack00000008;
  int iStack0000000c;
  
  iVar2 = _L0();
  cVar1 = *(char *)(unaff_s0 + 8);
  sStack00000006 = 0;
  if ((cVar1 != '\0') && (*(code **)(iVar2 + 4) != (code *)0x0)) {
    if ((*(byte *)(iVar2 + 2) & 0x40) == 0) {
      uVar3 = _LVL27();
    }
    else {
      uVar3 = (**(code **)(iVar2 + 4))(0,*(undefined4 *)(unaff_s0 + 4),&stack0x00000006,cVar1);
      uVar3 &= 0xff;
    }
    if (uVar3 == 1) {
      return -1;
    }
  }
  iStack0000000c = FUN_000100dc();
  if (iStack0000000c == 0) {
    return -1;
  }
  if ((sStack00000006 != 0) && (*(code **)(iVar2 + 4) != (code *)0x0)) {
    if ((*(byte *)(iVar2 + 2) & 0x40) == 0) {
      _L0();
    }
    else {
      (**(code **)(iVar2 + 4))(*(undefined4 *)(unaff_s0 + 4),&stack0x00000006,cVar1);
    }
  }
  uStack00000008 = 1;
  uVar3 = FUN_0001011e();
  return -((uVar3 ^ 1) & 0xff);
}



int FUN_000100dc(void)

{
  int unaff_s0;
  undefined2 unaff_s1;
  uint uVar1;
  int iVar2;
  int unaff_s2;
  short in_stack_00000006;
  undefined uStack00000008;
  int iStack0000000c;
  
  iStack0000000c = FUN_000100dc();
  if (iStack0000000c == 0) {
    iVar2 = -1;
  }
  else {
    if ((in_stack_00000006 != 0) && (*(code **)(unaff_s2 + 4) != (code *)0x0)) {
      if ((*(byte *)(unaff_s2 + 2) & 0x40) == 0) {
        _L0();
      }
      else {
        (**(code **)(unaff_s2 + 4))(*(undefined4 *)(unaff_s0 + 4),&stack0x00000006,unaff_s1);
      }
    }
    uStack00000008 = 1;
    uVar1 = FUN_0001011e();
    iVar2 = -((uVar1 ^ 1) & 0xff);
  }
  return iVar2;
}



int _L0(void)

{
  uint uVar1;
  undefined uStack00000008;
  
  _L0();
  uStack00000008 = 1;
  uVar1 = FUN_0001011e();
  return -((uVar1 ^ 1) & 0xff);
}



int FUN_0001011e(void)

{
  uint uVar1;
  
  uVar1 = FUN_0001011e();
  return -((uVar1 ^ 1) & 0xff);
}



int _LVL27(void)

{
  int unaff_s0;
  undefined2 unaff_s1;
  uint uVar1;
  int iVar2;
  int unaff_s2;
  short in_stack_00000006;
  undefined uStack00000008;
  int iStack0000000c;
  
  iVar2 = _LVL27();
  if ((iVar2 == 1) || (iStack0000000c = FUN_000100dc(), iStack0000000c == 0)) {
    iVar2 = -1;
  }
  else {
    if ((in_stack_00000006 != 0) && (*(code **)(unaff_s2 + 4) != (code *)0x0)) {
      if ((*(byte *)(unaff_s2 + 2) & 0x40) == 0) {
        _L0();
      }
      else {
        (**(code **)(unaff_s2 + 4))(*(undefined4 *)(unaff_s0 + 4),&stack0x00000006,unaff_s1);
      }
    }
    uStack00000008 = 1;
    uVar1 = FUN_0001011e();
    iVar2 = -((uVar1 ^ 1) & 0xff);
  }
  return iVar2;
}



int FUN_0001017a(void)

{
  code *pcVar1;
  undefined2 *unaff_s0;
  uint uVar2;
  int iVar3;
  undefined2 *puStack0000000c;
  
  puStack0000000c = (undefined2 *)FUN_0001017a();
  if (puStack0000000c != (undefined2 *)0x0) {
    iVar3 = FUN_00010196();
    *(int *)(puStack0000000c + 4) = iVar3;
    if (iVar3 != 0) {
      *puStack0000000c = *unaff_s0;
      *(undefined *)(puStack0000000c + 1) = *(undefined *)(unaff_s0 + 1);
      pcVar1 = pcRam00000000;
      puStack0000000c[2] = unaff_s0[2];
      (*pcVar1)(*(ushort *)(iVar3 + 6) + 0x28008000,*(undefined4 *)(unaff_s0 + 4),pcVar1);
      uVar2 = FUN_0001011e();
      return -((uVar2 ^ 1) & 0xff);
    }
  }
  return -1;
}



int FUN_00010196(void)

{
  code *pcVar1;
  undefined2 *unaff_s0;
  undefined2 *unaff_s1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_00010196();
  *(int *)(unaff_s1 + 4) = iVar3;
  if (iVar3 == 0) {
    iVar3 = -1;
  }
  else {
    *unaff_s1 = *unaff_s0;
    *(undefined *)(unaff_s1 + 1) = *(undefined *)(unaff_s0 + 1);
    pcVar1 = pcRam00000000;
    unaff_s1[2] = unaff_s0[2];
    (*pcVar1)(*(ushort *)(iVar3 + 6) + 0x28008000,*(undefined4 *)(unaff_s0 + 4),pcVar1);
    uVar2 = FUN_0001011e();
    iVar3 = -((uVar2 ^ 1) & 0xff);
  }
  return iVar3;
}



// DWARF DIE: e3e

uint8_t bt_onchiphci_hanlde_rx_acl(void *param,uint8_t *host_buf_data)

{
  uint8_t uVar1;
  char cVar2;
  undefined3 extraout_var;
  
  cVar2 = _L0();
  uVar1 = *(char *)(CONCAT31(extraout_var,cVar2) + 2) + '\x04';
  (*pcRam00000000)(host_buf_data,CONCAT31(extraout_var,cVar2),uVar1,pcRam00000000);
  FUN_00010214();
  return uVar1;
}



char _L0(void)

{
  char cVar1;
  char cVar2;
  undefined3 extraout_var;
  
  cVar2 = _L0();
  cVar1 = *(char *)(CONCAT31(extraout_var,cVar2) + 2) + '\x04';
  (*pcRam00000000)(CONCAT31(extraout_var,cVar2),cVar1,pcRam00000000);
  FUN_00010214();
  return cVar1;
}



void FUN_00010214(void)

{
  FUN_00010214();
  return;
}


