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
	while (*s != '\0')
	{
		if (*s == c)
			break;
		s++;
	}
	if (*s == '\n')
		*s = NULL;
	return (s);
}
