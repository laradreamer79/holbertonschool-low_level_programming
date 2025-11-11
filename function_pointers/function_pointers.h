#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>
#include <stdlib.h>

/**
 * struct function_pointers - header file for function pointer tasks
 * @name: pointer to the name string
 * @f: pointer to function that takes a char pointer argument
 *
 * Description: This header contains all prototypes used
 * in the function pointer project.
 */

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNCTION_POINTERS_H */

