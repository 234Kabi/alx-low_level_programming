#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add node at the end of a lostint_t list.
 * @head: head of double pointer
 * @n: int add the list
 * return: NULL if it fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	liatint_t *temp;
	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t)):
		if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head:
		while (temp->next !=NULL)
		{
			temp = temp->next;
		}
	temp->next = new;
	return (new);
}

