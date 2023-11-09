#include "main.h"
/**
 * string_noncat - concat two strings
 *@s1: string1
 *@s2: string2
 *@n: number of first characters of s2
 * Return: void*
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int size1, i;
	if (s1 == NULL)
	{
		s1 = "";
		size1 = 1;
	}
	else
		size1 = strlen(s1);
	if (s2 == NULL)
	{
		s2 = "";
		n = 1;
	}
	if (n >= strlen(s2))
		n = strlen(s2);
	p = malloc(size1 + n);
	if (p == NULL)
		return(NULL);
	else
		while (i < size1 + n)
			if (i<size1)
				p[i] = s1[i];
			else
				p[i]=s2[i-size1]; 
	return (p);
}
