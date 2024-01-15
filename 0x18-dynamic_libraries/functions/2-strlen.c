#include "main.h"

/**
 * _strlen - computes length of a string
 * @s: string to be counted
 *
 * Description: counts the length of a string
 *
 * Return: number of characters in the string.
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	return (count);
}
