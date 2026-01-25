#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset; // 文件在ramdisk中的偏移
  ReadFn read;
  WriteFn write;
  size_t open_offset; //文件操作偏移量
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

extern size_t ramdisk_read(void *buf, size_t offset, size_t len);
extern size_t ramdisk_write(const void *buf, size_t offset, size_t len);

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {  //__attribute__((used))：GCC 编译器扩展属性，强制编译器保留这个数组，避免被优化掉
  [FD_STDIN]  = {"stdin", 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, invalid_read, invalid_write},
  [FD_STDERR] = {"stderr", 0, 0, invalid_read, invalid_write},
#include "files.h"
};

#define File_Size sizeof(file_table) / sizeof(file_table[0])

int fs_open(const char *pathname, int flags, int mode){
  Log("Try to open file %s ....", pathname);
  int ret = -1;
  // for (int i = FD_FB; i <= File_Size; i++){
  for (int i = 0; i<= File_Size; i++){
    if (strcmp(pathname, file_table[i].name) == 0){
      file_table[i].open_offset = 0;
      ret = i;
      break;
    }
  }
  Assert(ret != -1, "[fs_open] File %s not found!", pathname);
  return ret;
}

int fs_close(int fd){
  return 0;  //sfs没有维护文件打开的状态，总是返回0表示关闭成功
}

void init_fs() {
  // TODO: initialize the size of /dev/fb
}

size_t fs_read(int fd, void *buf, size_t len){
  Assert(fd >= 0 && fd < File_Size, "[fs_read] (fd = %d) out of file_table", fd);
  // Assert(fd >= 2 && fd < File_Size, "[fs_read] ignore read fd %s", file_table[fd].name); //非法访问stdin, stdout, stderr
  size_t ret = 0;
  if (file_table[fd].read) {
    ret = file_table[fd].read(buf, file_table[fd].open_offset, len);
  }
  else {
    // if (file_table[fd].open_offset > file_table[fd].size) return 0;
    Assert(file_table[fd].open_offset <= file_table[fd].size, "[fs_read] File %d open_offset bigger than size", fd);

    if (file_table[fd].open_offset + len > file_table[fd].size){
      len = file_table[fd].size - file_table[fd].open_offset;  //如果操作偏移量加上读取长度大于文件大小，修改长度为读到末尾为止
    }
    ramdisk_read(buf, file_table[fd].disk_offset + file_table[fd].open_offset, len);
    ret = len;
  }
  file_table[fd].open_offset += len;
  return ret;
}

size_t fs_write(int fd, const void *buf, size_t len){
  Assert(fd >= 0 && fd < File_Size, "[fs_write] (fd = %d) out of file_table", fd);
  size_t ret = 0;
  if (file_table[fd].write) {
    ret = file_table[fd].write(buf, file_table[fd].open_offset, len);
  }
  else {
    Assert(file_table[fd].open_offset <= file_table[fd].size, "[fs_write] File %d open_offset bigger than size", fd);

    if (file_table[fd].open_offset + len > file_table[fd].size){
      len = file_table[fd].size - file_table[fd].open_offset; 
      ramdisk_write(buf, file_table[fd].disk_offset + file_table[fd].open_offset, len);
    }
    ret = len;
  }
  file_table[fd].open_offset += len;
  return ret;
}

size_t fs_lseek(int fd, size_t offset, int whence){
  Assert(fd >= 0 && fd < File_Size, "[fs_lseek] (fd = %d) out of file_table", fd);
  switch (whence){
    case SEEK_SET:
      file_table[fd].open_offset = offset;
      break;
    case SEEK_CUR:
      file_table[fd].open_offset += offset;
      break;
    case SEEK_END:
      file_table[fd].open_offset = file_table[fd].size + offset;
      break;
    default:
      panic("No define fs_lseek operation %d on file %s", whence, file_table[fd]);
  }
  return file_table[fd].open_offset;
}
