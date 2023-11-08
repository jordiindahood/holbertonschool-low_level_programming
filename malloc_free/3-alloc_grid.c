#include "main.h"
/**
 * alloc_grid - make a 2D array of integers
 *@width:int
 *@height:int
 * Return: ptr.
 */
int **alloc_grid(int width, int height)
{
	int **p;
	int *t;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	do
		t = malloc(sizeof(int) * height * width);
	while (t == NULL);
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			*(t + i + j) = 0;
	p = &t;
	return (p);
}
