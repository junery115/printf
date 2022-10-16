#include <unistd.h>

/**
 * _putchar - function to print character
 * @c: character to be printed
 * Return: char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
