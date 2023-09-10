#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the last digit of a random number and describes it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Determine the last digit */
	last_digit = n % 10;

	/* Print the initial statement */
	printf("Last digit of %d is %d", n, last_digit);

	/* Check the value of the last digit and print the appropriate message */
	if (last_digit > 5)
		printf(" and is greater than 5\n");
	else if (last_digit == 0)
		printf(" and is 0\n");
	else
		printf(" and is less than 6 and not 0\n");

	return (0);
}
