#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end
 * @head:pointer to first node
 * @n:value to be put in the newnode
 *
 * Return:address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t)), *tail;

	if (!head || !newnode)
		return (newnode ? free(newnode), NULL : NULL);

	newnode->n = n;
	newnode->next = NULL;
	if (!*head)
	{
		newnode->prev = *head;
		*head = newnode;
	}
	else
	{
		tail = *head;
		while (tail->next)
			tail = tail->next;
		tail->next = newnode;
		newnode->prev = tail;
	}
	return (newnode);
}
