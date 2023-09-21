#include "main.h"

/**
 * is_separator - Check if a character is a separator.
 * @c: The character to check.
 *
 * Return: 1 if separator, otherwise 0.
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i;

	for (i = 0; separators[i]; i++)
	{
		if (c == separators[i])
			return (1);
	}
	return (0);
}
