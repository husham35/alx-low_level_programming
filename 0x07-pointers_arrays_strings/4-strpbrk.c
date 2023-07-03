#include "main.h"

/**
 * _strpbrk - finds length of string in a set of bytes
 * @s: string to search
 * @accept: target matches
 * Return: number of bytes consecutively matched
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
