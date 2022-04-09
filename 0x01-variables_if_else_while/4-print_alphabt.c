#include <stdio.h>
/**
 * main - entry point
 *
 * Description : Print lowercase alphabet exluding e and q
 * Return: 0
 */
int main(void)
{
	char n;
	/* This is a blank line */
	for (n = 'a'; n <= 'z'; ++n)
	{
		if (n != 'e' && n != 'q')
			putchar(n);
	}
	putchar('\n');

	return (0);
}
