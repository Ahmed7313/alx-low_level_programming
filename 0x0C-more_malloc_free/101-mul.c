#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _isdigit - check if string only contains digits.
 * @str: string to check.
 * Return: 1 if string only contains digits, 0 otherwise.
 */
int _isdigit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * main - multiplies two numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0 on success, 98 otherwise.
 */
int main(int argc, char *argv[])
{
	char *result;
	int len1, len2, len, i, j, carry, temp;

	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);
	len = len1 + len2;

	result = malloc(len + 1);
	if (!result)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 0; i < len; i++)
		result[i] = '0';
	result[len] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			temp = (argv[1][i] - '0') * (argv[2][j] - '0') + carry;
			temp += (result[i + j + 1] - '0');
			carry = temp / 10;
			result[i + j + 1] = (temp % 10) + '0';
		}
		result[i + j + 1] += carry + '0';
	}

	i = (result[0] == '0') ? 1 : 0;
	printf("%s\n", result + i);
	free(result);
	return (0);
}
