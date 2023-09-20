#include "main.h"

/**
 * _strcpy - Copies the string from src to the buffer pointed by dest.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; /* Add the terminating null byte */

	return (dest);
}
