#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - Prints the sum of all it parameters
 *
 *@n: The count of arguments
 *Return: Sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;

	unsigned int i = 0;

	int sum = 0;

	if (n == 0)
		return (0);
	va_start(nums, n);

	while (i < n)
	{
		sum += va_arg(nums, int);
		i++;
	}
	va_end(nums);
	return (sum);
}
