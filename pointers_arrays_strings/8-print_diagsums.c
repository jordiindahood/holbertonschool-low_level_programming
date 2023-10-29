#include "main.h"
/**
 * print_diagsums - check the code
 * Description : print the diagonal of square matrix
 * @a: the name of the array
 * @size: the size of the array
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, i = 0;
	int j = size - 1;

	while (i <= (size * size))
	{
		sum1 = sum1 + a[i];
		i = i + size + 1;
	}

	while (j < (size * size - 1))
	{
		sum2 += a[j];
		j = j + size - 1;
	}

	printf("%d, %d\n", sum1, sum2);
}