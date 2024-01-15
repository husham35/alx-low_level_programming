#include "main.h"

/**
 * _puts - prints char
 * @str: string to be printed.
 *
 * Description: prints the char
 * of a string from a char pointer.
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int c = 0;

	while (*(str + c) != '\0')
	{
		_putchar(*(str + c));
		c++;
	}
	_putchar('\n');
}
