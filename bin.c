#include "main.h"
/**
 * print_binary - function that prints the bin of a number
 * @n: num to transform to bin
 * @printed: num of char printed
 * Return: void
 */

int print_binary(unsigned int n, unsigned int *printed)
{
	if (n > 1)
	{
		*printed += 1;
		print_binary(n >> 1, printed);
	}
	_putchar((n & 1) + '0');
}

