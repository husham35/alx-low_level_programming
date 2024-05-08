#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 *		of integers using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located, else -1 if
 *		value is not present in array or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t idx, l, r;
	double pos;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;

	while (size)
	{
		pos = (double)(r - l) / (array[r] - array[l]) * (value - array[l]);
		idx = (size_t)(l + pos);
		printf("Value checked array[%d]", (int)idx);

		if (idx >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[idx]);
		}

		if (array[idx] == value)
			return ((int)idx);

		if (array[idx] < value)
			l = idx + 1;
		else
			r = idx - 1;

		if (l == r)
			break;
	}

	return (-1);
}
