#include "../main.h"

/**
 * _strcmp - compares strings
 * @s1: first string to be compared.
 * @s2: second string to be compated.
 *
 * Description: compares two strings.
 *
 * Return: negative, positive or zero integer.
 */

int _strcmp(char *s1, char *s2)
{
	int u = 0;
	int diff;

	while (*(s1 + u) != '\0')
	{
		diff = *(s1 + u) - *(s2 + u);
		if (diff > 0 || diff < 0)
			return (diff);
		u++;
	}

	diff = *(s1 + u) - *(s2 + u);
	if (diff > 0 || diff < 0)
		return (diff);

	return (0);
}
