#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * betty style doc for function main goes there
 * betty there there is a decription added for main
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		/* is the value of n positive ? */
		printf("is positive\n");
	}
	else if (n == 0)
	{
		/* is the value of n equal to zero */
		printf("is zero\n");
	}
	else if (n < 0)
	{
		/* is the value of n less than zero ? */
		printf("is negative\n");
	}
	return (0); /* This is a description for return value of  main */
}
