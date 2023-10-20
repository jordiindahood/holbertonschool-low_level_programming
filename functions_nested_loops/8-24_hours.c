#include <stdio.h>
#include "main.h"
/*more headers goes there*/

/**
 * jack_bauer - check the code
 * Description: print form 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
	int i, x, y, z;

	for (i = 0; i < 3; i++)
	{
		for (x = 0; x < 9; x++)
		{
			if (i == 2 && x >= 3)
				x = 3;
			for (y = 0; y < 6; y++)
			{
				for (z = 0; z < 10; z++)
				{
					_putchar('0' + i);
					_putchar('0' + x);
					_putchar(':');
					_putchar('0' + y);
					_putchar('0' + z);
					_putchar('\n');
					if (i == 2 && x == 3 && y == 5 && z == 9)
						break;
				}
				if (i == 2 && x == 3 && y == 5 && z == 9)
					break;
			}
			if (i == 2 && x == 3 && y == 5 && z == 9)
				break;
		}
		if (i == 2 && x == 3 && y == 5 && z == 9)
			break;
	}
}
