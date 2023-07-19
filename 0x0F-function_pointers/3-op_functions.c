#include <stdio.h>
#include <stdlib.h>

/**
 * op_sub - subtraction operator
 * @a: int
 * @b: int
 * Return: difference of 2 numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_add - addition operator
 * @a: int
 * @b: int
 * Return: sum of 2 numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_mul - product of 2 numbers
 * @a: int
 * @b: int
 * Return: product of the numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - get remainder of the division of 2 numbers
 * @a: int
 * @b: int
 * Return: remainder of division of the numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

/**
 * op_div - division of 2 numbers
 * @a: int
 * @b: int
 * Return: result of the division of the numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
