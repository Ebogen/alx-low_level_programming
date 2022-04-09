#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print numbers 0 t0 9 on one line
 * Return: 0
 */
int main(void)
{
	char m;
	/* Blank space after declaration */
	for (m = '0'; m <= '9'; ++m)
		putchar(m);

	putchar('\n');

	return (0);
}
