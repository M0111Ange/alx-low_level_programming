#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: destination
 * @src: source
 * @n: number of bytes to concatenate
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int count1 = 0;
	int count2 = 0;

	for (i = 0; dest[i] != '\0'; i++)
		count1++;
	for (i = 0; src[i] != '\0'; i++)
		count2++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[count1 + i] = src[i];
	return (dest);
}
