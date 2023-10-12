#include "3-calc.h"

/**
 * main - Entry point.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 (success).
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operator_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operator_func = get_op_func(argv[2]);

	if (!operator_func)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = operator_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
