#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: double pointer to the head of the dlistint_t list.
 * @idx: index of the list where the new node should be added, starting at 0.
 * @n: integer value for the new node.
 *
 * Return: the address of the new node, or NULL if it failed or if it is
 * not possible to add the new node at index idx.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *current;
    unsigned int i;

    if (idx == 0) /* Insert at the head */
        return (add_dnodeint(h, n));

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;
    current = *h;

    for (i = 0; current && i < idx; i++)
    {
        if (i == idx - 1) /* Insert in the middle or at the end */
        {
            if (current->next == NULL) /* Special case for the last element */
            {
                free(new_node);
                return (add_dnodeint_end(h, n));
            }
            new_node->next = current->next;
            new_node->prev = current;
            current->next->prev = new_node;
            current->next = new_node;
            return (new_node);
        }
        current = current->next;
    }

    free(new_node); /* If idx is out of range */
    return (NULL);
}
