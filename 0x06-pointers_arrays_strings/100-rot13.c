#include "main.h"

/**
 * rot13 - Encodes a string using ROT13.
 * @s: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
	int i = 0, j;
	char original[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotated[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (j = 0; original[j]; j++)
		{
			if (s[i] == original[j])
			{
				s[i] = rotated[j];
				break;
			}
		}
		i++;
	}
	return (s);
}
