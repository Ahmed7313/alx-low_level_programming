#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two numbers.
 * @n1: First string number.
 * @n2: Second string number.
 * @r: Buffer to store result.
 * @size_r: Size of the buffer.
 * Return: Pointer to result or 0 if buffer is too small.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, sum, carry;
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	carry = 0;
	i = len1 - 1;
	j = len2 - 1;
	k = 0;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		if (k >= (size_r - 1))
			return (0);

		r[k] = (sum % 10) + '0';
		carry = sum / 10;

		i--, j--, k++;
	}

	r[k] = '\0';
	return (reverse_string(r, k));
}

/**
 * reverse_string - Reverses a string in place.
 * @str: The string to reverse.
 * @length: The length of the string.
 * Return: A pointer to the reversed string.
 */
char *reverse_string(char *str, int length)
{
	int start = 0, end = length - 1;
	char temp;

	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;

		start++;
		end--;
	}

	return (str);
}
