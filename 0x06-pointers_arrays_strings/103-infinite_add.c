#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: the first number
 * @n2: the second number
 * @r: the buffer to store the result
 * @size_r: the buffer size
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n, carry;

	i = strlen(n1) - 1;
	j = strlen(n2) - 1;
	k = 0;
	carry = 0;

	if (size_r <= i || size_r <= j || size_r < 2)
		return (0);

	while (i >= 0 || j >= 0)
	{
		m = (i >= 0) ? n1[i] - '0' : 0;
		n = (j >= 0) ? n2[j] - '0' : 0;
		r[k] = (m + n + carry) % 10 + '0';
		carry = (m + n + carry) / 10;
		i--;
		j--;
		k++;
	}

	if (carry)
		r[k++] = carry + '0';

	if (k >= size_r)
		return (0);

	r[k] = '\0';

	for (l = 0, k--; l < k; l++, k--)
	{
		carry = r[k];
		r[k] = r[l];
		r[l] = carry;
	}

	return (r);
}
