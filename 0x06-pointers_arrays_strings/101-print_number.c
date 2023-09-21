#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to print.
 */
void print_number(int n)
{
	int divisor = 1;
	int lead = n % 10;

	n = n / 10;

	if (lead < 0)
	{
		_putchar('-');
		lead *= -1;
		n *= -1;
	}

	while (n / divisor)
		divisor *= 10;

	if (divisor == 1)
		_putchar('0' + lead);

	while (divisor >= 1)
	{
		_putchar('0' + n / divisor);
		n = n - (n / divisor) * divisor;
		divisor /= 10;
	}

	if (divisor == 0)
		_putchar('0' + lead);
}
