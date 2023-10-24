#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - check the code
 * Description: copy an array to another
 * @dest : pointer to destination array
 * @src : pointer to be copied
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int n, i = 0;
	
	while (*(src + n) != '\0')
	{
		n++;
	}
	for (i = 0; i <= n; i++)
		dest[i] = src[i];

	return (dest);
}
