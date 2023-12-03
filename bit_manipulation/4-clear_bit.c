#include "main.h"
/**
 * clear_bit - set a value of a bit at a given index to 0
 * @n: unsigned long int *
 * @index: unsigned int
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return ((*n |= 0L << index));
}
