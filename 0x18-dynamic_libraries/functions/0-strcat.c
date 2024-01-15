#include "../main.h"

/**
 * _strcat - concatenates two strings
 * @dest: Destination of concatenated string.
 * @src: String to be concatenated.
 *
 * Description: joins two strings.
 *
 * Return: concatenated string.
 */

char *_strcat(char *dest, char *src)
{
	int t = 0;
	int u = 0;

	while (*(dest + t) != '\0')
		t++;

	while (*(src + u) != '\0')
	{
		*(dest + t) = *(src + u);
		t++;
		u++;
	}

	*(dest + t) = '\0';

	return (dest);
}
