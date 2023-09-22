#include "main.h"

/**
 * print_number - prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int divisor = 1, n_copy = n, digit;

	if (n < 0)
	{
		_putchar('-');
	}

	/* Calculate the divisor */
	while (n_copy / 10 != 0 || n_copy / -10 != 0)
	{
		divisor *= 10;
		n_copy /= 10;
	}

	/* Print the number */
	while (divisor != 0)
	{
		digit = n / divisor;
		if (digit < 0)
		{
			digit *= -1;
		}
		_putchar('0' + digit);
		n %= divisor;
		divisor /= 10;
	}
}
