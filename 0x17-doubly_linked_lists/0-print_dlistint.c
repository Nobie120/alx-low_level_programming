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
	int num = 0;

	if (!h)
		return (-1);
	while (h)
	{
		printf("%d\n",h->n);
		num++;
		h = h->next;
	}
	return (num);
}
