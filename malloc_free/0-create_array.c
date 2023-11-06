#include "main.h"
/**
 * create_array - initialize an array with n number of cases
 *@size: number of cases
 *@char: char
 * Return: ptr.
 */
char *create_array(unsigned int size, char c)
{
	if (size < 1)
		return (NULL);
	else
		return (malloc(sizeof(c) * size));
}
