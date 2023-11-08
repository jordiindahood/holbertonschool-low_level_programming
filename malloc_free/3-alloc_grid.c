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

	if (width * height < 1)
		return (NULL);
	do
		t = malloc(sizeof(int) * height * width);
	while (t == NULL);
	do
		p = malloc(sizeof(int *) * height * width);
	while (p == NULL);
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			*(t + i + j) = 0;
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			*(p + i + j) = (t + i + j);
	return (p);
}
