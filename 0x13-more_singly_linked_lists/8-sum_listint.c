#include "lists.h"

/**
 * sum_listint - function that returns the sum of all
 * the data (n) of a listint_t linked list
 * @head:pointer to the first node
 *
 * Return:returns the sum of all the data (n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
