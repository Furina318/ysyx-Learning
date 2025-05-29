#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...){
    char buf[2048];
    va_list args;
    va_start(args,fmt);
    int val = vsprintf(buf,fmt,args);
    putstr(buf);
    va_end(args);
    return val;
}
// int printf(const char *fmt, ...) {
// 	va_list args;
// 	va_start(args, fmt);

// 	char buffer[256];
// 	int ret = vsnprintf(buffer, sizeof(buffer), fmt, args);

// 	va_end(args);

// 	putstr(buffer);

// 	return ret;
// }

int vsprintf(char *out, const char *fmt, va_list ap) {
	return vsnprintf(out, (size_t)-1, fmt, ap);
}

int sprintf(char *out, const char *fmt, ...) {
	va_list args;
	va_start(args, fmt);
	int ret = vsprintf(out, fmt, args);
	va_end(args);
	return ret;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
	va_list args;
	va_start(args, fmt);
	int ret = vsnprintf(out, n, fmt, args);
	va_end(args);
	return ret;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  int written = 0;
  const char *p = fmt;

  while (*p != '\0' && written < n - 1) {
    if (*p == '%' && *(p + 1) != '\0') {
      p++;
			int width = 0;
			int zero_pad = 0;

			if(*p == 0) {
				zero_pad = 1;
				p++;
			}
			while(*p >= '0' && *p <= '9'){
				width = width * 10 + (*p - '0');
				p++;
			}

      switch (*p) {
        case 'd': {
          int val = va_arg(ap, int);
          char num_buffer[20];
          int num_len = 0;
          if (val < 0) {
            if (written < n - 1) {
              out[written++] = '-';
            }
            val = -val;
          }
          int temp_val = val;
          do {
            num_len++;
            temp_val /= 10;
          } while (temp_val != 0);
          for (int i = num_len - 1; i >= 0 && written < n - 1; i--) {
            num_buffer[i] = (val % 10) + '0';
            val /= 10;
          }
          for (int i = 0; i < num_len && written < n - 1; i++) {
            out[written++] = num_buffer[i];
          }
          break;
        }
        case 'x': {
          unsigned int val = va_arg(ap,unsigned int);
          char hex_buffer[20];
          int hex_len = 0;

					do {
                        int digit = val % 16;
                        hex_buffer[hex_len++] = (digit < 10) ? (digit + '0') : (digit - 10 + 'a');
                        val /= 16;
                    } while (val != 0);

                    if (zero_pad) {
                        while (hex_len < width && written < n - 1) {
                            out[written++] = '0';
                        }
                    }

                    for (int i = hex_len - 1; i >= 0 && written < n - 1; i--) {
                        out[written++] = hex_buffer[i];
                    }
                    break;
        }
        case 'c': {
          int str = va_arg(ap, int );
          out[written++] = str;
          break;
        }
        case 's': {
          const char *str = va_arg(ap, const char *);
          while (*str != '\0' && written < n - 1) {
            out[written++] = *str++;
          }
          break;
        }
        default:
          if (written < n - 1) {
            out[written++] = *p;
          }
          break;
      }
    } else {
      if (written < n - 1) {
        out[written++] = *p;
      }
    }
    p++;
  }

  if (n > 0) {
    out[written] = '\0';
  }

  return written;
}

#endif