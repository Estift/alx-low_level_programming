#ifndef main_h_
#define main_h_

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

int _putchar(char c);

/**
 * _isupper - checks for upper character
 * @c: character checked
 * Return: 1 if true, 0 if false
 */

int _isupper(int c);

/**
 * _isdigit - checks for digit 0 through 9
 * @c: digit to be checked
 * Return: 1 if true, 0 if false
 */

int _isdigit(int c);

/**
 * mul - multiples two integers
 * @a: one integer 
 * @b: two integer
 * Return: product of a and b
 */

int mul(int a, int b);

/**
 * print_numbers - print 0 to 9
 */

void print_numbers(void);

/**
 * print_most_numbers - print 0 to 9, skip 2 and 4
 */

void print_most_numbers(void);

/**
 * more_numbers - print 0 to 14 ten times
 */

void more_numbers(void);

/**
 * print_line(int n) - print the character "_" n times to draw a line
 * @n: number of character to draw
 */

void print_line(int n);

/**
 * print_diagonal - print character '\' n times
 * @n: number of character to draw
 */

void print_diagonal(int n);

/**
 * print_square - print a square of given size
 * @size: size to draw
 */
void print_square(int size);

/**
 * print_triangle - print a triangle with #'s of given size
 * @size: size to draw
 */

void print_triangle(int size);

/**
 * print_number - print an integer, without using long, arrays or pointers
 * @n: number to be printed
 */

void print_number(int n);
#endif
