#include <stdio.h>

void print_number(int a, int b);

/**
 * main - Prints first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int a1 = 0, a2 = 1;
    int b1 = 1, b2 = 2;
    int next_a, next_b, carry = 0;
    int i;

    printf("%d, %d", a2, b2);

    for (i = 2; i < 98; i++)
    {
        printf(", ");
        next_a = a1 + b1 + carry;
        next_b = a2 + b2;

        if (next_a > 999999999)
        {
            next_a %= 1000000000;
            carry = 1;
        }
        else
        {
            carry = 0;
        }

        print_number(next_a, next_b);

        a1 = b1;
        a2 = b2;
        b1 = next_a;
        b2 = next_b;
    }

    printf("\n");

    return (0);
}

/**
 * print_number - Prints a large number
 * @a: First part
 * @b: Second part
 */
void print_number(int a, int b)
{
    if (a != 0)
    {
        printf("%d", a);
    }
    if (a != 0 && b < 100000000)
    {
        printf("%09d", b);
    }
    else
    {
        printf("%d", b);
    }
}
