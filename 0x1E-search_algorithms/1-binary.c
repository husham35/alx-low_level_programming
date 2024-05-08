#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *					using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the index where value is located, else -1 if value
 *			is not present in array or if array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t idx, left, right, mid;

	if (array == NULL || size == 0)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (idx = left; idx < right; idx++)
			printf("%d, ", array[idx]);
		printf("%d\n", array[idx]);

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid); /* value found at the mid index of array */

		if (array[mid] < value)
			left = mid + 1; /* search the right half of array for the value */

		else
			right = mid - 1; /* search the left half of arrat for the value */
	}

	return (-1); /* Value not found in the array */
}
