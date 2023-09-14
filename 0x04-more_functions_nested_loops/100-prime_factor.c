#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned long num = 612852475143;
    unsigned long divisor = 2, largest;

    while (num != 0)
    {
        if (num % divisor != 0)
            divisor += 1;
        else
        {
            largest = num;
            num /= divisor;
            if (num == 1)
            {
                printf("%lu\n", largest);
                break;
            }
        }
    }
    return (0);
}
