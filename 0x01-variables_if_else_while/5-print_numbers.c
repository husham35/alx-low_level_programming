#include <stdio.h>

/**
 * main - main block
 * Description: This program prints the
 * the single numbers from 1 to 10.
 * Return: 0
 */

int main(void)
{
	int number = 0;

	while (number <= 10)
	{
		printf("%d", number);
		number++;
	}

	putchar('\n');

	return (0);
}
