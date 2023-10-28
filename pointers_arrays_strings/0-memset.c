#include "main.h"
/**
 * _memset - check the code
 * Description: fill memory with a constant byte
 * @s : pointer
 * @b : charachter to be copied
 * @n : number of bytes
 * Return: char*
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
