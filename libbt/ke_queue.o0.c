typedef unsigned char   undefined;

typedef unsigned char    bool;
typedef unsigned char    byte;
typedef unsigned int    dword;
typedef long long    longlong;
typedef unsigned char    uchar;
typedef unsigned int    uint;
typedef unsigned long    ulong;
typedef unsigned long long    ulonglong;
typedef unsigned short    ushort;
typedef unsigned short    word;
typedef bool _Bool;

typedef ulong uint32_t;

typedef struct co_list_hdr co_list_hdr, *Pco_list_hdr;

struct co_list_hdr { // DWARF DIE: ae
    struct co_list_hdr * next;
};

typedef struct co_list co_list, *Pco_list;

struct co_list { // DWARF DIE: d9
    struct co_list_hdr * first;
    struct co_list_hdr * last;
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




// DWARF DIE: 311

uint32_t _patch_ble_ke_queue_extract
                   (void *pRet,co_list *queue,anon_subr__Bool_co_list_hdr_ptr_uint32_t *func,
                   uint32_t arg)

{
  co_list_hdr *pcVar1;
  _Bool _Var2;
  undefined3 extraout_var;
  co_list_hdr *pcVar3;
  
  *(co_list_hdr **)pRet = queue->first;
  pcVar1 = (co_list_hdr *)0x0;
  while( true ) {
                    // WARNING: Load size is inaccurate
    if (*pRet == (co_list_hdr *)0x0) {
      return 1;
    }
    _Var2 = (*func)(*pRet,arg);
                    // WARNING: Load size is inaccurate
    pcVar3 = *pRet;
    if (CONCAT31(extraout_var,_Var2) != 0) break;
    *(co_list_hdr **)pRet = pcVar3->next;
    pcVar1 = pcVar3;
  }
  if (pcVar1 == (co_list_hdr *)0x0) {
    queue->first = pcVar3->next;
  }
  else {
    pcVar1->next = pcVar3->next;
  }
                    // WARNING: Load size is inaccurate
  if (**pRet != 0) {
    **pRet = 0;
    return 1;
  }
  queue->last = pcVar1;
  return 1;
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: 25f

co_list_hdr *
ble_ke_queue_extract(co_list *queue,anon_subr__Bool_co_list_hdr_ptr_uint32_t *func,uint32_t arg)

{
  co_list_hdr cVar1;
  _Bool _Var2;
  int iVar3;
  undefined3 extraout_var;
  co_list_hdr cStack36;
  co_list_hdr *element;
  
  iVar3 = (*pcRam00000000)(&cStack36,queue,func,arg,pcRam00000000);
  if (iVar3 == 0) {
    cVar1 = (co_list_hdr)0x0;
    for (cStack36 = queue->first; (co_list_hdr)cStack36 != (co_list_hdr)0x0;
        cStack36 = (co_list_hdr *)*cStack36) {
      _Var2 = (*func)(cStack36,arg);
      if (CONCAT31(extraout_var,_Var2) != 0) {
        if (cVar1 == (co_list_hdr)0x0) {
          queue->first = (co_list_hdr *)*cStack36;
        }
        else {
          *(co_list_hdr *)cVar1 = *cStack36;
        }
        if (*cStack36 != (co_list_hdr)0x0) {
          *cStack36 = (co_list_hdr)0x0;
          return (co_list_hdr *)(co_list_hdr)cStack36;
        }
        ((co_list_hdr *)&queue->last)->next = (co_list_hdr *)cVar1;
        return (co_list_hdr *)(co_list_hdr)cStack36;
      }
      cVar1 = (co_list_hdr)cStack36;
    }
  }
  return (co_list_hdr *)(co_list_hdr)cStack36;
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: 1cd

uint32_t _patch_ble_ke_queue_insert
                   (void *pRet,co_list *queue,co_list_hdr *element,
                   anon_subr__Bool_co_list_hdr_ptr_co_list_hdr_ptr *cmp)

{
  co_list_hdr cVar1;
  co_list_hdr cVar2;
  _Bool _Var3;
  undefined3 extraout_var;
  co_list_hdr cVar4;
  
  cVar1 = (co_list_hdr)queue->first;
  cVar4 = (co_list_hdr)(co_list_hdr *)0x0;
  while (cVar2 = cVar1, cVar2 != (co_list_hdr)0x0) {
    _Var3 = (*cmp)(element,(co_list_hdr *)cVar2);
    if (CONCAT31(extraout_var,_Var3) != 0) goto _L0;
    cVar4 = cVar2;
    cVar1 = *(co_list_hdr *)cVar2;
  }
  queue->last = element;
_L0:
  element->next = (co_list_hdr *)cVar2;
  if (cVar4 == (co_list_hdr)0x0) {
    queue->first = element;
  }
  else {
    *(co_list_hdr **)cVar4 = element;
  }
  return 1;
}



// WARNING: Type propagation algorithm not settling
// DWARF DIE: 101

void ble_ke_queue_insert(co_list *queue,co_list_hdr *element,
                        anon_subr__Bool_co_list_hdr_ptr_co_list_hdr_ptr *cmp)

{
  co_list_hdr cVar1;
  co_list_hdr cVar2;
  _Bool _Var3;
  int iVar4;
  undefined3 extraout_var;
  co_list_hdr cVar5;
  
  iVar4 = (*pcRam00000000)(0,queue,element,cmp,pcRam00000000);
  if (iVar4 == 0) {
    cVar1 = (co_list_hdr)queue->first;
    cVar5 = (co_list_hdr)(co_list_hdr *)0x0;
    while (cVar2 = cVar1, cVar2 != (co_list_hdr)0x0) {
      _Var3 = (*cmp)(element,(co_list_hdr *)cVar2);
      if (CONCAT31(extraout_var,_Var3) != 0) goto _L0;
      cVar5 = cVar2;
      cVar1 = *(co_list_hdr *)cVar2;
    }
    queue->last = element;
_L0:
    element->next = (co_list_hdr *)cVar2;
    if (cVar5 == (co_list_hdr)0x0) {
      queue->first = element;
    }
    else {
      *(co_list_hdr **)cVar5 = element;
    }
  }
  return;
}


