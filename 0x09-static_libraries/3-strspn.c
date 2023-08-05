#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to check
 * @accept: substring of chars
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int count = 0;
	int prev;

	while (*s)
	{
		prev = count;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == *s)
				count++;
		}
		if (prev == count)
			break;
		s++;
	}
	return (count);
}
