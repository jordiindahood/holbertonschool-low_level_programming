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
		return (prime_check(n, 1));
	else
		return (0);
}
/**
 * prime_check - check the code
 * Description: see if x is divisible by y
 * @x : int
 * @y : int
 * Return: int
 */
int prime_check(int x, int y)
{
	if (x%y == 0)
		return (1);
	else if (x%y > 0)
		return (prime_check(x, y + 1));
	else
		return (0);
}
