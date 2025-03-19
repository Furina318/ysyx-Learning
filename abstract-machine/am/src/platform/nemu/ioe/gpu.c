#include <am.h>
#include <nemu.h>
#include "../../../riscv/riscv.h"

#define SYNC_ADDR (VGACTL_ADDR + 4)
//分辨率的值保存在nemu的vga文件中：vgactl_port_base[0] = (screen_width() << 16) | screen_height();
// #define SCREEN_W (MUXDEF(CONFIG_VGA_SIZE_800x600, 800, 400))
// #define SCREEN_H (MUXDEF(CONFIG_VGA_SIZE_800x600, 600, 300))
void __am_gpu_init() {
  // int i;
  // int w=400;
  // int h=300;
  // uint32_t *fb=(uint32_t *)(uintptr_t)FB_ADDR;
  // for(i=0;i<w*h;i++) fb[i] = i;
  // outl(FB_ADDR,1);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) {//屏幕大小寄存器软件实现（AM）
  uint32_t screen_size=inl(VGACTL_ADDR);//读取32位数据
  uint32_t width=(screen_size>>16) & 0xffff;//将高 16 位移动到低 16 位，确保只留下16位数据
  uint32_t height=screen_size & 0xffff;
  *cfg = (AM_GPU_CONFIG_T) {
    .present = true, .has_accel = false,
    .width = width, .height = height,
    .vmemsz = 0
  };
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) {
  int x = ctl->x, y = ctl->y, w = ctl->w, h = ctl->h;
  if (!ctl->sync && (w == 0 || h == 0))
    return;
  uint32_t *pixels = ctl->pixels;
  uint32_t *fb = (uint32_t *)(uintptr_t)FB_ADDR;
  uint32_t screen_w = inl(VGACTL_ADDR) >> 16;
  for (int i = y; i < y+h; i++) {
    for (int j = x; j < x+w; j++) {
      fb[screen_w*i+j] = pixels[w*(i-y)+(j-x)]; //缓冲区是一个像素块
    }
  }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);    //将sync置1，nemu会进行屏幕更新
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
