#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: The argument values.
 *
 * Return: Pointer to the new string, or NULL if failure or if ac == 0 or av == NULL.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k = 0, total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate total length for all the arguments */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			;
		total_len += j + 1; /* add 1 for the newline */
	}

	str = malloc((total_len + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	/* Populate the string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
