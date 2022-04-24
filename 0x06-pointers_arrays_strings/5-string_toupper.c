#include "main.h"

/**
 * *string_toupper - a function that changes all lowercase letters
 *                   of a string to uppercase.
 *@s: input string
 * Return: A pointer.
 */

char *string_toupper(char *s)
{
	int count = 0;
	/* This is a blank space */
	while *(s + count) != '\0')
	{

		if ((*(s + count) >= 97) && (*(s + count) <= 122))
			*(s + count) = *(s + count) - 32;
		count++;
	}

	return (s);
