#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: destination
 * @src: source
 * @n: number of elements to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int count1 = 0;
	int count2 = 0;

	for (i = 0; dest[i] != '\0'; i++)
		count1++;
	for (i = 0; src[i] != '\0'; i++)
		count2++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
