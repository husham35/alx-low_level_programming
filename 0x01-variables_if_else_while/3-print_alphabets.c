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
	char ALPHABET = 'A';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	while (ALPHABET <= 'Z')
        {
                putchar(ALPHABET);
                ALPHABET++;
        }
	putchar('\n');

	return (0);
}
