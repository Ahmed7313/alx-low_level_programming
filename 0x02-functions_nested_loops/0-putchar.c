#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints "_putchar" followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i = 0;
    char word[] = "_putchar\n";

    while (word[i] != '\0')
    {
        _putchar(word[i]);
        i++;
    }

    return (0);
}
