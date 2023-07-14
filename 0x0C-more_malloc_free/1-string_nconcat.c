#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - finds length of string
 * @str: string
 * Return: length of string
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenates 2 strings, only n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: bytes to include of s2
 * Return: NULL if it fails, else pointer to malloc memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int str_len, i, c;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str_len = (unsigned int)_strlen(s1);
	p = malloc((str_len + n + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0, c = 0; i < (str_len + n); i++)
	{
		if (i < str_len)
			p[i] = s1[i];
		else
			p[i] = s2[c++];
	}
	p[i] = '\0';

	return (p);
}
