#include <stdio.h>

/**
 * main - main block
 * Description: This program prints the
 * the single numbers from 1 to 9.
 * Return: 0
 */

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar('0' +  number);
		if (number != 9)
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}

	putchar('\n');

	return (0);
}
