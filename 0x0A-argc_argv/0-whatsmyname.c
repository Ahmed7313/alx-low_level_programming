#include "main.h"

/**
* main - Prints the name of the program
* @argc: The number of command-line arguments
* @argv: The command-line arguments
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
(void)argc; /* Silence compiler warning about unused variable */
printf("%s\n", argv[0]);
return (0);
}
