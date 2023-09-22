#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Generate random valid passwords for 101-crackme.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int l = 0;
	char c;

	/* Initialize random seed */
	srand(time(NULL));

	/* Keep generating characters until we reach the limit */
	while (l < 2645)
	{
		/* Generate a random printable character */
		c = (rand() % 94) + 33;
		putchar(c);
		l += c;
	}

	/* Generate the last character to reach 2772 */
	putchar(2772 - l);

	return (0);
}
