#include "lists.h"

/**
 * free_dlistint - function for freeing a double linked list
 * @head:pointer to the fisrt node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
