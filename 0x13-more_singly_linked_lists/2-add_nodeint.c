#include "lists.h"

/**
 * add_nodeint -  function that adds a new node
 * at the beginning of a listint_t list
 * @head:Pointer to the 1st node
 * @n:The int to be put on the newnode
 *
 * Return:address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->next = *head;
	*head = newnode;
	newnode->n = n;
	return (newnode);
}
