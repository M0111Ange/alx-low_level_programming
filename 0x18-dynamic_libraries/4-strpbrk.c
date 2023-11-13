#include "main.h"
#include <string.h>

/**
 *_strpbrk - finds the first occurence of any of the bytes in accept
 *@s: String being queried
 *@accept: bytes to be referenced against
 *Return: A pointer to the first occurence
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
