#include <NDL.h>

int SDL_Init(uint32_t flags) {  // 初始化SDL
  return NDL_Init(flags);
}

void SDL_Quit() {               // 关闭SDL
  NDL_Quit();
}

char *SDL_GetError() {          // 获取错误信息
  return "Navy does not support SDL_GetError()";
}

int SDL_SetError(const char* fmt, ...) {   // 设置错误信息
  return -1;
}

int SDL_ShowCursor(int toggle) {           // 显示或隐藏光标
  return 0;
}

void SDL_WM_SetCaption(const char *title, const char *icon) {
}
