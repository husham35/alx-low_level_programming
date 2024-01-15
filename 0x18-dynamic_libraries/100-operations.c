#include <stdio.h>

int add(a, b);
int sub(a, b);
int mul(a, b);
int div(a, b);
int mod(a, b);

/**
 * add - sums first number and second number.
 * @a: first number.
 * @b: second number.
 *
 * Return: integer result of summation.
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - subtracts second number from first number.
 * @a: first number.
 * @b: second number.
 *
 * Return: integer result of subtraction.
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiplies numbers a and b.
 * @a: first number.
 * @b: second number.
 *
 * Return: integer result of multiplacation.
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divides  number a by b.
 * @a: first number.
 * @b: becond number.
 *
 * Return: integer result of quotient.
 */

int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - returns the remainder when a is divided by b.
 * @a: first number.
 * @b: second number.
 *
 * Return: integer result of modulo.
 */

int mod(int a, int b)
{
	return (a % b);
}