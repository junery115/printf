#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_char - prints char to stdout
 * @arg: arg
 * Return: On success 1
 */

int print_char(va_list arg)
{
	return (_putchar(va_arg(arg, int)));
}

/**
 * print_str - prints a string with a 's' specifier
 * @arg: arg
 * Return: number of char printed
 */

int print_str(va_list arg)
{
	int i;
	char *str = va_arg(arg, char*);
	if (str == NULL)
		str = "(null)";
	else if (*str == '\n')
		return (-1);

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}
