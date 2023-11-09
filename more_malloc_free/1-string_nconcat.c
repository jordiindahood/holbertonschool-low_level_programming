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
	unsigned int size2, size1 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size1 = strlen(s1);
	size2 = strlen(s2);

	if (n >= size2)
		n = strlen(s2);

	p = malloc(size1 + n + 1);
	if (p == NULL)
		return (NULL);
	strcpy(p, s1);

	if (n < size2)
		strncat(p, s2, n);
	else
		strcat(p, s2);

	return (p);
}
