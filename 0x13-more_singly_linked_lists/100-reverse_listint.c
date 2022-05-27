#include "lists.h"
#include "stdlib.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: point to beginning of list
 * Return: pointer to the 1st node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *former, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	former = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = former;
		former = *head;
		*head = next;
	}
	*head = former;
	return (*head);

}
