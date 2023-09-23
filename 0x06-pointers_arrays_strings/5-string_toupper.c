#include "main.h"

/**
 * string_toupper - Changes all lowercase letters to uppercase.
 * @s: The string to change.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
