#include "main.h"

/**
 * print_number - Prints an integer
 * @n: Integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int tmp, count;

	tmp = n;
	count = 0;

	if (n == 0)
		_putchar('0');

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	while (tmp != 0)
	{
		tmp /= 10;
		count *= 10;
	}

	while (count >= 1)
	{
		_putchar((n / count % 10) + '0');
		count /= 10;
	}
}
