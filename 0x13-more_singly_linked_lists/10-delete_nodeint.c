#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node
 * at index of a listint_t linked list.
 * @head:Pointer to the the fisrt node
 * @index: index of the node that should be deleted.
 * Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tobe_deleted, *temp = *head;

	if (temp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (; i != (index - 1); i++)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
	}
	tobe_deleted = temp->next;
	temp->next = tobe_deleted->next;
	free(tobe_deleted);

	return (1);
}
