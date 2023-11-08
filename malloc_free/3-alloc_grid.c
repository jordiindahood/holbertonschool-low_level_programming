#include "main.h"
/**
 * alloc_grid - make a 2D array of integers
 *@width:int
 *@height:int
 * Return: ptr.
 */
int **alloc_grid(int width, int height)
{
    int *p;

    if (width < 1 || height < 1)
        return (NULL);
    do
        p = malloc(sizeof(int) * height * width);
    while (p == NULL);
    return (p);
}
