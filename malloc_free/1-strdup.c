#include "main.h"
/**
 * _strdup - make a copy of a string @str
 *@str: char
 * Return: ptr.
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *p;
    int size;

	size = strlen(str);
    if (size < 1)
		return (NULL);
	do
		p = malloc(sizeof(char) * size);
	while (p == NULL);
	while (i < size)
	{
		p[i] = str[i];
		i++;
	}
	return (p);
}
