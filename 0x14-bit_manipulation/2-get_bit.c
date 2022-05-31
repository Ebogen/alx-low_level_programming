#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index
 * @n: represents the number for bit check
 * @index: represents index, starting from 0 of the bit we want to get
 * Return: the value of the bit at index (index) or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divider, checker;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divider = 1 << index;
	checker = n & divider;
	if (checker == divider)
		return (1);
	return (0);
}
