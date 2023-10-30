#include "main.h"
/**
 * factorial - check the code
 * Description: count the factorial of int
 * @n : int
 * Return: int
 */
int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	else if (n < 0)
		return (-1);
	else
		return (1);
}
