#include "main.h"
/**
 * create_array - initialize an array with n number of cases
 *@size: number of cases
 *@c: char
 * Return: ptr.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size < 1)
		return (NULL);
	do
		p = malloc(sizeof(char) * size);
	while (p == NULL);
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
