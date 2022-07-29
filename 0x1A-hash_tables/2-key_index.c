#include "hash_tables.h"

/**
 * key_index - this function gives the index of a key
 * @key: this represents the key
 * @size: this represents the size of the array
 * Return: the index of a key in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
