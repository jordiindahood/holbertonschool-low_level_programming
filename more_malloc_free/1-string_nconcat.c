#include "main.h"
/**
 * string_nconcat - concat two strings
 *@s1: string1
 *@s2: string2
 *@n: number of first characters of s2
 * Return: void*
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0;
	char *p;
	unsigned int i = 0;

	if (s1 == NULL)
	{
		s1 = "\0";
		size1 = 1;
	}
	if (s2 == NULL)
	{
		s2 = "\0";
		n = 1;
	}
	if (s1 != NULL)
		size1 = strlen(s1);
	if (n > strlen(s2))
		n = strlen(s2);
	do
		p = malloc(sizeof(char) * (size1 + n + 1));
	while (p == NULL);
	p = strncat(s1,s2,n);
	return (p);
}
