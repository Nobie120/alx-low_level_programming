#include "lists.h"

/**
 * add_node_end -  function that adds a new node at the end of a list_t list
 * @head:pointer to the 1st node
 * @str:data of the node added
 *
 * Return: The address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);
	if (*head == NULL)
		(*head) = newnode;
	else
	{
		temp = *head;
		while (temp->next != 0)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	newnode->str = strdup(str);
	newnode->next = NULL;
	newnode->len = strlen(str);
	return (newnode);
}
