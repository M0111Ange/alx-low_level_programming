#include "main.h"
#include <stddef.h>

/**
 *clear_bit - sets a specified bit to 0
 *@index: the specified position of bitto be cleared
 *@n: pointer to unsigned long int
 *Return: 1 if successful, -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 31)
		return (-1);
	*n &= (~(1 << index));
	return (1);
}
