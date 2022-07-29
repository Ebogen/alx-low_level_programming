#include "hash_tables.h"

/**
 * hash_table_get - represents a function that retrieves a value associated
 *                  with a key.
 * @ht: represents the hash table we want to look into
 * @key: represents the key we are looking for
 * Return: the value or NULL if not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
