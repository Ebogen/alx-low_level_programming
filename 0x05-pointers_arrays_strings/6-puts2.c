#include "main.h"

/**
 * puts2 - print every other character of a string
 * @str: string
 *
 * Return: always 0
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			puts2(str[i]);
		}
		i++;
	}
	putchar('\n');
}
