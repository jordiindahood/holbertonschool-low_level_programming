#include "main.h"
/**
 * set_bit - set a value of a bit at a given index to 1
 * @n: unsigned long int *
 * @index: unsigned int
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
