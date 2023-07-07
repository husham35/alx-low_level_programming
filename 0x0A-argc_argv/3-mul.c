#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - main block
 * Description: prints product of argument numbers
 * @argc: argument counter
 * @argv: numbers to multiply
 * Return: 0 on success, 1 if two arguments not given
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
