#include "main.h"

/**
 * set_bit - will set the value of bit one at a given index
 * @n: pointer to the number that will change
 * @index: the bit that willl be used
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

