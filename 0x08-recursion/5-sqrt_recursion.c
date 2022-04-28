#include "main.h"

/**
 * _sqrt_recursion - a function that returns the natural
 *                   square root of a number
 * @n: a natural number
 * @root: a natural number
 * Return: root of a natural number or -1 if the not a natural root
 */

int _sqrt_recursion(int n, int root)
{
	if (root * root > n)
	{
		return (-1);
	}
	if (root * root < n)
	{
		return (-1);
	}
	if (root * root == n)
	{
		return (_sqrt_recursion(root, n));
	}
}
