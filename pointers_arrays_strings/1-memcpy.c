#include "main.h"
/**
 * _memcpy - check the code
 * Description: copy a memory area
 * @s : pointer
 * @b : charachter to be copied
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
