#include "main.h"

/**
 * check_wildcmp - Compares two strings with the possibility of wildcard.
 * @s1: The first string.
 * @s2: The second string which may contain wildcards.
 *
 * Return: 1 if considered identical, otherwise 0.
 */
int check_wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (check_wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
		return (check_wildcmp(s1, s2 + 1) ||
			(*s1 != '\0' && check_wildcmp(s1 + 1, s2)));
	return (0);
}

/**
 * wildcmp - Compares two strings to determine if they are identical.
 * @s1: The first string.
 * @s2: The second string which may contain wildcards.
 *
 * Return: 1 if considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	return (check_wildcmp(s1, s2));
}
