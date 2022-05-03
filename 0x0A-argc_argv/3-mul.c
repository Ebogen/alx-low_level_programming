#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to the function
 * @argv: argument veector of pointers to the string
 * Return: 0 if successful or 1 if not
 */

int main(int argc, char *argv[])
{

	int a, b, c;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		c = a * b;
		printf("%d\n", c);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);

}
