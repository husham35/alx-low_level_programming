#include <stdio.h>

/**
 * main - main block
 * Description: This program prints the
 * the alphabets from a-Z.
 * Return: 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar("\n");

	return (0);
}
