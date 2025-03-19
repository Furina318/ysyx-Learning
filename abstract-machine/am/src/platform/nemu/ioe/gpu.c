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
  int x=ctl->x, y=ctl->y, w=ctl->w, h=ctl->h;
  if(!ctl->sync && (w==0 || h==0)) return;//如果 sync 为 false 且 w 和 h 都为 0，则直接返回，不进行绘图操作

  // 图像像素按行优先方式存储在pixels，其对应索引index=(row*w+col)
  //先存储第一行的所有像素，再存储第二行的所有像素，依此类推
  uint32_t *pixels=ctl->pixels;//跟fb同类型才可以进行赋值
  uint32_t *fb=(uint32_t *)(uintptr_t)FB_ADDR;
  uint32_t get_w=inl(VGACTL_ADDR)>>16;
  for(int i=y;i<y+h;i++){//行遍历
    for(int j=x;j<x+w;j++){//列遍历，实际就是遍历每一行中各个元素然后进入下一行
      fb[i*get_w+j]=pixels[(i-y)*w+(j-x)];
    }
  }
  if (ctl->sync) {
    outl(SYNC_ADDR, 1);//如果 sync 为 true，则向 SYNC_ADDR 地址写入 1，触发屏幕同步操作
  }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) {
  status->ready = true;
}
