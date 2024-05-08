#include "search_algos.h"

/**
 * _binary_search - searches for a value in a sorted array of integers
 *					using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @left: the starting index of the  sub array to search
 * @right: the ending index of the sub array to search
 * @value: the value to search for
 * Return: the index where the value is located, else -1
 *		if the value is not present or the array is NULL
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (idx = left; idx < right; idx++)
			printf("%d, ", array[idx]);
		printf("%d\n", array[idx]);

		idx = left + (right - left) / 2;
		if (array[idx] == value)
			return (idx);
		if (array[idx] > value)
			right = idx - 1;
		else
			left = idx + 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted
 *		array of integers using the Exponential search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located, else -1 if
 *		value is not present in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t idx = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (idx = 1; idx < size && array[idx] <= value; idx = idx * 2)
			printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
	}

	right = idx < size ? idx : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", idx / 2, right);
	return (_binary_search(array, idx / 2, right, value));
}
