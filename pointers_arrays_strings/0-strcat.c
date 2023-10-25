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
	int l, i = 0;

	while (*dest)
		l++;
	while (*src)
	{
		*(dest + l + i) = *src;
		i++;
	}
	return (dest);
}
