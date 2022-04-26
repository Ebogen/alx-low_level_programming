#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: String
 * @c: Character to search
 * Return: A pointer to the first occurence of the character c
 *         in the string s.
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
