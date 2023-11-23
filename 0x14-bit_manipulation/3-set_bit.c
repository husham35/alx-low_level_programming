#include "main.h"

/**
 * set_bit - sets bit to a value of 1 at a given index
 * @n: decimal number passed by pointer
 * @index: index position within a binary number
 * Return: 1 if success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int maximum_bits;
	unsigned long int k = 1;

	maximum_bits = (sizeof(unsigned long int) * 8);
	if (index > maximum_bits)
		return (-1);

	k <<= index;
	*n = (*n | k);

	return (1);
}
