#include "lists.h"

/**
 * sum_listint - a function that add all of the dat (n) in the linked list
 * @head: pointer
 * Return: sum or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
