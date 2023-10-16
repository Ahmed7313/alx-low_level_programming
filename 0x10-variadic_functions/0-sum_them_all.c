#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: The number of arguments
 * @...: The arguments to sum
 *
 * Return: The sum of the arguments. 0 if n == 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}