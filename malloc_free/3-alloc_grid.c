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
	int i, j;

	if (width * height < 1)
		return (NULL);

	do
		p = (int **)malloc(sizeof(int *) * height);
	while (p == NULL);

	for (i = 0; i < height; i++)
		do
			p[i] = (int *)malloc(sizeof(int) * width);
			if (p[i] == NULL)
				free(p[i--]);
		while (p[i] == NULL && i>=0);

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	return (p);
}
