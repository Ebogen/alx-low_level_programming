#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - a function that reallocates memory for an array of pointers
 *            to the nodes in a linked list
 * @list: old list
 * @size: size of new list
 *  @new: new node for list
 * Return: pointer to list
 */

const listint_t **_realloc(const listint_t **list, size_t size, const listint_t
			   *new)
{
	const listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - a function that prints a listint_t linked list
 * @head: pointer to start of list
 * Return: number of nodes in list
 */

size_t print_listint_safe(const lsitint_t *head)
{
	size_t i, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (i = 0; i < num; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _realloc(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
