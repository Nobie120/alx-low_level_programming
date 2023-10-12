#include "lists.h"

/**
 * print_dlistint - function that prints
 * all the elements of a dlistint_t list.
 * @h:pointer to the fisrt node
 *
 * Return:the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp;
	int num = 0;

	if (!h)
		return (-1);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (-1);
	printf("%d\n", h->n);
	num++;
	while (temp)
	{
		temp = h->next;
		num++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	free(temp);
	return (num);
}
