#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets bit value to 0
 * @n: number to change, a pointer
 * @index: index within binary number to change
 * Return: 1 if success, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int maximum_bits;
	unsigned long int k = 1;

	maximum_bits = (sizeof(unsigned long int) * 8);
	if (index > maximum_bits)
		return (-1);

	k = ~(k << index);
	*n = (*n & k);

	return (1);
}
