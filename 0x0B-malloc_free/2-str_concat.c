#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer to string
 * NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	char *out;
	int i, count1, count2;

	count1 = 0;
	count2 = 0;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");

	for (i = 0; s1[i] != '\0'; i++)
		count1++;
	for (i = 0; s2[i] != '\0'; i++)
		count2++;

	out = malloc(sizeof(char) * (count1 + count2) + 1);
	if (out == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		out[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		out[count1 + i] = s2[i];
	return (out);
}
