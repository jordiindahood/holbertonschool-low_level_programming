#include "main.h"
/**
 * flip_bits - return the number of bits you would need to
 *  flip to get from one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, res = n ^ m;

	while (res > 0)
	{
		count++;
		res &= (res - 1);
	}
	return (count);
}
