#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number in decimal
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long temp = n;

	/* If the temp is greater than 1, call the function recursively */
	if (temp > 1)
	{
		print_binary(temp >> 1); /*Right-shift temp by 1 and recurse*/
	}
	_putchar((temp & 1) + '0'); /* Print the least significant bit (1 or 0)*/
}
