#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @idx:index of the list where the new node should be added. Index starts at 0
 * @head:pointer to the fisrt node
 * @n:The data to be put on the new node
 *
 * Return:address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int position = 0;
	listint_t *temp, *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	temp = *head;
	for (; position != (idx - 1); position++)
	{
		temp = temp->next;
	}
	if (!temp)
	{
		free(temp);
		return (NULL);
	}
	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
