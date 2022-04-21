#include "main.h"
#include <stdio.h>
/**
 * reset_to_98 - write a fucntion that takes a pointer to an int as parameter
 * and updates the value it points to 98.
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{

	int m;
	int *n;

	m = 402;
	n = &m;
	_putchar("n=%d\n", m);
	*n = 98;
	_putchar("n=%p\n", m);
	_putchar ('\n');
}
