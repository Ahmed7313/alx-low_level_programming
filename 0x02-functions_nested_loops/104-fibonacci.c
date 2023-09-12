#include <stdio.h>

/**
 * main - Prints first 98 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int carry = 0, i, j;
	int a[100] = {0}, b[100] = {0}, next[100] = {0};

	a[99] = 1;
	b[99] = 2;

	printf("1, 2");

	for (i = 0; i < 96; i++)
	{
		carry = 0;
		printf(", ");

		for (j = 99; j >= 0; j--)
		{
			next[j] = a[j] + b[j] + carry;
			carry = next[j] / 10;
			next[j] %= 10;
		}

		for (j = 0; j < 100; j++)
		{
			a[j] = b[j];
			b[j] = next[j];
		}

		j = 0;
		while (next[j] == 0)
			j++;

		for (; j < 100; j++)
			printf("%d", next[j]);
	}
	printf("\n");
	return (0);
}
