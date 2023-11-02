#include "hash_tables.h"

/**
 * hash_table_get -  function that retrieves a value
 * associated with a key.
 * @ht: pointer to the hash table
 * @key: the key whos value we are looking up
 *
 * Return: value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	index = key_index(key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
