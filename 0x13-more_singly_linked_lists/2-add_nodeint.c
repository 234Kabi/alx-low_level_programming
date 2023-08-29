#include <stdlib.h>
#include "lists.h"

/**
 * add nodeint _ add node at the beginning of the listint_t list
 * @head: head of the double pointer
 * @n: int add the list
 * return: NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;
	if (head == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}