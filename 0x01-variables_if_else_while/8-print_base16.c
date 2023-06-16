#include <stdio.h>

/**
 * main - main block
 * Description: This program prints the
 * the single numbers from 0 to 9 and
 * alphabet from a to f.
 * Return: 0
 */

int main(void)
{
	int number = 0;
	char alphabet = 'a';

	while (number <= 9)
	{
		putchar('0' + number);
		number++;
	}

	while (alphabet <= 'f')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');

	return (0);
}
