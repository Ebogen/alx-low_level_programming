#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Print lowercase alphabet backwards
 * Return: 0
 */
int main(void)
{
	char m;
	/* Blank space after declaration */
	for (m = 'z'; m >= 'a'; --m)
		putchar(m);

	putchar('\n');

	return (0);
}
