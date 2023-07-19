#include <stddef.h>

/**
 * array_iterator - execute function on an array via a function pointer
 * @array: array
 * @size: array size
 * @action: pointer to function that is to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(*(array + i));
}
