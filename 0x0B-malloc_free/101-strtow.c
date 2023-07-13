#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * word_counter - helps function
 * @word: wordcount
 * @length: length
 * @string: string to go through
 * @s: array you are assigning
 * Return: char value
 */
char **word_counter(int word, int length, char *string, char **s)
{
	int i, j, k;

	j = 0;
	for (i = 0; i < word; i++)
	{
		k = 0;
		for (; j < length; j++)
		{
			if (j != 0 && string[j] == ' ' && string[j - 1] != ' ')
			{
				j++;
				break;
			}

			if (string[0] != ' ' || string[j] != ' ')
			{
				s[i][k] = string[j];
				k++;
			}
		}
		s[i][k + 1] = '\0';
	}
	s[word + 1] = NULL;
	return (s);
}
/**
 * strtow - splits a string into words
 * @str: string to check
 * Return: a pointer to an array of strings (words),
 * NULL if str == NULL or str == "" or NULL if it fails
 */
char **strtow(char *str)
{
	int length, i, j, k, size, word;
	char **s;

	if (str == NULL)
		return (NULL);
	length = 0;
	word = 0;
	while (str[length] != '\0')
	{
		if (str[0] != ' ')
		word++;
		if (str[length] != ' ' && str[length - 1] == ' ' && length != 0)
			word++;
		length++;
	}
	s = (char **)malloc(sizeof(char *) * word + 1);
	if (s == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < word; i++)
	{
		size = 0;
		for (; j < length; j++)
		{
			if (str[0] != ' ' || str[j] != ' ')
				size++;
			if (str[j] == ' ' && size > 0)
				break;
		}
		printf("%d\n", size);
		s[i] = (char *)malloc(sizeof(char) * size + 1);
		if (s[i] == NULL)
		{
			for (k = i - 1; k >= 0; k--)
				free(s[k]);
			free(s);
		}
	}
	s = word_counter(word, length, str, s);
	return (s);
}
