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
