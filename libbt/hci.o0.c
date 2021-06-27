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

typedef struct em_buf_tx_desc em_buf_tx_desc, *Pem_buf_tx_desc;

typedef ushort uint16_t;

struct em_buf_tx_desc { // DWARF DIE: ac8
    uint16_t txptr;
    uint16_t txheader;
    uint16_t txdataptr;
    uint16_t txdle;
};

typedef struct em_desc_node em_desc_node, *Pem_desc_node;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

typedef uchar uint8_t;

struct co_list_hdr { // DWARF DIE: 670
    struct co_list_hdr * next;
};

struct em_desc_node { // DWARF DIE: a6c
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buffer_idx;
    uint16_t buffer_ptr;
    uint8_t llid;
    uint8_t length;
};

typedef struct em_buf_node em_buf_node, *Pem_buf_node;

struct em_buf_node { // DWARF DIE: 59a
    struct co_list_hdr hdr;
    uint16_t idx;
    uint16_t buf_ptr;
};

typedef struct em_buf_env_tag em_buf_env_tag, *Pem_buf_env_tag;

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: 691
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

struct em_buf_env_tag { // DWARF DIE: b0a
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

typedef enum anon_enum_8.conflict6f {
    KE_MEM_BLOCK_EM=1,
    KE_MEM_BLOCK_MAX=2,
    KE_MEM_BLOCK_RAM=0,
    KE_MEM_ENV=0,
    KE_MEM_KE_MSG=0,
    KE_MEM_NON_RETENTION=0
} anon_enum_8.conflict6f;

typedef enum KE_TASK_TYPE {
    TASK_DBG=3,
    TASK_HCI_ONCHIP=4,
    TASK_LLC=1,
    TASK_LLD=2,
    TASK_LLM=0,
    TASK_MAX=5,
    TASK_NONE=-1
} KE_TASK_TYPE;

typedef struct evt_mask evt_mask, *Pevt_mask;

struct evt_mask { // DWARF DIE: 339
    uint8_t mask[8];
};

typedef struct bd_addr bd_addr, *Pbd_addr;

struct bd_addr { // DWARF DIE: 36b
    uint8_t addr[6];
};

typedef ulong uint32_t;

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

typedef uint16_t ke_msg_id_t;

typedef struct ke_msg ke_msg, *Pke_msg;

typedef uint16_t ke_task_id_t;

struct ke_msg { // DWARF DIE: 6d1
    struct co_list_hdr hdr;
    ke_msg_id_t id;
    ke_task_id_t dest_id;
    ke_task_id_t src_id;
    uint16_t param_len;
    uint32_t param[1];
};

typedef enum co_error {
    CO_ERROR_ACL_CON_EXISTS=11,
    CO_ERROR_AUTH_FAILURE=5,
    CO_ERROR_CCA_REJ_USE_CLOCK_DRAG=64,
    CO_ERROR_CHANNEL_CLASS_NOT_SUP=46,
    CO_ERROR_COMMAND_DISALLOWED=12,
    CO_ERROR_CONN_ACCEPT_TIMEOUT_EXCEED=16,
    CO_ERROR_CONN_FAILED_TO_BE_EST=62,
    CO_ERROR_CONN_REJ_LIMITED_RESOURCES=13,
    CO_ERROR_CONN_REJ_SECURITY_REASONS=14,
    CO_ERROR_CONN_REJ_UNACCEPTABLE_BDADDR=15,
    CO_ERROR_CONTROLLER_BUSY=58,
    CO_ERROR_CON_LIMIT_EXCEED=9,
    CO_ERROR_CON_TERM_BY_LOCAL_HOST=22,
    CO_ERROR_CON_TIMEOUT=8,
    CO_ERROR_DIFF_TRANSACTION_COLLISION=42,
    CO_ERROR_DIRECT_ADV_TO=60,
    CO_ERROR_EIR_TOO_LARGE=54,
    CO_ERROR_ENC_MODE_NOT_ACCEPT=37,
    CO_ERROR_HARDWARE_FAILURE=3,
    CO_ERROR_HOST_BUSY_PAIRING=56,
    CO_ERROR_HW_MEM_ALLOC_FAIL=1,
    CO_ERROR_HW_UART_OUT_OF_SYNC=0,
    CO_ERROR_INSTANT_PASSED=40,
    CO_ERROR_INSUFFICIENT_SECURITY=47,
    CO_ERROR_INVALID_HCI_PARAM=18,
    CO_ERROR_INVALID_LMP_PARAM=30,
    CO_ERROR_LIMIT_REACHED=67,
    CO_ERROR_LINK_KEY_CANT_CHANGE=38,
    CO_ERROR_LMP_COLLISION=35,
    CO_ERROR_LMP_PDU_NOT_ALLOWED=36,
    CO_ERROR_LMP_RSP_TIMEOUT=34,
    CO_ERROR_MEMORY_CAPA_EXCEED=7,
    CO_ERROR_NO_ERROR=0,
    CO_ERROR_OP_CANCELL_BY_HOST=68,
    CO_ERROR_PAGE_TIMEOUT=4,
    CO_ERROR_PAIRING_NOT_ALLOWED=24,
    CO_ERROR_PAIRING_WITH_UNIT_KEY_NOT_SUP=41,
    CO_ERROR_PARAM_OUT_OF_MAND_RANGE=48,
    CO_ERROR_PIN_MISSING=6,
    CO_ERROR_QOS_NOT_SUPPORTED=39,
    CO_ERROR_QOS_REJECTED=45,
    CO_ERROR_QOS_UNACCEPTABLE_PARAM=44,
    CO_ERROR_REMOTE_DEV_POWER_OFF=21,
    CO_ERROR_REMOTE_DEV_TERM_LOW_RESOURCES=20,
    CO_ERROR_REMOTE_USER_TERM_CON=19,
    CO_ERROR_REPEATED_ATTEMPTS=23,
    CO_ERROR_RESERVED_SLOT_VIOLATION=52,
    CO_ERROR_ROLE_CHANGE_NOT_ALLOWED=33,
    CO_ERROR_ROLE_SWITCH_FAIL=53,
    CO_ERROR_ROLE_SWITCH_PEND=50,
    CO_ERROR_SCO_AIR_MODE_REJECTED=29,
    CO_ERROR_SCO_INTERVAL_REJECTED=28,
    CO_ERROR_SCO_OFFSET_REJECTED=27,
    CO_ERROR_SP_NOT_SUPPORTED_HOST=55,
    CO_ERROR_SYNC_CON_LIMIT_DEV_EXCEED=10,
    CO_ERROR_TERMINATED_MIC_FAILURE=61,
    CO_ERROR_UNACCEPTABLE_CONN_INT=59,
    CO_ERROR_UNDEFINED=-1,
    CO_ERROR_UNKNOWN_CONNECTION_ID=2,
    CO_ERROR_UNKNOWN_HCI_COMMAND=1,
    CO_ERROR_UNKNOWN_LMP_PDU=25,
    CO_ERROR_UNKNOW_ADV_ID=66,
    CO_ERROR_UNSPECIFIED_ERROR=31,
    CO_ERROR_UNSUPPORTED=17,
    CO_ERROR_UNSUPPORTED_LMP_PARAM_VALUE=32,
    CO_ERROR_UNSUPPORTED_REMOTE_FEATURE=26
} co_error;

typedef enum hci_evt_code {
    HCI_AUTH_CMP_EVT_CODE=6,
    HCI_AUTH_PAYL_TO_EXP_EVT_CODE=87,
    HCI_CHG_CON_LK_CMP_EVT_CODE=9,
    HCI_CMD_CMP_EVT_CODE=14,
    HCI_CMD_STATUS_EVT_CODE=15,
    HCI_CON_CMP_EVT_CODE=3,
    HCI_CON_PKT_TYPE_CHG_EVT_CODE=29,
    HCI_CON_REQ_EVT_CODE=4,
    HCI_CON_SLV_BCST_CH_MAP_CHG_EVT_CODE=85,
    HCI_CON_SLV_BCST_REC_EVT_CODE=81,
    HCI_CON_SLV_BCST_TO_EVT_CODE=82,
    HCI_DATA_BUF_OVFLW_EVT_CODE=26,
    HCI_DBG_META_EVT_CODE=-1,
    HCI_DISC_CMP_EVT_CODE=5,
    HCI_ENC_CHG_EVT_CODE=8,
    HCI_ENC_KEY_REFRESH_CMP_EVT_CODE=48,
    HCI_ENH_FLUSH_CMP_EVT_CODE=57,
    HCI_EXT_INQ_RES_EVT_CODE=47,
    HCI_FLOW_SPEC_CMP_EVT_CODE=33,
    HCI_FLUSH_OCCURRED_EVT_CODE=17,
    HCI_HW_ERR_EVT_CODE=16,
    HCI_INQ_CMP_EVT_CODE=1,
    HCI_INQ_RES_EVT_CODE=2,
    HCI_INQ_RES_WITH_RSSI_EVT_CODE=34,
    HCI_IO_CAP_REQ_EVT_CODE=49,
    HCI_IO_CAP_RSP_EVT_CODE=50,
    HCI_KEYPRESS_NOTIF_EVT_CODE=60,
    HCI_LE_ADV_REPORT_EVT_SUBCODE=2,
    HCI_LE_CH_SEL_ALGO_EVT_SUBCODE=20,
    HCI_LE_CON_CMP_EVT_SUBCODE=1,
    HCI_LE_CON_UPDATE_CMP_EVT_SUBCODE=3,
    HCI_LE_DATA_LEN_CHG_EVT_SUBCODE=7,
    HCI_LE_DIR_ADV_REP_EVT_SUBCODE=11,
    HCI_LE_ENH_CON_CMP_EVT_SUBCODE=10,
    HCI_LE_GEN_DHKEY_CMP_EVT_SUBCODE=9,
    HCI_LE_LTK_REQUEST_EVT_SUBCODE=5,
    HCI_LE_META_EVT_CODE=62,
    HCI_LE_RD_LOC_P256_PUB_KEY_CMP_EVT_SUBCODE=8,
    HCI_LE_RD_REM_USED_FEATS_CMP_EVT_SUBCODE=4,
    HCI_LE_REM_CON_PARAM_REQ_EVT_SUBCODE=6,
    HCI_LINK_SUPV_TO_CHG_EVT_CODE=56,
    HCI_LK_NOTIF_EVT_CODE=24,
    HCI_LK_REQ_EVT_CODE=23,
    HCI_MASTER_LK_CMP_EVT_CODE=10,
    HCI_MAX_EVT_MSK_PAGE_1_CODE=64,
    HCI_MAX_EVT_MSK_PAGE_2_CODE=88,
    HCI_MAX_SLOT_CHG_EVT_CODE=27,
    HCI_MODE_CHG_EVT_CODE=20,
    HCI_NB_CMP_PKTS_EVT_CODE=19,
    HCI_PAGE_SCAN_REPET_MODE_CHG_EVT_CODE=32,
    HCI_PIN_CODE_REQ_EVT_CODE=22,
    HCI_QOS_SETUP_CMP_EVT_CODE=13,
    HCI_QOS_VIOL_EVT_CODE=30,
    HCI_RD_CLK_OFF_CMP_EVT_CODE=28,
    HCI_RD_REM_EXT_FEATS_CMP_EVT_CODE=35,
    HCI_RD_REM_SUPP_FEATS_CMP_EVT_CODE=11,
    HCI_RD_REM_VER_INFO_CMP_EVT_CODE=12,
    HCI_REM_HOST_SUPP_FEATS_NOTIF_EVT_CODE=61,
    HCI_REM_NAME_REQ_CMP_EVT_CODE=7,
    HCI_REM_OOB_DATA_REQ_EVT_CODE=53,
    HCI_RETURN_LINK_KEYS_EVT_CODE=21,
    HCI_ROLE_CHG_EVT_CODE=18,
    HCI_SLV_PAGE_RSP_TO_EVT_CODE=84,
    HCI_SNIFF_SUB_EVT_CODE=46,
    HCI_SP_CMP_EVT_CODE=54,
    HCI_SYNC_CON_CHG_EVT_CODE=45,
    HCI_SYNC_CON_CMP_EVT_CODE=44,
    HCI_SYNC_TRAIN_CMP_EVT_CODE=79,
    HCI_SYNC_TRAIN_REC_EVT_CODE=80,
    HCI_TRUNC_PAGE_CMP_EVT_CODE=83,
    HCI_USER_CFM_REQ_EVT_CODE=51,
    HCI_USER_PASSKEY_NOTIF_EVT_CODE=59,
    HCI_USER_PASSKEY_REQ_EVT_CODE=52
} hci_evt_code;

typedef enum hci_evt_mask_page {
    HCI_PAGE_0=0,
    HCI_PAGE_1=1,
    HCI_PAGE_2=2,
    HCI_PAGE_DFT=3
} hci_evt_mask_page;

typedef enum HCI_MSG_DEST_LL {
    BLE_CTRL=3,
    BLE_MNG=2,
    BT_BCST=7,
    BT_CTRL_BD_ADDR=6,
    BT_CTRL_CONHDL=5,
    BT_MNG=4,
    CTRL=1,
    DBG=8,
    LL_UNDEF=9,
    MNG=0
} HCI_MSG_DEST_LL;

typedef struct hci_env_tag hci_env_tag, *Phci_env_tag;

struct hci_env_tag { // DWARF DIE: a17
    struct evt_mask evt_msk;
    struct evt_mask evt_msk_page_2;
};

typedef struct hci_cmd_desc_tag hci_cmd_desc_tag, *Phci_cmd_desc_tag;

struct hci_cmd_desc_tag { // DWARF DIE: 9bd
    uint16_t opcode;
    uint8_t dest_field;
    uint8_t par_size_max;
    void * par_fmt;
    void * ret_par_fmt;
};

typedef enum HCI_MSG_DEST_HL {
    HL_AM0=3,
    HL_CTRL=1,
    HL_DATA=2,
    HL_MNG=0,
    HL_UNDEF=4
} HCI_MSG_DEST_HL;

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




// DWARF DIE: cdb

void hci_send_2_host(void *param)

{
  short sVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  uint uVar3;
  
  sVar1 = *(short *)((int)param + -8);
  if (sVar1 == 0x803) {
    uVar2 = (uint)*(byte *)((int)param + -4);
    if (0x3f < uVar2) {
      if ((0x57 < uVar2) ||
         (uVar3 = uVar2 - 0x40 & 0xff,
         ((int)(uint)*(byte *)((uVar3 >> 3) + 8) >> (uVar3 - (uVar2 - 0x40 & 0xf8) & 0x1f) & 1U) !=
         0)) {
        FUN_000100c2();
        *(undefined2 *)((int)param + -6) = 4;
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
      goto _L0;
    }
_L0:
    uVar3 = uVar2 - 1 & 0xff;
    if (((int)(uint)*(byte *)(uVar3 >> 3) >> (uVar3 - (uVar2 - 1 & 0xf8) & 0x1f) & 1U) == 0)
    goto _L0;
  }
  else {
    if (sVar1 == 0x804) {
      uVar2 = 0x3e;
      goto _L0;
    }
  }
  if ((ushort)(sVar1 - 0x801) < 6) {
    UNRECOVERED_JUMPTABLE = *(code **)((uint)(ushort)(sVar1 - 0x801) * 4);
                    // WARNING: Could not emulate address calculation at 0x00010044
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
    return;
  }
_L0:
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000100c2(void)

{
  int unaff_s0;
  
  FUN_000100c2();
  *(undefined2 *)(unaff_s0 + 6) = 4;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000100da(void)

{
  int unaff_s0;
  
  FUN_000100da();
  *(undefined2 *)(unaff_s0 + 6) = 4;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000100fe(void)

{
  int unaff_s0;
  
  FUN_000100fe();
  *(undefined2 *)(unaff_s0 + 6) = 4;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010118(void)

{
  int extraout_a0;
  
  FUN_00010118();
  (*pcRam00000000)(8,pcRam00000000);
  FUN_00010132();
  *(undefined2 *)(extraout_a0 + -6) = 4;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010132(void)

{
  int unaff_s2;
  
  FUN_00010132();
  *(undefined2 *)(unaff_s2 + -6) = 4;
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: c0c

void hci_send_2_controller(void *param)

{
  int extraout_a0;
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(short *)((int)param + -8) == 0x805) {
    FUN_00010194();
    if ((extraout_a0 != 0) && (uVar1 = *(byte *)(extraout_a0 + 2) & 0xf, uVar1 < 9)) {
      UNRECOVERED_JUMPTABLE = *(code **)(uVar1 * 4);
                    // WARNING: Could not emulate address calculation at 0x000101b6
                    // WARNING: Treating indirect jump as call
      (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  else {
    if ((*(short *)((int)param + -8) == 0x807) && (*(ushort *)((int)param + -6) < 2)) {
      *(ushort *)((int)param + -6) = *(ushort *)((int)param + -6) << 8 | 1;
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00010194(void)

{
  int extraout_a0;
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  FUN_00010194();
  if ((extraout_a0 != 0) && (uVar1 = *(byte *)(extraout_a0 + 2) & 0xf, uVar1 < 9)) {
    UNRECOVERED_JUMPTABLE = *(code **)(uVar1 * 4);
                    // WARNING: Could not emulate address calculation at 0x000101b6
                    // WARNING: Treating indirect jump as call
    (*UNRECOVERED_JUMPTABLE)(UNRECOVERED_JUMPTABLE);
    return;
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: fef

uint8_t hci_evt_mask_set(evt_mask *evt_msk,uint8_t page)

{
  byte bVar1;
  undefined3 in_register_0000202d;
  byte *pbVar2;
  byte *pbVar3;
  
  if (CONCAT31(in_register_0000202d,page) == 2) {
    (*pcRam00000000)(8,evt_msk,8,pcRam00000000);
  }
  else {
    if (CONCAT31(in_register_0000202d,page) == 3) {
      (*pcRam00000000)(0,evt_msk,8,pcRam00000000);
      pbVar2 = (byte *)0x0;
      pbVar3 = (byte *)0x0;
      do {
        bVar1 = *pbVar2;
        pbVar2 = pbVar2 + 1;
        *pbVar3 = bVar1 | *pbVar3;
        pbVar3 = pbVar3 + 1;
      } while (pbVar2 != (byte *)0x8);
    }
  }
  return '\0';
}



// DWARF DIE: f0e

void hci_init(void)

{
  (*pcRam00000000)(0,0,0x10,pcRam00000000);
  FUN_000102a6();
  FUN_000102b0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000102a6(void)

{
  FUN_000102a6();
  FUN_000102b0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000102b0(void)

{
  FUN_000102b0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// DWARF DIE: ea1

void hci_reset(void)

{
  (*pcRam00000000)(0,0,0x10,pcRam00000000);
  FUN_000102e8();
  FUN_000102f2();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000102e8(void)

{
  FUN_000102e8();
  FUN_000102f2();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000102f2(void)

{
  FUN_000102f2();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}


