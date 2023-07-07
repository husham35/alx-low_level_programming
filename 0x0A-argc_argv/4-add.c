#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main block
 * Description: prints sum of argument numbers
 * @argc: argument counter
 * @argv: numbers to add
 * Return: 0 on success, 1 if otherswise
 */

int main(int argc, char *argv[])
{
	int total, i;
	char *p;
	int number;

	total = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			number = strtol(argv[i], &p, 10);
			if (*p)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				total += number;
			}
		}
	}
	printf("%d\n", total);

	return (0);
}
