#include "main.h"

/**
 * _strspn - computes length of prefix in a string
 * @s: string to search.
 * @accept: bytes to look for.
 *
 * Description: gets the length of a prefix substring.
 *
 * Return: number of bytes of intial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	unsigned int c, d;
	int found = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; accept[d] != '\0'; d++)
		{
			if (s[c] == accept[d])
			{
				x++;
				found = 1;
				break;
			}
		}

		if (found == 0)
			return (x);
		found = 0;
	}

	return (x);
}
