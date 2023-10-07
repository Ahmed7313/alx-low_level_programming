#include "main.h"

/**
 * is_divisible - checks if a number is divisible by another number.
 * @num: The number to check.
 * @div: The divisor.
 *
 * Return: If the number is divisible, returns 0.
 *         Otherwise, returns 1.
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);
	if (div * div > num)
		return (1);
	return (is_divisible(num, div + 1));
}

/**
 * is_prime_number - Determines if a number is prime.
 * @n: The number to check.
 *
 * Return: If the number is prime, returns 1.
 *         Otherwise, returns 0.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (is_divisible(n, 2));
}
