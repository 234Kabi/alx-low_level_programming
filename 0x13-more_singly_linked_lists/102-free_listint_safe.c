#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list safely
 * @h: pointer to pointer to the head node of the list
 * Return: size of the list that was freed
 * Sets the head to NULL
 */

size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *current, *next;

    if (h == NULL || *h == NULL)
        return (0);

    current = *h;
    *h = NULL;

    while (current != NULL)
    {
        count++;
        next = current->next;
        free(current);
        current = next;
    }

    return (count);
}
