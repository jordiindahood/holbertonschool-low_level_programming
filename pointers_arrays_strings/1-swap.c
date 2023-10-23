#include "main.h"
#include <stdio.h>
/**
 * swap_int - check the code
 * Description: swap the vaules of two integer
 * @a : pointer to the number to be swapped
 * @b : pointer to the number to be swapped
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
