#include "main.h"

/**
 * _strcmp - a funtion that compares two strings.
 * @s1: The first string.
 * @s2: the second string
 * Return: 0 if s1 and s2 are equal else another number
 */

int _strcmp(char *s1, char *s2)
{

	int i = 0;
	int dp = 0;

	while (dp == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		dp = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (dp);
}
