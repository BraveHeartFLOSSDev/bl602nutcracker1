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

typedef ulong uint32_t;

typedef uchar uint8_t;

typedef ushort uint16_t;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr { // DWARF DIE: 146
    struct co_list_hdr * next;
};

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: 167
    struct co_list_hdr * first;
    struct co_list_hdr * last;
};

typedef enum anon_enum_8.conflict125 {
    LINK_TYPE_END=2,
    POOL_LINKED_LIST=0,
    RING_LINKED_LIST=1
} anon_enum_8.conflict125;

typedef uint size_t;

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




// DWARF DIE: d52

uint32_t _patch_ble_co_list_init(void *pRet,co_list *list)

{
  list->first = (co_list_hdr *)0x0;
  list->last = (co_list_hdr *)0x0;
  return 1;
}



// DWARF DIE: d1a

void ble_co_list_init(co_list *list)

{
  int iVar1;
  
  iVar1 = (*pcRam00000000)(0,list,pcRam00000000);
  if (iVar1 == 0) {
    list->first = (co_list_hdr *)0x0;
    list->last = (co_list_hdr *)0x0;
  }
  return;
}



// DWARF DIE: ba4

uint32_t _patch_ble_co_list_push_back(void *pRet,co_list *list,co_list_hdr *list_hdr)

{
  if (list->first == (co_list_hdr *)0x0) {
    list->first = list_hdr;
  }
  else {
    list->last->next = list_hdr;
  }
  list->last = list_hdr;
  list_hdr->next = (co_list_hdr *)0x0;
  return 1;
}



// DWARF DIE: dc3

void ble_co_list_push_back(co_list *list,co_list_hdr *list_hdr)

{
  int iVar1;
  
  iVar1 = (*pcRam00000000)(0,list,list_hdr,pcRam00000000);
  if (iVar1 == 0) {
    if (list->first == (co_list_hdr *)0x0) {
      list->first = list_hdr;
    }
    else {
      list->last->next = list_hdr;
    }
    list->last = list_hdr;
    list_hdr->next = (co_list_hdr *)0x0;
  }
  return;
}



// DWARF DIE: c10

void ble_co_list_pool_init
               (co_list *list,void *pool,size_t elmt_size,uint32_t elmt_cnt,void *default_value,
               uint8_t list_type)

{
  undefined3 in_register_0000203d;
  uint32_t uVar1;
  
  _L0();
  for (uVar1 = 0; uVar1 != elmt_cnt; uVar1 += 1) {
    if (default_value != (void *)0x0) {
      (*pcRam00000000)(pool,default_value,elmt_size,pcRam00000000);
    }
    if ((elmt_cnt - 1 == uVar1) && (CONCAT31(in_register_0000203d,list_type) != 0)) {
      if (list->first == (co_list_hdr *)0x0) {
        list->first = (co_list_hdr *)pool;
      }
      else {
        list->last->next = (co_list_hdr *)pool;
      }
      list->last = (co_list_hdr *)pool;
      *(co_list_hdr **)pool = (co_list_hdr *)0x0;
    }
    else {
      FUN_00010108((undefined4 *)pool);
    }
    pool = (void *)((int)(co_list_hdr **)pool + elmt_size);
  }
  return;
}



void _L0(void)

{
  undefined4 *unaff_s0;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  
  _L0();
  for (; unaff_s2 != unaff_s3; unaff_s2 += 1) {
    if (unaff_s5 != 0) {
      (*pcRam00000000)(unaff_s0,pcRam00000000);
    }
    if ((unaff_s3 + -1 == unaff_s2) && (unaff_s6 != 0)) {
      if (*unaff_s1 == 0) {
        *unaff_s1 = (int)unaff_s0;
      }
      else {
        *(undefined4 **)unaff_s1[1] = unaff_s0;
      }
      unaff_s1[1] = (int)unaff_s0;
      *unaff_s0 = 0;
    }
    else {
      FUN_00010108(unaff_s0);
    }
    unaff_s0 = (undefined4 *)((int)unaff_s0 + unaff_s4);
  }
  return;
}



