/* 100-realloc.c */

#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Reallocates a memory block.
 * @ptr: Pointer to the memory previously allocated.
 * @old_size: Size of the allocated space for ptr.
 * @new_size: New size of the memory block.
 *
 * Return: Pointer to the newly allocated memory, or NULL if failed.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int i, limit;

	/* Handle edge cases */
	if (new_size == old_size)
		return (ptr);
	if (!ptr)
		return (malloc(new_size));
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	/* Allocate new memory block */
	new_ptr = malloc(new_size);
	if (!new_ptr)
	{
		free(ptr);
		return (NULL);
	}

	/* Copy old memory block to the new one */
	limit = (old_size < new_size) ? old_size : new_size;
	for (i = 0; i < limit; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];

	free(ptr);

	return (new_ptr);
}
