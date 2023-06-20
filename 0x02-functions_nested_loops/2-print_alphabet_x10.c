#include "main.h"

/**
 * print_alphabet - print a to z 10 times, followed by new line
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char a = 'a';
	

	while (i < 10)
	{
		while (a <= 'z')
        	{
			 _putchar(a);
			 a++;
		}
	_putchar('\n');
	i++;
	}
}
