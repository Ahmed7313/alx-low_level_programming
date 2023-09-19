#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to reverse.
 */
void rev_string(char *s)
{
	int len = 0;
	int i;
	int j;
	char temp;

	/* Calculate the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Reverse the string */
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
