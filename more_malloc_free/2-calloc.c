#include "main.h"
/**
 * _calloc - allocate memory of an array
 *@nmemb: unsigned int
 *@size: unsigned int
 * Return: void*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p;

	p = (void *)calloc(nmemb, sizeof(int));
	return (p);
}
