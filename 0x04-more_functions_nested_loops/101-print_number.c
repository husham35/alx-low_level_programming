#include "main.h"

/**
 * print_number - prints an integer, without using long, arrays or pointers
 * as well as no hard coded special values
 * @n: number to be printed
 */

void print_number(int n)
{
	unsigned int tens, digit, positive = n;
	double i = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			positive = n * -1;
			_putchar('-');
		}

		while (i <= positive)
		{
			i *= 10;
		}
		tens = i / 10;

		while (tens >= 1)
		{
			digit = positive / tens;
			_putchar(digit + '0');
			positive = (positive - (tens * digit));
			tens /= 10;
		}
	}
}
