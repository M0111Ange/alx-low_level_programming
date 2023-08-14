#include <stdio.h>

/**
 *main - Entry point to program that prints name of file it was compiles from
 *
 *Return: 0 if success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
