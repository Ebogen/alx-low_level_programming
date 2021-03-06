#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - a function that adds a new node at the end of
 *                   a lsitint_t list.
 * @head: a pointer to the beginning of the list.
 * @n: integer
 * Return: pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *current;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	return (new);
}
