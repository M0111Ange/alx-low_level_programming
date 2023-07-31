#include "main.h"
#include <string.h>

/**
 *_strspn - number of bytes in initial segment of s that consist only of bytes
 *in accept
 *@accept: array of chars
 *@s: array of chars to be queried
 *Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	count = strspn(s, accept);
	return (count);
}
