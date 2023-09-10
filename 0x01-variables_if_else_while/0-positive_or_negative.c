#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Determines if a number is positive, negative, or zero
 * Description: Randomly assigns a number to the variable n each time
 * it is executed, and prints whether the number stored in the variable n
 * is positive, negative, or zero.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Check the value of n and print the appropriate message */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}

