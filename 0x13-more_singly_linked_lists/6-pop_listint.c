#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - a function that deletes the head node
 * @head: pointer to first node
 * Return: The head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;

	*head = temp->next;

	free(temp);

	return (data);
}
