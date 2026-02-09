#include <NDL.h>
#include <SDL.h>
#include <string.h>

#define keyname(k) #k,
#define KEY_NUMS (sizeof(keyname) / sizeof(keyname[0]))

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  char buf[64];
  int temp = NDL_PollEvent(buf, sizeof(buf));
  if (temp) {
    ev->type = buf[1] == 'd' ? SDL_KEYDOWN : SDL_KEYUP; // kd : ku
    *strchr(buf + 3, '\n') = '\0';
    for (int i = 0; i < KEY_NUMS; i++) {
      if (!strcmp(keyname[i], buf + 3)) {
        ev->key.keysym.sym = i;
        break;
      }
    }
    return 1;
  }
  else return 0;
}

int SDL_WaitEvent(SDL_Event *event) {
  return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return NULL;
}
