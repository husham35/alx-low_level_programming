#include "main.h"

/**
 * _strncpy - copies n characters n from src into to dest string,
 * @dest: destination to copy n characters to, pointr char type
 * @src: source to copy n characters from, pointer char type
 * @n: n number of characters to be copied, int type
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
