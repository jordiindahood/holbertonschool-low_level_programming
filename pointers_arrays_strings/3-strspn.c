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
	unsigned int j, i = 0;

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != s[i]; j++)
			if (accept[j] == '\0')
				return (i);
	return (i);
}
