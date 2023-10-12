#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself
 * @argc: The number of command-line arguments
 * @argv: The command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ptr = (char *)main;
	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", ptr[i]);
		if (i < bytes - 1)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
