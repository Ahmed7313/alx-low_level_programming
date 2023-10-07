#include "main.h"

/**
 * is_sqrt - Determines if a given value can serve as a natural square root.
 * @num: The number to find the square root for.
 * @root: The current value to check as a potential square root.
 *
 * Return: If the number has a natural square root, returns the root.
 *         Otherwise, returns -1.
 */
int is_sqrt(int num, int root)
{
	if (root * root == num)
		return (root);
	if (root * root > num)
		return (-1);
	return (is_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: If n has a natural square root, returns the root.
 *         Otherwise, returns -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (is_sqrt(n, 2));
}
