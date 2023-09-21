#include "main.h"

/**
 * _strncpy - Copies up to n bytes of the string pointed to by src
 *            to the buffer pointed to by dest.
 * @dest: The buffer to copy to.
 * @src: The string to copy from.
 * @n: The maximum number of bytes to copy.
 *
 * Return: A pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* If src has less than n bytes, fill the rest of dest with null bytes */
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
