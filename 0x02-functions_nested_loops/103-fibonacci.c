#include <stdio.h>

/* Function prototype */
int main(void);

/**
 * main - Finds and prints the sum of the even-valued terms
 *        in the Fibonacci sequence whose values do not exceed 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int first = 1, second = 2, next, sum = 0;

	while (second <= 4000000)
	{
		if (second % 2 == 0)
		{
			sum += second;
		}

		next = first + second;
		first = second;
		second = next;
	}

	printf("%lu\n", sum);

	return (0);
}
