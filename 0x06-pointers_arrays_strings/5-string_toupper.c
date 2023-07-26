#include <ctype.h>
#include "main.h"

/**
 *string_toupper - Changes all lower case letters to upper case
 *
 *@s: Array of string chars being converted
 *Return: Array of string chars
 */
char *string_toupper(char *s)
{
	int i;

	char u;

	i = 0;
	while (s[i] != '\0')
	{
		if (islower(s[i]))
		{
			u = toupper(s[i]);
			s[i] = u;
		}
		i++;
	}
	return (s);
}
