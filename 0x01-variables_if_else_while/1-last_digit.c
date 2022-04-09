#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* my code goes here */

	printf("Last digit of %d is %d %s\n", n, n % 5,
	       ((n % 5) == 0) ? "and is 0"
	       : (((n % 5) > 5) ? "and is greater than 5"
		  : "and is less than 6 and not 0"));

	return (0);
}
