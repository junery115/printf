#ifndef _PRINTF_HEADERS_
#define _PRINTF_HEADERS_

#include <stdarg.h>

typedef struct identifiers
{
	char *identifier;
	int (*printer)(va_list);
} identifiers;

int _putchar(char c);
int _printf(const char *format, ...);
int print_str(va_list arg);
int print_char(va_list ard);




#endif
