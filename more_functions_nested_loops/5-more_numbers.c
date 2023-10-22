#include "main.h"
#include <stdio.h>
/**
 * more_numbers - check the code
 * Description: print from 0 to 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i != 2 && i != 4)
				_putchar('0' + i);
		}
		_putchar('\n');
	}
}
