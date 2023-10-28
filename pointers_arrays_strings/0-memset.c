#include "main.h"
/**
 * _memset - check the code
 * Description: fill memory with a constant byte
 * @s : pointer
 * @src : pointer to be copied
 * @n : int
 * Return: char*
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i=0;i<n;i++){
		s[i]=b;
	}
	return (s);
}
