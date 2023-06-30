#include "main.h"

/**
 * _strncat - concatenate n bytes to destination string
 * @dest: char type pointer, string to be appended to
 * @src: char type pointer, string to append
 * @n: int type,  append n number(s) of bychars)
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0') /*i is index of null terminator*/
		i++;

	while (src[j] != src[n]) /*append replacing null terminator*/
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
