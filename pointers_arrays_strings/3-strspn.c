#include "main.h"
/**
 * _strspn - check the code
 * Description: get the length of a prefix substring
 * @s : string to be executed
 * @accept : string containnig the carachters to match
 * Return: unsignet int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int res = 0;
	int len, j, i = 0;

	len = strlen(accept);
	while (*(s + i))
	{
		if (s[i + len] == *accept)
			res = len;
		i++;
	}
	return (res);
}
