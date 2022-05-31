#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a
 *           given index
 * @n: number
 * @index: index
 * Return: the value of 1 if it worked, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setter;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setter = 1 << index;
	*n = *n | setter;
	return (1);
}
