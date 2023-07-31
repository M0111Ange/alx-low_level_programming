#include "main.h"

/**
 *_strchr - checks for the first occurence of char c
 *@s: String queried
 *@c: Character to be searched for
 *Return: Pointer to first occurence of char found
 */
char *_strchr(char *s, char c)
{
	int i;

	char *x;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == c)
		{
			x = (s + i);
			return (x);
		}
	}
	if (s[i] == c)
	{
		x = (s + i);
		return (x);
	}
	return (0);
}
