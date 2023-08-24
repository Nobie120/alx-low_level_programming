#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h:pointer to fisrt node
 *
 * Return:number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%ld] %s\n", (h->str ? strlen(h->str) : 0),
		(h->str ? h->str : "(nil)"));
		h = h->next;
		i++;
	}
	return (i);
}
