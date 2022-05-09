#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that contatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: an integer
 * Return: pointer that points to a newly allocated space or if fail, NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2 = 0;
	unsigned int i, j;

	char *str_copy;
	char *tmp1 = s1;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (*s1++)
		i++;
	len1 = i;
	s1 = tmp1;
	lens2 = n;
	str_copy = malloc((len1 + len2) * sizeof(char) + 1);
	if (str_copy == NULL)
		return (NULL);

	j = 0;
	while (j < len1)
	{
		str_copy[j] = s1[j];
		j++;
	}

	while (j < len1 + len2)
	{
		j++;
	}

	str_copy[j] = '\0';
	return (str_copy);
}
