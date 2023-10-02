#include "main.h"

/**
 * _strstr - Locates a substring.
 * @haystack: The string to be scanned.
 * @needle: The string to be searched within haystack.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		if (needle[j] == '\0')
			return (haystack + i);
	}

	return ((void *)0);
}
