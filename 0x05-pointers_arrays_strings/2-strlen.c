#include "main.h"

/**
 * _strlen - count the length of a string
 * @s: string
 *
 * Return: the value of the lenght of i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	/* This is a blank line */
	return (i);
}
