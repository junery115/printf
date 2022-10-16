#include "main.h"
#include <unistd.h>

/**
 * _putchar - function to print char
 * @c: char being passed
 * Return: char
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
