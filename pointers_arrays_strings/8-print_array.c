#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - check the code
 * Description: print n alaments of an array of integer
 * @n : number of cases in @a
 * @a : array of integer
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
