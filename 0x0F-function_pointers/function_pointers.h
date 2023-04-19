#include <stddef.h>
#ifndef FUNCTION_POINTER_H
#define FUNCTION8POINTER_H

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
