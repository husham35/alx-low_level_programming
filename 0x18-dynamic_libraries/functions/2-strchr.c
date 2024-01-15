#include "main.h"

/**
 * _strchr - finds a specified character in a string
 * @s: string to search.
 * @c: character to find.
 *
 * Description: locates a character in a string.
 *
 * Return: ptr to first occurrence, or null.
 */

char *_strchr(char *s, char c)
{
	int u;

	for (u = 0; s[u] != '\0'; u++)
	{
		if (s[u] == c)
			return (&s[u]);
	}

	if (s[u] == c)
		return (&s[u]);

	return (NULL);
}
