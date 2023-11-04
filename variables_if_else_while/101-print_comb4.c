#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *main - print
 *Description: print all possible 3 combinations of numbers
 * Return: zero
 */
int main(void)
{
	int i, j, k = 0;
	int space = 0;

	for (k = 48; k < 58; k++)
	{
		for (i = 48; i < 58; i++)
		{
			for (j = 48; j < 58 && space == 0; j++)
			{
				if (i * 10 + j < j * 10 + i)
				{
					if (k * 100 + i * 10 + j < i * 100 + k * 10 + j)
					{
						putchar(k);
						putchar(i);
						putchar(j);
						space = 1;
					}
				}
				if (space == 1 && (k * 100 + i * 10 + j) < 6117)
				{
					putchar(',');
					putchar(' ');
					space = 0;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
