#include "../main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @c: character to check
 *
 * Description: checks is a character is an alphabet.
 *
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	int lower = (c >= 'a' && c <= 'z');
	int upper = (c >= 'A' && c <= 'Z');

	return (lower || upper);
}
