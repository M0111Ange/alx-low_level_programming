#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *_calloc - allocates space for an array
 *@nmemb: Number of members in array
 *@size: Size of each element in the array
 *Return: A pointer to the memory area
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc((nmemb * size));
	if (array == NULL)
		return (NULL);
	memset(array, 0, nmemb * size);
	return (array);
}
