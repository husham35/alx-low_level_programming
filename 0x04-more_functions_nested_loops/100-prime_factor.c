#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description: find and print the largest prime factor of 612852475143
 * Return: Always 0
 */
int main(void)
{
	int i;
	unsigned long num = 612852475143;

	for (i = (int) sqrt(num); i > 2; i++)
	{
		if (num % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	return (0);
}
