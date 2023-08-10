#include <stdlib.h>

/**
 *array_range - creates an array of integers that
 *@min: starting point(included)
 *@max: ending poiny(included)
 *
 *Return: returns a pointer to the array
 */
int *array_range(int min, int max)
{
	int *range;

	int i = 0;

	if (min > max)
		return (NULL);
	range = malloc(sizeof(*range) * ((max - min) + 1));
	if (range == NULL)
		return (NULL);
	while (min <= max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}
