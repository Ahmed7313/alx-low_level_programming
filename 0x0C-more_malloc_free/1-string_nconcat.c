/* 1-string_nconcat.c */

#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes from s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i;

	if (!s1)
		s1 = "";

	if (!s2)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2] && len2 < n)
		len2++;

	/* +1 for the null byte */
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!concat)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (i = 0; i < len2; i++)
		concat[len1 + i] = s2[i];

	concat[len1 + len2] = '\0';

	return (concat);
}
