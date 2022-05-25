#include "lists.h"

/**
 * list_len - a function that adds a new node at the beginning
 *            of a  list_t list.
 * @h: a pointer to beginning of list
 * Return: nunber of elements in a linked list_t
 */

size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		tmp = tmp->next;
	}

	return (i);
}
