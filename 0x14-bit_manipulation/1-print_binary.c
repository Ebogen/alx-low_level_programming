#include "main.h"

/**
 * _pow - a function that calculates (base ^ pow)
 * @base: base of exponent
 * @power: power of exponent
 *
 * Return: value of base ^ power
 */

unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int temp;
	unsigned int i;

	temp = 1;
	for (i = 1; i <= power; i++)
		temp *= base;
	return (temp);
}

/**
 * print_binary - a function that prints a number in binary notation
 * @n: - the number we want to print
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int divider, checker;
	char flag;

	flag = 0;
	divider = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divider != 0)
	{
		checker = n & divider;
		if (checker == divider)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divider == 1)
		{
			_putchar('0');
		}
		divider >>= 1;
	}
}
