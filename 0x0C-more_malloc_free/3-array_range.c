#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates array of integers
 * @min: start range
 * @max: end range
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *p;
	int i;
	int n = (max - min + 1);

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * n);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		p[i] = min++;

	return (p);
}
