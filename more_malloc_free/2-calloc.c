#include "main.h"
/**
 * _calloc - allocate memory of an array
 *@nmemb: unsigned int
 *@size: unsigned int
 * Return: void*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = calloc(nmemb, sizeof(int));
	return (p);
}
