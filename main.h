#ifndef _PRINTF_HEADERS_
#define _PRINTF_HEADERS_

#include <stdarg.h>

/**
 * struct identifiers - struct definition of a printTypeStruct
 * @identifier: type
 * @printer: function to print
 */

typedef struct identifiers
{
	char *identifier;
	int (*printer)(va_list);
} identifiers;

int _putchar(char c);
int _printf(const char *format, ...);
int print_str(va_list arg);
int print_char(va_list ard);
int print_int(va_list arg);
int print_binary(unsigned int n, unsigned int *printed);
int print_unsigned_to_binary(va_list arg);




#endif
