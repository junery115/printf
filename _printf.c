#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_special_chars - prints special characters
 * @next: character after %
 * @arg: argument for identifier
 * @Return: number of chars printed
 */

int print_special_chars(char next, va_list arg)
{
	int i;

	identifiers ids[] = {
		{"c", print_char},
		{"s", print_str},
		{NULL, NULL}
	};

	for (i = 0; ids[i].identifier != NULL; i++)
	{
		if (ids[i].identifier[0] == next)
			return (ids[i].printer(arg));
	}
	return (0);
}

/**
 * _printf - custom printf
 *Description: prints output based on format
 *@format: char string containing 0 or more directives
 * Return: number of chars printed
 * excluding '\0'
 * also returns -1 for incomplete idetifier errors
 */


int _printf(const char *format, ...)
{
	unsigned int i;
	int identifier_printed = 0, char_printed = 0;
	va_list arg;

	va_start(arg, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			char_printed++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%');
			char_printed++;
			i++;
			continue;
		}
		if (format[i + 1] == '\0')
			return (-1);

		identifier_printed = print_special_chars(format[i + 1], arg);
		if (identifier_printed == -1 || identifier_printed != 0)
			i++;
		if (identifier_printed > 0)
			char_printed += identifier_printed;
		if (identifier_printed == 0)
		{
			_putchar('%');
			char_printed++;
		}

	}
	va_end(arg);
	return (char_printed);
}



