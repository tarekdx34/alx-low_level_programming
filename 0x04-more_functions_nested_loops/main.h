#ifndef MAIN_H
#define MAIN_H
/**
 * _isupper - checks for  upper case
 * @c : digit to be checked
 * Return : 1 if true and 0 if false
 */
int _isupper(int c);
int _isdigit(int c);

/**
 * mul - multiplies two integers
 * @a: one integer
 * @b: second integer
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
 * @n: number of characters to draw
 */

void print_line(int n);

/**
 * print_diagonal - print character "\" n times
 * @n: number of characters to draw
 */

void print_diagonal(int n);

/**
 * print_square - print a square of given size
 * @size: size to draw
 */

void print_square(int size);

/**
 * print_triangle - print traingle with #'s with given size
 * @size: size of triangle to draw
 */

void print_triangle(int size);

/**
 * print_triangle - print traingle with #'s with given size
 * @size: size of triangle to draw
 */
void print_number(int n);
#endif
