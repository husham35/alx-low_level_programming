#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenatea all arguments of the program
 * with newline at the end
 * @ac: argument count
 * @av: pointer pointer to array of strings passed to main
 * Return: null if it fails, else return pointer to new string
 */

char *argstostr(int ac, char **av)
{
	char *arr, *rtrn_ptr;
	int i, j, total;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, total = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, total++)
			;
		total++;
	}
	total++;

	arr = malloc(total * sizeof(char));
	if (arr == NULL)
		return (NULL);

	rtrn_ptr = arr;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*arr = av[i][j];
			arr++;
		}
		*arr = '\n';
		arr++;
	}

	return (rtrn_ptr);
}
