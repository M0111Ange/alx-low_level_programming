#include "main.h"

/**
 * _strchr -  a function that locates a character in a string.
 * @s: string to be checked
 * @c: character to check for
 * Return: a pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
	s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
