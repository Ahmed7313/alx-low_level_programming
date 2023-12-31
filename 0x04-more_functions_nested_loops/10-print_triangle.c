#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: The size of the triangle.
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		/* Print spaces */
		for (space = 1; space <= size - i; space++)
		{
			_putchar(' ');
		}

		/* Print hashes */
		for (hash = 1; hash <= i; hash++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
