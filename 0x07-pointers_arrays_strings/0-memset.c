#include "main.h"

/**
 *_memset - fills the first n bytes of the memory area with constant byte b
 *@s: pointer to area being modified
 *@b: byte to be placed in area pointed to
 *@n: max number of bytes
 *Return: the pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *start = s;

	for (i = 0 ; i < n ; i++)
	{
		*s++ = b;
	}
	return (start);
}
