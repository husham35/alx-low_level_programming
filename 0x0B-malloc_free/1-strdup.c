#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string using malloc
 * @str: string to be duplicated
 * Return: pointer to the new duplicated string
 */

char *_strdup(char *str)
{
	char *dup_str;
	int i, c;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	dup_str = malloc(i * sizeof(*dup_str) + 1);
	if (dup_str == NULL)
		return (NULL);

	for (c = 0; c < i; c++)
		dup_str[c] = str[c];
	dup_str[c] = '\0';

	return (dup_str);
}
