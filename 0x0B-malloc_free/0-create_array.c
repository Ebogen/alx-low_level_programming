#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates array
 * @size: size of the array
 * @c: stores char
 * Return: pointer to array of char
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(c) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
