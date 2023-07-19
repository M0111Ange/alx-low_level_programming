#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: parameter to check
 * Return: k
 */

int print_last_digit(int n)
{
	int k;

	k = n % 10;
	if (n < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
