#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - a funcition that find the lenght of string
 * @str: string
 * Return: lenght of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;

	return (i);
}
/**
 * add_node - a function that adds a new nod at the beginning
 *            of a list_t list
 * @head: double pointer to linked list
 * @str: string that needds to be duplicated
 * Return: the address of the new elements, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

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
	new->next = *head;
	*head = new;
	return (new);
}
