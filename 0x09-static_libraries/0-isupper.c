#include "main.h"

/**
 * _isupper - checks if a character is uppercase or not.
 *@c: character to check
 * Return: 1 if uppercase and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
