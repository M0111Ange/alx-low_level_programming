#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: string to copy
 * Return: pointer to a string, or NULL
 * if nsufficient memory, OR str = NULL
 */

char *_strdup(char *str)
{
	char *str2;
	int i, count;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}

	str2 = malloc(sizeof(char) * count + 1);
	if (str2 == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		str2[i] = str[i];
	}
	return (str2);
}
