#include "lists.h"
#include <string.h>
#include < stdlib.h>

/**
 * _strlen - a function that finds the lenght of a string
 * @str: string
 * Return: the lenght of a string
 */

unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node_end - a function that adds a node to the end of
 *                a linked list
 * @head: double pointer linked list
 * @str: string
 * Return: pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp *head;

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
