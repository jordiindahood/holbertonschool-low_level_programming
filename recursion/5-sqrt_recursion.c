#include "main.h"
/**
 * _sqrt_recursion - check the code
 * Description: count the square root of @n
 * @n : int
 * Return: int
 */
/**
 * square - check the code
 * Description : check if @y squared is @x
 * Return : int
 */

int _sqrt_recursion(int n)
{
	if (n > 0)
		return (square(n, 1));
	else
		return (-1);
}

int square(unsigned long x, unsigned long y)
{
	if (y * y == x)
		return (y);
	else if (y * y < x)
		return (square(x, y + 1));
	else
		return (-1);
}
