#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - prints the sums of the two diagonals of a n by n matrix
 *@a: Multidimensional array
 *@size: Size of array
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int d1 = 0, d2 = 0, i, j;

	for (i = 0 ; i < size ; i++)
	{
		d1 += a[(size + 1) * i];
	}
	for (j = 1 ; j <= size ; j++)
	{
		d2 += a[(size - 1) * j];
	}

	printf("%d, %d\n", d1, d2);
}
