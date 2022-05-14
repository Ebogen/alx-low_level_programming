#include "function_pointer.h"

/**
 * array_iterator - a function that executes a function given as a
 *                  parameter on each element of an array
 * @array: integer input to an array
 * @size: size of the array
 * @action: pointer to the function
 * Return: always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
