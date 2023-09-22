#include "main.h"

/**
 * print_number - prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int divisor = 1, digit;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	/* Calculate the divisor */
	while ((n / divisor) / 10 > 0)
	{
		divisor *= 10;
	}

	/* Print the number */
	while (divisor != 0)
	{
		digit = n / divisor;
		_putchar('0' + digit);
		n -= (digit * divisor);
		divisor /= 10;
	}
}
