#include <stdio.h>

/**
 * main - main block
 * Description: This program prints the
 * the alphabets from z-a.
 * Return: 0
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	printf("\n");

	return (0);
}
