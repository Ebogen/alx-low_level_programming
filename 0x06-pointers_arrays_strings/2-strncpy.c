#include "main.h"

/**
 * _strncpy - copies a string
 * @src: the source string
 * @dest: the destination string
 * @n: the amount of bytes form src.
 * Return: the pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
