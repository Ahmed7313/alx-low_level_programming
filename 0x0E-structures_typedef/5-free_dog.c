#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees a dog_t struct.
 * @d: The dog_t struct to be freed.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
