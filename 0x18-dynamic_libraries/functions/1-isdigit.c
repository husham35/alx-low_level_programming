#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: number to be checked
 * Description: checks if a number is a digit.
 *
 * Return: 1 on success, else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
