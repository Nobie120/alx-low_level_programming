#include "lists.h"

/**
 * print_listint_safe -  function that prints a listint_t linked list
 * @head:Pointer to the first node
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	int num_of_nodes = 0;
	const listint_t *first = head;
	const listint_t *second = head;

	while (first && second && second->next)
	{
		printf("[%p] %d\n", (void *)first, first->n);
		num_of_nodes++;

		first = first->next;
		second = second->next->next;
		if (first == second)
		{
			printf("[%p] %d\n", (void *)first, first->n);
			num_of_nodes++;

			printf("-> [%p] %d\n", (void *)second, second->n);
			num_of_nodes++;
			break;

		}
	}
	return (num_of_nodes);
}
