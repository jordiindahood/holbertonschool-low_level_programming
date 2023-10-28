#include "main.h"
/**
 * _strspn - check the code
 * Description: get the length of a prefix substring
 * @s : string to be executed
 * @accept : string containnig the carachters to match
 * Return: unsignet int
 */
/**
 * _strcmp - check the code
 * Description: compare two strings
 * @s1 : pointer to string1
 * @s2 : pointer to string2
 * Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;
	int len, i = 0;

	len = strlen(accept);
	while (*(s + i))
	{
		if (_strcmp(s + i + len, accept) <= 0)
			res = len;
		i++;
	}
	return (res);
}
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
