#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h:pointer to the first
 * @idx:index of the list where the new node should be added
 * @n:the value to be put in the newnode
 *
 * Return:the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = temp;
	newnode->next = temp->next;
	temp->next->prev = newnode;
	temp->next = newnode;

	return (newnode);
}
