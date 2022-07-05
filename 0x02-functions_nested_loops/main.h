#ifndef _main_h_
#define _main_h_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
 * print_alphabet - print lowercase alphabet
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - print lowercase alphabet ten times 
 */

void print_alphabet_x10(void);

/**
 * _islower - check for lowercase
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 if otherwise
 */

int _islower(int c);

/**
 * _isalpha - check for alphabet character
 * @c: character to check
 * Return: 1 if lower or uppercase, 0 if not alphabet character
 */
int _isalpha(int c);

/**
 * print_sign - print sign of number
 */
int print_sign(int n);

/**
 *
 */

int _abs(int);

/**
 *
 */

int print_last_digit(int);

/**
 *
 */

void jack_bauer(void);

/**
 *
 */

void times_table(void);

/**
 *
 */

int add(int a, int b);

/**
 *
 */

void print_to_98(int n);

/**
 *
 */


#endif
