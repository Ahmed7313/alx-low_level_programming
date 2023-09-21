#include "main.h"
/**
 * _strncpy - Copies the content of a string to another
 * @dest: the string that the fun will copy
 * @src: the string that will recieve the copied value
 * @n: the number of bytes that will be copied from @dest
 *
 * Return: the copied String value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dest_len = 0;
	int src_len = 0;

	while (dest[dest_len] != '\0' && src_len < n)
	{
		src[src_len] = dest[dest_len];
		src_len++;
	}

	return (src);
}
