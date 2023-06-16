#include <stdio.h>

/**
 * main - main block
 * Description: This program prints
 * the 3 digits numbers from 012 to 789.
 * Return: 0
 */

int main(void)
{
	int one;
	int ten;
	int hundred;

	for (hundred = '0'; hundred <= '9'; hundred++) /* digits in hundreds */
	{
		for (ten = (hundred + 1); ten <= '9'; ten++) /* digits in tens */
		{
			for (one = (ten + 1); one <= '9'; one++) /* digits in ones */
			{
				putchar(hundred);
				putchar(ten);
				putchar(one);
				if (hundred != '7' || ten != '8' || one != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
