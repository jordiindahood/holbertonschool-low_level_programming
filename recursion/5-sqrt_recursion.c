#include "main.h"
/**
 * _sqrt_recursion - check the code
 * Description: count the square root of @n
 * @n : int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

int square(int x, int y)
{
	if (y * y == x)
		return (y);
	else if (y * y < x)
		return (square(x, y + 1));
	else
		return (-1);
}
