/**
 * _isdigit - checks if a character is a number from 0-9 or not.
 *@c: character to check
 * Return: 1 if a number and 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
