#include "main.h"
#include <stdio.h>
/**
 * _abs - check the code
 * Description: return the absolute value
 * @n: int
 * Return: int
 */
int _abs(int n)
{
	int x;

	if (n == 0)
	{
		x = 0;
	}
	else if (n < 0)
	{
		x = n * -1;
	}
	else
	{
		x = n;
	}
	return (x);
}