void FUN_00010108(undefined4 *param_1)

{
  undefined4 *unaff_s0;
  int *unaff_s1;
  int unaff_s2;
  int unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  code **unaff_s7;
  int unaff_s8;
  
  do {
    FUN_00010108(param_1);
    while( true ) {
      unaff_s0 = (undefined4 *)((int)unaff_s0 + unaff_s4);
      unaff_s2 += 1;
      if (unaff_s2 == unaff_s3) {
        return;
      }
      if (unaff_s5 != 0) {
        (**unaff_s7)(unaff_s0,*unaff_s7);
      }
      param_1 = unaff_s0;
      if ((unaff_s8 != unaff_s2) || (unaff_s6 == 0)) break;
      if (*unaff_s1 == 0) {
        *unaff_s1 = (int)unaff_s0;
      }
      else {
        *(undefined4 **)unaff_s1[1] = unaff_s0;
      }
      unaff_s1[1] = (int)unaff_s0;
      *unaff_s0 = 0;
    }
  } while( true );
}



// DWARF DIE: b0e

uint32_t _patch_ble_co_list_push_front(void *pRet,co_list *list,co_list_hdr *list_hdr)

{
  if (list->first == (co_list_hdr *)0x0) {
    list->last = list_hdr;
  }
  list_hdr->next = list->first;
  list->first = list_hdr;
  return 1;
}



// DWARF DIE: e4c

void ble_co_list_push_front(co_list *list,co_list_hdr *list_hdr)

{
  int iVar1;
  
  iVar1 = (*pcRam00000000)(0,list,list_hdr,pcRam00000000);
  if (iVar1 == 0) {
    if (list->first == (co_list_hdr *)0x0) {
      list->last = list_hdr;
    }
    list_hdr->next = list->first;
    list->first = list_hdr;
  }
  return;
}



// DWARF DIE: a95

uint32_t _patch_ble_co_list_pop_front(void *pRet,co_list *list)

{
  co_list_hdr *pcVar1;
  
  pcVar1 = list->first;
  *(co_list_hdr **)pRet = pcVar1;
  if ((pcVar1 != (co_list_hdr *)0x0) &&
     (pcVar1 = pcVar1->next, list->first = pcVar1, pcVar1 == (co_list_hdr *)0x0)) {
    list->last = (co_list_hdr *)0x0;
  }
  return 1;
}



// DWARF DIE: a46

co_list_hdr * ble_co_list_pop_front(co_list *list)

