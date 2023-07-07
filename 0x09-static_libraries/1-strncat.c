#include "main.h"

/**
 * _strncat - concatenate n number of characters to destination string dest
 * @dest: string to be appended to
 * @src: string to append
 * @n: number of characters to be appended to dest from src
 * Return: concatenated string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
