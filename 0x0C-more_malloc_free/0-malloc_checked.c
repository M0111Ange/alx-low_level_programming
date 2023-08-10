#include <stdlib.h>

/**
 *malloc_checked - allocates memory of size b
 *
 *@b: memory size
 *
 *Return: A pointer to the memory area
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
