#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the lenght of a string
 * @s: a string
 * Return: number of chararcter in a string
 */

int _strlen(char *s)
{
	int lenght = 0;

	for (; *s; s++)
	{
		lenght++;
	}
	return (lenght);

}

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: a string
 * @s2: another string
 * @n: an integer
 * Return: pointer to the concatenated string or if fail, NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1;
	int len2;
	int sign_n = n;
	int i;
	char *cnt;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = _strlen(s1);

	if (s2 == NULL)
		len2 = 0;
	else if (sign_n > _strlen(s2))
		len2 = _strlen(s2);
	else
		len2 = n;

	cnt = malloc(sizeof(char) * ((len1 + len2) + 1));

	if (cnt == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		cnt[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		cnt[len1 + i] = s2[i];
	}

	cnt[len1 + len2] = '\0';

	return (cnt);
}
