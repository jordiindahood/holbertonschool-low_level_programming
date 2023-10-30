#include "main.h"
/**
 * factorial - check the code
 * Description: count the factorial of int
 * @n : int
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y == 0)
		return (1);
	else
		return (x / _pow_recursion(x, y + 1));
}
