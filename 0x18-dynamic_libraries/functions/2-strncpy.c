#include "../main.h"

/**
 * _strncpy - copies a string to another location in memory
 * @dest: destination of copied string.
 * @src: string to be copied.
 * @n: number of characters from src to be copied.
 *
 * Description: copies a string to another destination.
 *
 * Return: ptr to destination.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int u = 0;

	while (u < n && *(src + u) != '\0')
	{
		*(dest + u) = *(src + u);
		u++;
	}

	while (u < n)
	{
		*(dest + u) = '\0';
		u++;
	}

	return (dest);
}
