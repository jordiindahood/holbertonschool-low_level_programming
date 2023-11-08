#include "main.h"
/**
 * alloc_grid - make a 2D array of integers
 *@width:int
 *@height:int
 * Return: ptr.
 */
int **alloc_grid(int width, int height)
{
	int *T;
	int **p;

	if (width < 1 || height < 1)
		return (NULL);
	do
		T = malloc(sizeof(int) * height * width);
	while (T == NULL);
	p = &T;
	return (p);
}
