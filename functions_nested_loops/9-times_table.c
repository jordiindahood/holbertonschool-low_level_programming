#include <stdio.h>
#include "main.h"
/*more headers goes there*/

/**
 * times_table - check the code
 * Description: print the 9 times tables
 * Return: void
 */
void times_table(void)
{
	int i, j, x;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			x = j * i;
			if (x / 10 != 0)
				_putchar(x / 10 + '0');
			else
				_putchar(' ');
			_putchar(x % 10 + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
