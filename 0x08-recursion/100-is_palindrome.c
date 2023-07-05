#include "main.h"
#include <string.h>

/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if otherwise
 */

int is_palindrome(char *s)
{
	int length = strlen(s);
	int i, j;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		if (s[i] != s[j])
		{
			return (0); /* Not a palindrome */
		}
	}

	return (1); /* palindrome */
}
