#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - Prints the contents of a struct dog
 * @d: Pointer to the struct dog to print
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
