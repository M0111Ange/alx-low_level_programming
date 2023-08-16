#include "3-calc.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point to calculation program
 *@argc: Count of input elements
 *@argv: An array of input elements
 *Return: int
 */

int main(int argc, char **argv)
{
	int (*func)(int, int);

	char *op = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	func = get_op_func(op);
	if (func == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
