#include <stdio.h>
/**
 * main - entry point
 *
 * betty style doc for function main goes here
 */
int main(void)
{
	int n;
	for (n = 0; n < 26; ++n)
		putchar('a' + n);

	putchar('\n');

	return (0);
}
