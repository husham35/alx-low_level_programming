#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination of concatenated string.
 * @src: string to be concatenated.
 * @n: number of characters from src to be joined.
 *
 * Description: joins two strings.
 *
 * Return: ptr to destination string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int t = 0;
	int u = 0;

	while (*(dest + t) != '\0')
		t++;

	while (u < n && *(src + u) != '\0')
	{
		*(dest + t) = *(src + u);
		t++;
		u++;
	}

	*(dest + t) = '\0';

	return (dest);
}
