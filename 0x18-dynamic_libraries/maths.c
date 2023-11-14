#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - sums two integers
 * @a: parameter one
 * @b: parameter two
 * Return: a + b
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * mul - multiplies two integers.
 * @a: parameter1
 * @b: parameter2
 * Return: multiplication of a and b
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides two integers.
 * @a: parameter1
 * @b: parameter2
 * Return: multiplication of a and b
 */

int div(int a, int b)
{
       return (a / b);
}

/**
 * mod - mods two integers.
 * @a: parameter1
 * @b: parameter2
 * Return: multiplication of a and b
 */

int mod(int a, int b)
{
       return (a % b);
}

/**
 * sub - subtracts two integers.
 * @a: parameter1
 * @b: parameter2
 * Return: multiplication of a and b
 */

int sub(int a, int b)
{
       return (a - b);
}
