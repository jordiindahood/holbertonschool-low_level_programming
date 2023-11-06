#include "main.h"
/**
 * str_concat - concatinate two strings
 *@s1: *char
 *@s2: *char
 * Return: ptr.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int size1, size2 = 0;
	char *p;
	unsigned int i = 0;

	if (s1 != NULL)
		size1 = strlen(s1);
	if (s2 != NULL)
		size2 = strlen(s2);
	do
		p = malloc(sizeof(char) * (size1 + size2 + 1));
	while (p == NULL);
	if (s1 == NULL && s2 == NULL)
		return(p);
	while (s2 == NULL && i < size1)
	{
		p[i] = s1[i];
		i++;
	}
	while (s1 == NULL && i < size2)
	{
		p[i] = s2[i];
		i++;
	}
	while (i < size1 + size2 + 1 && s1 != NULL && s2 != NULL)
	{
		if (i < size1)
			p[i] = s1[i];
		else
			p[i] = s2[i - size1];
		i++;
	}
	return (p);
}
