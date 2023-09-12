#include <stdio.h>

/* Function prototype */
int main(void);

/**
 * main - Prints the first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int first = 1, second = 2, next;
	int i;

	printf("%lu, %lu", first, second);

	for (i = 2; i < 50; i++)
	{
		next = first + second;
		printf(", %lu", next);
		first = second;
		second = next;
	}
	printf("\n");

	return (0);
}
