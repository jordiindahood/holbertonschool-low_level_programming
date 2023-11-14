#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
/**
 * array_iterator - execute a func
 * @array: int*
 * @size: size_t
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    size_t i;

    if (size > 0 && array != NULL)
        for (i = 0; i < size; i++)
            (*action)(array[i]);
}
