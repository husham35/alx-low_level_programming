#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times underscore is printed
 * Description:  use _putchar to print
 */
void print_line(int n)
{
	int c = 0;

	while (c < n)
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}
