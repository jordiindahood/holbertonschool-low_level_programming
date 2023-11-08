#include "main.h"
/**
 * free_grid - free 2d array from memory
 *@grid: array
 *@height: 1st dimension 
 * Return: ptr.
 */
void free_grid(int **grid, int height)
{
    int i = 0;

	for(i=height-1;i>=0;i--)
        free(grid[i]);
    free(grid);
}
