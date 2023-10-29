#include "main.h"
/**
 * _strpbrk - check the code
 * Description: get the length of a prefix substring
 * @s : string to be executed
 * @accept : string containnig the carachters to match
 * Return: unsignet int
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (0);
}
