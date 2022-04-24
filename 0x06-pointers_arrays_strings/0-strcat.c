#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 *
 * @dest: a string
 * @src: a string
 * Return: a pointer to the string dest
 */

char *_strcat(char *dest, char *src)
{
	char s1[] = "src\n";
	char s2[] = "dest\n";
	char *ptr;

	ptr = _strcat(s1, s2);

	return (dest);
}
