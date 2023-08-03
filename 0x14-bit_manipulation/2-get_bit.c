#include "main.h"
#include <stdio.h>
/**
 * get_bit - get bit at index
 * @n: number to evaluate
 * @index: index withing a binary number of the bit we want to get
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > 64)
		return (-1);

	bit = n >> index;

	return (bit & 1);
}
