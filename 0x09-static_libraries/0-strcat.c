#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination
 * @src: source.
 * Return: *dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int count1 = 0;
	int count2 = 0;

	for (i = 0; dest[i] != '\0'; i++)
		count1++;
	for (i = 0; src[i] != '\0'; i++)
		count2++;

	for (i = 0; i <= count2; i++)
	{
		dest[count1 + i] = src[i];
	}
	return (dest);
}
