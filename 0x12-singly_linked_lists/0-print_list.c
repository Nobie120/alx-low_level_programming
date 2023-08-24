#include "lists.h"

/**
 * _strlen - finds length of a string
 * @str:thye string
 *
 * Return:length
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;

	return (len);
}

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
		printf("[%d] %s\n", (h->str ? _strlen(h->str) : 0),
		(h->str ? h->str : "(nil)"));
		h = h->next;
		i++;
	}
	return (i);
}
