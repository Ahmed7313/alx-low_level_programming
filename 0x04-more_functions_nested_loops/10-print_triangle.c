#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (int i = 1; i <= size; i++)
	{
		/* Print spaces */
		for (int space = 1; space <= size - i; space++)
		{
			_putchar(' ');
		}
		/* Print hashes */
		for (int j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
