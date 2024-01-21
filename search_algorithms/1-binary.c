#include "search_algos.h"
/**
 * binary_search - binary search algorithm
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index of @value in @array if found, or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
	int rgt = size - 1, lft = 0, mid;
	int i;

	if (array == NULL)
		return (-1);

	while (lft <= rgt)
	{
		mid = lft + (rgt - lft) / 2;
		printf("Searching in array: ");
		for (i = lft; i <= rgt; i++)
		{
			printf("%d", array[i]);
			if (i < rgt)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			lft = mid + 1;
		else
			rgt = mid - 1;
	}
	return (-1);
}
