#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *s)
{
	int i, j;
	char letters[] = "aeotlAEOTL";
	char leet_ch[] = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = leet_ch[j];
				break;
			}
		}
	}
	return (s);
}
