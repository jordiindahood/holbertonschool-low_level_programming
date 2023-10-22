#include "main.h"
#include <stdio.h>
/**
 * more_numbers - check the code
 * Description: print from 0 to 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int j,i;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i < 11; i++)
		{
			if (i < 10)
				_putchar('0' + i);
			else
			{
				_putchar('0' + 1);
				_putchar('0' + 0);
				_putchar('0' + 1);
				_putchar('0' + 1);
				_putchar('0' + 1);
				_putchar('0' + 2);
				_putchar('0' + 1);
				_putchar('0' + 3);
				_putchar('0' + 1);
				_putchar('0' + 4);
			}
		}
		_putchar('\n');
	}
}
