#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strcmp - check the code
 * Description: compare two strings
 * @s1 : pointer to string1
 * @s2 : pointer to string2
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1 != '\0' && *s2 != '\0' && res == 0)
	{
		res = *s1 - *s2;
		s1++;
		s2++;
	}
	return (res);
}
