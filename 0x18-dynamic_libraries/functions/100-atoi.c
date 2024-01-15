#include "../main.h"
#include <stdio.h>

/**
 * _atoi - string to int
 * @s: string to be converted.
 *
 * Description: converts a string to an integer,
 * a mockup of atio()
 *
 * Return: int
 */

int _atoi(char *s)
{
	int sign = 1;
	int number = 0;

	if (*(s) == '\0')
		return (0);

	while (!(*s >= '0' && *s <= '9'))
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		number = (number * 10) + (*s - '0');
		s++;
	}

	return (sign * number);
}
