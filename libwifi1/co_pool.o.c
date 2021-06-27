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
typedef ulong uint32_t;

typedef struct co_pool_hdr co_pool_hdr, *Pco_pool_hdr;

struct co_pool_hdr { // DWARF DIE: 77
    struct co_pool_hdr * next;
    void * element;
};

typedef struct co_pool co_pool, *Pco_pool;

struct co_pool { // DWARF DIE: a7
    struct co_pool_hdr * first_ptr;
    uint32_t freecnt;
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




// DWARF DIE: 23b

void co_pool_init(co_pool *pool,co_pool_hdr *pool_hdr,void *elements,uint32_t elem_size,
                 uint32_t elem_cnt)

{
  co_pool_hdr *pcVar1;
  uint32_t uVar2;
  
  if (((uint)elements & 3) != 0) {
    FUN_00010032();
  }
  if ((elem_size & 3) != 0) {
    FUN_00010054();
  }
  pcVar1 = pool_hdr + 1;
  for (uVar2 = 0; uVar2 != elem_cnt; uVar2 += 1) {
    pcVar1[-1].element = elements;
    pcVar1[-1].next = pcVar1;
    pcVar1 = pcVar1 + 1;
    elements = (void *)((int)elements + elem_size);
  }
  pool_hdr[uVar2 - 1].next = (co_pool_hdr *)0x0;
  pool->first_ptr = pool_hdr;
  pool->freecnt = uVar2;
  return;
}



void FUN_00010032(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int iVar2;
  int *unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  
  FUN_00010032();
  if ((unaff_s3 & 3) != 0) {
    FUN_00010054();
  }
  iVar1 = unaff_s1 + 8;
  for (iVar2 = 0; iVar2 != unaff_s4; iVar2 += 1) {
    *(int *)(iVar1 + -4) = unaff_s0;
    *(int *)(iVar1 + -8) = iVar1;
    iVar1 += 8;
    unaff_s0 += unaff_s3;
  }
  *(undefined4 *)(iVar2 * 8 + unaff_s1 + -8) = 0;
  *unaff_s2 = unaff_s1;
  unaff_s2[1] = iVar2;
  return;
}



void FUN_00010054(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  int iVar2;
  int *unaff_s2;
  int unaff_s3;
  int unaff_s4;
  
  FUN_00010054();
  iVar1 = unaff_s1 + 8;
  for (iVar2 = 0; iVar2 != unaff_s4; iVar2 += 1) {
    *(int *)(iVar1 + -4) = unaff_s0;
    *(int *)(iVar1 + -8) = iVar1;
    iVar1 += 8;
    unaff_s0 += unaff_s3;
  }
  *(undefined4 *)(iVar2 * 8 + unaff_s1 + -8) = 0;
  *unaff_s2 = unaff_s1;
  unaff_s2[1] = iVar2;
  return;
}



// DWARF DIE: 1a0

co_pool_hdr * co_pool_alloc(co_pool *pool,uint32_t nbelem)

{
  co_pool_hdr *pcVar1;
  co_pool_hdr *pcVar2;
  co_pool_hdr *pcVar3;
  co_pool_hdr *pcVar4;
  uint32_t uVar5;
  
  if (nbelem == 0) {
    FUN_000100ba();
  }
  pcVar1 = (co_pool_hdr *)0x0;
  if (nbelem <= pool->freecnt) {
    pcVar1 = pool->first_ptr;
    pcVar3 = pcVar1;
    pcVar4 = pcVar1;
    for (uVar5 = 0; pcVar2 = pcVar3, uVar5 != nbelem; uVar5 += 1) {
      pcVar3 = pcVar2->next;
      pcVar4 = pcVar2;
    }
    pcVar3 = pcVar4->next;
    pool->freecnt = pool->freecnt - uVar5;
    pool->first_ptr = pcVar3;
    pcVar4->next = (co_pool_hdr *)0x0;
  }
  return pcVar1;
}



undefined4 * FUN_000100ba(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_s0;
  uint unaff_s1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  FUN_000100ba();
  puVar2 = (undefined4 *)0x0;
  if (unaff_s1 <= (uint)unaff_s0[1]) {
    puVar2 = (undefined4 *)*unaff_s0;
    puVar1 = puVar2;
    puVar5 = puVar2;
    for (uVar6 = 0; puVar3 = puVar1, uVar6 != unaff_s1; uVar6 += 1) {
      puVar1 = (undefined4 *)*puVar3;
      puVar5 = puVar3;
    }
    uVar4 = *puVar5;
    unaff_s0[1] = unaff_s0[1] - uVar6;
    *unaff_s0 = uVar4;
    *puVar5 = 0;
  }
  return puVar2;
}



// DWARF DIE: cf

void co_pool_free(co_pool *pool,co_pool_hdr *elements,uint32_t nbelem)

{
  co_pool_hdr *pcVar1;
  uint uVar2;
  
  if (nbelem == 0) {
    FUN_0001011a();
  }
  if (elements == (co_pool_hdr *)0x0) {
    FUN_00010138();
  }
  pcVar1 = pool->first_ptr;
  pool->first_ptr = elements;
  pool->freecnt = pool->freecnt + nbelem;
  for (uVar2 = 0; uVar2 < nbelem - 1; uVar2 += 1) {
    elements = elements->next;
  }
  elements->next = pcVar1;
  return;
}



void FUN_0001011a(void)

{
  int **unaff_s0;
  int unaff_s1;
  int *piVar1;
  uint uVar2;
  int **unaff_s2;
  
  FUN_0001011a();
  if (unaff_s0 == (int **)0x0) {
    FUN_00010138();
  }
  piVar1 = *unaff_s2;
  *unaff_s2 = (int *)unaff_s0;
  unaff_s2[1] = (int *)((int)unaff_s2[1] + unaff_s1);
  for (uVar2 = 0; uVar2 < unaff_s1 - 1U; uVar2 += 1) {
    unaff_s0 = (int **)*unaff_s0;
  }
  *unaff_s0 = piVar1;
  return;
}



void FUN_00010138(void)

{
  undefined4 *unaff_s0;
  int unaff_s1;
  undefined4 uVar1;
  uint uVar2;
  undefined4 *unaff_s2;
  
  FUN_00010138();
  uVar1 = *unaff_s2;
  *unaff_s2 = unaff_s0;
  unaff_s2[1] = unaff_s2[1] + unaff_s1;
  for (uVar2 = 0; uVar2 < unaff_s1 - 1U; uVar2 += 1) {
    unaff_s0 = (undefined4 *)*unaff_s0;
  }
  *unaff_s0 = uVar1;
  return;
}


