#include "main.h"
#include <unistd.h>

/**
 * _putchar -  prints a char
 * @c: char to print
 * Return: 0 on success, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
