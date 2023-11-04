#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *main - print
 *Description: print all possible combinations of numbers
 * Return: zero
 */
int main(void)
{
	int i, j, x, y = 0;
	int space = 0;
	for (y = 48; y < 58; y++)
	{
		for (x = 48; x < 58; x++)
		{
			for (i = 48; i < 58; i++)
			{
				for (j = 48; j < 58 && space == 0; j++)
				{
					if (y * 10 + x < i * 10 + j)
					{
						putchar(y);
						putchar(x);
						putchar(' ');
						putchar(i);
						putchar(j);
						space = 1;
					}
					if (space == 1 && y * 1000 + x * 100 + i * 10 + j < 63227)
					{
						putchar(',');
						putchar(' ');
						space = 0;
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
