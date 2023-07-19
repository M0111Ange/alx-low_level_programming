#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: parameter to be checked
 * returns: void
 */

void print_times_table(int n)
{
	int horiz, vert, result;

	if (n >= 0 && n <= 15)
	{
		for (horiz = 0; horiz <= n; horiz++)
		{
			_putchar('0');

			for (vert = 1; vert <= n; vert++)
			{
				_putchar(',');
				_putchar(' ');

				result = horiz * vert;

				if (result <= 99)
					_putchar(' ');
				if (result <= 9)
					_putchar(' ');

				if (result >= 100)
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10)) % 10 + '0');
				}
				else if (result <= 99 && result >= 10)
				{
					_putchar((result / 10) + '0');
				}
				_putchar((result % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
