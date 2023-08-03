#include "main.h"
#include <stdio.h>

/**
 * flip_bits - flips bits to convert one number to another number
 * @n: number one
 * @m: number two to convert to
 * Return: number of bits to flip to
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter;
	unsigned long int difference;

	difference = n ^ m;
	counter = 0;

	while (difference)
	{
		counter++;
		difference &= (difference - 1);
	}

	return (counter);
}
