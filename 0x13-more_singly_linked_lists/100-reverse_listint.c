#include "lists.h"
#include "stdlib.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: point to beginning of list
 * Return: pointer to the 1st node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *former, *present;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->present == NULL)
		return (*head);
	former = NULL;
	while (*head != NULL)
	{
		present = (*head)->present;
		(*head)->present = former;
		former = *head;
		*head = present;
	}
	*head = former;
	return (*head);

}
