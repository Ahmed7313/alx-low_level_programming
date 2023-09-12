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
	int i = 0;  /* Missing blank line corrected */
	char word[] = "_putchar\n";  /* This line and the next are indented with tabs now */

	while (word[i] != '\0')
	{
		_putchar(word[i]);
		i++;
	}

	return (0);  /* Added missing semicolon */
}
