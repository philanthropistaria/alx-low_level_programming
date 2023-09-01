#include "main.h"

/**
 * get_bit - will return the value of a bit at a given index
 * @n: the number to search
 * @index: the index of the bit to be acheived
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

