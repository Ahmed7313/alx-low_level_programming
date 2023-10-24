#include "lists.h"
#include <stdlib.h>

/**
 * free_loop - Frees the nodes up to the loop point.
 * @h: Pointer to the start of the loop.
 * Return: The count of nodes freed.
 */
size_t free_loop(listint_t *h)
{
	size_t count = 0;
	listint_t *tmp, *prev = NULL;

	for (tmp = h; tmp != NULL; tmp = tmp->next)
	{
		if (tmp == prev)
		{
			return (count);
		}
		prev = tmp;
		free(prev);
		count++;
	}
	return (count);
}

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: Pointer to a pointer to the head of the list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	tmp = *h;
	count = free_loop(tmp);
	*h = NULL;
	return (count);
}
