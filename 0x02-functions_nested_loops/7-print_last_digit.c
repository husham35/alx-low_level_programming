#include "main.h"

/**
 * print_last_digit - extract the last digit of a given number
 * @n: number to extract the last digit
 * Return: the last digit of @n
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		ld = -1 * (n % 10);
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		ld = n % 10;
		_putchar(ld + '0');
		return (ld);
	}
}
