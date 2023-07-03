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
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}

	return (s);
}
