#include "main.h"

/**
 * prime_chk - checks if a number is prime
 * @m: a check factor
 * @p: a possible prime number
 * Return: 1 if prime or 0 if not prime
 */

int prime_chk(int m, int p)
{
	if (p < 2 || p % m == 0)
		return (0);
	else if (m > p / 2)
		return (1);
	else
		return (prime_chk(m + 1, p));
}

/**
 * is_prime_number - a function that tells if a number is prime
 *@n: number check
 *Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_chk(2, n));
}
