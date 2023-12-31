#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
/**
 * int_index - execute a func
 * @array: int*
 * @size: int
 * @cmp: pointer to function
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array != NULL && cmp != NULL)
		for (i = 0; i < size; i++)
			if ((*cmp)(array[i]) == 1)
				return (i);
	return (-1);
}
