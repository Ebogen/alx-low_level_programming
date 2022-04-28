#include "main.h"

/**
 * _strlen_recursion - a function that return the length of a string
 * @s: a string
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(++s));
}
