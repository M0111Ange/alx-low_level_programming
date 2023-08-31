#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to access
 * @index: position to check
 * Return: 0 or 1, and -1 on error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int size = sizeof(n) * 8; /* checks size of bits */

	if (index > size) /*check if the index is out of range*/
		return (-1);

	/*Rightshift n by index to bring target bit to least significant position*/
	n  = n >> index;

	/*Use bitwise AND to check if the least significant bit is set*/
	/* nb: least significant bit is the right-most bit, with a raised-to-power 0*/
	if (n & 1)
		return (1); /*if its set,it is 1, return 1*/
	else
		return (0); /*if its not set, it is 0, return 0*/
}
