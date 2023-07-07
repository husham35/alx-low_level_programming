#include "main.h"

/**
 * _islower - returns 1 if lowercase else return 0
 * @c: alphabet to check
 * Return: 1 if lowercase else return 0
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
