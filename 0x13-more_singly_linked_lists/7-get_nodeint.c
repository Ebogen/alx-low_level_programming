#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - a function that gets a node at the given index
 * @head: a pointer
 * @index: node
 * Return: pointer to the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (index == 0)
		return (head);

	while (count < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		count++;

	}
	return (head);
}
