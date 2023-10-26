#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strncpy - check the code
 * Description: copy @n number of array to another
 * @dest : pointer to destination array
 * @src : pointer to be copied
 * @n : int
 * Return: char*
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (*dest == '\0')
	{
		while (i < n)
		{
			*(dest + i) = *(src + i);
			i++;
		}
	}
	return (dest);
}
