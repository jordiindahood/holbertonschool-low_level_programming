#include "main.h"
/**
 * malloc_checked - allocate memory
 *@b: unsigned int , number of bytes
 * Return: void*
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = (void *)malloc(b);
	if (p == NULL)
		return ((void *)98);
	return (p);
}
