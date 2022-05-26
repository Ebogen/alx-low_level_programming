#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - a function that inserts a new node at a given
 *                           position
 * @head: a pointer
 * @idx: index to list where new nodes are to be added
 * @n: data to be added
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *temp, *new_node;

	/* next we check if pointer is empty */
	if (head == NULL)
		return (NULL);

	/* we now allocate space in the memory for the new node */
	new_node = node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	/* we add node to the list */

	temp = *head;
	while (temp != NULL && count < (idx - 1))
	{
		temp = temp->next;
		count++;

		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
