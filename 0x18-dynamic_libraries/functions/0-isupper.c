#include "main.h"

/**
 * _isupper - checks if character is upper case
 * @c: character to be checked
 *
 * Description: it checks if a character is uppercase or not.
 *
 * Return: 0 on error, else 1 on success
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
