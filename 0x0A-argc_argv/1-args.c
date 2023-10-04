#include "main.h"
#include <stdio.h>

/**
* main - Prints the number of arguments passed to it
* @argc: Number of arguments
* @argv: Array of arguments
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
    (void)argv; /* Silence compiler warning about unused variable */
    printf("%d\n", argc - 1);
    return (0);
}
