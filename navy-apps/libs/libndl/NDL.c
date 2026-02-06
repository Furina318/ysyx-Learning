#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/time.h>

static int evtdev = -1;
static int fbdev = -1;
static int dispinfo = -1;
static int screen_w = 0, screen_h = 0;
static int offset_w = 0, offset_h = 0;
static struct timeval start_tv = {0}, cur_tv = {0};

uint32_t NDL_GetTicks() {
  gettimeofday(&cur_tv, NULL);
  uint32_t spend_time = (cur_tv.tv_sec - start_tv.tv_sec) * 1000000 + (cur_tv.tv_usec - start_tv.tv_usec);
  return spend_time;
}

int NDL_PollEvent(char *buf, int len) {
  evtdev = open("/dev/events", 0, 0);
  return read(evtdev, buf, len) != 0;
}

void NDL_OpenCanvas(int *w, int *h) {
  if (getenv("NWM_APP")) {
    int fbctl = 4;
    fbdev = 5;
    screen_w = *w; screen_h = *h;
    char buf[64];
    int len = sprintf(buf, "%d %d", screen_w, screen_h);
    // let NWM resize the window and create the frame buffer
    write(fbctl, buf, len);
    while (1) {
      // 3 = evtdev
      int nread = read(3, buf, sizeof(buf) - 1);
      if (nread <= 0) continue;
      buf[nread] = '\0';
      if (strcmp(buf, "mmap ok") == 0) break;
    }
    close(fbctl);
  }
  else {
    char buf[64];
    fbdev = open("/dev/fb", 0, 0);
    dispinfo = open("/proc/dispinfo", 0, 0);
    int len = read(dispinfo, buf, sizeof(buf));
    buf[len] = '\0';
    close(dispinfo);
    sscanf(buf, "WIDTH:%d\nHEIGHT:%d\n", &screen_w, &screen_h);
    if (*w == 0 && *h == 0) {
      *w = screen_w;
      *h = screen_h;
    }
    offset_w = (screen_w - *w) / 2;
    offset_h = (screen_h - *h) / 2;
  }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) {
  x += offset_w;
  y += offset_h;
  for (int i = 0; i < h; i ++) {
    lseek(fbdev, (x + (y + i) * screen_w) * 4, SEEK_SET);
    write(fbdev, pixels + i * w, w * 4);
  }
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) {
  if (getenv("NWM_APP")) {
    evtdev = 3;
  }
  gettimeofday(&start_tv, NULL);
  return 0;
}

void NDL_Quit() {
}
