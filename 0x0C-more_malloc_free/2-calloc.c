#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: size
 * @size: sizeof datatype
 * Return: pointer to calloc string
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	/* ALLOCATE MEMORY AND CHECK FOR ERROR */
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* SET ALLOCATED MEMORY VALUE TO 0 */
	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
