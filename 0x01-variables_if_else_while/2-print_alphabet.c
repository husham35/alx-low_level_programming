#include <stdio.h>

/**
 * main - main block
 * Description: This program prints the
 * the alphabets from a-z.
 * Return: 0
 */

int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z'){
		putchar(alphabet);
		alphabet++;
	}
	printf("\n");

	return (0);
}
