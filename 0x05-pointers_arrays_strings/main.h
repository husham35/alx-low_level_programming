#ifndef _MAIN_H
#define _MAIN_H

/**
 * _isupper - checks if a character is upper case or not
 * @c: parameter to check
 * Return: 1 if uppercase or 0 if not
 */
int _isupper(int c);

/**
 * _isdigit - checks if a character is upper case or not
 * @c: parameter to check
 * Return: 1 if digit or 0 if not
 */
int _isdigit(int c);

/**
 * mul - multiplies the a and b, both of integer types
 * @a: first number, integer type
 * @b: second number, integer type
 * Return: the product of a and b
 */
int mul(int a, int b);

/**
 * print_numbers - prints numbers from 0 to 9
 * Return: void
 */
void print_numbers(void);

/**
 * print_most_numbers - prints numbers from 0 to 9 excluding 2 and 4
 * Return: void
 */
void print_most_numbers(void);

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 * Return: void
 */
void more_numbers(void);

/**
 * print_line - print straight line in terminal
 * @n: lenght of line to print
 * Return: void
 */
void print_line(int n);

/**
 * print_diagonal - print diagonal line in terminal
 * @n: lenght of line to print
 * Return: void
 */
void print_diagonal(int n);

/**
 * print_square - print square in terminal using #
 * @size: number of # to print
 * Return: void
 */
void print_square(int size);

/**
 * print_triangle - print triangle in terminal using #
 * @size: number of # to print
 * Return: void
 */
void print_triangle(int size);

/**
 * print_number - prints integer type numbers
 * @n: the integer to print
 * Return: void
 */
void print_number(int n);

/**
 * reset_to_98 - resets value of integer type number
 * @n: pointer integer
 * Return: void
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps integer type numbers
 * @a: pointer integer
 * @b: pointer integer
 * Return: void
 */
void swap_int(int *a, int *b);

/**
 * _strlen - returns the length of a string
 * @s: pointer char
 * Return: void
 */
int _strlen(char *s);

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: pointer char
 * Return: void
 */
void _puts(char *str);

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer char
 * Return: void
 */
void print_rev(char *s);

/**
 * rev_string - reverses a string
 * @s: pointer char
 * Return: void
 */
void rev_string(char *s);

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: pointer char
 * Return: void
 */
void puts2(char *str);

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer char
 * Return: void
 */
void puts_half(char *str);

/**
 * print_array - prints n elements of an array of integers, followed by a new line
 * @a: pointer integer
 * @n: integer
 * Return: void
 */
void print_array(int *a, int n);

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: pointer char
 * @src: pointer char
 * Return: dest
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - convert string to int type
 * @s: string to convert, a char pointer
 * Return: integer
 */
int _atoi(char *s);







/**
 * _putchar - writes the character c to std
 * @c: parameter to compare
 * Return: 1 or 0
 */
int _putchar(char c);
/**
 * print_alphabet - function to print alphabet
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - prints alphabet 10 times
 */
void print_alphabet_x10(void);
/**
 * _islower - prints if c is lower case
 * @c: character to use
 * Return: 1 or 0
 */
int _islower(int c);
/**
 * _isalpha - prints if character is alphabet
 * @c: character to use
 * Return: 1 or 0
 */
int _isalpha(int c);
/**
 * print_sign - prints a sign based on n
 * @n: integer to input
 * Return: 1 or 0  or -1
 */
int print_sign(int n);
/**
 * _abs - gives absolute value
 * @int: integer
 * Return: integer or abs value of int
 */
int _abs(int);
/**
 * print_last_last - prints digit last
 * @int: integer to input
 * Return: last digit of integer
 */
int print_last_digit(int);
/**
 * jack_bauer - jack bauer
 */
void jack_bauer(void);
/**
 * times_table - times this up
 */
void times_table(void);
/**
 * add - adds stuff up
 * @int: integers to add
 * Return: returns a sum
 */
int add(int, int);
/**
 * print_to_98 - prints to 98
 * @n: integer to start at
 */
void print_to_98(int n);
/**
 * print_times_table - whatever man
 *@n: integer to put in this table
 */
void print_times_table(int n);
#endif
