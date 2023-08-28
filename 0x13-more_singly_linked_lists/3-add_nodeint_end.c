#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at
 * the end of a listint_t list
 * @head:Pointer to the first node
 * @n:The data(int) to be put in the new node
 *
 * Return:the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}
	newnode->n = n;
	return (newnode);
}
