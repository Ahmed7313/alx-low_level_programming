#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		if (n <= -10)
			print_number(-n / 10);
		_putchar(-n % 10 + '0');
	}
	else
	{
		if (n >= 10)
			print_number(n / 10);
		_putchar(n % 10 + '0');
	}
}
