#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t list.
 * @head: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow = head, *fast = head, *tmp;

	while (slow && fast && fast->next)
	{
		if (slow == fast && count > 0)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			return (count);
		}
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
		fast = fast->next->next;

		if (count <= 1)
			continue;

		for (tmp = head; tmp != slow; tmp = tmp->next)
		{
			if (tmp == fast)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (count);
			}
		}
	}

	for (; slow; count++, slow = slow->next)
		printf("[%p] %d\n", (void *)slow, slow->n);

	return (count);
}
