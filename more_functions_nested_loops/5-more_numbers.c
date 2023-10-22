#include "main.h"
#include <stdio.h>
/**
 * more_numbers - check the code
 * Description: print from 0 to 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int j, k;

	for (k = 0; k < 10; k++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				_putchar('0' + j / 10);
			_putchar('0' + j % 10);
		}
		_putchar('\n');
	}
}
