#include "main.h"
#include <stdio.h>
/**
 * print_triangle - check the code
 * Description: draw a triangle
 * @size : size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int rows = size;
	int i, j, k;

	if (size <1)
		_putchar('\n');
	else {
	for (i = 0; i < rows; i++)
	{

		for (j = 0; j < 2 * (rows - i) - 1; j++)
		{
			printf(" ");
		}

		for (k = 0; k <= i; k++)
		{
			printf("#");
		}
		printf("\n");
	}
}
}
