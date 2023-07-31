#include "main.h"

/**
 *_memcpy - copies n bytes from mem area src to mem area dest
 *@dest: Destination memory area
 *@src: Source memory area
 *@n: max number of bytes to be copied
 *Return: pointer to destinaation
 */
char *_memcpy(char *dest, char  *src, unsigned int n)
{
	unsigned int i;

	char *destination = dest;

	for (i = 0 ; i < n ; i++)
	{
		*dest++ = *src++;
	}
	return (destination);
}
