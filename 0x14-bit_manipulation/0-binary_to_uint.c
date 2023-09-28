#include "main.h"

/**
 *_strlen - returns the length of a string
 *
 *@s: string
 *Return: int(lenght of s)
 */
int _strlen(const char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
		n++;
	return (n);
}

/**
 *binary_to_uint - converts a binary string to an integer
 *
 *@b: binary string
 *Return: the integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, len;
	unsigned int num = 0;

	if (!b)
		return (0);
	len = _strlen(b);
	while (i < len)
	{
		if (b[len - i - 1] == '1')
			num += 1 << i;
		else if (b[len - i - 1] != '0')
			return (0);
		i++;
	}
	return (num);
}
