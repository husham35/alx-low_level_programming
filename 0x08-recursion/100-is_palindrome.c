#include "main.h"

/**
 * compare_char - compare head and tail indices for match
 * @h: index starting from left hand side of string
 * @t: index starting from right hand side of string
 * Return: 1 if palindrome, 0 if not
 */

int compare_char(char *h, char *t)
{

	if (h >= t)
		return (1);
	if (*h == *t)
		return (compare_char(h + 1, t - 1));

	return (0);
}

/**
 * string_length - find length of string to access last char index
 * @s: string
 * Return: length
 */

int string_length(char *s)
{

	if (*s == '\0')
		return (0);
	s++;
	return (1 + (string_length(s)));
}

/**
 * is_palindrome - check if palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int length = string_length(s);

	return (compare_char(s, (s + length - 1)));
}
