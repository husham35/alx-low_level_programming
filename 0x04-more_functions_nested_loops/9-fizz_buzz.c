#include <stdio.h>

/**
 * main - main block, prints fizz buzz from numbers 1 to 100
 * Description: Multiples of 3, prints Fizz. Multiples of 5, print Buzz.
 * Multiples of both 3 and 5 prints FizzBuzz.
 * Return: Always 0
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");

	return (0);
}
