#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head:pointer to the fisrt node
 * @index: is the index of the node, starting from 0
 *
 * Return:the node at the index or NULL if doent exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int i = 0;

	while (node)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}
	return (NULL);
}
