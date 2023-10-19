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

	x = n % 10;
	if (x < 0)
		x *= -1;
	putchar(x + '0');
	return (x);
}
