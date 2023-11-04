#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *main - print
 *Void
 *Description: print all possible combinations of
 *single-digit numbers.
 * Return: zero
 */
int main(void)
{
	int i, j = 0;
	int space = 0;
	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58 && space == 0; j++)
		{
			if (i*10 + j < j*10 + i)
			{
				putchar(i);
				putchar(j);
				space = 1 ; 
			}
			if (space == 1 && (i*10 + j) < 617){
			putchar(',');
			putchar(' ');
			space = 0;
			}
		}
	}
	putchar('\n');
	return (0);
}
