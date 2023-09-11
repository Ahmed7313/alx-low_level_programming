#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = '0'; ch <= 'f'; ch++)
	{
		if ((ch <= '9') || (ch >= 'a'))
			putchar(ch);
	}

	putchar('\n');

	return (0);
}
