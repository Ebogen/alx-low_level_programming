#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an
 *                  unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converter number of 0 if there is one or mofe chars
 *         in the string b that is not 0 or 1 . b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int temp;

	temp = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		temp << = 1;
		if (b[i] == '1')
			temp += 1;
	}
	return (temp);
}
