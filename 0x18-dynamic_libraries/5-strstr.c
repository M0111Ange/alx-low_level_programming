#include "main.h"
#include <string.h>

/**
 *_strstr - finds the first occurence of a substring in a string
 *@haystack: string being queried
 *@needle: substring
 *Return: A pointer to the first byte of occurence
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
