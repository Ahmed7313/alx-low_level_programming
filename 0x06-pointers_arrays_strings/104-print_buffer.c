#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints a buffer
 * @b: the buffer
 * @size: the size of the buffer
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j += 2)
		{
			if (i + j < size)
				printf("%02x", *(b + i + j));
			else
				printf("  ");
			if (i + j + 1 < size)
				printf("%02x ", *(b + i + j + 1));
			else
				printf("   ");
		}
		for (j = 0; j < 10 && i + j < size; j++)
		{
			if (isprint(*(b + i + j)))
				putchar(*(b + i + j));
			else
				putchar('.');
		}
		putchar('\n');
	}
	if (size <= 0)
		putchar('\n');
}
