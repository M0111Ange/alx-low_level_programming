#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 * @size: size of array
 * @c: character to initialize with
 * Return: pointer to char
 * if size is 0 or if it fails, returns NULL.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
