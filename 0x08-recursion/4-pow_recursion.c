#include "main.h"

/**
 * _pow_recursion - x raised to the power y
 * @x: int, number
 * @y: int, power to raise to
 * Return: power of number, -1 if power less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (x == 0)
		return (0);

	if (x == 1 || y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
