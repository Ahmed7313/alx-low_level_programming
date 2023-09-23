#include "main.h"

/**
 * print_buffer - prints the content of size bytes of the buffer pointed by b
 * @b: pointer to the buffer
 * @size: number of bytes to print
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		/* Print index */
		print_hex(i);
		_putchar(':');
		_putchar(' ');

		/* Print hex values */
		for (j = i; j < i + 10; j += 2)
		{
			if (j < size)
				print_hex((unsigned char)b[j]);
			else
				_putchar(' ');

			if (j + 1 < size)
				print_hex((unsigned char)b[j + 1]);
			else
				_putchar(' ');

			_putchar(' ');
		}

		/* Print characters or '.' */
		for (j = i; j < i + 10; j++)
		{
			if (j >= size)
				break;

			if (b[j] < ' ' || b[j] > '~')
				_putchar('.');
			else
				_putchar(b[j]);
		}
		_putchar('\n');
	}
}

/**
 * print_hex - prints an integer in hexadecimal (lowercase)
 * @n: integer
 */
void print_hex(int n)
{
	int i;
	char hex[9];

	for (i = 7; i >= 0; i--, n >>= 4)
		hex[i] = "0123456789abcdef"[n & 0xF];
	for (i = 0; i < 8; i++)
		_putchar(hex[i]);
}
