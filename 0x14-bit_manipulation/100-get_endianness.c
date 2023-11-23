#include "main.h"

/**
 * get_endianness - checks for endianness
 * Return: first value stored, 1 if little, 0 if big endian
 */

int get_endianness(void)
{
	int number = 0x00000001; /* 1 in decimal */
	char *c = (char *)&number;

	return (c[0]);
}
