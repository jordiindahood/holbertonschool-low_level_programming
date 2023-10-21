#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*more headers goes there*/

/**
 * print_to_98 - check the code
 * Description: print all numbers between @a and 98
 * @a : int
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
	}
	printf("\n");
}