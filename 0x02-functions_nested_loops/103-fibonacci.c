#include <stdio.h>

/**
 * main - main function
 * Description: prints the first Fibonacci numbers
 * with value less that 4000000
 * starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	int counter = 0;
	long int a = 1;
	long int b = a;
	long int c = a + b;

	while (c < 4000000)
	{
		if (c % 2 == 0)
		{
			counter += c;
		}
		a = b;
		b = c;
		c = a + b;
	}
	printf("%d\n", counter);
	return (0);
}
