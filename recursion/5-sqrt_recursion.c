#include "main.h"
/**
 * _sqrt_recursion - check the code
 * Description: count the square root of @n
 * @n : int
 * Return: int
 */
int _sqrt_recursion(int n)
{
	if (n <= 0 )
		return(-1);
	else if (n == 0)
		return(0);
	else if (n % 10 == 0)
		return (n);
	else
		return(_sqrt_recursion(n-1));

}
