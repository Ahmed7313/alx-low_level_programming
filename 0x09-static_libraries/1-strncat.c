#include "main.h"

/**
 * _strncat - Concatenates two strings up to n bytes.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of bytes to append from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_index = 0;

	/* Calculate the length of dest string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Append up to n bytes of src string to dest string */
	while (src[src_index] != '\0' && src_index < n)
	{
		dest[dest_len + src_index] = src[src_index];
		src_index++;
	}

	/* If n is less than the length of src, add the terminating null byte */
	if (src_index < n)
	{
		dest[dest_len + src_index] = '\0';
	}

	return (dest);
}
