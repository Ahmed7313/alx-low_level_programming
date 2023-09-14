#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9, excluding 2 and 4.
 *
 * Return: Nothing.
 */
void print_most_numbers(void)
{
	int i;
	char num[] = "01356789\n";

	for (i = 0; num[i] != '\0'; i++)
	{
		_putchar(num[i]);
	}
}
