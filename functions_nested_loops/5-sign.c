#include "main.h"
#include <stdio.h>
/**
 * print_sign - check the code
 * Description: print the sign of a number("+" if positive, "-" negative or "0")
 * @n: int, number
 * Return:
 * 0 if is zero
 * 1 if greater than zero
 * -1 if less than zero
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar("0");
		return (0) ;
	}
	else if (n < 0)
	{
		_putchar("-");
		return (-1);
	}
	else
	{
		_putchar("+");
		return (1);
	}
}
