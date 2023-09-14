#include <stdio.h>

/**
 * main - Finds and prints the largest prime factor of 612852475143
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int divisor = 2;
	unsigned long int largest;

	while (n != 1)
	{
		if ((n % divisor) == 0)
		{
			n = n / divisor;
			largest = divisor;
		}
		else
		{
			divisor++;
		}
	}
	printf("%lu\n", largest);
	return (0);
}
