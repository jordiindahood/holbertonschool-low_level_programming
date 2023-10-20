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
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i * (j + 1) < 10)
			{
				if (j != 9)
				{
					printf("%d,  ", i * j);
				}
				else
				{
					printf("%d", i * j);
				}
			}
			else
			{

				if (j != 9)
				{
					printf("%d, ", i * j);
				}
				else
				{
					printf("%d", i * j);
				}
			}
		}
		printf("\n");
	}
}
