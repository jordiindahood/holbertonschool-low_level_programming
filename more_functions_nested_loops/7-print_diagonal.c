#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - check the code
 * Description: draw a diagonal
 * @n : int =(length of diagonal)
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; i > j; j++)
				_putchar(32);
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
