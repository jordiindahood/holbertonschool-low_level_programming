#include "main.h"
#include <stdio.h>
/**
 * print_line - check the code
 * Description: draw a straight line
 * @n : int =(length of line)
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n < 1)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
