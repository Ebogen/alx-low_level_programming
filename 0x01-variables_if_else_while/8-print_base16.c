#include <stdio.h>

/**
 * main - entry point
 *
 * Decription: Print all the digits of base 10 in lowercase
 * Return: 0
 */
int main(void)
{
	char m;
	/* Blank space after declaration */
	for (m = '0'; m <= '9'; ++m)
		putchar(m);
	for (m = 'a'; m <= 'f'; ++m)
		putchar(m);

	putchar('\n');

	return (0);
}
