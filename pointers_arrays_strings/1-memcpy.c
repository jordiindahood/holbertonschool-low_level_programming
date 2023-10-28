#include "main.h"
/**
 * _memcpy - check the code
 * Description: copy a memory area
 * @src : pointer to string to be copied
 * @dest : pointer to destination
 * @n : number of bytes
 * Return: char*
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
