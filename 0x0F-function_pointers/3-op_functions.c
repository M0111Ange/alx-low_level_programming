#include <stdlib.h>

/**
 *op_add - Adds two numbers
 *
 *@a: first integer
 *@b: Second integer
 *Return: An integer sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - Subtracts two numbers
 *
 *@a: first integer
 *@b: Second integer
 *Return: An integer diff of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - Multiplies two numbers
 *
 *@a: first integer
 *@b: Second integer
 *Return: An integer product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - Divides two numbers
 *
 *@a: first integer
 *@b: Second integer
 *Return: An integer quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - Modulo of two numbers
 *
 *@a: first integer
 *@b: Second integer
 *Return: An integer remainder of a divide by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
