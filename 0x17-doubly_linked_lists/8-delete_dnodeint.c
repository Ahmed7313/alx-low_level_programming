#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t linked list.
 * @head: double pointer to the head of the dlistint_t list.
 * @index: index of the node that should be deleted, starting from 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current = *head;
    unsigned int i = 0;

    if (!head || !(*head))
        return (-1);

    if (index == 0)
    {
        *head = current->next;
        if (current->next)
            current->next->prev = NULL;
        free(current);
        return (1);
    }

    while (current && i < index)
    {
        current = current->next;
        i++;
    }

    if (!current)
        return (-1);

    if (current->next)
        current->next->prev = current->prev;
    if (current->prev)
        current->prev->next = current->next;

    free(current);
    return (1);
}
