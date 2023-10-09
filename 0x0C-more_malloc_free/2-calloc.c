/* 2-calloc.c */

#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and sets memory to zero.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory or NULL if it fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int total_size, i;

	/* Check for nmemb or size equal to 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	/* Allocate memory using malloc */
	mem = malloc(total_size);

	/* Check if malloc was successful */
	if (!mem)
		return (NULL);

	/* Set allocated memory to zero */
	for (i = 0; i < total_size; i++)
		mem[i] = 0;

	return ((void *)mem);
}
