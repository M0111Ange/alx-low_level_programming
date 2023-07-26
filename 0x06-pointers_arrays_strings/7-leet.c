#include "main.h"

/**
 *leet - Encodes a string to 1337
 *
 *@a: String to be encoded
 *
 *Return: An encoded array of chars
 */
char *leet(char *a)
{
	int i, j;

	char n[11] = "aAeEoOtTlL";
	char e[11] = "4433007711";

	i = 0;
	while (a[i] != '\0')
	{
		j = 0;
		while (n[j] != '\0')
		{
			if (n[j] == a[i])
				a[i] = e[j];
			j++;
		}
		i++;
	}
	return (a);
}
