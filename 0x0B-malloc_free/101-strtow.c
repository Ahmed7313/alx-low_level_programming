#include "main.h"
#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string.
 * @str: The string.
 *
 * Return: The number of words in the string.
 */
int word_count(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str == ' ')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string.
 *
 * Return: If str == NULL, str == "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 *         Each element of this array should contain a single word, null-terminated.
 *         The last element of the returned array should be NULL.
 */
char **strtow(char *str)
{
	char **words;
	int wc, i = 0, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);

	wc = word_count(str);

	if (wc == 0)
		return (NULL);

	words = malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (j = 0; j < wc; j++)
	{
		while (str[i] == ' ')
			i++;

		k = i;
		while (str[i] && str[i] != ' ')
			i++;

		words[j] = malloc((i - k + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			while (j >= 0)
				free(words[--j]);
			free(words);
			return (NULL);
		}

		for (i = k, k = 0; str[i] && str[i] != ' '; i++)
			words[j][k++] = str[i];
		words[j][k] = '\0';
	}
	words[wc] = NULL;

	return (words);
}
