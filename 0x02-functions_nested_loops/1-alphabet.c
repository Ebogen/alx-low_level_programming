#include "main.h"

/**
 * print_alphabet -prontthe alphabet in lowercase, followed by a new line.
 *
 */
void print_alphabet(void)
{
	char letter;
	/* This is a blank line */
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
