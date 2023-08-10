#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 *main - entry point to program that multiplies positive numbers
 *@argc: count of inputs
 *@argv: array of inputs
 *Return: 0 if success
 */
int main(int argc, char **argv)
{
	if (argc > 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (all_digits(argv[1]) && all_digits(argv[2]))
	{
		print_number(atoll(argv[1]) * atoll(argv[2]));
		_putchar('\n');
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}

/**
 *all_digits - checks an array to make sure all characters are digits
 *
 *@n: the array to be checked
 *Return: 0 if not all digits, and 1 if all digits
 */
int all_digits(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (!isdigit(n[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/**
 *print_number - prints numbers using putchar
 *@n: Number to be printed
 *
 *Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar('0' + (n % 10));
}
