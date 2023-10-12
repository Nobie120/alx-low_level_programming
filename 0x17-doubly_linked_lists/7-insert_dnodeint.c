#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @head:pointer to the first
 * @idx:index of the list where the new node should be added
 *
 * Return:the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = idx;
	dlistint_t *newnode, *temp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	for (i = 0; i != idx; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	if (temp->next == NULL)
		add_dnodeint_end(h, n);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->next = temp->next;
	newnode->prev = temp;
	temp->next = newnode;
	temp->next->prev = newnode;

	return (newnode);
}
