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
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: pointer char
 * @src: pointer char
 * Return: dest
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - appends the src string to the dest string,
 * by specifying the number of characters n to be appended to
 * dest from src
 * @dest: pointer char
 * @src: pointer char
 * @n: int type
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies a string and behaves similar to strncpy
 * @dest: pointer char
 * @src: pointer char
 * @n: int type
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares two strings
 * @s1: pointer char
 * @s2: pointer char
 * Return: int type
 */
int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverses the coneten of an array of integers
 * @a: pointer int type
 * @n: int type
 * Return: int type
 */
void reverse_array(int *a, int n);

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @*: char pointer type
 * Return: pointer
 */
char *string_toupper(char *);

/**
 * cap_string - capitalizes all words of a string
 * @*: char pointer type
 * Return: pointer
 */
char *cap_string(char *);

/**
 * leet - encodes a string into 1337
 * @*: char pointer type
 * Return: pointer
 */
char *leet(char *);

/**
 * _memset - fills the first n bytes of the memory area pointed
 * to by a s with the constant byte b
 * @s: char pointer type
 * @b: char pointr type
 * @n: unsigned integer type
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: char pointer type
 * @src: char pointr type
 * @n: unsigned integer type
 * Return: pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates a character in a string
 * @s: char pointr type
 * @c: char pointer type
 * Return: pointer c
 */
char *_strchr(char *s, char c);

/**
 * _strspn - gets the length of a prefix substring
 * @s: char pointr type
 * @accept: char pointer type
 * Return: int, the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: char pointr type
 * @accept: char pointer type
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locates a substring
 * @haystack: char pointr type
 * @needle: char pointer type
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - prints the chessboard
 * @a: char pointr type
 * Return: void
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: char pointr type
 * @size: int type
 * Return: void
 */
void print_diagsums(int *a, int size);

/**
 * set_string - sets the value of a pointer to a char
 * @s: char pointr type
 * @to: char pointer type
 * Return: void
 */
void set_string(char **s, char *to);

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: char pointr type
 * Return: void
 */
void _puts_recursion(char *s);

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: char pointr type
 * Return: void
 */
void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - returns length of a string using recursion
 * @s: char pointr type
 * Return: int type, length of string
 */
int _strlen_recursion(char *s);

/**
 * factorial - returns the factorial of a given number
 * @n: int type
 * Return: int type, factorial
 */
int factorial(int n);

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: int type
 * @y: int type
 * Return: int type, -1 if y<0
 */
int _pow_recursion(int x, int y);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int type
 * Return: int type, square root of a number,
 * -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n);

/**
 * is_prime_number - checks if number n, is a prime number
 * @n: int type
 * Return: int type, 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n);

/**
 * is_palindrome - if a string is a palindrome or not
 * @s: char pointr type
 * Return: int type, 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s);

/**
 * wildcmp - if a string is a palindrome or not
 * @s1: char pointer type
 * @s2: char pointer type 
 * Return: int type, 1 if the strings can be considered identical, else 0
 */
int wildcmp(char *s1, char *s2);

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: int type
 * @s2: char type 
 * Return: NULL if size = 0, or a pointer to the array,
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: char type pointer 
 * Return: NULL if str = NULL, a pointer to the duplicated string,
 * it returns NULL if insufficient memory was available
 */
char *_strdup(char *str);

/**
 * str_concat - concatenates two strings
 * @s1: char pointer type
 * @s2: char pointer type
 * Return: concatenation of s1 and s2, else NULL
 */
char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: int type
 * @height: int type
 * Return: NULL If width or height is 0 or negative, else
 * a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height);

/**
 * free_grid - frees a 2 dimensional grid previously created
 * by your alloc_grid function
 * @gird: int type
 * @height: int type
 */
void free_grid(int **grid, int height);

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: int type
 * @av: char type pointer pointer
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av);

/**
 * strtow - splits a string into words
 * @av: char type pointer
 * Return: a pointer to an array of strings (words),
 * NULL if str == NULL or str == ""
 */
char **strtow(char *str);





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
