#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line.
 *
 * Return: Nothing.
 */
void print_numbers(void)
{
	int i;
	char num[] = "0123456789\n";

	for (i = 0; num[i] != '\0'; i++)
	{
		_putchar(num[i]);
	}
}
