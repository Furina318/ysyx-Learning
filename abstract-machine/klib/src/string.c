#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

extern size_t strlen(const char *s) {
	const char *sc = s;
	assert(s != NULL);
	while(*sc != '\0') {
		sc++;
	}

	return sc - s ;
}

extern char *strcpy(char *dst, const char *src) {
	char *tmp = dst;
	assert((dst != NULL) && (src != NULL));

	while((*tmp++ = *src++) != '\0');

	return dst;
}

extern char *strncpy(char *dst, const char *src, size_t n) {
	char *tmp = dst;
	assert((dst != NULL) && (src != NULL));

	while(n && (*src != '\0')) {
		*tmp++ = *src++;
		n--;
	}

	while(n--) {
		*tmp++ = '\0';
	}

	return dst;
}

extern char *strcat(char *dst, const char *src) {
	assert(dst != NULL && src != NULL);
	char *tmp = dst;
	
	while(*dst != '\0'){
		dst++;
	}

	while((*dst++ = *src++) != '\0');

	return tmp;
}

extern int strcmp(const char *s1, const char *s2) {
	assert(s1 != NULL && s2 != NULL);
	
	while(*(unsigned char*)s1 == *(unsigned char*)s2){
		if(*(unsigned char*)s1 == '\0'){
			return 0;
		}
		s1++;
		s2++;
	}

	return *(unsigned char*)s1 - *(unsigned char*)s2;
}

extern int strncmp(const char *s1, const char *s2, size_t n) {
	assert(s1 != NULL && s2 != NULL);
	
	while(--n && *s1 && (*s1 == *s2)) {
		s1++;
		s2++;
	}

	return *(unsigned char *)s1 - *(unsigned char *)s2;
}

extern void *memset(void *s, int c, size_t n) {
	assert(s != NULL);

	unsigned char* tmp = s;

	while(n--){
		*tmp++ = (unsigned char)c;
	}

	return s;
}

extern void *memmove(void *dst, const void *src, size_t n) {
	char *d = dst;
	const char *s = src;

	if (d < s) {
        while (n--) {
            *d++ = *s++;
        }
    } else if (d > s) {
        d += n;
        s += n;
        while (n--) {
            *(--d) = *(--s);
        }
    }
    return dst;
}

extern void *memcpy(void *out, const void *in, size_t n) {
	if(out == NULL || in == NULL){
		return out;
	}

	char *d = out;
	const char *s = in;

	while(n--){
		*d++ = *s++;
	}
	return out;
}

extern int memcmp(const void *s1, const void *s2, size_t n) {
	assert(s1 != NULL && s2 != NULL);

	const unsigned char *p1 = s1;
	const unsigned char *p2 = s2;

	while(n--){
		if(*p1 != *p2){
			return *p1 - *p2;
		}
		p1++;
		p2++;
	}
	return 0;
}

#endif