#include "main.h"

/**
 * binary_to_uint - converts binary to digits
 * @b: char of binary digits
 * Return: converted number, or 0 if there is
 * one or more chars in the string b that is not 0 or 1, or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, count = 0;
	unsigned int value1, value2 = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		count++;
		i++;
	}
	count--;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
		{
			value1 = 1 << count; /*bitwise left shift*/
			count--;
			value2 = value2 + value1;
		}
	}
	return (value2);
}


				

