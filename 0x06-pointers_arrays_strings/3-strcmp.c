#include "main.h"

/**
 *_strcmp - Compares two strings
 *
 *@s1: Frist string
 *@s2: Second string
 *Return: -15 if s1 is less 0 if the same , and 15 if greater
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
