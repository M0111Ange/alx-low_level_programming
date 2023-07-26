#include "main.h"

/**
 *_strncpy - copies the dtring src points
 *to into dest without exceeding n bytes
 *
 *@dest: The pointer to dest
 *@src: Pointer to src
 *@n: max number of bytes
 *Return: the destination pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	for (; i < n ; i++)
		dest[i] = '\0';
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
