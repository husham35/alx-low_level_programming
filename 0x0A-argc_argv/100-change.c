#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main block
 * Description: prints product of argument numbers
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: number of coins, 0 if negative number passed,
 * 1 if number more than one
 */

int main(int argc, char *argv[])
{
	int number, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argv[1][0] == '-')
	{
		printf("0\n");
		return (0);
	}

	number = atoi(argv[1]);

	coins += number / 25;
	number = number % 25;
	coins += number / 10;
	number = number % 10;
	coins += number / 5;
	number = number % 5;
	coins += number / 2;
	number = number % 2;
	coins += number / 1;

	printf("%d\n", coins);

	return (0);
}
