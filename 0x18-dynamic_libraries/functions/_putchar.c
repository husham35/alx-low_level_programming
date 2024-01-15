#include "../main.h"
#include <unistd.h>

/**
 * _putchar - the character to stdout
 * @c: character to be printedt
 *
 * Return: On success 1, else -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
