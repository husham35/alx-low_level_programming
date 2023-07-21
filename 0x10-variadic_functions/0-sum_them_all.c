#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	int sum;

	if (n == 0)
		return (0);
	va_start(list, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
