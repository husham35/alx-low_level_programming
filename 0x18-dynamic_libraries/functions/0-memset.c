#include "main.h"

/**
 * _memset - fills a block of memory area
 * @s: Memory area to be filled.
 * @b: Byte to fill area with.
 * @n: Number of bytes of memory area to be filled.
 *
 * Description: fills a specified memory area with a constant byte.
 *
 * Return: address to memory area.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		s[c] = b;
	}

	return (s);
}
