#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Determines if a randomly generated number is positive, negative, or zero
 * Description: Uses the rand function to generate a random number, and then
 * prints out whether that number is positive, negative, or zero.
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
