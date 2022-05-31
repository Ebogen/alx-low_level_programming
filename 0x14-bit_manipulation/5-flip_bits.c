#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 *             to get from one number to another.
 * @n: 1st number
 * @m: 2nd number
 * Return:  the number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif, checker;
	unsigned int counter, i;

	counter = 0;
	checker = 1;
	dif = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (checker == (dif & checker))
			counter++;
		checker <<= 1;
	}
	return (counter);
}
