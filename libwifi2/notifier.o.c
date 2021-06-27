typedef unsigned char   undefined;

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
typedef long int32_t;

typedef int32_t BaseType_t;

typedef struct notifier_block notifier_block, *Pnotifier_block;

struct notifier_block { // DWARF DIE: 98
    int (* cb)(struct notifier_block *, int, void *);
    struct notifier_block * next;
    int priority;
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




// DWARF DIE: 2bc

int notifier_chain_regsiter(notifier_block **list,notifier_block *n)

{
  notifier_block *pnVar1;
  
  _L0();
  while ((pnVar1 = *list, pnVar1 != (notifier_block *)0x0 && (n->priority <= pnVar1->priority))) {
    list = &pnVar1->next;
  }
  n->next = pnVar1;
  *list = n;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  int iVar1;
  int in_stack_00000008;
  int *in_stack_0000000c;
  
  _L0();
  while ((iVar1 = *in_stack_0000000c, iVar1 != 0 &&
         (*(int *)(in_stack_00000008 + 8) <= *(int *)(iVar1 + 8)))) {
    in_stack_0000000c = (int *)(iVar1 + 4);
  }
  *(int *)(in_stack_00000008 + 4) = iVar1;
  *in_stack_0000000c = in_stack_00000008;
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 285

int notifier_chain_regsiter_fromCritical(notifier_block **list,notifier_block *n)

{
  int iVar1;
  notifier_block *pnVar2;
  
  pnVar2 = *list;
  if ((pnVar2 != (notifier_block *)0x0) && (n->priority <= pnVar2->priority)) {
    iVar1 = notifier_chain_regsiter_fromCritical(&pnVar2->next,n);
    return iVar1;
  }
  n->next = pnVar2;
  *list = n;
  return 0;
}



// DWARF DIE: 23a

int notifier_chain_unregsiter(notifier_block **list,notifier_block *n)

{
  notifier_block *pnVar1;
  
  _L0();
  while( true ) {
    pnVar1 = *list;
    if (pnVar1 == (notifier_block *)0x0) {
      _L0();
      return 0;
    }
    if (pnVar1 == n) break;
    list = &pnVar1->next;
  }
  *list = n->next;
  return 0;
}



undefined4 _L0(void)

{
  int iVar1;
  int in_stack_00000008;
  int *in_stack_0000000c;
  
  _L0();
  while( true ) {
    iVar1 = *in_stack_0000000c;
    if (iVar1 == 0) {
      _L0();
      return 0;
    }
    if (iVar1 == in_stack_00000008) break;
    in_stack_0000000c = (int *)(iVar1 + 4);
  }
  *in_stack_0000000c = *(int *)(in_stack_00000008 + 4);
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: 203

int notifier_chain_unregsiter_fromCritical(notifier_block **list,notifier_block *n)

{
  int iVar1;
  notifier_block *pnVar2;
  
  pnVar2 = *list;
  if (pnVar2 != (notifier_block *)0x0) {
    if (pnVar2 != n) {
      iVar1 = notifier_chain_unregsiter_fromCritical(&pnVar2->next,n);
      return iVar1;
    }
    *list = n->next;
  }
  return 0;
}



// DWARF DIE: 174

int notifier_chain_call(notifier_block **list,int event,void *env)

{
  notifier_block *pnVar1;
  
  pnVar1 = *list;
  _L0();
  for (; pnVar1 != (notifier_block *)0x0; pnVar1 = pnVar1->next) {
    (*pnVar1->cb)(pnVar1,event,env);
  }
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  code **unaff_s0;
  
  _L0();
  for (; unaff_s0 != (code **)0x0; unaff_s0 = (code **)unaff_s0[1]) {
    (**unaff_s0)(unaff_s0,*unaff_s0);
  }
  _L0();
  return 0;
}



undefined4 _L0(void)

{
  _L0();
  return 0;
}



// DWARF DIE: f1

int notifier_chain_call_fromeCritical(notifier_block **list,int event,void *env)

{
  notifier_block *pnVar1;
  
  for (pnVar1 = *list; pnVar1 != (notifier_block *)0x0; pnVar1 = pnVar1->next) {
    (*pnVar1->cb)(pnVar1,event,env);
  }
  return 0;
}


