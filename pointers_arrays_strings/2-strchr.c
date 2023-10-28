#include "main.h"
/**
 * _strchr - check the code
 * Description: locate a character in a string
 * @s : string to be executed
 * @c : charachter to search for
 * Return: char*
 */
char *_strchr(char *s, char c)
{
	int l, i = 0;

	l = strlen(s);
	while (i < l + 1)
	{
		if (s[i] == c)
		{
			s = s + i;
			break;
		}
		i++;
	}
	if (*s != c)
		return (NULL);
	return (s);
}
