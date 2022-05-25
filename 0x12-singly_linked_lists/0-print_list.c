#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: linked list
 * Return: number of nodes in linked list
 */


size_t print_list(const list_t *h)
{
	unsigned int i;
	const list_t *tmp;

	tmp = h;
	for (i = 0; tmp; i++)
	{
		printf("[%u] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}

	return (i);
}
