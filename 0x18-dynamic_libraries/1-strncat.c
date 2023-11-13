#include "main.h"

/**
 *_strncat - Concatenates two strings without exceeding n bytes
 *@n: max bytes
 *@dest: String being added to
 *@src: String being added from
 *Return: An array of chars (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, max, len_src, i;

	len_dest = _strlen(dest);
	len_src = _strlen(src);
	if (len_src - 1 > n)
		max = n - 1;
	else
		max = len_src - 1;
	for (i = 0 ; i <= max ; i++)
		dest[len_dest + i] = src[i];
	dest[(len_dest + i)] = '\0';
	return (dest);
}

/**
 *_strlen - returns the length of a string
 *
 *@s: string
 *Return: int(lenght of s)
 */
int _strlen(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
		n++;
	return (n);
}
