#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array
 *			of integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, else -1 if
 *		value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	int idx, jump, right, left;

	if (array == NULL || size == 0)
		return (-1);

	right = (int)sqrt((double)size);
	left = 0;
	jump = idx = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
		left++;
		jump = idx;
		idx = left * right;
	} while (idx < (int)size && array[idx] < value);

	printf("Value found between indexes [%d] and [%d]\n", jump, idx);

	for (; jump <= idx && jump < (int)size; jump++)
	{
		printf("Value checked array[%d] = [%d]\n", jump, array[jump]);
		if (array[jump] == value)
			return (jump);
	}

	return (-1);
}
