// #include <common.h>
#include <device.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) {
  if (len == 0 || buf == NULL) {
    return 0;
  }

  const char *data = (const char *)buf;
  for (size_t i = 0; i < len; i++) {
    putch(data[i]); 
  }

  return len; //返回成功写入字节数
}

size_t events_read(void *buf, size_t offset, size_t len) {
  const AM_INPUT_KEYBRD_T kbd = io_read(AM_INPUT_KEYBRD);
  if (kbd.keycode == AM_KEY_NONE) {
    return 0;
  }
  if (kbd.keydown) {
    return snprintf(buf, len, "kd %s\n", keyname[kbd.keycode]);
  } else {
    return snprintf(buf, len, "ku %s\n", keyname[kbd.keycode]);
  }
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) {
  const AM_GPU_CONFIG_T cfg = io_read(AM_GPU_CONFIG);
  printf("[dispinfo_read]: width=%d, height=%d\n", cfg.width, cfg.height);
  return snprintf(buf, len, "WIDTH:%d\nHEIGHT:%d\n", cfg.width, cfg.height);

}

size_t fb_write(const void *buf, size_t offset, size_t len) {
  const AM_GPU_CONFIG_T cfg = io_read(AM_GPU_CONFIG);
  size_t x = (offset / sizeof(uint32_t)) % cfg.width;  // 计算起始像素的x坐标
  size_t y = (offset / sizeof(uint32_t)) / cfg.width;  
  size_t w = len / sizeof(uint32_t);                   // 计算要写入的像素宽度
  size_t h = 1;

  //处理跨行写入的情况
  if (x + w > cfg.width) { //超出当前最大的列数，跨行
    w = cfg.width - x;
    h = (len / sizeof(uint32_t) - w + cfg.width - 1) / cfg.width + 1;  // 更新高度
  }

  io_write(AM_GPU_FBDRAW, x, y, (void *)buf, w, h, true);

  return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
