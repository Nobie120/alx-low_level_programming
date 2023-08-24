#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head:A pointer to the 1st node
 * @str:The string to be put in the added node
 *
 * Return:address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new;

	while (str[len] != '\0')
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->len = len;
	new->str = strdup(str);
	new->next = (*head);
	(*head) = new;

	return (*head);
}
