#include "main.h"
/**
 * _strcat - Concatenates tow strings.
 * @dest: The destination string.
 * @src: the source string
 *
 *Return: A pointer to the resaulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_index = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[src_index] != '\0')
	{
		dest[dest_len + src_ind] = src[src_index];
		src_index++;
	}

	dest[dest_len + src_index] = '\0';

	return (dest);
}
