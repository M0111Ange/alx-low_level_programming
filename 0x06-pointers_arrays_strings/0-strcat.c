#include "main.h"

/**
 *_strcat - concatenates two strings
 *
 *@dest: destination string
 *@src: source of the string
 *Return: An array of charachters concatenating dest and src
 */
char *_strcat(char *dest, char *src)
{
	int len_src, len_dest, i;

	len_src = _strlen(src);
	len_dest = _strlen(dest);
	for (i = 0 ; i <= len_src ; i++)
	{
		dest[len_dest + i] = src[i];
	}
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
