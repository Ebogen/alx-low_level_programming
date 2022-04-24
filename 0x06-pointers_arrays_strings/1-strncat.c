#include "main.h"

/**
 * _strncat - a function that contatenates two strings,
 * @dest: the destination string
 * @src: the source string
 * @n: amtount of bytes used from src
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0;
	int count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;

		count++;
		count2++;
	}

	return (dest);
}
