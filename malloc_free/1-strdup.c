#include "main.h"
/**
 * _strdup - make a copy of a string @str
 *@str: char
 * Return: ptr.
 */
char *_strdup(char *str)
{
	unsigned int size, i = 0;
	char *p;

	size = strlen(str);
	if (str == 0)
		return (NULL);
	do
		p = malloc(sizeof(char) * size + 1);
	while (p == NULL);
	for (i = 0; i < size; i++)
		p[i] = str[i];
	return (p);
}
