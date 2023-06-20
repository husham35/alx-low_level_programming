#include "main.h"

/**
 * _isalpha - returns 1 if alphabet else return 0
 * @c: alphabet to check
 * Return: 1 if alphabet else return 0
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
