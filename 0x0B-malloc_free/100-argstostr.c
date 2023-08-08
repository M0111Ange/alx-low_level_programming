#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to char(new string)
 * NULL, if ac/av = o/null, if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int count = 0, c = 0;
	int a, b;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			count++;
		}
	}
	count = count + ac + 1;
	str = malloc(sizeof(char) * count);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
