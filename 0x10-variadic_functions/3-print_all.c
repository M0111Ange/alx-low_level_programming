#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 *print_all - prints a range of data types
 *
 *@format: The format arrangement of parameters
 *Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0, match;

	va_list ap;

	va_start(ap, format);
	while (format && format[i] != '\0')
	{
		match = 0;
		match = print_case(format[i], ap);
		if (still_match((format + i + 1)) && match)
		{
			printf("%s", ", ");
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

/**
 *still_match - Checks if there is still a valid data type left
 *
 *@rem: remaining characters in string format
 *Return: An integer representing true or false
 */
int still_match(const char *rem)
{
	switch (*rem)
	{
	case '\0':
		return (0);
	case 'c':
		return (1);
	case 'i':
		return (1);
	case 'f':
		return (1);
	case 's':
		return (1);
	}
	return (still_match(rem + 1));
}

/**
 *print_case - checks for each case type and prints accordingly
 *
 *@ap: a va_list type
 *@sample: a string predicting formats of var
 *Return: gives back an integer if there was a match
 */
int print_case(const char sample, va_list ap)
{
	char *sp;

	switch (sample)
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			return (1);
		case 'i':
			printf("%d", va_arg(ap, int));
			return (1);
		case 'f':
			printf("%f", va_arg(ap, double));
			return (1);
		case 's':
			sp = va_arg(ap, char *);
			if (sp == NULL)
			{
				printf("(nil)");
				return (1);
			}
			printf("%s", sp);
			return (1);
		}
	return (0);
}
