#include <proc.h>
#include <elf.h>
#include <fs.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

extern size_t ramdisk_read(void *buf, size_t offset, size_t len);

static uintptr_t loader(PCB *pcb, const char *filename) {
  // Elf_Ehdr ehdr;
  // ramdisk_read(&ehdr, 0, sizeof(ehdr));                                                            //从ramdisk读取elf头部信息
  // Elf_Phdr phdr[ehdr.e_phnum];                                                                     //创建用于存储elf文件的程序头表信息
  // ramdisk_read(phdr, ehdr.e_ehsize, ehdr.e_phnum * sizeof(Elf_Phdr));
  // for (int i = 0; i < ehdr.e_phnum; i ++) {
  //   if (phdr[i].p_type == PT_LOAD) {                                                               //检查程序头表的类型是否为可加载段
  //     ramdisk_read((void *)phdr[i].p_vaddr, phdr[i].p_offset, phdr[i].p_memsz);
  //     memset((void *)(phdr[i].p_vaddr + phdr[i].p_filesz), 0, phdr[i].p_memsz - phdr[i].p_filesz); //将未初始化的bss段清零
  //   }
  // }
  // return ehdr.e_entry;  //返回程序入口地址，用于加载并准备执行的程序入口点
  int fd = fs_open(filename, 0, 0);
  if(fd < 0) panic("Fail to open file %s", filename);

  Elf_Ehdr elf;
  assert(fs_read(fd, &elf, sizeof(elf)) == sizeof(elf));
  assert(*(uint32_t *)elf.e_ident == 0x464c457f); // check ELF magic number


  Elf_Phdr phdr;
  for (int i = 0; i < elf.e_phnum; i++) {
    uint32_t base = elf.e_phoff + i * elf.e_phentsize;
 
    fs_lseek(fd, base, 0);
    assert(fs_read(fd, &phdr, elf.e_phentsize) == elf.e_phentsize);
    
    // 需要装载的段
    if (phdr.p_type == PT_LOAD) {

      fs_lseek(fd, phdr.p_offset, 0);
      assert(fs_read(fd, (void*)phdr.p_vaddr, phdr.p_filesz) == phdr.p_filesz);
      
      memset((void*)phdr.p_vaddr + phdr.p_filesz, 0, phdr.p_memsz - phdr.p_filesz);
    }
  }
  assert(fs_close(fd) == 0);
  return elf.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) {
  uintptr_t entry = loader(pcb, filename);
  Log("Jump to entry = %p", entry);
  ((void(*)())entry) ();
}

