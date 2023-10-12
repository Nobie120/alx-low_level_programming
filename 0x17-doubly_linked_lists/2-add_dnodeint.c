#include "lists.h"

/**
 * add_dnodeint - add new node at the begining
 * @head:pointer to the first node
 * @n:The value to be put in the newnode
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (!head || !newnode)
		return (newnode ? free(newnode), NULL : NULL);

	newnode->n = n;
	newnode->prev = NULL;
	if (!*head)
	{
		*head = newnode;
		newnode->next = NULL;
	}
	else
	{
		newnode->next = *head;
		(*head)->prev = newnode;
		*head = newnode;
	}
	return (newnode);
}
