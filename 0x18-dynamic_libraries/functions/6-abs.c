#include "../main.h"

/**
 * _abs - priints absolute values of a number
 * @n: The number to compute
 *
 * Description: prints the absolute value of a number.
 *
 * Return: absolute value
 */

int _abs(int n)
{
	int abs;

	if (n > 0 || n == 0)
	{
		return (n);
	}
	else
	{
		abs = n * -1;
		return (abs);
	}
}
