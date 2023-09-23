#include "main.h"

/**
 * print_buffer - Prints a buffer in a special format
 * @b: The buffer
 * @size: The size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i < size; i += 10)
	{
		/* Print the index */
		print_hex(b, i, size);
		print_char(b, i, size);
	}

	if (size <= 0)
		_putchar('\n');
}

/**
 * print_hex - Prints the hexadecimal part of the buffer line
 * @b: The buffer
 * @i: The starting index
 * @size: The size of the buffer
 */
void print_hex(char *b, int i, int size)
{
	int j;

	printf("%08x: ", i);

	for (j = 0; j < 10; j++)
	{
		if (j % 2 == 0 && j != 0)
			_putchar(' ');

		if (i + j < size)
			printf("%02x", b[i + j]);
		else
			printf("  ");
	}

	_putchar(' ');
}

/**
 * print_char - Prints the character part of the buffer line
 * @b: The buffer
 * @i: The starting index
 * @size: The size of the buffer
 */
void print_char(char *b, int i, int size)
{
	int j;

	for (j = 0; j < 10 && i + j < size; j++)
	{
		if (b[i + j] >= 32 && b[i + j] <= 126)
			_putchar(b[i + j]);
		else
			_putchar('.');
	}

	_putchar('\n');
}
