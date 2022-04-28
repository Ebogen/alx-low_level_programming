#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural
 *                   square root of a number
 * @n: a natural number
 * Return: root of a natural number
 */

int _sqrt_recursion(int n)
{
	return (_recursion(n, 1));
}

/**
 * _recursion - finds  natural square root of n
 * @root: integer parameter
 * @n: integer parameter
 * Return: _recursion
 */

int _recursion(int n, int root)
{
	if (n < 0)
		return (-1);
	if ((root * root) > n)
		return (-1);
	if ((root * root) == n)
		return (root);
	return (_recursion(n, root + 1));
}
