#include "main.h"
/**
 * factorial - check the code
 * Description: count the factorial of int
 * @n : int
 * Return: int
 */
int factorial(int n)
{
    int x = 1;

    if (n > 0)
        return (x * factorial(x - 1));
    else
        return (x);
}
