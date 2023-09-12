#include "main.h"

/**
 * main - Prints "_putchar" followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i = 0;  // Initialize to 0
    char word[] = "_putchar\n";

    // Loop through each character in the string until we hit the null terminator
    while (word[i] != '\0')
    {
        _putchar(word[i]);
        i++;
    }

    return (0);
}
