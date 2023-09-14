#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of underscores to print.
 *
 * Return: Nothing.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
