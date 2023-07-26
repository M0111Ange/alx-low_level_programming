#include "main.h"
#include <ctype.h>

/**
 *cap_string - Capitalizes every word of string
 *
 *@a: String
 *Return: A string with all words capitalized
 */
char *cap_string(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{

		if (i == 0 || a[i - 1] == ' ' || a[i - 1] == '\t' ||
		    a[i - 1] == '\n' || a[i - 1] == ',' || a[i - 1] == ';' ||
		    a[i - 1] == '.' || a[i - 1] == '!' || a[i - 1] == '?' ||
		    a[i - 1] == '"' || a[i - 1] == '(' || a[i - 1] == ')' ||
		    a[i - 1] == '{' || a[i - 1] == '}')
			if (isalpha(a[i]) && islower(a[i]))
				a[i] = toupper(a[i]);
		i++;
	}
	return (a);
}
