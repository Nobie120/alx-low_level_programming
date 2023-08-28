#include "lists.h"

/**
 * get_nodeint_at_index - function that returns
 * the nth node of a listint_t linked list.
 * @index:index of the node, starting at 0
 * @head:Pointer to the 1st node
 *
 * Return:the nth node of a listint_t linked list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;
	listint_t *temp;

	temp = head;
	for (node = 0; node != index; node++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
