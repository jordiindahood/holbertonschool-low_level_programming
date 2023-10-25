#include "main.h"
/**
 * _strcat - check the code
 * Description: cancatenate two strings
 * @src : pointer to string SOURCE
 * @dest : pointer to string DESTINATION
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int l, i;

	l = 0;
	while (dest[l])
		l++;
	for (i = 0; src[i]; i++)
		dest[l++] = src[i];
	return (dest);
}
