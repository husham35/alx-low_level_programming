#include "main.h"
#include <stdio.h>

/**
 * main - main block
 * Description: print the number of arguments passed to it
 * @argc: argument count
 * @argv: pointer to array of arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
