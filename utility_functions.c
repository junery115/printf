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
	else if (*str == '\0')
		return (-1);

	for (i = 0; str[i]; i++)
		_putchar(str[i]);

	return (i);
}

/**
 * print_int - prints an integer
 * @arg: argument
 * Return: characters printed
 */

int print_int(va_list arg)
{
	unsigned int divisor = 1, i, rem, char_printed = 0;
	int num = va_arg(arg, int);

	if (num < 0)
	{
		_putchar('-');
		char_printed++;
		num *= -1;
	}

	for (i = 0; num / divisor > 9; i++, divisor *= 10)
		;

	for (; divisor >= 1; num %= divisor, divisor /= 10, char_printed++)
	{
		rem = num / divisor;
		_putchar('0' + rem);
	}
	return (char_printed);
}


