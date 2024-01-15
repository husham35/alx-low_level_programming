#include "../main.h"

/**
 * _strpbrk - searches for byte
 * @s: String to search.
 * @accept: Bytes to look for.
 *
 * Description: searches a string for any of a set of bytes.
 *
 * Return: ptr to the byte in s that matches one of the
 * bytes in accept.
 */

char *_strpbrk(char *s, char *accept)
{
	int c;

	while (*s)
	{
		for (c = 0; accept[c]; c++)
		{
			if (*s == accept[c])
				return (s);
		}
		s++;
	}

	return (NULL);
}
