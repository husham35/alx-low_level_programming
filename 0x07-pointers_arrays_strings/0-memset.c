#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed
 * to by a s with the constant byte b
 * @*s: char pointer type
 * @*b: char pointr type
 * @n: unsigned integer type, number of bytes to fill
 * Return: pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{

	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}

	return (s);
}
