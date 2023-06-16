#include <stdio.h>

/**
 * main - main block
 * Description: This program prints the
 * the alphabets from a-Z excluding e and q.
 * Return: 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
		alphabet++;
	}

	putchar('\n');

	return (0);
}
