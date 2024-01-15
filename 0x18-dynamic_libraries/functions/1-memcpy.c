#include "../main.h"

/**
 * _memcpy - copies memory area to a specified memory location
 * @dest: memory area to be filled.
 * @src: memory area to copy from.
 * @n: number of bytes to copy.
 * Description: copies a n bytes from specified memory area to destination.
 *
 * Return: ptr to destination.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
	{
		dest[c] = src[c];
	}

	return (dest);
}
