#include "main.h"
/**
 * _strncat - check the code
 * Description: cancatenate two strings
 * @src : pointer to string SOURCE
 * @n : number of bytes to be concatinated from @src
 * @dest : pointer to string DESTINATION
 * Return: *char
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, i;

	if (*src != '\0')
	{
		l = 0;
		while (dest[l])
			l++;
		for (i = 0; i < n; i++)
			dest[l++] = src[i];
	}
	return (dest);
}
