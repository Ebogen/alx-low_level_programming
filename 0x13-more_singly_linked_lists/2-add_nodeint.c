#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - a function that adds a new node at the beginning of a
 *               listint_t list.
 * @head: refers to the pointer at the beginning of the the listint_t list.
 * @n: integer
 * Return: the address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
