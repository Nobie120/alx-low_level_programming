#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head:pointer to the first node
 *
 * Return:returns the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = temp->next;

	free(temp);

	return (n);
}