{
  int iVar1;
  co_list_hdr *pcVar2;
  co_list_hdr *pcStack20;
  co_list_hdr *element;
  
  iVar1 = (*pcRam00000000)(&pcStack20,list,pcRam00000000);
  if (((iVar1 == 0) && (pcStack20 = list->first, pcStack20 != (co_list_hdr *)0x0)) &&
     (pcVar2 = pcStack20->next, list->first = pcVar2, pcVar2 == (co_list_hdr *)0x0)) {
    list->last = (co_list_hdr *)0x0;
  }
  return pcStack20;
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: 989

uint32_t _patch_ble_co_list_extract
                   (void *pRet,co_list *list,co_list_hdr *list_hdr,uint8_t nb_following)

{
  co_list_hdr cVar1;
  undefined3 in_register_00002035;
  int iVar2;
  co_list_hdr cVar3;
  co_list_hdr cVar4;
  
  iVar2 = CONCAT31(in_register_00002035,nb_following);
  cVar3 = (co_list_hdr)0x0;
  cVar4 = (co_list_hdr)list->first;
  do {
    if (cVar4 == (co_list_hdr)0x0) {
                    // WARNING: Load size is inaccurate
      if (*pRet != '\0') {
_L0:
        for (; cVar1 = *(co_list_hdr *)cVar4, iVar2 != 0; iVar2 += -1) {
          cVar4 = cVar1;
        }
        if (cVar3 == (co_list_hdr)0x0) {
          list->first = (co_list_hdr *)cVar1;
        }
        else {
          *(co_list_hdr *)cVar3 = cVar1;
        }
        if ((co_list_hdr)((co_list_hdr *)&list->last)->next == cVar4) {
          ((co_list_hdr *)&list->last)->next = (co_list_hdr *)cVar3;
        }
      }
      return 1;
    }
    if (cVar4 == (co_list_hdr)list_hdr) {
      *(undefined *)pRet = 1;
      goto _L0;
    }
    cVar3 = cVar4;
    cVar4 = *(co_list_hdr *)cVar4;
  } while( true );
}



// WARNING: Variable defined which should be unmapped: found
// WARNING: Type propagation algorithm not settling
// DWARF DIE: 8ba

_Bool ble_co_list_extract(co_list *list,co_list_hdr *list_hdr,uint8_t nb_following)

{
  int iVar1;
  int iVar2;
  undefined3 in_register_00002031;
  co_list_hdr cVar3;
  co_list_hdr cVar4;
  co_list_hdr cVar5;
  char acStack17 [4];
  _Bool found;
  
  iVar1 = CONCAT31(in_register_00002031,nb_following);
  acStack17[0] = '\0';
  iVar2 = (*pcRam00000000)(acStack17,list,list_hdr,iVar1,pcRam00000000);
  if (iVar2 == 0) {
    cVar4 = (co_list_hdr)0x0;
    for (cVar5 = (co_list_hdr)list->first; cVar5 != (co_list_hdr)0x0; cVar5 = *(co_list_hdr *)cVar5)
    {
      if (cVar5 == (co_list_hdr)list_hdr) {
        acStack17[0] = '\x01';
        goto _L0;
      }
      cVar4 = cVar5;
    }
    if (acStack17[0] != '\0') {
_L0:
      for (; cVar3 = *(co_list_hdr *)cVar5, iVar1 != 0; iVar1 += -1) {
        cVar5 = cVar3;
      }
      if (cVar4 == (co_list_hdr)0x0) {
        list->first = (co_list_hdr *)cVar3;
      }
      else {
        *(co_list_hdr *)cVar4 = cVar3;
      }
      if ((co_list_hdr)((co_list_hdr *)&list->last)->next == cVar5) {
        ((co_list_hdr *)&list->last)->next = (co_list_hdr *)cVar4;
      }
    }
  }
  return (_Bool)acStack17[0];
}



// DWARF DIE: 860

uint32_t _patch_ble_co_list_extract_after
                   (void *pRet,co_list *list,co_list_hdr *elt_ref_hdr,co_list_hdr *elt_to_rem_hdr)

{
  if (elt_ref_hdr == (co_list_hdr *)0x0) {
    list->first = list->first->next;
  }
  else {
    elt_ref_hdr->next = elt_to_rem_hdr->next;
  }
  if (list->last == elt_to_rem_hdr) {
    list->last = elt_ref_hdr;
  }
  return 1;
}



// DWARF DIE: 7f8

void ble_co_list_extract_after(co_list *list,co_list_hdr *elt_ref_hdr,co_list_hdr *elt_to_rem_hdr)

{
  int iVar1;
  
  iVar1 = (*pcRam00000000)(0,list,elt_ref_hdr,elt_to_rem_hdr,pcRam00000000);
  if (iVar1 == 0) {
    if (elt_ref_hdr == (co_list_hdr *)0x0) {
      list->first = list->first->next;
    }
    else {
      elt_ref_hdr->next = elt_to_rem_hdr->next;
    }
    if (list->last == elt_to_rem_hdr) {
      list->last = elt_ref_hdr;
    }
  }
  return;
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: 78b

uint32_t _patch_ble_co_list_find(void *pRet,co_list *list,co_list_hdr *list_hdr)

{
  co_list_hdr cVar1;
  
  for (cVar1 = (co_list_hdr)list->first;
      (cVar1 != (co_list_hdr)list_hdr && (cVar1 != (co_list_hdr)0x0)); cVar1 = *(co_list_hdr *)cVar1
      ) {
  }
  *(bool *)pRet = cVar1 == (co_list_hdr)list_hdr;
  return 1;
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: 714

_Bool ble_co_list_find(co_list *list,co_list_hdr *list_hdr)

{
  int iVar1;
  co_list_hdr cVar2;
  undefined auStack17 [4];
  _Bool ret;
  
  iVar1 = (*pcRam00000000)(auStack17,list,list_hdr,pcRam00000000);
  if (iVar1 == 0) {
    for (cVar2 = (co_list_hdr)list->first;
        (cVar2 != (co_list_hdr)list_hdr && (cVar2 != (co_list_hdr)0x0));
        cVar2 = *(co_list_hdr *)cVar2) {
    }
    auStack17[0] = (co_list_hdr)list_hdr == cVar2;
  }
  return (_Bool)auStack17[0];
}



// DWARF DIE: 6a3

uint32_t _patch_ble_co_list_merge(void *pRet,co_list *list1,co_list *list2)

{
  if (list1->first == (co_list_hdr *)0x0) {
    list1->first = list2->first;
  }
  else {
    list1->last->next = list2->first;
  }
  list1->last = list2->last;
  list2->first = (co_list_hdr *)0x0;
  return 1;
}



// DWARF DIE: 628

void ble_co_list_merge(co_list *list1,co_list *list2)

{
  int iVar1;
  
  iVar1 = (*pcRam00000000)(0,list1,list2,pcRam00000000);
  if (iVar1 == 0) {
    if (list1->first == (co_list_hdr *)0x0) {
      list1->first = list2->first;
    }
    else {
      list1->last->next = list2->first;
    }
    list1->last = list2->last;
    list2->first = (co_list_hdr *)0x0;
  }
  return;
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: 584

uint32_t _patch_ble_co_list_insert_before
                   (void *pRet,co_list *list,co_list_hdr *elt_ref_hdr,co_list_hdr *elt_to_add_hdr)

{
  co_list_hdr cVar1;
  co_list_hdr cVar2;
  
  if (elt_ref_hdr != (co_list_hdr *)0x0) {
    cVar1 = (co_list_hdr)0x0;
    for (cVar2 = (co_list_hdr)list->first;
        (cVar2 != (co_list_hdr)elt_ref_hdr && (cVar2 != (co_list_hdr)0x0));
        cVar2 = *(co_list_hdr *)cVar2) {
      cVar1 = cVar2;
    }
    if (cVar1 != (co_list_hdr)0x0) {
      *(co_list_hdr **)cVar1 = elt_to_add_hdr;
      elt_to_add_hdr->next = (co_list_hdr *)cVar2;
      return 1;
    }
  }
  _L0();
  return 1;
}



undefined4 _L0(void)

{
  _L0();
  return 1;
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: 4d4

void ble_co_list_insert_before(co_list *list,co_list_hdr *elt_ref_hdr,co_list_hdr *elt_to_add_hdr)

{
  int iVar1;
  co_list_hdr cVar2;
  co_list_hdr cVar3;
  
  iVar1 = (*pcRam00000000)(0,list,elt_ref_hdr,elt_to_add_hdr,pcRam00000000);
  if (iVar1 != 0) {
    return;
  }
  if (elt_ref_hdr != (co_list_hdr *)0x0) {
    cVar2 = (co_list_hdr)0x0;
    for (cVar3 = (co_list_hdr)list->first;
        (cVar3 != (co_list_hdr)elt_ref_hdr && (cVar3 != (co_list_hdr)0x0));
        cVar3 = *(co_list_hdr *)cVar3) {
      cVar2 = cVar3;
    }
    if (cVar2 != (co_list_hdr)0x0) {
      *(co_list_hdr **)cVar2 = elt_to_add_hdr;
      elt_to_add_hdr->next = (co_list_hdr *)cVar3;
      return;
    }
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: 441

uint32_t _patch_ble_co_list_insert_after
                   (void *pRet,co_list *list,co_list_hdr *elt_ref_hdr,co_list_hdr *elt_to_add_hdr)

{
  co_list_hdr cVar1;
  
  if (elt_ref_hdr != (co_list_hdr *)0x0) {
    cVar1 = (co_list_hdr)list->first;
    while( true ) {
      if (cVar1 == (co_list_hdr)elt_ref_hdr) {
        if (elt_ref_hdr->next == (co_list_hdr *)0x0) {
          list->last = elt_to_add_hdr;
        }
        elt_to_add_hdr->next = elt_ref_hdr->next;
        elt_ref_hdr->next = elt_to_add_hdr;
        return 1;
      }
      if (cVar1 == (co_list_hdr)0x0) break;
      cVar1 = *(co_list_hdr *)cVar1;
    }
  }
  _L0();
  return 1;
}



undefined4 _L0(void)

{
  _L0();
  return 1;
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: 39e

void ble_co_list_insert_after(co_list *list,co_list_hdr *elt_ref_hdr,co_list_hdr *elt_to_add_hdr)

{
  int iVar1;
  co_list_hdr cVar2;
  
  iVar1 = (*pcRam00000000)(0,list,elt_ref_hdr,elt_to_add_hdr,pcRam00000000);
  if (iVar1 == 0) {
    if (elt_ref_hdr == (co_list_hdr *)0x0) {
_L0:
      do {
                    // WARNING: Do nothing block with infinite loop
      } while( true );
    }
    for (cVar2 = (co_list_hdr)list->first; cVar2 != (co_list_hdr)elt_ref_hdr;
        cVar2 = *(co_list_hdr *)cVar2) {
      if (cVar2 == (co_list_hdr)0x0) goto _L0;
    }
    if (elt_ref_hdr->next == (co_list_hdr *)0x0) {
      list->last = elt_to_add_hdr;
    }
    elt_to_add_hdr->next = elt_ref_hdr->next;
    elt_ref_hdr->next = elt_to_add_hdr;
  }
  return;
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: 33c

uint32_t _patch_ble_co_list_size(void *pRet,co_list *list)

{
  int *piVar1;
  
  piVar1 = (int *)list->first;
  while (piVar1 != (int *)0x0) {
                    // WARNING: Load size is inaccurate
    piVar1 = (int *)*piVar1;
    *(short *)pRet = *pRet + 1;
  }
  return 1;
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: 2de

uint16_t ble_co_list_size(co_list *list)

{
  int iVar1;
  int *piVar2;
  uint16_t auStack18 [2];
  uint16_t count;
  
  auStack18[0] = 0;
  iVar1 = (*pcRam00000000)(auStack18,list,pcRam00000000);
  if (iVar1 == 0) {
    for (piVar2 = (int *)list->first; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
      auStack18[0] += 1;
    }
  }
  return auStack18[0];
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: 25c

uint32_t _patch_ble_co_list_check_size_available(void *pRet,co_list *list,uint8_t free_size_needed)

{
  undefined3 in_register_00002031;
  int **ppiVar1;
  uint uVar2;
  
  ppiVar1 = (int **)list->first;
  uVar2 = 0;
  while (ppiVar1 != (int **)0x0) {
    uVar2 = uVar2 + 1 & 0xffff;
    ppiVar1 = (int **)*ppiVar1;
    if (CONCAT31(in_register_00002031,free_size_needed) == uVar2) {
      *(undefined *)pRet = 1;
    }
  }
  *(undefined *)pRet = 0;
  return 1;
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: 1c9

_Bool ble_co_list_check_size_available(co_list *list,uint8_t free_size_needed)

{
  int iVar1;
  undefined3 in_register_0000202d;
  int *piVar2;
  uint uVar3;
  undefined auStack17 [4];
  _Bool ret;
  
  iVar1 = (*pcRam00000000)(auStack17,list,CONCAT31(in_register_0000202d,free_size_needed),
                           pcRam00000000);
  if (iVar1 == 0) {
    piVar2 = (int *)list->first;
    uVar3 = 0;
    do {
      if (piVar2 == (int *)0x0) {
        return (_Bool)0;
      }
      uVar3 = uVar3 + 1 & 0xffff;
      piVar2 = (int *)*piVar2;
    } while ((CONCAT31(in_register_0000202d,free_size_needed) & 0xffff) != uVar3);
    auStack17[0] = 1;
  }
  return (_Bool)auStack17[0];
}


