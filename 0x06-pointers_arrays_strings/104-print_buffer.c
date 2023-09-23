#include "main.h"

/**
 * print_buffer - Prints a buffer up to a size
 * @b: Buffer to print
 * @size: Size of the buffer to print
 *
 * Return: void
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
		printf("%08x: ", i);

		/* Print hex values */
		for (j = 0; j < 10; j += 2)
		{
			if (i + j < size)
				printf("%02x", b[i + j]);
			else
				printf("  ");

			if (i + j + 1 < size)
				printf("%02x ", b[i + j + 1]);
			else
				printf("   ");
		}

		/* Print char values */
		for (j = 0; j < 10 && i + j < size; j++)
		{
			if (b[i + j] >= ' ' && b[i + j] <= '~')
				_putchar(b[i + j]);
			else
				_putchar('.');
		}

		_putchar('\n');
	}
}
