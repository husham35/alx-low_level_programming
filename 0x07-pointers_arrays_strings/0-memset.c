#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed
 * to by a s with the constant byte b
 * @s: char pointer type, pointer to memory area
 * @b: char type, constant value
 * @n: unsigned integer type, number of bytes to fill
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
