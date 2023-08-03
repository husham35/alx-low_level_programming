#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int length = 0, power = 1;
	unsigned int sum = 0, error = 0;

	if (b == NULL)
		return (error);

	while (b[length] != '\0')
		length++;
	length -= 1;

	while (length >= 0)
	{
		if ((b[length] != '0') && (b[length] != '1'))
			return (error);

		if (b[length] == '1')
			sum += power;

		power = 2;
		length--;
	}

	return (sum);
}
