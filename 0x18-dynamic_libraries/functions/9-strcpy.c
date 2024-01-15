#include "../main.h"

/**
 * _strcpy - copies string
 * @dest: Address where string will be copied to
 * @src: Original string to be copied
 *
 * Description: copies a string from one char pointer
 * to another char pointer
 *
 * Return: ptr to the destination address.
 */

char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = src[c];

	return (dest);
}
