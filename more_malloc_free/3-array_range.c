#include "main.h"
/**
 * array_range - create an array of integers
 *@min: int
 *@max: int
 * Return: int
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (max < min)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i <= max - min + 1; i++)
		p[i] = min + i;

	return (p);
}
