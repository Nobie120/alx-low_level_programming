#include "hash_tables.h"

/**
 * hash_table_set -  function that adds an element to the hash table.
 * @ht:pointer to the hash table
 * @key:the key
 * @value: the value to be stored
 *
 * Return:1 if success otherwise 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *temp;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}
	node = hash_node_create(key, value);
	if (node == NULL)
		return (0);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}

/**
 * hash_node_create - creates a linked list with a node(s)
 * @key:the key
 * @value:value associated with the key
 *
 * Return: a pointer to node to the first node
 */

hash_node_t *hash_node_create(const char *key, char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = key;
	if (key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = value;
	if (key == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	return (node);
}
