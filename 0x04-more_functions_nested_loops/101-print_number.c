#include "main.h"

/**
 * print_recursive - Helper function to print each digit.
 * @n: The integer.
 */
void print_recursive(int n);

/**
 * print_number - Prints an integer character by character.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
		_putchar('0');
	else
		print_recursive(n);
}

/**
 * print_recursive - Helper function to print each digit.
 * @n: The integer.
 */
void print_recursive(int n)
{
	if (n == 0)
		return;
	print_recursive(n / 10);
	_putchar((n % 10) + '0');
}
