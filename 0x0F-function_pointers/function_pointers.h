#ifndef __FUNCTION_POINTERS_H__
#define __FUNCTION_POINTERS_H__

#include <stdlib.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void arr ay_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));


#endif