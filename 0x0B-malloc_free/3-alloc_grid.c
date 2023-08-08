#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - creates 2-dimensional array of ints
 * @width: width of 2-dimensional array
 * @height: height of 2-dimensional array
 * Return: pointer to 2D array or NULL if failure
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	/* allocating mem space to rows of array */
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	/* looping over rows */
	{
		array[i] = malloc(sizeof(int) * width);

		if (array[i] == NULL)
		{
			free(array);
			for (j = 0; j < width; j++)
				free(array[j]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}



