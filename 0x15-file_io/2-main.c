#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point and test function for append_text_to_file.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
    int res;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: %s filename text\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    res = append_text_to_file(argv[1], argv[2]);
    printf("-> %i)\n", res);

    return (EXIT_SUCCESS);
}
