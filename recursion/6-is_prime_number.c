#include "main.h"
/**
 * is_prime_number - check the code
 * Description: see if the number is a prime number
 * @n : int
 * Return: int
 */
int is_prime_number(int n)
{
    if (n > 0)
		return (div(n, 1));
	else
		return (0);
}
/**
 * div - check the code
 * Description: see if x is divisible by y
 * @x : int
 * @y : int
 * Return: int
 */
int div(int x, int y)
{
	if (x%y == 0)
		return (0);
	else if (x%y > 0)
		return (div(x, y + 1));
	else
		return (1);
}
