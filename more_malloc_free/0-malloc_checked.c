#include "main.h"
/**
 * free_grid - free 2d array from memory
 *@grid: array
 *@height: 1st dimension
 * Return: ptr.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;
	p = (void *)malloc(sizeof(unsigned int) * b);
	return (p);
}
