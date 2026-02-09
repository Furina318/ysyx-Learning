#ifndef __SDL_VIDEO_H__
#define __SDL_VIDEO_H__

#define SDL_HWSURFACE 0x1
#define SDL_PHYSPAL 0x2
#define SDL_LOGPAL 0x4
#define SDL_SWSURFACE  0x8
#define SDL_PREALLOC  0x10
#define SDL_FULLSCREEN 0x20
#define SDL_RESIZABLE  0x40

#define DEFAULT_RMASK 0x00ff0000
#define DEFAULT_GMASK 0x0000ff00
#define DEFAULT_BMASK 0x000000ff
#define DEFAULT_AMASK 0xff000000

typedef struct {
	int16_t x, y;   // 左上角坐标
	uint16_t w, h;
} SDL_Rect;

typedef union {
  struct {
    uint8_t r, g, b, a; // RGB颜色分量和Alpha透明度通道
  };
  uint32_t val;
} SDL_Color;

typedef struct {
	int ncolors;       // 颜色数量
	SDL_Color *colors; // 颜色数组，长度为ncolors
} SDL_Palette;

typedef struct {
	SDL_Palette *palette;                   // 调色板
	uint8_t BitsPerPixel;                   // 像素位数（32->8R+8G+8B+8A）
	uint8_t BytesPerPixel;                  // 像素字节数
	uint8_t Rloss, Gloss, Bloss, Aloss;     // 色彩损失
	uint8_t Rshift, Gshift, Bshift, Ashift; // 各通道位移量
	uint32_t Rmask, Gmask, Bmask, Amask;    // 各通道掩码
} SDL_PixelFormat;  // 像素格式描述

typedef struct {
	uint32_t flags;     // 表面属性标志（如SDL_HWSURFACE/SDL_FULLSCREEN）
	SDL_PixelFormat *format;
	int w, h;
	uint16_t pitch;     // 每行像素占用的字节数（w * BytesPerPixel）
	uint8_t *pixels;    // 像素数据指针，长度为pitch * h字节
} SDL_Surface;

SDL_Surface* SDL_CreateRGBSurfaceFrom(void *pixels, int width, int height, int depth,
    int pitch, uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask);
SDL_Surface* SDL_CreateRGBSurface(uint32_t flags, int width, int height, int depth,
    uint32_t Rmask, uint32_t Gmask, uint32_t Bmask, uint32_t Amask);
SDL_Surface* SDL_SetVideoMode(int width, int height, int bpp, uint32_t flags);
void SDL_FreeSurface(SDL_Surface *s);
void SDL_BlitSurface(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect);
void SDL_FillRect(SDL_Surface *dst, SDL_Rect *dstrect, uint32_t color);
void SDL_UpdateRect(SDL_Surface *s, int x, int y, int w, int h);
void SDL_SoftStretch(SDL_Surface *src, SDL_Rect *srcrect, SDL_Surface *dst, SDL_Rect *dstrect);
void SDL_SetPalette(SDL_Surface *s, int flags, SDL_Color *colors, int firstcolor, int ncolors);
SDL_Surface *SDL_ConvertSurface(SDL_Surface *src, SDL_PixelFormat *fmt, uint32_t flags);
uint32_t SDL_MapRGBA(SDL_PixelFormat *fmt, uint8_t r, uint8_t g, uint8_t b, uint8_t a);
int SDL_LockSurface(SDL_Surface *s);
void SDL_UnlockSurface(SDL_Surface *s);

#endif
