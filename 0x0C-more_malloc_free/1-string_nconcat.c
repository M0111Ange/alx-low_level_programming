#include <stdlib.h>
#include <string.h>

/**
 *string_nconcat - concatenates s1 and n bytes from s2
 *@s1: first string
 *@s2: second string
 *@n: number of bytes
 *Return: pointer to array of chars
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;

	s1 = s1 == NULL ? "" : s1;
	s2 = s2 == NULL ? "" : s2;
	str = calloc((strlen(s1) + 1 + n), sizeof(*str));
	if (str == NULL)
	{
		return (NULL);
	}
	strcpy(str, s1);
	strncat(str, s2, n);
	return (str);
}
