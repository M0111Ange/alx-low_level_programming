#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_strings - prints strings followed by a new line
 *@separator: Separator character
 *@n: count of variable arguments
 *Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list ap;

	char *word;

	va_start(ap, n);
	while (i < n)
	{
		word = va_arg(ap, char *);
		printf("%s", word == NULL ? "(nil)" : word);
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
