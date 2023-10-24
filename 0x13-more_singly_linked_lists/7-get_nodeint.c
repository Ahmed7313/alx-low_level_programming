#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the linked list.
 * @index: The index of the node to be returned, starting at 0.
 *
 * Return: Pointer to the indexed node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;
	unsigned int count;

	current_node = head;
	count = 0;

	while (current_node)
	{
		if (count == index)
			return (current_node);
		count++;
		current_node = current_node->next;
	}
	return (NULL);
}
