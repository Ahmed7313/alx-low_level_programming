/* 3-array_range.c */

#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The starting value of the range.
 * @max: The ending value of the range.
 *
 * Return: Pointer to the newly created array, or NULL if failed.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, range;

	/* Check if min > max */
	if (min > max)
		return (NULL);

	range = max - min + 1;  /* +1 to include both min and max */

	/* Allocate memory for the array */
	arr = malloc(sizeof(int) * range);
	if (!arr)
		return (NULL);

	/* Initialize the array with values from min to max */
	for (i = 0; i < range; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}
