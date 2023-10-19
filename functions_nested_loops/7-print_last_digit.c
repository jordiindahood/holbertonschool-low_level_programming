#include <stdio.h>
/*more headers goes there*/

/**
 * print_last_digit - check the code
 * Description: return the last digit
 * @n: int
 * Return: int
 */
int print_last_digit(int n)
{
	int x;
	if (n < 0)
		x = n * -1;
	x = x % 10;
	putchar('0' + x);
	return (x);
}
