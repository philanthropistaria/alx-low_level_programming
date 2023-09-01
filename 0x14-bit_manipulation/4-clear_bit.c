#include "main.h"

/**
 * clear_bit - will set the value of a bit to zero
 * @n: the pointer to the number that will change
 * @index: the bit that you want to see
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

