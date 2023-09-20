#include "main.h"

/**
 * puts_half - Prints the second half of a string.
 * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int len = 0, n;

	while (str[len])
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2 + 1;

	for (; n < len; n++)
		_putchar(str[n]);

	_putchar('\n');
}
