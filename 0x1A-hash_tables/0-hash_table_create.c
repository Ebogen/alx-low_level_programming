#include "hash_tables.h"

/**
 * hash_table_create - this function creates a hash table
 * @size: this represents the size of the array.
 *
 * Return: we return a pointer to the newly created hash_table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_t;
	unsigned long int i;

/* next we create a table for the size of the struct table */
	new_t = malloc(sizeof(hash_table_t));
	if (new_t == NULL || size == 0)
		return (NULL);

/* next we create an array of size area. this is a member of table */
	new_t->array = malloc(sizeof(void *) * size);
	if (new_t->array == NULL)
		return (NULL);

	new_t->size = size;

	/* next we initialize the array to NULL */

	for (i = 0; i < size; i++)
		new_t->array[i] = NULL;

	return (new_t);
}
